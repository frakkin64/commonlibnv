#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class ObstacleData;

	class ReferenceObstacleArray :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ReferenceObstacleArray };
		static constexpr auto VTABLE{ VTABLE::ReferenceObstacleArray };

		// override (NiRefObject)
		virtual ~ReferenceObstacleArray() = default;  // 00

		ReferenceObstacleArray* ctor()
		{
			using func_t = ReferenceObstacleArray*(__thiscall*)(ReferenceObstacleArray*);
			static REL::Relocation<func_t> func{ Offsets::ReferenceObstacleArray::ctor };
			return func(this);
		}

	public:
		// members
		std::uint32_t                                iFormID;    // 08
		BSSimpleArray<NiPointer<ObstacleData>, 1024> Obstacles;  // 0C
	};
	static_assert(sizeof(ReferenceObstacleArray) == 0x1C);
}
