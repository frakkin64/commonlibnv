#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRect.h"
#include "RE/N/NiTPointerList.h"
#include "RE/T/Tile_Action.h"
#include "RE/T/Tile_BuildStorage.h"
#include "RE/T/Tile_Extra.h"
#include "RE/T/Tile_FloatAction.h"
#include "RE/T/Tile_MenuStringMap.h"
#include "RE/T/Tile_RefValueAction.h"
#include "RE/T/Tile_TileTemplate.h"
#include "RE/T/Tile_TileTemplateItem.h"
#include "RE/T/Tile_VALUE_ACTION.h"
#include "RE/T/Tile_Value.h"
#include "RE/T/Tile_enumTrait.h"

namespace RE
{
	class BSCriticalSection;
	class Menu;
	class NiColorA;
	class NiNode;
	class TileShaderProperty;
	class XMLStorage;

	class __declspec(novtable) Tile
	{
	public:
		static constexpr auto RTTI{ RTTI::Tile };
		static constexpr auto VTABLE{ VTABLE::Tile };

		using Action = Tile_Action;
		using BuildStorage = Tile_BuildStorage;
		using Extra = Tile_Extra;
		using FloatAction = Tile_FloatAction;
		using MenuStringMap = Tile_MenuStringMap;
		using RefValueAction = Tile_RefValueAction;
		using TileTemplate = Tile_TileTemplate;
		using TileTemplateItem = Tile_TileTemplateItem;
		using VALUE_ACTION = Tile_VALUE_ACTION;
		using Value = Tile_Value;
		using enumTrait = Tile_enumTrait;

		class Reaction;

		enum class TILE_FADE_CONTROL_TYPE : std::int32_t
		{
			kTFCT_STANDARD = 0x0,
			kTFCT_NONLINEAR_LONG_DARK_REPEATING = 0x1,
			kTFCT_BLINK_THRICE = 0x2,
			kTFCT_BLINK_FAST_FADE = 0x3,
			kTFCT_FADE_IN_HOLD_FADE_OUT = 0x4,
		};

		class Reaction
		{
		public:
			// members
			Tile_Value*     preactionValue;  // 00?
			Tile::Reaction* pnext;           // 04?
		};

		// add
		virtual ~Tile() = default;                                                            // 00
		virtual void Init(Tile* apParent, char const* apName, Tile* apReplacedTile);          // 01
		virtual NiNode* MakeNode();                                                           // 02
		virtual std::int32_t GetType();                                                       // 03
		virtual char const* GetTypeName();                                                    // 04
		virtual bool SpecialBoundsCheck(float fx, float fy);                                  // 05
		virtual Tile* PostParse(std::int32_t aiTrait, float afValue, char const* axString);   // 06
		virtual void ForceTextureRelease();                                                   // 07
		virtual TileShaderProperty* GetShaderProperty();                                      // 08
		virtual void SetAlphaAndColor(NiNode* apNode, float a_arg2, NiColorA const& a_arg3);  // 09

		NiNode* GetModel()
		{
			using func_t = decltype(&Tile::GetModel);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetModel };
			return func(this);
		}

