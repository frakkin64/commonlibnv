#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CELL_ENVIRO_TYPE.h"
#include "RE/T/TESBoundObject.h"

namespace RE
{
	class NiAVObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;
	class TESRegion;
	class TESSound;

	class BGSAcousticSpace :
		public TESBoundObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSAcousticSpace };
		static constexpr auto VTABLE{ VTABLE::BGSAcousticSpace };

		// override (TESBoundObject)
		virtual ~BGSAcousticSpace() = default;                               // 04
		virtual void ClearData() override;                                   // 05
		virtual bool Load(TESFile* apFile) override;                         // 08
		virtual void Save() override;                                        // 0B
		virtual void InitItem() override;                                    // 22
		virtual void Copy(TESForm* apCopy) override;                         // 42
		virtual bool Compare(TESForm* apCopy) override;                      // 43
		virtual void UnClone3D(TESObjectREFR* apRequester) override;         // 54
		virtual NiAVObject* Clone3D_5E(TESObjectREFR* pRequester) override;  // 5E

		bool IsInterior()
		{
			using func_t = decltype(&BGSAcousticSpace::IsInterior);
			static REL::Relocation<func_t> func{ Offsets::BGSAcousticSpace::IsInterior };
			return func(this);
		}

		TESSound* GetDuskSound()
		{
			using func_t = decltype(&BGSAcousticSpace::GetDuskSound);
			static REL::Relocation<func_t> func{ Offsets::BGSAcousticSpace::GetDuskSound };
			return func(this);
		}

		CELL_ENVIRO_TYPE GetEnvironmentType()
		{
			using func_t = decltype(&BGSAcousticSpace::GetEnvironmentType);
			static REL::Relocation<func_t> func{ Offsets::BGSAcousticSpace::GetEnvironmentType };
			return func(this);
		}

	public:
		// members
		bool             bIsInterior;   // 30
		std::uint8_t     pad31[0x3];    // 31
		TESSound*        pDawnSound;    // 34
		TESSound*        pNoonSound;    // 38
		TESSound*        pDuskSound;    // 3C
		TESSound*        pNightSound;   // 40
		TESSound*        pWallaSound;   // 44
		TESRegion*       pSoundRegion;  // 48
		CELL_ENVIRO_TYPE eEnvType;      // 4C
		std::int32_t     iWallaPop;     // 50
	};
	static_assert(sizeof(BGSAcousticSpace) == 0x54);
}
