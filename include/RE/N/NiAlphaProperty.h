#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAlphaProperty_AlphaFunction.h"
#include "RE/N/NiProperty.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;

	class NiAlphaProperty :
		public NiProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiAlphaProperty };
		static constexpr auto VTABLE{ VTABLE::NiAlphaProperty };

		using AlphaFunction = NiAlphaProperty_AlphaFunction;

		enum class TestFunction : std::int32_t
		{
			kTEST_ALWAYS = 0x0,
			kTEST_LESS = 0x1,
			kTEST_EQUAL = 0x2,
			kTEST_LESSEQUAL = 0x3,
			kTEST_GREATER = 0x4,
			kTEST_NOTEQUAL = 0x5,
			kTEST_GREATEREQUAL = 0x6,
			kTEST_NEVER = 0x7,
			kTEST_MAX_MODES = 0x8,
		};

		// override (NiProperty)
		virtual ~NiAlphaProperty() = default;                                         // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		NiAlphaProperty* ctor()
		{
			using func_t = NiAlphaProperty*(__thiscall*)(NiAlphaProperty*);
			static REL::Relocation<func_t> func{ Offsets::NiAlphaProperty::ctor };
			return func(this);
		}

		void SetSrcBlendMode(NiAlphaProperty_AlphaFunction eSrcBlend)
		{
			using func_t = decltype(&NiAlphaProperty::SetSrcBlendMode);
			static REL::Relocation<func_t> func{ Offsets::NiAlphaProperty::SetSrcBlendMode };
			func(this, eSrcBlend);
		}

		void SetDestBlendMode(NiAlphaProperty_AlphaFunction eDestBlend)
		{
			using func_t = decltype(&NiAlphaProperty::SetDestBlendMode);
			static REL::Relocation<func_t> func{ Offsets::NiAlphaProperty::SetDestBlendMode };
			func(this, eDestBlend);
		}

		void SetAlphaTesting(bool bAlpha)
		{
			using func_t = decltype(&NiAlphaProperty::SetAlphaTesting);
			static REL::Relocation<func_t> func{ Offsets::NiAlphaProperty::SetAlphaTesting };
			func(this, bAlpha);
		}

		void SetTestMode(NiAlphaProperty::TestFunction eTestFunc)
		{
			using func_t = decltype(&NiAlphaProperty::SetTestMode);
			static REL::Relocation<func_t> func{ Offsets::NiAlphaProperty::SetTestMode };
			func(this, eTestFunc);
		}

		void SetAlphaBlending(bool bAlpha)
		{
			using func_t = decltype(&NiAlphaProperty::SetAlphaBlending);
			static REL::Relocation<func_t> func{ Offsets::NiAlphaProperty::SetAlphaBlending };
			func(this, bAlpha);
		}

		void SetNoSorter(bool bNoSort)
		{
			using func_t = decltype(&NiAlphaProperty::SetNoSorter);
			static REL::Relocation<func_t> func{ Offsets::NiAlphaProperty::SetNoSorter };
			func(this, bNoSort);
		}

		void SetTestRef(std::uint8_t ucRef)
		{
			using func_t = decltype(&NiAlphaProperty::SetTestRef);
			static REL::Relocation<func_t> func{ Offsets::NiAlphaProperty::SetTestRef };
			func(this, ucRef);
		}

		static char* GetViewerString(char const* pcPrefix, NiAlphaProperty_AlphaFunction eFunc)
		{
			using func_t = decltype(&NiAlphaProperty::GetViewerString);
			static REL::Relocation<func_t> func{ Offsets::NiAlphaProperty::GetViewerString };
			return func(pcPrefix, eFunc);
		}

	protected:
		void SetField(std::uint16_t uVal, std::uint16_t uMask, std::uint16_t uPos)
		{
			using func_t = decltype(&NiAlphaProperty::SetField);
			static REL::Relocation<func_t> func{ Offsets::NiAlphaProperty::SetField };
			func(this, uVal, uMask, uPos);
		}

		void SetBit(bool bVal, std::uint16_t uMask)
		{
			using func_t = decltype(&NiAlphaProperty::SetBit);
			static REL::Relocation<func_t> func{ Offsets::NiAlphaProperty::SetBit };
			func(this, bVal, uMask);
		}

	public:
		// members
		std::uint16_t m_uFlags;          // 18
		std::uint8_t  m_ucAlphaTestRef;  // 1A
		std::uint8_t  pad1B;             // 1B
	};
	static_assert(sizeof(NiAlphaProperty) == 0x1C);
}
