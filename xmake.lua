-- set minimum xmake version
set_xmakever("3.0.0")

-- set project constants
set_project("commonlibnv")
set_arch("x86") -- FalloutNV.exe 1.4.0.525 is a 32-bit executable
set_languages("c++23")
set_warnings("allextra")
set_encodings("utf-8")

-- add common rules
add_rules("mode.debug", "mode.releasedbg")
add_rules("plugin.vsxmake.autoupdate")

-- add options
option("commonlib_ini", function()
    set_default(false)
    set_description("enable REX::INI settings support")
end)

option("commonlib_json", function()
    set_default(false)
    set_description("enable REX::JSON settings support")
end)

option("commonlib_toml", function()
    set_default(false)
    set_description("enable REX::TOML settings support")
end)

option("commonlib_xbyak", function()
    set_default(false)
    set_description("enable xbyak support for Trampoline")
end)

option("commonlib_random", function()
    set_default(false)
    set_description("enable REX::TRandom support")
end)

-- add packages
add_requires("spdlog v1.16.0", { configs = { header_only = false, wchar = true, std_format = true } })

-- add config packages
if has_config("commonlib_ini") then add_requires("simpleini v4.25") end
if has_config("commonlib_json") then add_requires("glaze v7.0.0") end
if has_config("commonlib_toml") then add_requires("toml11 v4.4.0") end
if has_config("commonlib_xbyak") then add_requires("xbyak v7.06") end
if has_config("commonlib_random") then add_requires("xoshiro-cpp 2021.08.04") end

-- define targets
target("commonlibnv", function()
    -- set target kind
    set_kind("static")

    -- set build by default
    set_default(os.scriptdir() == os.projectdir())

    -- add packages
    add_packages("spdlog", { public = true })

    -- add config packages
    if has_config("commonlib_ini") then
        add_packages("simpleini", { public = true })
        add_defines("COMMONLIB_OPTION_INI=1", { public = true })
    end

    if has_config("commonlib_json") then
        add_packages("glaze", { public = true })
        add_defines("COMMONLIB_OPTION_JSON=1", { public = true })
    end

    if has_config("commonlib_toml") then
        add_packages("toml11", { public = true })
        add_defines("COMMONLIB_OPTION_TOML=1", { public = true })
    end

    if has_config("commonlib_xbyak") then
        add_packages("xbyak", { public = true })
        add_defines("COMMONLIB_OPTION_XBYAK=1", { public = true })
    end

    if has_config("commonlib_random") then
        add_packages("xoshiro-cpp", { public = true })
        add_defines("COMMONLIB_OPTION_RANDOM=1", { public = true })
    end

    -- add options
    add_options("commonlib_ini", "commonlib_json", "commonlib_toml", "commonlib_xbyak", "commonlib_random", { public = true })

    -- add system links
    add_syslinks("advapi32", "bcrypt", "d3d11", "d3dcompiler", "dbghelp", "dxgi", "ole32", "shell32", "user32", "version", "ws2_32")

    -- add source files
    add_files("src/**.cpp")

    -- add header files
    add_includedirs("include", { public = true })
    add_headerfiles(
        "include/(NVSE/**.h)",
        "include/(RE/**.h)",
        "include/(REL/**.h)",
        "include/(REX/**.h)"
    )

    -- set precompiled header
    set_pcxxheader("include/NVSE/Impl/PCH.h")

    -- add flags (public)
    add_cxxflags(
        "/EHsc",
        "/permissive-",
        { public = true }
    )

    -- add flags (cl) (public)
    add_cxxflags(
        "cl::/bigobj",
        "cl::/cgthreads8",
        "cl::/diagnostics:caret",
        "cl::/external:W0",
        "cl::/fp:contract",
        "cl::/fp:except-",
        "cl::/guard:cf-",
        "cl::/Zc:enumTypes",
        "cl::/Zc:preprocessor",
        "cl::/Zc:templateScope",
        { public = true }
    )

    -- add flags (cl: disable warnings) (public)
    add_cxxflags(
        "cl::/wd4200", -- nonstandard extension used : zero-sized array in struct/union
        "cl::/wd4201", -- nonstandard extension used : nameless struct/union
        "cl::/wd4324", -- structure was padded due to alignment specifier
        { public = true }
    )

    -- add flags (cl: warnings -> errors) (public)
    add_cxxflags(
        "cl::/we4715", -- not all control paths return a value
        { public = true }
    )

    -- add flags (clang-cl) (public)
    add_cxxflags(
        "clang_cl::-fms-compatibility",
        "clang_cl::-fms-extensions",
        { public = true }
    )

    -- add flags (clang-cl: disable warnings) (public)
    add_cxxflags(
        "clang_cl::-Wno-delete-non-abstract-non-virtual-dtor",
        "clang_cl::-Wno-deprecated-volatile",
        "clang_cl::-Wno-ignored-qualifiers",
        "clang_cl::-Wno-inconsistent-missing-override",
        "clang_cl::-Wno-invalid-offsetof",
        "clang_cl::-Wno-microsoft-include",
        "clang_cl::-Wno-overloaded-virtual",
        "clang_cl::-Wno-pragma-system-header-outside-header",
        "clang_cl::-Wno-reinterpret-base-class",
        "clang_cl::-Wno-switch",
        "clang_cl::-Wno-unused-local-typedef",
        "clang_cl::-Wno-unused-private-field",
        { public = true }
    )
end)

