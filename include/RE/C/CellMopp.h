#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTObjectArray.h"

namespace RE
{
	class NiPoint3;
	class NiQuaternion;
	class NiTriStrips;
	class bhkRigidBody;
	class bhkWorld;

	class CellMopp :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CellMopp };
		static constexpr auto VTABLE{ VTABLE::CellMopp };

		// override (NiRefObject)
		virtual ~CellMopp() = default;  // 00

		CellMopp* ctor()
		{
			using func_t = CellMopp*(__thiscall*)(CellMopp*);
			static REL::Relocation<func_t> func{ Offsets::CellMopp::ctor };
			return func(this);
		}

		void Remove()
		{
			using func_t = decltype(&CellMopp::Remove);
			static REL::Relocation<func_t> func{ Offsets::CellMopp::Remove };
			func(this);
		}

		bool Create(NiTriStrips** appStripArray, std::uint32_t aiCount, float afOffset)
		{
			using func_t = decltype(&CellMopp::Create);
			static REL::Relocation<func_t> func{ Offsets::CellMopp::Create };
			return func(this, appStripArray, aiCount, afOffset);
		}

		bool Make(bhkWorld* apWorld, NiPoint3 const& arPosition, NiQuaternion const& arRotation)
		{
			using func_t = decltype(&CellMopp::Make);
			static REL::Relocation<func_t> func{ Offsets::CellMopp::Make };
			return func(this, apWorld, arPosition, arRotation);
		}

	public:
		// members
		NiTObjectArray<NiPointer<bhkRigidBody>> spRigidBodyA;  // 08
	};
	static_assert(sizeof(CellMopp) == 0x18);
}
