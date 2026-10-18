#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BIPED_PART.h"
#include "RE/C/COL_LAYER.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class CFilter
	{
	public:
		COL_LAYER GetLayer() const
		{
			using func_t = decltype(&CFilter::GetLayer);
			static REL::Relocation<func_t> func{ Offsets::CFilter::GetLayer };
			return func(this);
		}

		void SetLayer(COL_LAYER aeLayer)
		{
			using func_t = decltype(&CFilter::SetLayer);
			static REL::Relocation<func_t> func{ Offsets::CFilter::SetLayer };
			func(this, aeLayer);
		}

		std::uint32_t GetGroup() const
		{
			using func_t = decltype(&CFilter::GetGroup);
			static REL::Relocation<func_t> func{ Offsets::CFilter::GetGroup };
			return func(this);
		}

		std::uint32_t GetPart() const
		{
			using func_t = decltype(&CFilter::GetPart);
			static REL::Relocation<func_t> func{ Offsets::CFilter::GetPart };
			return func(this);
		}

		void SetGroup(std::uint32_t aiGroup)
		{
			using func_t = decltype(&CFilter::SetGroup);
			static REL::Relocation<func_t> func{ Offsets::CFilter::SetGroup };
			func(this, aiGroup);
		}

		CFilter* ctor(COL_LAYER aeLayer, std::uint32_t aiGroup, BIPED_PART aePart)
		{
			using func_t = CFilter*(__thiscall*)(CFilter*, COL_LAYER, std::uint32_t, BIPED_PART);
			static REL::Relocation<func_t> func{ Offsets::CFilter::ctor };
			return func(this, aeLayer, aiGroup, aePart);
		}

		bool QBipLayer() const
		{
			using func_t = decltype(&CFilter::QBipLayer);
			static REL::Relocation<func_t> func{ Offsets::CFilter::QBipLayer };
			return func(this);
		}

		BIPED_PART GetBipedPart() const
		{
			using func_t = decltype(&CFilter::GetBipedPart);
			static REL::Relocation<func_t> func{ Offsets::CFilter::GetBipedPart };
			return func(this);
		}

		void SetNoCollision(bool abTF)
		{
			using func_t = decltype(&CFilter::SetNoCollision);
			static REL::Relocation<func_t> func{ Offsets::CFilter::SetNoCollision };
			func(this, abTF);
		}

		CFilter* ctor(std::uint32_t iV)
		{
			using func_t = CFilter*(__thiscall*)(CFilter*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::CFilter::ctor_1 };
			return func(this, iV);
		}

		bool QNoCollision() const
		{
			using func_t = decltype(&CFilter::QNoCollision);
			static REL::Relocation<func_t> func{ Offsets::CFilter::QNoCollision };
			return func(this);
		}

		void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings)
		{
			using func_t = decltype(&CFilter::GetViewerStrings);
			static REL::Relocation<func_t> func{ Offsets::CFilter::GetViewerStrings };
			func(this, apStrings);
		}

	public:
		// members
		std::uint32_t iFilter;  // 00
	};
}
