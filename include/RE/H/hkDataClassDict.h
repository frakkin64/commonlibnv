#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDataClassDict_Enum.h"
#include "RE/H/hkDataClassDict_MemberInfo.h"
#include "RE/H/hkDataClassImpl.h"
#include "RE/H/hkRefPtr.h"
#include "RE/I/InternedStringHandle.h"

namespace RE
{
	class hkBool;
	class hkDataClass_MemberInfo;
	class hkDataWorld;
	class hkDataWorldDict;

	class hkDataClassDict :
		public hkDataClassImpl  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDataClassDict };
		static constexpr auto VTABLE{ VTABLE::hkDataClassDict };

		using Enum = hkDataClassDict_Enum;
		using MemberInfo = hkDataClassDict_MemberInfo;

		// override (hkDataClassImpl)
		virtual ~hkDataClassDict() = default;  // 00

		// add
		virtual const hkDataWorld* getWorld();                                                          // 01
		virtual const char* getName() const;                                                            // 02
		virtual std::int32_t getVersion();                                                              // 03
		virtual hkDataClassImpl* getParent();                                                           // 04
		virtual hkBool* isSuperClass(hkBool* a_arg1, const hkDataClassImpl* a_arg2) const;              // 05
		virtual std::int32_t getNumDeclaredMembers() const;                                             // 06
		virtual void getDeclaredMemberInfo(std::int32_t a_arg1, hkDataClass_MemberInfo* a_arg2) const;  // 07
		virtual std::int32_t getDeclaredMemberIndexByName(const char* a_arg1) const;                    // 08
		virtual std::int32_t getNumMembers() const;                                                     // 09
		virtual void getMemberInfo(std::int32_t a_arg1, hkDataClass_MemberInfo* a_arg2);                // 0A
		virtual std::int32_t getMemberIndexByName(const char* a_arg1) const;                            // 0B

		hkDataClassDict* ctor(hkDataWorldDict* root, char const* name, std::int32_t version)
		{
			using func_t = hkDataClassDict*(__thiscall*)(hkDataClassDict*, hkDataWorldDict*, char const*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkDataClassDict::ctor };
			return func(this, root, name, version);
		}

		void selfDestruct()
		{
			using func_t = decltype(&hkDataClassDict::selfDestruct);
			static REL::Relocation<func_t> func{ Offsets::hkDataClassDict::selfDestruct };
			func(this);
		}

	public:
		// members
		hkDataWorldDict*                                              m_world;             // 0C
		InternedStringHandle                                          m_name;              // 10
		std::int32_t                                                  m_version;           // 14
		hkRefPtr<hkDataClassDict>                                     m_parent;            // 18
		hkArray<hkDataClassDict_Enum*, hkContainerHeapAllocator>      m_enums;             // 1C
		hkArray<hkDataClassDict_MemberInfo, hkContainerHeapAllocator> m_memberInfo;        // 28
		hkArray<hkDataClassDict_MemberInfo, hkContainerHeapAllocator> m_hiddenMemberInfo;  // 34?
	};
}
