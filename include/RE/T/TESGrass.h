#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESBoundObject.h"
#include "RE/T/TESGrass_GRASS_WATER_STATE.h"
#include "RE/T/TESModel.h"

namespace RE
{
	class TESFile;
	class TESForm;

	class TESGrass :
		public TESBoundObject,  // 00
		public TESModel  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::TESGrass };
		static constexpr auto VTABLE{ VTABLE::TESGrass };

		using GRASS_WATER_STATE = TESGrass_GRASS_WATER_STATE;

		class GRASS_DATA;

		class GRASS_DATA
		{
		public:
			void Endian()
			{
				using func_t = decltype(&GRASS_DATA::Endian);
				static REL::Relocation<func_t> func{ Offsets::TESGrass_GRASS_DATA::Endian };
				func(this);
			}

		public:
			// members
			std::uint8_t               cDensity;                 // 00
			std::uint8_t               cMinSlopeDegrees;         // 01
			std::uint8_t               cMaxSlopeDegrees;         // 02
			std::uint8_t               pad03;                    // 03
			std::uint16_t              sDistanceFromWaterLevel;  // 04
			std::uint16_t              pad06;                    // 06
			TESGrass_GRASS_WATER_STATE eUnderwater;              // 08?
			float                      fPositionRange;           // 0C?
			float                      fHeightRange;             // 10?
			float                      fColorRange;              // 14?
			float                      fWavePeriod;              // 18?
			char                       cFlags;                   // 1C?
			std::uint8_t               pad1D[0x3];               // 1D
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kGRAS_ID };

		// override (TESBoundObject)
		virtual ~TESGrass() = default;                   // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		// add
		virtual bool SetDensity(std::uint8_t acDensity);                                 // 60
		virtual std::uint8_t GetMinSlopeDegrees();                                       // 61
		virtual bool SetMinSlopeDegrees(std::uint8_t acMinSlopeDegrees);                 // 62
		virtual std::uint8_t GetMaxSlopeDegrees();                                       // 63
		virtual bool SetMaxSlopeDegrees(std::uint8_t acMaxSlopeDegrees);                 // 64
		virtual float GetMinSlope();                                                     // 65
		virtual float GetMaxSlope() const;                                               // 66
		virtual std::uint16_t GetDistanceFromWaterLevel();                               // 67
		virtual void SetDistanceFromWaterLevel(std::uint16_t asDistanceFromWaterLevel);  // 68
		virtual TESGrass_GRASS_WATER_STATE GetUnderwaterState();                         // 69
		virtual void SetUnderwaterState(TESGrass_GRASS_WATER_STATE aeUnderwater);        // 6A
		virtual float GetPositionRange();                                                // 6B
		virtual bool SetPositionRange(float afRange);                                    // 6C
		virtual float GetHeightRange();                                                  // 6D
		virtual bool SetHeightRange(float afRange);                                      // 6E
		virtual float GetColorRange();                                                   // 6F
		virtual bool SetColorRange(float afRange);                                       // 70
		virtual float GetWavePeriod();                                                   // 71
		virtual bool SetWavePeriod(float afPeriod);                                      // 72
		virtual bool GetVertexLighting();                                                // 73
		virtual void SetVertexLighting(bool abFlag);                                     // 74
		virtual bool GetUniformScaling();                                                // 75
		virtual void SetUniformScaling(bool abFlag);                                     // 76
		virtual bool GetFitToSlope();                                                    // 77
		virtual void SetFitToSlope(bool abFlag);                                         // 78
		virtual void Unk_79();                                                           // 79

		TESGrass* ctor()
		{
			using func_t = TESGrass*(__thiscall*)(TESGrass*);
			static REL::Relocation<func_t> func{ Offsets::TESGrass::ctor };
			return func(this);
		}

	public:
		// members
		TESGrass::GRASS_DATA Data;  // 48
	};
	static_assert(sizeof(TESGrass) == 0x68);
}
