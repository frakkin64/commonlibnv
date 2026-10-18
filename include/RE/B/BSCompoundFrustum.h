#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiFrustumPlanes.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BSCompoundFrustum
	{
	public:
		class FunctionOp;

		class FunctionOp
		{
		public:
			// members
			std::int32_t op;  // 00?
			std::int32_t jp;  // 04?
			std::int32_t jf;  // 08?
		};

		BSCompoundFrustum* ctor()
		{
			using func_t = BSCompoundFrustum*(__thiscall*)(BSCompoundFrustum*);
			static REL::Relocation<func_t> func{ Offsets::BSCompoundFrustum::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BSCompoundFrustum*);
			static REL::Relocation<func_t> func{ Offsets::BSCompoundFrustum::dtor };
			func(this);
		}

		void PrethreadOpList()
		{
			using func_t = decltype(&BSCompoundFrustum::PrethreadOpList);
			static REL::Relocation<func_t> func{ Offsets::BSCompoundFrustum::PrethreadOpList };
			func(this);
		}

	public:
		// members
		bool                                               bPrethreaded;        // 00
		std::uint8_t                                       pad01[0x3];          // 01
		BSSimpleArray<NiFrustumPlanes, 1024>               kPlanes;             // 04
		BSSimpleArray<BSCompoundFrustum::FunctionOp, 1024> kFunctionOperators;  // 14
		std::int32_t                                       iFreePlane;          // 24
		std::int32_t                                       iFreeOp;             // 28
		std::int32_t                                       iFirstOp;            // 2C
		NiFrustumPlanes                                    kViewFrustum;        // 30
		NiPoint3                                           kViewPosition;       // 94
		bool                                               bSkipViewFrustum;    // A0
		std::uint8_t                                       padA1[0x3];          // A1
	};
	static_assert(sizeof(BSCompoundFrustum) == 0xA4);
}