-- NVSE plugin rule: a 32-bit shared library that installs to <Data>/NVSE/Plugins
rule("commonlibnv.plugin", function()
    add_deps("win.sdk.resource")

    on_load(function(target)
        target:set("kind", "shared")
        target:set("arch", "x86")
        target:data_set("commonlibnv.plugin.config", target:extraconf("rules", "commonlibnv.plugin"))
    end)

    on_config(function(target)
        import("core.project.project")
        import("core.base.semver")

        target:add("deps", "commonlibnv")

        -- the plugin version is the xmake version (set_version): packed like REL::Version (major << 24 | minor << 16 | patch << 4),
        -- reported to NVSE and logged as major.minor.patch; version_packed overrides the packed number
        local data = target:data("commonlibnv.plugin.config") or {}
        local version = semver.new(target:version() or "0.0.0")
        local project_version = semver.new(project.version() or "0.0.0")
        local packed = version:major() * 16777216 + version:minor() * 65536 + version:patch() * 16

        target:set("configdir", target:autogendir())
        target:add("defines",
            'NVSE_PLUGIN_NAME="' .. (data.name or target:name()) .. '"',
            'NVSE_PLUGIN_AUTHOR="' .. (data.author or "") .. '"',
            'NVSE_PLUGIN_VERSION=' .. math.floor(tonumber(data.version_packed) or packed),
            'NVSE_PLUGIN_VERSION_MAJOR=' .. version:major(),
            'NVSE_PLUGIN_VERSION_MINOR=' .. version:minor(),
            'NVSE_PLUGIN_VERSION_PATCH=' .. version:patch(),
            'NVSE_PLUGIN_VERSION_STRING="' .. (target:version() or "0.0.0") .. '"')

        -- Windows version resource (file properties of the dll)
        target:add("configfiles", path.join(os.scriptdir(), "res/commonlibnv-plugin.rc.in"))
        target:add("files", path.join(target:configdir(), "commonlibnv-plugin.rc"))
        target:set("configvar", "COMMONLIB_PLUGIN_AUTHOR", data.author or "")
        target:set("configvar", "COMMONLIB_PLUGIN_CONTACT", data.contact or "")
        target:set("configvar", "COMMONLIB_PLUGIN_DESCRIPTION", data.description or "")
        target:set("configvar", "COMMONLIB_PLUGIN_LICENSE", (target:license() or "Unknown") .. " License")
        target:set("configvar", "COMMONLIB_PLUGIN_NAME", data.name or target:name())
        target:set("configvar", "COMMONLIB_PLUGIN_VERSION", target:version() or "0.0.0")
        target:set("configvar", "COMMONLIB_PLUGIN_VERSION_MAJOR", version:major())
        target:set("configvar", "COMMONLIB_PLUGIN_VERSION_MINOR", version:minor())
        target:set("configvar", "COMMONLIB_PLUGIN_VERSION_PATCH", version:patch())
        target:set("configvar", "COMMONLIB_PROJECT_NAME", project.name() or "")
        target:set("configvar", "COMMONLIB_PROJECT_VERSION", project.version() or "0.0.0")
        target:set("configvar", "COMMONLIB_PROJECT_VERSION_MAJOR", project_version:major())
        target:set("configvar", "COMMONLIB_PROJECT_VERSION_MINOR", project_version:minor())
        target:set("configvar", "COMMONLIB_PROJECT_VERSION_PATCH", project_version:patch())

        if os.getenv("XSE_FNV_MODS_PATH") then
            target:set("installdir", path.join(os.getenv("XSE_FNV_MODS_PATH"), target:name()))
        elseif os.getenv("XSE_FNV_GAME_PATH") then
            target:set("installdir", path.join(os.getenv("XSE_FNV_GAME_PATH"), "Data"))
        end

        target:add("installfiles", target:targetfile(), { prefixdir = "NVSE/Plugins" })
        target:add("installfiles", target:symbolfile(), { prefixdir = "NVSE/Plugins" })
    end)

    on_install(function(target)
        import("target.action.install")(target, { binaries = false, headers = false, libraries = false, packages = false })
    end)

    after_build(function(target)
        import("core.project.depend")
        import("core.project.task")

        local install = target:values("commonlibnv.plugin.install")
        if install or install == nil then
            depend.on_changed(function()
                local srcfiles, dstfiles = target:installfiles()
                if srcfiles and #srcfiles > 0 and dstfiles and #dstfiles > 0 then
                    task.run("install")
                end
            end, { changed = target:is_rebuilt(), files = { target:targetfile() } })
        end
    end)
end)
