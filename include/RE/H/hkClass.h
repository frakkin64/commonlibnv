#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkFlags.h"
#include "RE/H/hkPointerMap.h"

namespace RE
{
	class hkClassEnum;
	class hkClassMember;
	class hkCustomAttributes;

	class hkClass
	{
	public:
		enum class FlagValues : std::int32_t
		{
			kFLAGS_NONE = 0x0,
			kALIGN_8 = 0x80,
			kALIGN_16 = 0x100,
			kNOT_OWNED = 0x200,
			kSERIALIZE_IGNORED = 0x400,
		};

		char const* getName() const
		{
			using func_t = decltype(&hkClass::getName);
			static REL::Relocation<func_t> func{ Offsets::hkClass::getName };
			return func(this);
		}

		hkClass const* getParent() const
		{
			using func_t = decltype(&hkClass::getParent);
			static REL::Relocation<func_t> func{ Offsets::hkClass::getParent };
			return func(this);
		}

		std::int32_t getNumMembers() const
		{
			using func_t = decltype(&hkClass::getNumMembers);
			static REL::Relocation<func_t> func{ Offsets::hkClass::getNumMembers };
			return func(this);
		}

		std::int32_t getNumDeclaredMembers() const
		{
			using func_t = decltype(&hkClass::getNumDeclaredMembers);
			static REL::Relocation<func_t> func{ Offsets::hkClass::getNumDeclaredMembers };
			return func(this);
		}

		hkClassMember const* getMemberByName(char const* name) const
		{
			using func_t = decltype(&hkClass::getMemberByName);
			static REL::Relocation<func_t> func{ Offsets::hkClass::getMemberByName };
			return func(this, name);
		}

		std::int32_t getObjectSize() const
		{
			using func_t = decltype(&hkClass::getObjectSize);
			static REL::Relocation<func_t> func{ Offsets::hkClass::getObjectSize };
			return func(this);
		}

		hkClass* ctor(char const* className, hkClass const* parentClass, std::int32_t objectSizeInBytes, hkClass const** implementedInterfaces, std::int32_t numImplementedInterfaces, hkClassEnum const* declaredEnums, std::int32_t numDeclaredEnums, hkClassMember const* members, std::int32_t numMembers, void const* defaults, hkCustomAttributes const* attrs, std::uint32_t flags, std::uint32_t version)
		{
			using func_t = hkClass*(__thiscall*)(hkClass*, char const*, hkClass const*, std::int32_t, hkClass const**, std::int32_t, hkClassEnum const*, std::int32_t, hkClassMember const*, std::int32_t, void const*, hkCustomAttributes const*, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::hkClass::ctor };
			return func(this, className, parentClass, objectSizeInBytes, implementedInterfaces, numImplementedInterfaces, declaredEnums, numDeclaredEnums, members, numMembers, defaults, attrs, flags, version);
		}

		static void updateMetadataInplace(hkClass* c, hkPointerMap<hkClass const*, std::int32_t, hkContainerHeapAllocator>& updated, std::int32_t sourceVersion)
		{
			using func_t = void(__cdecl*)(hkClass*, hkPointerMap<hkClass const*, std::int32_t, hkContainerHeapAllocator>&, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkClass::updateMetadataInplace };
			func(c, updated, sourceVersion);
		}

		static void updateMetadataInplace(hkClass** c, std::int32_t sourceVersion)
		{
			using func_t = void(__cdecl*)(hkClass**, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkClass::updateMetadataInplace_1 };
			func(c, sourceVersion);
		}

	public:
		// members
		const char*                                 m_name;                      // 00
		const hkClass*                              m_parent;                    // 04
		std::int32_t                                m_objectSize;                // 08
		std::int32_t                                m_numImplementedInterfaces;  // 0C
		const hkClassEnum*                          m_declaredEnums;             // 10
		std::int32_t                                m_numDeclaredEnums;          // 14
		const hkClassMember*                        m_declaredMembers;           // 18
		std::int32_t                                m_numDeclaredMembers;        // 1C
		const void*                                 m_defaults;                  // 20?
		const hkCustomAttributes*                   m_attributes;                // 24?
		hkFlags<hkClass::FlagValues, std::uint32_t> m_flags;                     // 28?
		std::int32_t                                m_describedVersion;          // 2C?
	};
}
