#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiIntegerExtraData.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiFixedString;
	class NiObject;
	class NiObjectNET;
	class NiStream;

	class BSXFlags :
		public NiIntegerExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSXFlags };
		static constexpr auto VTABLE{ VTABLE::BSXFlags };

		// override (NiIntegerExtraData)
		virtual ~BSXFlags() = default;                                                // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		bool QAddon()
		{
			using func_t = decltype(&BSXFlags::QAddon);
			static REL::Relocation<func_t> func{ Offsets::BSXFlags::QAddon };
			return func(this);
		}

		std::uint32_t GetFlags(std::uint32_t aiFlags)
		{
			using func_t = std::uint32_t (BSXFlags::*)(std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BSXFlags::GetFlags };
			return func(this, aiFlags);
		}

		static NiFixedString const& Tag()
		{
			using func_t = decltype(&BSXFlags::Tag);
			static REL::Relocation<func_t> func{ Offsets::BSXFlags::Tag };
			return func();
		}

		void SetFlags(std::uint32_t aiFlags, bool abTF)
		{
			using func_t = decltype(&BSXFlags::SetFlags);
			static REL::Relocation<func_t> func{ Offsets::BSXFlags::SetFlags };
			func(this, aiFlags, abTF);
		}

		static std::uint32_t GetFlags(NiObjectNET* apObject, std::uint32_t aiFlags)
		{
			using func_t = std::uint32_t(__cdecl*)(NiObjectNET*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BSXFlags::GetFlags_1 };
			return func(apObject, aiFlags);
		}

		BSXFlags* ctor()
		{
			using func_t = BSXFlags*(__thiscall*)(BSXFlags*);
			static REL::Relocation<func_t> func{ Offsets::BSXFlags::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(BSXFlags) == 0x10);
}
