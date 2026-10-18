#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiNode;
	class NiPoint3;

	class __declspec(novtable) SeenData
	{
	public:
		static constexpr auto RTTI{ RTTI::SeenData };
		static constexpr auto VTABLE{ VTABLE::SeenData };

		// add
		virtual ~SeenData() = default;                                                               // 00
		virtual void DrawSeenData(NiNode* apDrawNode, NiPoint3 const& aSeenStart, bool abDrawSeen);  // 01
		virtual std::uint16_t GetSaveSize(bool abRecursing);                                         // 02
		virtual void SaveGame(bool abRecursing);                                                     // 04 (reversed overload group)
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer);                                  // 03 (reversed overload group)
		virtual void LoadGame(std::uint16_t acCount);                                                // 06 (reversed overload group)
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer);                                  // 05 (reversed overload group)

		SeenData* ctor()
		{
			using func_t = SeenData*(__thiscall*)(SeenData*);
			static REL::Relocation<func_t> func{ Offsets::SeenData::ctor };
			return func(this);
		}

		bool IsSeenBitTrue(std::uint32_t aiPos)
		{
			using func_t = decltype(&SeenData::IsSeenBitTrue);
			static REL::Relocation<func_t> func{ Offsets::SeenData::IsSeenBitTrue };
			return func(this, aiPos);
		}

		bool UpdateSeenData(NiPoint3 const& aCoord, NiPoint3 const& aSeenStart)
		{
			using func_t = decltype(&SeenData::UpdateSeenData);
			static REL::Relocation<func_t> func{ Offsets::SeenData::UpdateSeenData };
			return func(this, aCoord, aSeenStart);
		}

		static void GetPosOffset(std::uint32_t aiPos, NiPoint3& aOutCoord)
		{
			using func_t = decltype(&SeenData::GetPosOffset);
			static REL::Relocation<func_t> func{ Offsets::SeenData::GetPosOffset };
			func(aiPos, aOutCoord);
		}

		static void ShiftCoordToSeenPos(NiPoint3& aCoord)
		{
			using func_t = decltype(&SeenData::ShiftCoordToSeenPos);
			static REL::Relocation<func_t> func{ Offsets::SeenData::ShiftCoordToSeenPos };
			func(aCoord);
		}

		static void GetPosForCoord(NiPoint3 const& aCoord, bool abInterior, std::int32_t& aiOutX, std::int32_t& aiOutY)
		{
			using func_t = decltype(&SeenData::GetPosForCoord);
			static REL::Relocation<func_t> func{ Offsets::SeenData::GetPosForCoord };
			func(aCoord, abInterior, aiOutX, aiOutY);
		}

	public:
		// members
		std::uint32_t pSeenBits[8];  // 04
	};
	static_assert(sizeof(SeenData) == 0x24);
}
