#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiNode.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerList.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAVObject;
	class NiCloningProcess;
	class NiObject;
	class NiParticles;
	class NiStream;
	class NiUpdateData;

	class BSMasterParticleSystem :
		public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMasterParticleSystem };
		static constexpr auto VTABLE{ VTABLE::BSMasterParticleSystem };

		// override (NiNode)
		virtual ~BSMasterParticleSystem() = default;                                                       // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                             // 12
		virtual void LoadBinary(NiStream& arStream) override;                                              // 13
		virtual void LinkObject(NiStream& arStream) override;                                              // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                                     // 15
		virtual void SaveBinary(NiStream& arStream) override;                                              // 16
		virtual bool IsEqual(NiObject* apObject) override;                                                 // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                       // 18
		virtual void PostLinkObject(NiStream& kStream) override;                                           // 1B
		virtual void UpdateDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;          // 29
		virtual void UpdateSelectedDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;  // 2A
		virtual void UpdateRigidDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;     // 2B

		// members
		NiTPointerList<NiPointer<NiAVObject>> lEmitterObjList;          // AC
		std::uint16_t                         usActiveEmitterObjCount;  // B8
		std::uint16_t                         usMaxEmitterObj;          // BA
		std::uint16_t                         usMaxParticlesPerFrame;   // BC
		std::uint16_t                         padBE;                    // BE
		void*                                 FirstEmitterObjIter;      // C0
		std::uint32_t                         uiIndex;                  // C4
		std::uint32_t                         uiEditorIndex;            // C8
		NiTPrimitiveArray<NiParticles*>       ChildParticles;           // CC
		float                                 fMasterPSysTime;          // DC
	};
	static_assert(sizeof(BSMasterParticleSystem) == 0xE0);
}
