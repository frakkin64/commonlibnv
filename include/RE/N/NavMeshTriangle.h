#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMeshTriangle
	{
	public:
		void ClearFlag(std::int32_t aFlag)
		{
			using func_t = decltype(&NavMeshTriangle::ClearFlag);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::ClearFlag };
			func(this, aFlag);
		}

		std::uint16_t GetVert(std::uint32_t aiVertIndex) const
		{
			using func_t = decltype(&NavMeshTriangle::GetVert);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::GetVert };
			return func(this, aiVertIndex);
		}

		bool EdgeHasExtraInfo(std::int32_t aiEdgeIndex) const
		{
			using func_t = decltype(&NavMeshTriangle::EdgeHasExtraInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::EdgeHasExtraInfo };
			return func(this, aiEdgeIndex);
		}

		bool IsEdgeConnected(std::int32_t aiEdgeIndex) const
		{
			using func_t = decltype(&NavMeshTriangle::IsEdgeConnected);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::IsEdgeConnected };
			return func(this, aiEdgeIndex);
		}

		bool HasCover() const
		{
			using func_t = decltype(&NavMeshTriangle::HasCover);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::HasCover };
			return func(this);
		}

		void ClearEdgeExtraInfo(std::int32_t aiEdgeIndex)
		{
			using func_t = decltype(&NavMeshTriangle::ClearEdgeExtraInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::ClearEdgeExtraInfo };
			func(this, aiEdgeIndex);
		}

		void SetTri(std::uint32_t aiEdgeIndex, std::uint16_t aiTriangle)
		{
			using func_t = decltype(&NavMeshTriangle::SetTri);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::SetTri };
			func(this, aiEdgeIndex, aiTriangle);
		}

		bool HasEdgeExtraInfo() const
		{
			using func_t = decltype(&NavMeshTriangle::HasEdgeExtraInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::HasEdgeExtraInfo };
			return func(this);
		}

		void SetEdgeExtraInfo(std::int32_t aiEdgeIndex, std::uint16_t ausExtraInfoIndex)
		{
			using func_t = decltype(&NavMeshTriangle::SetEdgeExtraInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::SetEdgeExtraInfo };
			func(this, aiEdgeIndex, ausExtraInfoIndex);
		}

		void GetEdgeCoverData(std::uint16_t aiEdge, std::uint16_t& aiData, bool& abLeft, bool& abRight) const
		{
			using func_t = decltype(&NavMeshTriangle::GetEdgeCoverData);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::GetEdgeCoverData };
			func(this, aiEdge, aiData, abLeft, abRight);
		}

		bool GetFlag(std::int32_t aFlag) const
		{
			using func_t = decltype(&NavMeshTriangle::GetFlag);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::GetFlag };
			return func(this, aFlag);
		}

		void SetFlag(std::int32_t aFlag)
		{
			using func_t = decltype(&NavMeshTriangle::SetFlag);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::SetFlag };
			func(this, aFlag);
		}

		bool IsPreferred() const
		{
			using func_t = decltype(&NavMeshTriangle::IsPreferred);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::IsPreferred };
			return func(this);
		}

		bool IsNoLargeCreature() const
		{
			using func_t = decltype(&NavMeshTriangle::IsNoLargeCreature);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::IsNoLargeCreature };
			return func(this);
		}

		void SetObjectCount(std::uint16_t aiCount)
		{
			using func_t = decltype(&NavMeshTriangle::SetObjectCount);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::SetObjectCount };
			func(this, aiCount);
		}

		void Endian()
		{
			using func_t = decltype(&NavMeshTriangle::Endian);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::Endian };
			func(this);
		}

		std::uint16_t GetObjectCount() const
		{
			using func_t = decltype(&NavMeshTriangle::GetObjectCount);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::GetObjectCount };
			return func(this);
		}

		bool IsWater() const
		{
			using func_t = decltype(&NavMeshTriangle::IsWater);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::IsWater };
			return func(this);
		}

		static std::uint32_t GetCoverLevel(float a_arg1, bool a_arg2, bool abRoundDown)
		{
			using func_t = decltype(&NavMeshTriangle::GetCoverLevel);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangle::GetCoverLevel };
			return func(a_arg1, a_arg2, abRoundDown);
		}

	public:
		// members
		std::uint16_t Vertices[3];    // 00
		std::uint16_t Triangles[3];   // 06
		std::uint32_t TriangleFlags;  // 0C
	};
}
