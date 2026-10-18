#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysEmitterCtlr.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSMasterParticleSystem;
	class NiCloningProcess;
	class NiObject;
	class NiStream;
	class NiUpdateData;

	class BSPSysMultiTargetEmitterCtlr :
		public NiPSysEmitterCtlr  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPSysMultiTargetEmitterCtlr };
		static constexpr auto VTABLE{ VTABLE::BSPSysMultiTargetEmitterCtlr };

		// override (NiPSysEmitterCtlr)
		virtual ~BSPSysMultiTargetEmitterCtlr() = default;                            // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void ProcessClone(NiCloningProcess& kCloning) override;               // 1A
		virtual void Update(NiUpdateData& UpdateData) override;                       // 25

		// members
		BSMasterParticleSystem* pMasterParticleSystem;  // 5C
		std::uint16_t           usMaxFullEmitters;      // 60
		std::uint16_t           pad62;                  // 62
	};
	static_assert(sizeof(BSPSysMultiTargetEmitterCtlr) == 0x64);
}
