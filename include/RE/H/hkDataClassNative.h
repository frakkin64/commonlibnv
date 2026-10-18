#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataClassImpl.h"

namespace RE
{
	class hkBool;
	class hkClass;
	class hkClassMember;
	class hkDataClass_MemberInfo;
	class hkDataWorld;
	class hkDataWorldNative;

	class hkDataClassNative :
		public hkDataClassImpl  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDataClassNative };
		static constexpr auto VTABLE{ VTABLE::hkDataClassNative };

		// override (hkDataClassImpl)
		virtual ~hkDataClassNative() = default;  // 00

		// add
		virtual const hkDataWorld* getWorld();                                                          // 01
		virtual const char* getName() const;                                                            // 02
		virtual std::int32_t getVersion() const;                                                        // 03
		virtual hkDataClassImpl* getParent() const;                                                     // 04
		virtual hkBool* isSuperClass(hkBool* a_arg1, const hkDataClassImpl* a_arg2) const;              // 05
		virtual std::int32_t getNumDeclaredMembers() const;                                             // 06
		virtual void getDeclaredMemberInfo(std::int32_t a_arg1, hkDataClass_MemberInfo* a_arg2) const;  // 07
		virtual std::int32_t getDeclaredMemberIndexByName(const char* a_arg1) const;                    // 08
		virtual std::int32_t getNumMembers() const;                                                     // 09
		virtual void getMemberInfo(std::int32_t a_arg1, hkDataClass_MemberInfo* a_arg2) const;          // 0A
		virtual std::int32_t getMemberIndexByName(const char* a_arg1) const;                            // 0B

		void fillMemberInfo(hkClassMember const& mem, hkDataClass_MemberInfo& info) const
		{
			using func_t = decltype(&hkDataClassNative::fillMemberInfo);
			static REL::Relocation<func_t> func{ Offsets::hkDataClassNative::fillMemberInfo };
			func(this, mem, info);
		}

	public:
		// members
		const hkClass*           m_class;  // 0C
		const hkDataWorldNative* m_world;  // 10?
	};
}
