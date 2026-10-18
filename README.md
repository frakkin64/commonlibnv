# CommonLibNV

Reverse-engineered class, structure, enum, virtual-function and member-function definitions for **Fallout: New Vegas** (`FalloutNV.exe` 1.4.0.525, 32-bit) in the style of [CommonLibF4](https://github.com/libxse/commonlibf4), plus the small NVSE layer a plugin needs to load into [xNVSE](https://github.com/xNVSE/NVSE).

Names, types, member offsets and sizes are checked against the x86 executable (allocation sizes, constructors, accessed offsets). Offset comments show how much evidence a position has (see Conventions).

## Lineage
CommonLibNV is a port of the CommonLib family to Fallout: New Vegas:
- **[CommonLibF4](https://github.com/libxse/commonlibf4)** is the model for the game definitions: the `include/RE/<first letter>/<Class>.h` tree with `RE/Fallout.h` as the aggregate header, one header per class/struct/enum, member functions as `REL::Relocation` forwarders, numbered virtual functions with `Unk_XX` fillers, `// members` sections with offset comments, `static_assert(sizeof)` where a size is known, nested types defined inside their class, the `Offsets`/`RTTI`/`VTABLE` constant tables, the NVSE plugin layer shaped like F4SE's (`Init`, `QueryInterface`/`LoadInterface`, messaging, serialization) and the xmake plugin rule used by the template. Fallout: New Vegas has no Address Library and is a 32-bit game, so IDs are replaced by plain image-relative offsets.
- **[CommonLib-Shared](https://github.com/libxse/commonlib-shared)** supplies the runtime that CommonLibF4 itself builds on (`REL`: relocation, offsets, version, trampoline; `REX`: logging, settings, Windows wrappers). It is folded into this repository (`include/REL`, `include/REX`, `src/REL`, `src/REX`) and reduced to x86, see Layout.
- **[xNVSE](https://github.com/xNVSE/NVSE)** is the plugin host: the plugin API and ABI (`PluginAPI`) are the ones it defines; its sources are only a cross-check for names and offsets, not a source of the definitions.

Like those projects, CommonLibNV is licensed GPL-3.0 with the modding exception (see License).

## Layout
| Path | Content |
|---|---|
| `include/RE`, `src/RE` | game classes, structs, enums, templates, `Offsets*.h` |
| `include/NVSE`, `src/NVSE` | plugin API for NVSE: `Init`, `QueryInterface`/`LoadInterface`, `PluginInfo`, messaging, serialization, console, command table, string/array variables, script, event manager, command definitions |
| `include/REL`, `include/REX`, `src/REL`, `src/REX` | the shared CommonLib runtime (Relocation, Offset, Version, logging, settings, W32 wrappers), folded in from [libxse/commonlib-shared](https://github.com/libxse/commonlib-shared) and converted to x86 only: the Address Library (`ID`/`IDDB`) code and every x64 code path (64-bit PE headers and thunks, the 14-byte jump stubs `JMP14`/`CALL16`, the x64 call-convention helpers, `__readgsqword`, ±2GB trampoline placement) have been removed |

## Conventions
- There is no Address Library: member-function forwarders use `REL::Offset` (relative to the image base `0x400000`), see `RE/Offsets.h`, `RE/Offsets_RTTI.h`, `RE/Offsets_VTABLE.h`.
- Member-function forwarders take their type from the declaration: `using func_t = decltype(&Class::Func); static REL::Relocation<func_t> func{ Offsets::Class::Func }; return func(this, ...);`. `REL::invoke` is `std::invoke`, and member function pointers are `thiscall` on x86 (also for classes with multiple inheritance: the address is placed in a zero-filled member pointer). Overloaded functions spell the member pointer type (`Ret (Class::*)(Args)`), static functions get their `__cdecl` pointer type from the same `decltype`; constructors, destructors and variadic functions, whose address cannot be taken or is called differently, spell the free function type with `__thiscall`/`__cdecl` and `this` as the first parameter.
- Offset comments: `// 1C` derived from the x86 binary, `// 1C?` extrapolated (unverified). `// not placed:` lists members of the class that could not be placed; their space is covered by `padXX`.
- `static_assert(sizeof(...))` is only present where the size was measured (allocation sites, sized deletes, array construction); every one of them compiles. `// not confirmed: ...` marks a type that no named code in the executable refers to, so its layout could not be checked.
- The game was built with Visual Studio 2010, whose `std::vector` (24 bytes) and `std::string` (28 bytes) have a different layout from the standard library of current toolsets. Members therefore use the read-only layout views `RE::stl::vector<T>` / `RE::stl::string` (`NVSE/Impl/STL.h`) instead of the `std::` types.
- Virtual functions are numbered with the **x86** vtable slot; `Unk_XX` fills slots that have no known name.
- Nested types that only their outer class uses are defined inside it (`Projectile::ImpactData`); nested types that other headers share are separate headers (`Parent_Child`, with `using Child = Parent_Child;` in the parent). Anonymous types are folded into their owners as inline unions/structs. Platform and library internals that are not part of the game interface are not generated; members that pointed at them are `void*` or opaque byte arrays.
- `RE/Fallout.h` includes everything that compiles on its own; headers that do not compile on their own are present in the tree but not aggregated.
- The game headers include `NVSE/Impl/Windows.h`, which includes `<Windows.h>` after CommonLib and `#undef`s the `A`/`W` alias macros (`LoadString`, `CreateFile`, …) because they rename game member functions. Call the explicit `…A`/`…W` Windows functions, or use `REX::W32`.
- Hooking is ported to x86: rel32 branches (`CALL5`/`JMP5`) reach every address and need no stub, `call/jmp [mem]` (`CALL6`/`JMP6`) use an absolute pointer cell allocated in the trampoline (created lazily if you did not size one), `Relocation::replace_func` writes a `JMP5`, and `REX::FModule` reads PE32 headers. `NVSE::InitInfo` has `trampoline`, `trampolineSize` and `hook` like F4SE.

## Requirements
- [XMake](https://xmake.io) 3.0.0+
- MSVC (Visual Studio 2022) for x86

## Build
```bat
xmake f -p windows -a x86 -m releasedbg
xmake build commonlibnv
```

Use it from a plugin project (see `commonlibnv-template`); the plugin version is the xmake `set_version` (reported to NVSE, logged as major.minor.patch and written to the dll's version resource):
```lua
includes("lib/commonlibnv")
set_version("1.0.0")
target("my-plugin")
    add_rules("commonlibnv.plugin", { name = "my-plugin", author = "me" })
    add_files("src/**.cpp")
    set_pcxxheader("src/pch.h")
```
with a precompiled header containing `#include <RE/Fallout.h>` and `#include <NVSE/NVSE.h>`. Optional build outputs go to `XSE_FNV_MODS_PATH` (a mod manager mods folder) or `XSE_FNV_GAME_PATH` (the game folder).

## License
GPL-3.0 with the modding exception, see `LICENSE` and `EXCEPTIONS`.
