#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFrustum.h"
#include "RE/N/NiFrustumPlanes.h"

namespace RE
{
	class NiAVObject;
	class NiCamera;
	class NiGeometry;
	class NiVisibleArray;

	class __declspec(novtable) NiCullingProcess
	{
	public:
		static constexpr auto RTTI{ RTTI::NiCullingProcess };
		static constexpr auto VTABLE{ VTABLE::NiCullingProcess };

		// add
		virtual void Unk_00();                                                                              // 00
		virtual void Unk_01();                                                                              // 01
		virtual void Unk_02();                                                                              // 02
		virtual void Unk_03();                                                                              // 03
		virtual void Unk_04();                                                                              // 04
		virtual void Unk_05();                                                                              // 05
		virtual void Unk_06();                                                                              // 06
		virtual void Unk_07();                                                                              // 07
		virtual void Unk_08();                                                                              // 08
		virtual void Unk_09();                                                                              // 09
		virtual void Unk_0A();                                                                              // 0A
		virtual void Unk_0B();                                                                              // 0B
		virtual void Unk_0C();                                                                              // 0C
		virtual void Unk_0D();                                                                              // 0D
		virtual void Unk_0E();                                                                              // 0E
		virtual void Unk_0F();                                                                              // 0F
		virtual ~NiCullingProcess() = default;                                                              // 10
		virtual void Process(NiCamera const* apCamera, NiAVObject* apScene, NiVisibleArray* apVisibleSet);  // 12 (reversed overload group)
		virtual void Process(NiAVObject* apObject);                                                         // 11 (reversed overload group)
		virtual void AppendVirtual(NiGeometry& kVisible);                                                   // 13

		NiCullingProcess* ctor(NiVisibleArray* pkVisibleSet)
		{
			using func_t = NiCullingProcess*(__thiscall*)(NiCullingProcess*, NiVisibleArray*);
			static REL::Relocation<func_t> func{ Offsets::NiCullingProcess::ctor };
			return func(this, pkVisibleSet);
		}

	public:
		// members
		// not placed: p0123x(absent), p0123y(absent), p0123z(absent), p0123w(absent), p45x(absent), p45y(absent), p45z(absent), p45w(absent)
		const bool      m_bUseVirtualAppend;  // 04
		std::uint8_t    pad05[0x3];           // 05
		NiVisibleArray* m_pkVisibleSet;       // 08
		const NiCamera* m_pkCamera;           // 0C
		NiFrustum       m_kFrustum;           // 10
		NiFrustumPlanes m_kPlanes;            // 2C
	};
}
