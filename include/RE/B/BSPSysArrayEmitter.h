#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysVolumeEmitter.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAVObject;
	class NiCloningProcess;
	class NiObject;
	class NiPoint3;
	class NiStream;
	class NiTransform;

	class BSPSysArrayEmitter :
		public NiPSysVolumeEmitter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPSysArrayEmitter };
		static constexpr auto VTABLE{ VTABLE::BSPSysArrayEmitter };

		enum class PARTICLEARRAYTYPE : std::int32_t
		{
			kPAT_VERTICES = 0x0,
			kPAT_SPECIFICOBJS = 0x1,
			kPAT_NODES = 0x2,
		};

		// override (NiPSysVolumeEmitter)
		virtual ~BSPSysArrayEmitter() = default;                                                                                                  // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                                                                    // 12
		virtual void LoadBinary(NiStream& arStream) override;                                                                                     // 13
		virtual void LinkObject(NiStream& arStream) override;                                                                                     // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                                                                            // 15
		virtual void SaveBinary(NiStream& arStream) override;                                                                                     // 16
		virtual bool IsEqual(NiObject* apObject) override;                                                                                        // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                                                              // 18
		virtual void ProcessClone(NiCloningProcess& kCloning) override;                                                                           // 1A
		virtual void PostLinkObject(NiStream& kStream) override;                                                                                  // 1B
		virtual void SetEmitterObj(NiAVObject* apEmitter) override;                                                                               // 2B
		virtual void ComputeVolumeInitialPositionAndVelocity(NiTransform& arEmitterToPSys, NiPoint3& arPosition, NiPoint3& arVelocity) override;  // 2C

	protected:
		BSPSysArrayEmitter* ctor()
		{
			using func_t = BSPSysArrayEmitter*(__thiscall*)(BSPSysArrayEmitter*);
			static REL::Relocation<func_t> func{ Offsets::BSPSysArrayEmitter::ctor };
			return func(this);
		}

		char* GetViewerString(char const* apPrefix, BSPSysArrayEmitter::PARTICLEARRAYTYPE aeType)
		{
			using func_t = decltype(&BSPSysArrayEmitter::GetViewerString);
			static REL::Relocation<func_t> func{ Offsets::BSPSysArrayEmitter::GetViewerString };
			return func(this, apPrefix, aeType);
		}

	public:
		// members
		BSPSysArrayEmitter::PARTICLEARRAYTYPE    eType;     // 58
		NiTPrimitiveArray<NiPointer<NiAVObject>> aObjects;  // 5C
	};
	static_assert(sizeof(BSPSysArrayEmitter) == 0x6C);
}
