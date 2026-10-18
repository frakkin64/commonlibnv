#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AlchemyItemData.h"
#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSEquipType.h"
#include "RE/B/BGSMessageIcon.h"
#include "RE/B/BGSPickupPutdownSounds.h"
#include "RE/M/MagicItemObject.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESModelTextureSwap.h"
#include "RE/T/TESScriptableForm.h"
#include "RE/T/TESWeightForm.h"

namespace RE
{
	class SpellItem;
	class TESSound;
	class TESWaterForm;

	class AlchemyItem :
		public MagicItemObject,  // 00
		public TESModelTextureSwap,  // 4C
		public TESIcon,  // 6C
		public BGSMessageIcon,  // 78
		public TESScriptableForm,  // 88
		public TESWeightForm,  // 94
		public BGSEquipType,  // 9C
		public BGSDestructibleObjectForm,  // A4
		public BGSPickupPutdownSounds  // AC
	{
	public:
		static constexpr auto RTTI{ RTTI::AlchemyItem };
		static constexpr auto VTABLE{ VTABLE::AlchemyItem };

		enum class AlchemyFlag : std::int32_t
		{
			kAGGRESSION = 0x0,
			kCONFIDENCE = 0x1,
			kENERGY = 0x2,
			kRESPONSIBILITY = 0x3,
			kMOOD = 0x4,
			kSTRENGTH = 0x5,
			kPERCEPTION = 0x6,
			kENDURANCE = 0x7,
			kCHARISMA = 0x8,
			kINTELLIGENCE = 0x9,
			kAGILITY = 0xA,
			kLUCK = 0xB,
			kACTION_POINTS = 0xC,
			kCARRY_WEIGHT = 0xD,
			kCRITICAL_CHANCE = 0xE,
			kHEALING_RATE = 0xF,
			kHEALTH = 0x10,
			kMELEE_DAMAGE = 0x11,
			kDAMAGE_RESISTANCE = 0x12,
			kPOISON_RESISTANCE = 0x13,
			kRADIATION_RESISTANCE = 0x14,
			kSPEED_MULT = 0x15,
			kFATIGUE = 0x16,
			kKARMA = 0x17,
			kEXPERIENCE_POINTS = 0x18,
			kPERCEPTION_CONDITION = 0x19,
			kENDURANCE_CONDITION = 0x1A,
			kLEFT_ATTACK_CONDITION = 0x1B,
			kRIGHT_ATTACK_CONDITION = 0x1C,
			kLEFT_MOBILITY_CONDITION = 0x1D,
			kRIGHT_MOBILITY_CONDITION = 0x1E,
			kBRAIN_CONDITION = 0x1F,
			kBARTER = 0x20,
			kBIG_GUNS = 0x21,
			kENERGY_WEAPONS = 0x22,
			kEXPLOSIVES = 0x23,
			kLOCKPICK = 0x24,
			kMEDICINE = 0x25,
			kMELEE_WEAPONS = 0x26,
			kREPAIR = 0x27,
			kSCIENCE = 0x28,
			kSMALL_GUNS = 0x29,
			kSNEAK = 0x2A,
			kSPEECH = 0x2B,
			kSURVIVAL = 0x2C,
			kUNARMED = 0x2D,
			kINVENTORY_WEIGHT = 0x2E,
			kPARALYSIS = 0x2F,
			kINVISIBILITY = 0x30,
			kCHAMELEON = 0x31,
			kNIGHT_EYE_BONUS = 0x32,
			kTURBO = 0x33,
			kFIRE_RESISTANCE = 0x34,
			kWATER_BREATHING = 0x35,
			kRADIATION_RADS = 0x36,
			kBLOODY_MESS = 0x37,
			kUNARMED_DAMAGE = 0x38,
			kASSISTANCE = 0x39,
			kELECTRICAL_RESISTANCE = 0x3A,
			kFROST_RESISTANCE = 0x3B,
			kENERGY_RESISTANCE = 0x3C,
			kEMP_RESISTANCE = 0x3D,
			kVARIABLE_01 = 0x3E,
			kVARIABLE_02 = 0x3F,
			kVARIABLE_03 = 0x40,
			kVARIABLE_04 = 0x41,
			kVARIABLE_05 = 0x42,
			kVARIABLE_06 = 0x43,
			kVARIABLE_07 = 0x44,
			kVARIABLE_08 = 0x45,
			kVARIABLE_09 = 0x46,
			kVARIABLE_10 = 0x47,
			kIGNORE_CRIPPLED_LIMBS = 0x48,
			kDEHYDRATION = 0x49,
			kHUNGER = 0x4A,
			kSLEEPDEPREVATION = 0x4B,
			kDAMAGE_THRESHOLD = 0x4C,
			kACTOR_VALUE_COUNT = 0x4D,
			kAI_ATTRIBUTE_START = 0x0,
			kATTRIBUTE_START = 0x5,
			kACTOR_VALUE_START = 0x0,
			kDERIVED_ATTRIBUTE_START = 0xC,
			kCONDITION_START = 0x19,
			kSKILL_START = 0x20,
			kINT_START = 0x2E,
			kVARIABLE_START = 0x3E,
			kAI_ATTRIBUTE_END = 0x5,
			kATTRIBUTE_END = 0xC,
			kCONDITION_END = 0x20,
			kDERIVED_ATTRIBUTE_END = 0x20,
			kSKILL_END = 0x2E,
			kINT_END = 0x3E,
			kVARIABLE_END = 0x4C,
			kATTRIBUTE_COUNT = 0x7,
			kDERIVED_ATTRIBUTE_COUNT = 0x14,
			kSKILL_COUNT = 0xE,
			kAI_ATTRIBUTE_COUNT = 0x5,
			kCONDITION_COUNT = 0x7,
			kINT_COUNT = 0x10,
			kVALUE_NONE = -1,
			kSKILL_NONE = -1,
			kATTRIBUTE_NONE = -1,
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kALCH_ID };

		// override (MagicItemObject)
		virtual ~AlchemyItem() = default;               // 04
		virtual void ClearData() override;              // 05
		virtual bool ProcessBeforeSave() override;      // 06
		virtual void InitItem() override;               // 22
		virtual TESWaterForm* GetWaterType() override;  // 50
		virtual bool IsAutoCalc() override;             // 51

		AlchemyItem* ctor()
		{
			using func_t = AlchemyItem*(__thiscall*)(AlchemyItem*);
			static REL::Relocation<func_t> func{ Offsets::AlchemyItem::ctor };
			return func(this);
		}

		bool IsFlagSet(AlchemyItem::AlchemyFlag aiFlag)
		{
			using func_t = decltype(&AlchemyItem::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::AlchemyItem::IsFlagSet };
			return func(this, aiFlag);
		}

		SpellItem* GetAddictionItem()
		{
			using func_t = decltype(&AlchemyItem::GetAddictionItem);
			static REL::Relocation<func_t> func{ Offsets::AlchemyItem::GetAddictionItem };
			return func(this);
		}

		bool IsWater()
		{
			using func_t = decltype(&AlchemyItem::IsWater);
			static REL::Relocation<func_t> func{ Offsets::AlchemyItem::IsWater };
			return func(this);
		}

		TESSound* GetConsumptionSound()
		{
			using func_t = decltype(&AlchemyItem::GetConsumptionSound);
			static REL::Relocation<func_t> func{ Offsets::AlchemyItem::GetConsumptionSound };
			return func(this);
		}

	public:
		// members
		AlchemyItemData data;         // B8
		TESIcon         MessageIcon;  // CC
	};
	static_assert(sizeof(AlchemyItem) == 0xD8);
}
