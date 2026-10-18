#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;

	class NiBinaryExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBinaryExtraData };
		static constexpr auto VTABLE{ VTABLE::NiBinaryExtraData };

		// override (NiExtraData)
		virtual ~NiBinaryExtraData() = default;                                       // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		NiBinaryExtraData* ctor(std::uint32_t uiSize, char* pcBinaryData)
		{
			using func_t = NiBinaryExtraData*(__thiscall*)(NiBinaryExtraData*, std::uint32_t, char*);
			static REL::Relocation<func_t> func{ Offsets::NiBinaryExtraData::ctor };
			return func(this, uiSize, pcBinaryData);
		}

	public:
		// members
		char*         m_pcBinaryData;  // 0C
		std::uint32_t m_uiSize;        // 10
	};
	static_assert(sizeof(NiBinaryExtraData) == 0x14);
}
