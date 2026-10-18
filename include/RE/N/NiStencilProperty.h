#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiProperty.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;

	class NiStencilProperty :
		public NiProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiStencilProperty };
		static constexpr auto VTABLE{ VTABLE::NiStencilProperty };

		enum class Action : std::int32_t
		{
			kACTION_KEEP = 0x0,
			kACTION_ZERO = 0x1,
			kACTION_REPLACE = 0x2,
			kACTION_INCREMENT = 0x3,
			kACTION_DECREMENT = 0x4,
			kACTION_INVERT = 0x5,
			kACTION_MAX = 0x6,
		};

		enum class DrawMode : std::int32_t
		{
			kDRAW_CCW_OR_BOTH = 0x0,
			kDRAW_CCW = 0x1,
			kDRAW_CW = 0x2,
			kDRAW_BOTH = 0x3,
			kDRAW_MAX = 0x4,
		};

		// override (NiProperty)
		virtual ~NiStencilProperty() = default;                                       // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		NiStencilProperty* ctor()
		{
			using func_t = NiStencilProperty*(__thiscall*)(NiStencilProperty*);
			static REL::Relocation<func_t> func{ Offsets::NiStencilProperty::ctor };
			return func(this);
		}

		void SetDrawMode(NiStencilProperty::DrawMode eDraw)
		{
			using func_t = decltype(&NiStencilProperty::SetDrawMode);
			static REL::Relocation<func_t> func{ Offsets::NiStencilProperty::SetDrawMode };
			func(this, eDraw);
		}

		static char* GetViewerString(char const* pcPrefix, NiStencilProperty::Action eAct)
		{
			using func_t = char*(__cdecl*)(char const*, NiStencilProperty::Action);
			static REL::Relocation<func_t> func{ Offsets::NiStencilProperty::GetViewerString };
			return func(pcPrefix, eAct);
		}

		static char* GetViewerString(char const* pcPrefix, NiStencilProperty::DrawMode eMode)
		{
			using func_t = char*(__cdecl*)(char const*, NiStencilProperty::DrawMode);
			static REL::Relocation<func_t> func{ Offsets::NiStencilProperty::GetViewerString_1 };
			return func(pcPrefix, eMode);
		}

	public:
		// members
		std::uint16_t m_uFlags;  // 18
		std::uint16_t pad1A;     // 1A
		std::uint32_t m_uiRef;   // 1C
		std::uint32_t m_uiMask;  // 20
	};
	static_assert(sizeof(NiStencilProperty) == 0x24);
}
