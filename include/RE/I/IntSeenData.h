#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SeenData.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiNode;
	class NiPoint3;

	class IntSeenData :
		public SeenData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IntSeenData };
		static constexpr auto VTABLE{ VTABLE::IntSeenData };

		// override (SeenData)
		virtual ~IntSeenData() = default;                                                                     // 00
		virtual void DrawSeenData(NiNode* apDrawNode, NiPoint3 const& aSeenStart, bool abDrawSeen) override;  // 01
		virtual std::uint16_t GetSaveSize(bool abRecursing) override;                                         // 02
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                  // 03
		virtual void SaveGame(bool abRecursing) override;                                                     // 04
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                  // 05
		virtual void LoadGame(std::uint16_t acCount) override;                                                // 06

		IntSeenData* ctor(char acSectionX, char acSectionY)
		{
			using func_t = IntSeenData*(__thiscall*)(IntSeenData*, char, char);
			static REL::Relocation<func_t> func{ Offsets::IntSeenData::ctor };
			return func(this, acSectionX, acSectionY);
		}

	public:
		// members
		char          cSectionX;     // 24
		char          cSectionY;     // 25
		std::uint16_t pad26;         // 26
		IntSeenData*  pNextSection;  // 28
	};
	static_assert(sizeof(IntSeenData) == 0x2C);
}
