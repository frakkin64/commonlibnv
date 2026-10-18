#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/T/TESBoundAnimObject.h"
#include "RE/T/TESSoundFile.h"

namespace RE
{
	class NiAVObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class TESSound :
		public TESBoundAnimObject,  // 00
		public TESSoundFile  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::TESSound };
		static constexpr auto VTABLE{ VTABLE::TESSound };

		class SOUND_DATA;
		class SOUND_DATA2;

		class SOUND_DATA
		{
		public:
			void Endian()
			{
				using func_t = decltype(&SOUND_DATA::Endian);
				static REL::Relocation<func_t> func{ Offsets::TESSound_SOUND_DATA::Endian };
				func(this);
			}

		public:
			// members
			std::uint8_t  iMin;                  // 00
			std::uint8_t  iMax;                  // 01
			char          iPitch;                // 02
			std::uint8_t  iPadding1;             // 03
			std::uint32_t iFlags;                // 04
			std::uint16_t iAttenuation;          // 08
			std::uint16_t iTimeConstraints;      // 0A
			std::uint16_t pAttenuationCurve[5];  // 0C
			std::uint16_t iReverbAttenuation;    // 16
			std::uint32_t iPriority;             // 18
			std::uint32_t iLoopBegin;            // 1C
			std::uint32_t iLoopEnd;              // 20
		};
		static_assert(sizeof(SOUND_DATA) == 0x24);

		class SOUND_DATA2
		{
		public:
			void Endian()
			{
				using func_t = decltype(&SOUND_DATA2::Endian);
				static REL::Relocation<func_t> func{ Offsets::TESSound_SOUND_DATA2::Endian };
				func(this);
			}

		public:
			// members
			std::uint8_t  iMin;              // 00
			std::uint8_t  iMax;              // 01
			char          iPitch;            // 02
			std::uint8_t  iPadding1;         // 03
			std::uint32_t iFlags;            // 04
			std::uint16_t iAttenuation;      // 08?
			std::uint16_t iTimeConstraints;  // 0A?
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kSOUN_ID };

		// override (TESBoundAnimObject)
		virtual ~TESSound() = default;                                       // 04
		virtual void ClearData() override;                                   // 05
		virtual bool Load(TESFile* apFile) override;                         // 08
		virtual void Save() override;                                        // 0B
		virtual void Copy(TESForm* apCopy) override;                         // 42
		virtual bool Compare(TESForm* apCopy) override;                      // 43
		virtual void UnClone3D(TESObjectREFR* apRequester) override;         // 54
		virtual NiAVObject* Clone3D_5E(TESObjectREFR* pRequester) override;  // 5E

		TESSound::SOUND_DATA GetData()
		{
			using func_t = decltype(&TESSound::GetData);
			static REL::Relocation<func_t> func{ Offsets::TESSound::GetData };
			return func(this);
		}

		char const* GetFilename()
		{
			using func_t = decltype(&TESSound::GetFilename);
			static REL::Relocation<func_t> func{ Offsets::TESSound::GetFilename };
			return func(this);
		}

		std::uint8_t GetMaxDistance()
		{
			using func_t = decltype(&TESSound::GetMaxDistance);
			static REL::Relocation<func_t> func{ Offsets::TESSound::GetMaxDistance };
			return func(this);
		}

		static TESSound* GetPassThroughSound(std::int32_t index)
		{
			using func_t = decltype(&TESSound::GetPassThroughSound);
			static REL::Relocation<func_t> func{ Offsets::TESSound::GetPassThroughSound };
			return func(index);
		}

		TESSound* ctor()
		{
			using func_t = TESSound*(__thiscall*)(TESSound*);
			static REL::Relocation<func_t> func{ Offsets::TESSound::ctor };
			return func(this);
		}

		static void GenerateDefaultObjects()
		{
			using func_t = decltype(&TESSound::GenerateDefaultObjects);
			static REL::Relocation<func_t> func{ Offsets::TESSound::GenerateDefaultObjects };
			func();
		}

		static std::uint32_t ConvertLoopFlag(std::uint32_t aiTESSoundFlags)
		{
			using func_t = decltype(&TESSound::ConvertLoopFlag);
			static REL::Relocation<func_t> func{ Offsets::TESSound::ConvertLoopFlag };
			return func(aiTESSoundFlags);
		}

	public:
		// members
		BSStringT<char>      cFormEditorID;         // 3C
		TESSound::SOUND_DATA data;                  // 44
		char                 cRandomPercentChance;  // 68
		std::uint8_t         pad69[0x3];            // 69
	};
	static_assert(sizeof(TESSound) == 0x6C);
}
