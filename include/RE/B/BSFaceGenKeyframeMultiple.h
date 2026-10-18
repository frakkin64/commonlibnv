#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFaceGenKeyframe.h"
#include "RE/B/BS_FACEGEN_MORPH_TYPE.h"

namespace RE
{
	class BSFaceGenKeyframeMultiple :
		public BSFaceGenKeyframe  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenKeyframeMultiple };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenKeyframeMultiple };

		// override (BSFaceGenKeyframe)
		virtual ~BSFaceGenKeyframeMultiple() = default;                                                                // 00
		virtual bool MergeMorphDataFrom(BSFaceGenKeyframe* a_arg1, BSFaceGenKeyframe* a_arg2, float a_arg3) override;  // 06
		virtual bool MergeMorphDataFrom(BSFaceGenKeyframe* a_arg1, float a_arg2, bool a_arg3, bool a_arg4) override;   // 07
		virtual bool ClearData(bool a_arg1) override;                                                                  // 08
		virtual BSFaceGenKeyframe* CreateCopy() override;                                                              // 09
		virtual void CopyFrom(BSFaceGenKeyframe* a_arg1) override;                                                     // 0A
		virtual bool Compare(BSFaceGenKeyframe* a_arg1) override;                                                      // 0B
		virtual float GetStrength() override;                                                                          // 0C
		virtual void SetToZero() override;                                                                             // 0E
		virtual bool UpdateToTarget(float a_arg1, BSFaceGenKeyframe* a_arg2) override;                                 // 0F
		virtual bool IsTargetAvailable() override;                                                                     // 10
		virtual bool IsMultiple() override;                                                                            // 11

		// add
		virtual bool IsValidQuantity(std::uint32_t a_arg1) const;                          // 13
		virtual void ResetQuantityArray(std::uint32_t aiNumQuantities, bool abForceZero);  // 14

		std::uint32_t GetNumQuantities() const
		{
			using func_t = decltype(&BSFaceGenKeyframeMultiple::GetNumQuantities);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenKeyframeMultiple::GetNumQuantities };
			return func(this);
		}

		float GetQuantity(std::uint32_t aiWhichMorph) const
		{
			using func_t = decltype(&BSFaceGenKeyframeMultiple::GetQuantity);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenKeyframeMultiple::GetQuantity };
			return func(this, aiWhichMorph);
		}

		void SetQuantityNoTest(std::uint32_t aiWhichMorph, float afQuantity)
		{
			using func_t = decltype(&BSFaceGenKeyframeMultiple::SetQuantityNoTest);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenKeyframeMultiple::SetQuantityNoTest };
			func(this, aiWhichMorph, afQuantity);
		}

		bool SetQuantity(std::uint32_t aiWhichMorph, float afQuantity)
		{
			using func_t = decltype(&BSFaceGenKeyframeMultiple::SetQuantity);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenKeyframeMultiple::SetQuantity };
			return func(this, aiWhichMorph, afQuantity);
		}

		BSFaceGenKeyframeMultiple* ctor(BS_FACEGEN_MORPH_TYPE aeType, std::uint32_t aiNumQuantities)
		{
			using func_t = BSFaceGenKeyframeMultiple*(__thiscall*)(BSFaceGenKeyframeMultiple*, BS_FACEGEN_MORPH_TYPE, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenKeyframeMultiple::ctor };
			return func(this, aeType, aiNumQuantities);
		}

		BSFaceGenKeyframeMultiple* ctor(BSFaceGenKeyframeMultiple const& aOther)
		{
			using func_t = BSFaceGenKeyframeMultiple*(__thiscall*)(BSFaceGenKeyframeMultiple*, BSFaceGenKeyframeMultiple const&);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenKeyframeMultiple::ctor_1 };
			return func(this, aOther);
		}

		BSFaceGenKeyframeMultiple& operator_call(BSFaceGenKeyframeMultiple const& aOther)
		{
			using func_t = decltype(&BSFaceGenKeyframeMultiple::operator_call);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenKeyframeMultiple::operator_call };
			return func(this, aOther);
		}

	public:
		// members
		float*        pQuantities;     // 0C
		std::uint32_t iNumQuantities;  // 10
	};
	static_assert(sizeof(BSFaceGenKeyframeMultiple) == 0x14);
}
