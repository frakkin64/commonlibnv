#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/G/GridArray.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSRenderedTexture;
	class GridCell;
	class NiNode;

	class GridCellArray :
		public GridArray  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::GridCellArray };
		static constexpr auto VTABLE{ VTABLE::GridCellArray };

		// override (GridArray)
		virtual ~GridCellArray() = default;                                                                                      // 00
		virtual void Init() override;                                                                                            // 01
		virtual void KillAll() override;                                                                                         // 03
		virtual bool SetCenter(std::int32_t aiX, std::int32_t aiY) override;                                                     // 04
		virtual void Detach(std::uint32_t a_arg1, std::uint32_t a_arg2) override;                                                // 06
		virtual void ClearItem(std::uint32_t a_arg1, std::uint32_t a_arg2) override;                                             // 07
		virtual void MoveItem(std::uint32_t a_arg1, std::uint32_t a_arg2, std::uint32_t a_arg3, std::uint32_t a_arg4) override;  // 08
		virtual void SwapItem(std::uint32_t a_arg1, std::uint32_t a_arg2, std::uint32_t a_arg3, std::uint32_t a_arg4) override;  // 09

		static void SetRecreateCanopyShadowMaskTexture(bool abRecreate)
		{
			using func_t = decltype(&GridCellArray::SetRecreateCanopyShadowMaskTexture);
			static REL::Relocation<func_t> func{ Offsets::GridCellArray::SetRecreateCanopyShadowMaskTexture };
			func(abRecreate);
		}

		GridCellArray* ctor()
		{
			using func_t = GridCellArray*(__thiscall*)(GridCellArray*);
			static REL::Relocation<func_t> func{ Offsets::GridCellArray::ctor };
			return func(this);
		}

		GridCell* Get(std::uint32_t aiX, std::uint32_t aiY)
		{
			using func_t = decltype(&GridCellArray::Get);
			static REL::Relocation<func_t> func{ Offsets::GridCellArray::Get };
			return func(this, aiX, aiY);
		}

		bool GetAttached(std::uint32_t aiX, std::uint32_t aiY)
		{
			using func_t = decltype(&GridCellArray::GetAttached);
			static REL::Relocation<func_t> func{ Offsets::GridCellArray::GetAttached };
			return func(this, aiX, aiY);
		}

		void AttachAllLand3D()
		{
			using func_t = decltype(&GridCellArray::AttachAllLand3D);
			static REL::Relocation<func_t> func{ Offsets::GridCellArray::AttachAllLand3D };
			func(this);
		}

		void UpdateDistantLandBlending()
		{
			using func_t = decltype(&GridCellArray::UpdateDistantLandBlending);
			static REL::Relocation<func_t> func{ Offsets::GridCellArray::UpdateDistantLandBlending };
			func(this);
		}

		void AttachToWorld(NiNode* apRoot, std::uint32_t aiX, std::uint32_t aiY)
		{
			using func_t = decltype(&GridCellArray::AttachToWorld);
			static REL::Relocation<func_t> func{ Offsets::GridCellArray::AttachToWorld };
			func(this, apRoot, aiX, aiY);
		}

		void ShowLandBorders(bool abShow)
		{
			using func_t = decltype(&GridCellArray::ShowLandBorders);
			static REL::Relocation<func_t> func{ Offsets::GridCellArray::ShowLandBorders };
			func(this, abShow);
		}

		void ToggleCollisionGeometry()
		{
			using func_t = decltype(&GridCellArray::ToggleCollisionGeometry);
			static REL::Relocation<func_t> func{ Offsets::GridCellArray::ToggleCollisionGeometry };
			func(this);
		}

		void ShowPrimitives(bool abShow)
		{
			using func_t = decltype(&GridCellArray::ShowPrimitives);
			static REL::Relocation<func_t> func{ Offsets::GridCellArray::ShowPrimitives };
			func(this, abShow);
		}

		void ClearCanopyShadowMaskTexture()
		{
			using func_t = decltype(&GridCellArray::ClearCanopyShadowMaskTexture);
			static REL::Relocation<func_t> func{ Offsets::GridCellArray::ClearCanopyShadowMaskTexture };
			func(this);
		}

		void RecreateCanopyShadowMaskTexture()
		{
			using func_t = decltype(&GridCellArray::RecreateCanopyShadowMaskTexture);
			static REL::Relocation<func_t> func{ Offsets::GridCellArray::RecreateCanopyShadowMaskTexture };
			func(this);
		}

	public:
		// members
		GridCell*                    pGridCellA;     // 10
		NiPoint3                     WorldCenter;    // 14
		bool                         bLandAttached;  // 20
		std::uint8_t                 pad21[0x3];     // 21
		NiPointer<BSRenderedTexture> spTexRendered;  // 24
	};
	static_assert(sizeof(GridCellArray) == 0x28);
}
