#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAVObject.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiPropertyState.h"

namespace RE
{
	class NiAdditionalGeometryData;
	class NiBound;
	class NiColorA;
	class NiGeometryData;
	class NiPoint3;
	class NiRenderer;
	class NiShader;
	class NiSkinInstance;

	class NiGeometry :
		public NiAVObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiGeometry };
		static constexpr auto VTABLE{ VTABLE::NiGeometry };

		// add
		virtual void RenderImmediate(NiRenderer* pkRenderer);  // 37
		virtual void Unk_38();                                 // 38
		virtual void Unk_39();                                 // 39
		virtual void Unk_3A();                                 // 3A
		virtual void Unk_3B();                                 // 3B

		NiSkinInstance* GetSkinInstance() const
		{
			using func_t = decltype(&NiGeometry::GetSkinInstance);
			static REL::Relocation<func_t> func{ Offsets::NiGeometry::GetSkinInstance };
			return func(this);
		}

		std::uint16_t GetVertexCount() const
		{
			using func_t = decltype(&NiGeometry::GetVertexCount);
			static REL::Relocation<func_t> func{ Offsets::NiGeometry::GetVertexCount };
			return func(this);
		}

		NiPoint3* GetVertices() const
		{
			using func_t = decltype(&NiGeometry::GetVertices);
			static REL::Relocation<func_t> func{ Offsets::NiGeometry::GetVertices };
			return func(this);
		}

		void SetModelBound(NiBound const& kBound)
		{
			using func_t = decltype(&NiGeometry::SetModelBound);
			static REL::Relocation<func_t> func{ Offsets::NiGeometry::SetModelBound };
			func(this, kBound);
		}

		NiPoint3* GetNormals() const
		{
			using func_t = decltype(&NiGeometry::GetNormals);
			static REL::Relocation<func_t> func{ Offsets::NiGeometry::GetNormals };
			return func(this);
		}

		NiColorA* GetColors() const
		{
			using func_t = decltype(&NiGeometry::GetColors);
			static REL::Relocation<func_t> func{ Offsets::NiGeometry::GetColors };
			return func(this);
		}

		std::uint16_t GetActiveVertexCount() const
		{
			using func_t = decltype(&NiGeometry::GetActiveVertexCount);
			static REL::Relocation<func_t> func{ Offsets::NiGeometry::GetActiveVertexCount };
			return func(this);
		}

		void SetSkinInstance(NiSkinInstance* pSkinInstance)
		{
			using func_t = decltype(&NiGeometry::SetSkinInstance);
			static REL::Relocation<func_t> func{ Offsets::NiGeometry::SetSkinInstance };
			func(this, pSkinInstance);
		}

		NiBound& GetModelBound() const
		{
			using func_t = decltype(&NiGeometry::GetModelBound);
			static REL::Relocation<func_t> func{ Offsets::NiGeometry::GetModelBound };
			return func(this);
		}

		void SetAdditionalGeometryData(NiAdditionalGeometryData* pkData)
		{
			using func_t = decltype(&NiGeometry::SetAdditionalGeometryData);
			static REL::Relocation<func_t> func{ Offsets::NiGeometry::SetAdditionalGeometryData };
			func(this, pkData);
		}

		NiGeometryData* GetModelData() const
		{
			using func_t = decltype(&NiGeometry::GetModelData);
			static REL::Relocation<func_t> func{ Offsets::NiGeometry::GetModelData };
			return func(this);
		}

	public:
		// members
		NiPropertyState           m_PropertyState;   // 9C
		NiPointer<NiGeometryData> m_spModelData;     // B8
		NiPointer<NiSkinInstance> m_spSkinInstance;  // BC
		NiShader*                 m_spShader;        // C0
	};
}
