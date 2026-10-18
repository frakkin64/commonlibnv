#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSCullingProcess_BSCPCullingType.h"
#include "RE/N/NiCullingProcess.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSCompoundFrustum;
	class NiAVObject;
	class NiAccumulator;
	class NiCamera;
	class NiGeometry;
	class NiVisibleArray;

	class BSCullingProcess :
		public NiCullingProcess  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSCullingProcess };
		static constexpr auto VTABLE{ VTABLE::BSCullingProcess };

		using BSCPCullingType = BSCullingProcess_BSCPCullingType;

		// override (NiCullingProcess)
		virtual ~BSCullingProcess() = default;                                                                       // 10
		virtual void Process(NiAVObject* apObject) override;                                                         // 11
		virtual void Process(NiCamera const* apCamera, NiAVObject* apScene, NiVisibleArray* apVisibleSet) override;  // 12
		virtual void AppendVirtual(NiGeometry& kVisible) override;                                                   // 13

		BSCullingProcess* ctor(NiVisibleArray* apVisibleSet)
		{
			using func_t = BSCullingProcess*(__thiscall*)(BSCullingProcess*, NiVisibleArray*);
			static REL::Relocation<func_t> func{ Offsets::BSCullingProcess::ctor };
			return func(this, apVisibleSet);
		}

		void SetAccumulator(NiAccumulator* apAccumulator)
		{
			using func_t = decltype(&BSCullingProcess::SetAccumulator);
			static REL::Relocation<func_t> func{ Offsets::BSCullingProcess::SetAccumulator };
			func(this, apAccumulator);
		}

		void PopCullMode()
		{
			using func_t = decltype(&BSCullingProcess::PopCullMode);
			static REL::Relocation<func_t> func{ Offsets::BSCullingProcess::PopCullMode };
			func(this);
		}

	public:
		// members
		BSCullingProcess_BSCPCullingType kCullMode;         // 90
		BSCullingProcess_BSCPCullingType eTypeStackA[10];   // 94
		std::uint32_t                    iCTStackIndex;     // BC
		BSCompoundFrustum*               pCompoundFrustum;  // C0
		NiPointer<NiAccumulator>         spAccumulator;     // C4
	};
	static_assert(sizeof(BSCullingProcess) == 0xC8);
}
