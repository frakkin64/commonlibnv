#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"
#include "RE/F/FORenderedMenu.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class NiGeometry;
	class NiNode;
	class NiScreenElements;

	class FOPipboyManager :
		public FORenderedMenu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::FOPipboyManager };
		static constexpr auto VTABLE{ VTABLE::FOPipboyManager };

		enum class Knobs : std::int32_t
		{
			kKNOB_SCROLL = 0x0,
			kKNOB_RAD = 0x1,
			kKNOB_TAB = 0x2,
		};

		// override (FORenderedMenu)
		virtual ~FOPipboyManager() = default;  // 00
		virtual bool OnIdle() override;        // 05
		virtual void Initialize() override;    // 09
		virtual void Shutdown() override;      // 0A
		virtual void OnMenuOpen() override;    // 0C
		virtual void OnMenuClose() override;   // 0D

		void ResetColors()
		{
			using func_t = decltype(&FOPipboyManager::ResetColors);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::ResetColors };
			func(this);
		}

		void MoveKnob(FOPipboyManager::Knobs aiKnob, float afAmount, float a_arg3, bool a_arg4)
		{
			using func_t = decltype(&FOPipboyManager::MoveKnob);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::MoveKnob };
			func(this, aiKnob, afAmount, a_arg3, a_arg4);
		}

		void TriggerRandomEffect()
		{
			using func_t = decltype(&FOPipboyManager::TriggerRandomEffect);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::TriggerRandomEffect };
			func(this);
		}

		void ActivateButton(std::uint32_t aiButton)
		{
			using func_t = decltype(&FOPipboyManager::ActivateButton);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::ActivateButton };
			func(this, aiButton);
		}

		void SetTabKnobPosition(std::uint32_t aiNewPos, bool abPlaySounds)
		{
			using func_t = decltype(&FOPipboyManager::SetTabKnobPosition);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::SetTabKnobPosition };
			func(this, aiNewPos, abPlaySounds);
		}

		void ShowPipboyLightEffect(bool ab3rdPerson, bool abShow, bool abUpdateVariable)
		{
			using func_t = decltype(&FOPipboyManager::ShowPipboyLightEffect);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::ShowPipboyLightEffect };
			func(this, ab3rdPerson, abShow, abUpdateVariable);
		}

		void UpdateLightEffect(float afTime)
		{
			using func_t = decltype(&FOPipboyManager::UpdateLightEffect);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::UpdateLightEffect };
			func(this, afTime);
		}

		void SetRefractive(bool abRefractive)
		{
			using func_t = decltype(&FOPipboyManager::SetRefractive);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::SetRefractive };
			func(this, abRefractive);
		}

	protected:
		void UpdateKnobs(float a_arg1)
		{
			using func_t = decltype(&FOPipboyManager::UpdateKnobs);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::UpdateKnobs };
			func(this, a_arg1);
		}

		void UpdateIdleAnims()
		{
			using func_t = decltype(&FOPipboyManager::UpdateIdleAnims);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::UpdateIdleAnims };
			func(this);
		}

	private:
		void InitButtons()
		{
			using func_t = decltype(&FOPipboyManager::InitButtons);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::InitButtons };
			func(this);
		}

		void InitLight()
		{
			using func_t = decltype(&FOPipboyManager::InitLight);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::InitLight };
			func(this);
		}

		void InitKnobs()
		{
			using func_t = decltype(&FOPipboyManager::InitKnobs);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::InitKnobs };
			func(this);
		}

		void FadeLight(float afTime)
		{
			using func_t = decltype(&FOPipboyManager::FadeLight);
			static REL::Relocation<func_t> func{ Offsets::FOPipboyManager::FadeLight };
			func(this, afTime);
		}

	public:
		// members
		NiPointer<NiNode>           spPipboyRoot;                 // D8
		NiPointer<NiNode>           sp3rdPersonPipboyRoot;        // DC
		NiPointer<NiAVObject>       sp3rdPersonScreen;            // E0
		NiPointer<NiScreenElements> spPartialScreenGeometry;      // E4
		NiPointer<NiAVObject>       spButtons[3];                 // E8
		NiPointer<NiAVObject>       spButtonGlow[3];              // F4
		NiPointer<NiGeometry>       spKnobs[3];                   // 100
		float                       fKnobPositions[3];            // 10C
		float                       fKnobTargets[3];              // 118
		float                       fKnobRates[3];                // 124
		float                       fTabKnobPositions[5];         // 130
		bool                        bScaledTexCoords;             // 144
		std::uint8_t                pad145[0x3];                  // 145
		float                       fScrollWheelCurrentRotation;  // 148
		float                       fScrollWheelTarget;           // 14C
		bool                        bPipboyUp;                    // 150
		std::uint8_t                pad151[0x3];                  // 151
		BSSoundHandle               pBackgroundHum;               // 154
		bool                        b1stPersonLightOn;            // 160
		bool                        b3rdPersonLightOn;            // 161
		bool                        bLightEffectFading;           // 162
		std::uint8_t                pad163;                       // 163
		float                       fLightEffectFadeStartTime;    // 164
		float                       fLightEffectFadeTarget;       // 168
		bool                        bResetPipboyManager;          // 16C
		std::uint8_t                pad16D[0x3];                  // 16D
	};
	static_assert(sizeof(FOPipboyManager) == 0x170);
}