		char const* GetName()
		{
			using func_t = decltype(&Tile::GetName);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetName };
			return func(this);
		}

		void Set(std::int32_t aiTrait, std::int32_t aiValue)
		{
			using func_t = void (Tile::*)(std::int32_t, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::Tile::Set };
			func(this, aiTrait, aiValue);
		}

		void SetName(char const* apName)
		{
			using func_t = decltype(&Tile::SetName);
			static REL::Relocation<func_t> func{ Offsets::Tile::SetName };
			func(this, apName);
		}

		Tile* ctor()
		{
			using func_t = Tile*(__thiscall*)(Tile*);
			static REL::Relocation<func_t> func{ Offsets::Tile::ctor };
			return func(this);
		}

		static BSCriticalSection* GetTileUpdateAllCriticalSectionLock()
		{
			using func_t = decltype(&Tile::GetTileUpdateAllCriticalSectionLock);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetTileUpdateAllCriticalSectionLock };
			return func();
		}

		void Set(std::int32_t aiTrait, std::uint32_t aiValue)
		{
			using func_t = void (Tile::*)(std::int32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::Tile::Set_1 };
			func(this, aiTrait, aiValue);
		}

		void SetSpeechChallengeFailure(bool bValue)
		{
			using func_t = decltype(&Tile::SetSpeechChallengeFailure);
			static REL::Relocation<func_t> func{ Offsets::Tile::SetSpeechChallengeFailure };
			func(this, bValue);
		}

		bool GetSpeechChallegeFailure()
		{
			using func_t = decltype(&Tile::GetSpeechChallegeFailure);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetSpeechChallegeFailure };
			return func(this);
		}

		void Release()
		{
			using func_t = decltype(&Tile::Release);
			static REL::Relocation<func_t> func{ Offsets::Tile::Release };
			func(this);
		}

		static void AddToTable(char const* apText, std::int32_t aiIndex)
		{
			using func_t = decltype(&Tile::AddToTable);
			static REL::Relocation<func_t> func{ Offsets::Tile::AddToTable };
			func(apText, aiIndex);
		}

		static void LoadTextTable()
		{
			using func_t = decltype(&Tile::LoadTextTable);
			static REL::Relocation<func_t> func{ Offsets::Tile::LoadTextTable };
			func();
		}

		static std::int32_t AddUserTrait(char const* apString, std::int32_t aiIndex)
		{
			using func_t = decltype(&Tile::AddUserTrait);
			static REL::Relocation<func_t> func{ Offsets::Tile::AddUserTrait };
			return func(apString, aiIndex);
		}

		float GetFloat(std::int32_t aiTrait)
		{
			using func_t = decltype(&Tile::GetFloat);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetFloat };
			return func(this, aiTrait);
		}

		char const* GetString(std::int32_t aiTrait)
		{
			using func_t = decltype(&Tile::GetString);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetString };
			return func(this, aiTrait);
		}

		bool IsTrue(std::int32_t aeTrait)
		{
			using func_t = decltype(&Tile::IsTrue);
			static REL::Relocation<func_t> func{ Offsets::Tile::IsTrue };
			return func(this, aeTrait);
		}

		void Poke(std::int32_t aiTrait, float afValue)
		{
			using func_t = decltype(&Tile::Poke);
			static REL::Relocation<func_t> func{ Offsets::Tile::Poke };
			func(this, aiTrait, afValue);
		}

		void Set(std::int32_t aiTrait, float afValue, bool abClearActions)
		{
			using func_t = void (Tile::*)(std::int32_t, float, bool);
			static REL::Relocation<func_t> func{ Offsets::Tile::Set_2 };
			func(this, aiTrait, afValue, abClearActions);
		}

		void Set(std::int32_t aiTrait, char const* apString, bool abClearActions)
		{
			using func_t = void (Tile::*)(std::int32_t, char const*, bool);
			static REL::Relocation<func_t> func{ Offsets::Tile::Set_3 };
			func(this, aiTrait, apString, abClearActions);
		}

		float GetRealX()
		{
			using func_t = decltype(&Tile::GetRealX);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetRealX };
			return func(this);
		}

		float GetRealY()
		{
			using func_t = decltype(&Tile::GetRealY);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetRealY };
			return func(this);
		}

		static float GetMaximumDepth()
		{
			using func_t = decltype(&Tile::GetMaximumDepth);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetMaximumDepth };
			return func();
		}

		static float GetTileThickness(Tile* apTile)
		{
			using func_t = decltype(&Tile::GetTileThickness);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetTileThickness };
			return func(apTile);
		}

		static std::int32_t TextToTrait(char const* apText)
		{
			using func_t = decltype(&Tile::TextToTrait);
			static REL::Relocation<func_t> func{ Offsets::Tile::TextToTrait };
			return func(apText);
		}

		static std::int32_t GetExtraDataFromTraitName(char const* apTraitName)
		{
			using func_t = decltype(&Tile::GetExtraDataFromTraitName);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetExtraDataFromTraitName };
			return func(apTraitName);
		}

		static Tile_BuildStorage* ParseFile(char const* apName, char* apData, std::uint32_t apSize)
		{
			using func_t = decltype(&Tile::ParseFile);
			static REL::Relocation<func_t> func{ Offsets::Tile::ParseFile };
			return func(apName, apData, apSize);
		}

		static bool InsertIncludedFiles(XMLStorage* apFile)
		{
			using func_t = decltype(&Tile::InsertIncludedFiles);
			static REL::Relocation<func_t> func{ Offsets::Tile::InsertIncludedFiles };
			return func(apFile);
		}

		Tile* BuildAndNameTree(Tile_TileTemplate* apTemplate)
		{
			using func_t = decltype(&Tile::BuildAndNameTree);
			static REL::Relocation<func_t> func{ Offsets::Tile::BuildAndNameTree };
			return func(this, apTemplate);
		}

		void ConnectTraitsToTree(Tile_TileTemplate* apTemplate)
		{
			using func_t = decltype(&Tile::ConnectTraitsToTree);
			static REL::Relocation<func_t> func{ Offsets::Tile::ConnectTraitsToTree };
			func(this, apTemplate);
		}

		Tile* FinalPostParse(std::int32_t aiTrait, float afValue, char const* axString)
		{
			using func_t = decltype(&Tile::FinalPostParse);
			static REL::Relocation<func_t> func{ Offsets::Tile::FinalPostParse };
			return func(this, aiTrait, afValue, axString);
		}

		bool GetRenderedMenu()
		{
			using func_t = decltype(&Tile::GetRenderedMenu);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetRenderedMenu };
			return func(this);
		}

		Menu* GetMenu()
		{
			using func_t = decltype(&Tile::GetMenu);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetMenu };
			return func(this);
		}

		Tile* GetChildByName(char const* apName)
		{
			using func_t = decltype(&Tile::GetChildByName);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetChildByName };
			return func(this, apName);
		}

		Tile* GetChildByID(std::int32_t aiID)
		{
			using func_t = decltype(&Tile::GetChildByID);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetChildByID };
			return func(this, aiID);
		}

		Tile* GetFirstRefCopy(std::int32_t aiTrait, std::int32_t& aiType)
		{
			using func_t = decltype(&Tile::GetFirstRefCopy);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetFirstRefCopy };
			return func(this, aiTrait, aiType);
		}

		void DeleteChildren()
		{
			using func_t = decltype(&Tile::DeleteChildren);
			static REL::Relocation<func_t> func{ Offsets::Tile::DeleteChildren };
			func(this);
		}

		void UpdateChildren(bool abParentWillUpdate)
		{
			using func_t = decltype(&Tile::UpdateChildren);
			static REL::Relocation<func_t> func{ Offsets::Tile::UpdateChildren };
			func(this, abParentWillUpdate);
		}

		bool UpdateTile(bool abClearUpdateFlags)
		{
			using func_t = decltype(&Tile::UpdateTile);
			static REL::Relocation<func_t> func{ Offsets::Tile::UpdateTile };
			return func(this, abClearUpdateFlags);
		}

		static void GetTextureAtlasInfo(char const* strAtlasFilename, char const* strSubtextureFilename, BSStringT<char>* strAtlasTextureFilename, NiRect<float>* ResultRect)
		{
			using func_t = decltype(&Tile::GetTextureAtlasInfo);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetTextureAtlasInfo };
			func(strAtlasFilename, strSubtextureFilename, strAtlasTextureFilename, ResultRect);
		}

		void SetNeedsUpdate(std::int32_t aiFlag)
		{
			using func_t = decltype(&Tile::SetNeedsUpdate);
			static REL::Relocation<func_t> func{ Offsets::Tile::SetNeedsUpdate };
			func(this, aiFlag);
		}

		void AddNeedsUpdate(std::int32_t aiFlag)
		{
			using func_t = decltype(&Tile::AddNeedsUpdate);
			static REL::Relocation<func_t> func{ Offsets::Tile::AddNeedsUpdate };
			func(this, aiFlag);
		}

		static void AddDirtyTile(Tile* apTile)
		{
			using func_t = decltype(&Tile::AddDirtyTile);
			static REL::Relocation<func_t> func{ Offsets::Tile::AddDirtyTile };
			func(apTile);
		}

		void UpdateClipwindows()
		{
			using func_t = decltype(&Tile::UpdateClipwindows);
			static REL::Relocation<func_t> func{ Offsets::Tile::UpdateClipwindows };
			func(this);
		}

		void ReClipChildren(float afx, float afy, float afx2, float afy2)
		{
			using func_t = decltype(&Tile::ReClipChildren);
			static REL::Relocation<func_t> func{ Offsets::Tile::ReClipChildren };
			func(this, afx, afy, afx2, afy2);
		}

		void AddFadeControl(std::int32_t aiTrait, float afStart, float a_arg3, float a_arg4, Tile::TILE_FADE_CONTROL_TYPE afEnd)
		{
			using func_t = decltype(&Tile::AddFadeControl);
			static REL::Relocation<func_t> func{ Offsets::Tile::AddFadeControl };
			func(this, aiTrait, afStart, a_arg3, a_arg4, afEnd);
		}

		static void UpdateFadeControls()
		{
			using func_t = decltype(&Tile::UpdateFadeControls);
			static REL::Relocation<func_t> func{ Offsets::Tile::UpdateFadeControls };
			func();
		}

		void SetParent(Tile* apParent, Tile* apReplacedTile)
		{
			using func_t = decltype(&Tile::SetParent);
			static REL::Relocation<func_t> func{ Offsets::Tile::SetParent };
			func(this, apParent, apReplacedTile);
		}

		static Tile* SearchForTileByID(Tile* apTarget, std::int32_t aiID)
		{
			using func_t = decltype(&Tile::SearchForTileByID);
			static REL::Relocation<func_t> func{ Offsets::Tile::SearchForTileByID };
			return func(apTarget, aiID);
		}

		static Tile* GetMenuByClass(std::int32_t aiClass)
		{
			using func_t = decltype(&Tile::GetMenuByClass);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetMenuByClass };
			return func(aiClass);
		}

		Tile_Value* GetUnderscoreValue(std::int32_t aiBaseTrait, std::int32_t aiID)
		{
			using func_t = decltype(&Tile::GetUnderscoreValue);
			static REL::Relocation<func_t> func{ Offsets::Tile::GetUnderscoreValue };
			return func(this, aiBaseTrait, aiID);
		}

		void PlayTileSound(std::int32_t aiSoundType)
		{
			using func_t = decltype(&Tile::PlayTileSound);
			static REL::Relocation<func_t> func{ Offsets::Tile::PlayTileSound };
			func(this, aiSoundType);
		}

		void RecursiveColorUpdate(std::int32_t aiColorID, float afInheritedVal)
		{
			using func_t = void (Tile::*)(std::int32_t, float);
			static REL::Relocation<func_t> func{ Offsets::Tile::RecursiveColorUpdate };
			func(this, aiColorID, afInheritedVal);
		}

		void RecursiveColorUpdate(BSSimpleList<std::int32_t>* pColorIDList, float afInheritedVal)
		{
			using func_t = void (Tile::*)(BSSimpleList<std::int32_t>*, float);
			static REL::Relocation<func_t> func{ Offsets::Tile::RecursiveColorUpdate_1 };
			func(this, pColorIDList, afInheritedVal);
		}

		void RecursiveRotationUpdate()
		{
			using func_t = decltype(&Tile::RecursiveRotationUpdate);
			static REL::Relocation<func_t> func{ Offsets::Tile::RecursiveRotationUpdate };
			func(this);
		}

		static bool IsValidUserTraitName(char const* apTraitName)
		{
			using func_t = decltype(&Tile::IsValidUserTraitName);
			static REL::Relocation<func_t> func{ Offsets::Tile::IsValidUserTraitName };
			return func(apTraitName);
		}

		[[nodiscard]] static bool& ParseError() noexcept
		{
			static REL::Relocation<bool*> global{ Offsets::Tile::gb_Parse_Error };
			return *global;
		}

	public:
		// members
		NiTPointerList<Tile*>         xChildren;                // 04
		BSSimpleArray<Tile_Value*, 8> xTraits;                  // 10
		BSStringT<char>               xName;                    // 20
		Tile*                         pParent;                  // 28
		NiPointer<NiNode>             spModel;                  // 2C
		std::uint32_t                 uiFlags;                  // 30
		bool                          bNeedsNiUpdate;           // 34
		bool                          bSpeechChallengeFailure;  // 35
		std::uint16_t                 pad36;                    // 36
	};
	static_assert(sizeof(Tile) == 0x38);
}
