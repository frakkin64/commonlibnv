#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class TESFile;

	class NavMeshBounds
	{
	public:
		class NavMeshBoundsTriangle;

		class NavMeshBoundsTriangle
		{
		public:
			// members
			std::uint16_t Vertices[3];  // 00
		};
		static_assert(sizeof(NavMeshBoundsTriangle) == 0x6);

		NavMeshBounds* ctor()
		{
			using func_t = NavMeshBounds*(__thiscall*)(NavMeshBounds*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshBounds::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(NavMeshBounds*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshBounds::dtor };
			func(this);
		}

		void FillBoundsChunk(char* apChunkBuffer)
		{
			using func_t = decltype(&NavMeshBounds::FillBoundsChunk);
			static REL::Relocation<func_t> func{ Offsets::NavMeshBounds::FillBoundsChunk };
			func(this, apChunkBuffer);
		}

		void SetFromBoundsChunk(char* apChunkBuffer, TESFile* apFile, std::int32_t aiFileVersionNumber)
		{
			using func_t = decltype(&NavMeshBounds::SetFromBoundsChunk);
			static REL::Relocation<func_t> func{ Offsets::NavMeshBounds::SetFromBoundsChunk };
			func(this, apChunkBuffer, apFile, aiFileVersionNumber);
		}

		void CopyTo(NavMeshBounds* apDestBounds) const
		{
			using func_t = decltype(&NavMeshBounds::CopyTo);
			static REL::Relocation<func_t> func{ Offsets::NavMeshBounds::CopyTo };
			func(this, apDestBounds);
		}

	public:
		// members
		NiPoint3                                                  BoundingBoxMin;  // 00
		NiPoint3                                                  BoundingBoxMax;  // 0C
		BSSimpleArray<NavMeshBounds::NavMeshBoundsTriangle, 1024> Triangles;       // 18
		BSSimpleArray<NiPoint3, 1024>                             Vertices;        // 28
	};
	static_assert(sizeof(NavMeshBounds) == 0x38);
}
