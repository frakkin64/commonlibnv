#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/M/MEDIATYPE.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class MediaLocationController;
	class TESFile;
	class TESSound;

	class MediaSet :
		public TESForm,  // 00
		public TESFullName  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::MediaSet };
		static constexpr auto VTABLE{ VTABLE::MediaSet };

		class MediaLayer;

		enum class MEDIASETTYPE : std::int32_t
		{
			kBATTLE = 0x0,
			kLAYER_LOCATION = 0x1,
			kLAYER_DUNGEON = 0x2,
			kINCIDENTAL = 0x3,
			kSETTYPE_COUNT = 0x4,
		};

		class MediaLayer
		{
		public:
			MediaLayer* ctor()
			{
				using func_t = MediaLayer*(__thiscall*)(MediaLayer*);
				static REL::Relocation<func_t> func{ Offsets::MediaSet_MediaLayer::ctor };
				return func(this);
			}

			void Clear()
			{
				using func_t = decltype(&MediaLayer::Clear);
				static REL::Relocation<func_t> func{ Offsets::MediaSet_MediaLayer::Clear };
				func(this);
			}

			void Copy(MediaSet::MediaLayer l)
			{
				using func_t = decltype(&MediaLayer::Copy);
				static REL::Relocation<func_t> func{ Offsets::MediaSet_MediaLayer::Copy };
				func(this, l);
			}

			MediaLayer* ctor(MediaSet::MediaLayer const& __that)
			{
				using func_t = MediaLayer*(__thiscall*)(MediaLayer*, MediaSet::MediaLayer const&);
				static REL::Relocation<func_t> func{ Offsets::MediaSet_MediaLayer::ctor_1 };
				return func(this, __that);
			}

			bool Compare(MediaSet::MediaLayer l)
			{
				using func_t = decltype(&MediaLayer::Compare);
				static REL::Relocation<func_t> func{ Offsets::MediaSet_MediaLayer::Compare };
				return func(this, l);
			}

			void dtor()
			{
				using func_t = void(__thiscall*)(MediaLayer*);
				static REL::Relocation<func_t> func{ Offsets::MediaSet_MediaLayer::dtor };
				func(this);
			}

		public:
			// members
			BSStringT<char> Name;         // 00
			float           Attenuation;  // 08
			float           Percent;      // 0C?
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kMSET_ID };

		// override (TESForm)
		virtual ~MediaSet() = default;                   // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		MediaSet* ctor()
		{
			using func_t = MediaSet*(__thiscall*)(MediaSet*);
			static REL::Relocation<func_t> func{ Offsets::MediaSet::ctor };
			return func(this);
		}

		bool Update(std::uint32_t ticks, bool abInCombat, MediaLocationController* pController)
		{
			using func_t = decltype(&MediaSet::Update);
			static REL::Relocation<func_t> func{ Offsets::MediaSet::Update };
			return func(this, ticks, abInCombat, pController);
		}

		bool UpdateLocation(std::uint32_t ticks, bool abInCombat, MediaLocationController* pController)
		{
			using func_t = decltype(&MediaSet::UpdateLocation);
			static REL::Relocation<func_t> func{ Offsets::MediaSet::UpdateLocation };
			return func(this, ticks, abInCombat, pController);
		}

		bool UpdateDungeon(std::uint32_t ticks, bool abInCombat, MediaLocationController* pController)
		{
			using func_t = decltype(&MediaSet::UpdateDungeon);
			static REL::Relocation<func_t> func{ Offsets::MediaSet::UpdateDungeon };
			return func(this, ticks, abInCombat, pController);
		}

		bool UpdateBattle(bool a_bInCombat, std::uint32_t ticks, MEDIATYPE mType)
		{
			using func_t = decltype(&MediaSet::UpdateBattle);
			static REL::Relocation<func_t> func{ Offsets::MediaSet::UpdateBattle };
			return func(this, a_bInCombat, ticks, mType);
		}

		bool UpdateIncidentals(std::uint32_t ticks)
		{
			using func_t = decltype(&MediaSet::UpdateIncidentals);
			static REL::Relocation<func_t> func{ Offsets::MediaSet::UpdateIncidentals };
			return func(this, ticks);
		}

	public:
		// members
		std::uint32_t          uiMinLayerUpdate;  // 24
		std::uint32_t          uiSeekTime;        // 28
		std::uint32_t          uiLoopUpdate;      // 2C
		bool                   bStarted;          // 30
		bool                   bInCombat;         // 31
		bool                   bInTension;        // 32
		bool                   bIsDay;            // 33
		char                   cCurrentLayer;     // 34
		std::uint8_t           pad35[0x3];        // 35
		TESFullName            MediaSetName;      // 38
		MediaSet::MEDIASETTYPE Type;              // 44
		MediaSet::MediaLayer   pMLOne;            // 48
		MediaSet::MediaLayer   pMLTwo;            // 58
		MediaSet::MediaLayer   pMLThree;          // 68
		MediaSet::MediaLayer   pMLFour;           // 78
		MediaSet::MediaLayer   pMLFive;           // 88
		MediaSet::MediaLayer   pMLSix;            // 98
		char                   cEnableFlags;      // A8
		std::uint8_t           padA9[0x3];        // A9
		float                  fOne;              // AC
		float                  fTwo;              // B0
		float                  fThree;            // B4
		float                  fFour;             // B8
		TESSound*              pSoundOne;         // BC
		TESSound*              pSoundTwo;         // C0
	};
	static_assert(sizeof(MediaSet) == 0xC4);
}
