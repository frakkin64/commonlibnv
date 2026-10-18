#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/R/Random.h"

namespace RE
{
	class PosGen :
		public Random  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PosGen };
		static constexpr auto VTABLE{ VTABLE::PosGen };

		// override (Random)
		virtual ~PosGen() = default;    // 00
		virtual float Next() override;  // 01
		virtual char* Name() override;  // 02

	protected:
		void Build(bool sym)
		{
			using func_t = decltype(&PosGen::Build);
			static REL::Relocation<func_t> func{ Offsets::PosGen::Build };
			func(this, sym);
		}

	public:
		// members
		float        xi;          // 04
		float*       sx;          // 08
		float*       sfx;         // 0C
		bool         NotReady;    // 10
		std::uint8_t pad11[0x3];  // 11
	};
}
