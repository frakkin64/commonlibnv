#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSNiBound;
	class NiAVObject;
	class NiCloningProcess;
	class NiSkinData;
	class NiSkinPartition;
	class NiStream;

	class NiSkinInstance :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSkinInstance };
		static constexpr auto VTABLE{ VTABLE::NiSkinInstance };

		// override (NiObject)
		virtual ~NiSkinInstance() = default;                                          // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void PostLinkObject(NiStream& kStream) override;                      // 1B
		virtual void SetBound(BSNiBound* apBound) override;                           // 1E

		void SetBone(std::uint32_t i, NiAVObject* pkBone)
		{
			using func_t = decltype(&NiSkinInstance::SetBone);
			static REL::Relocation<func_t> func{ Offsets::NiSkinInstance::SetBone };
			func(this, i, pkBone);
		}

		NiSkinData* GetSkinData() const
		{
			using func_t = decltype(&NiSkinInstance::GetSkinData);
			static REL::Relocation<func_t> func{ Offsets::NiSkinInstance::GetSkinData };
			return func(this);
		}

		NiSkinInstance* ctor(NiSkinData* pkSkinData, NiAVObject* pkRootParent, NiAVObject** ppkBones)
		{
			using func_t = NiSkinInstance*(__thiscall*)(NiSkinInstance*, NiSkinData*, NiAVObject*, NiAVObject**);
			static REL::Relocation<func_t> func{ Offsets::NiSkinInstance::ctor };
			return func(this, pkSkinData, pkRootParent, ppkBones);
		}

	public:
		// members
		NiPointer<NiSkinData>      m_spSkinData;                      // 08
		NiPointer<NiSkinPartition> m_spSkinPartition;                 // 0C
		NiAVObject*                m_pkRootParent;                    // 10
		NiAVObject**               m_ppkBones;                        // 14
		std::uint32_t              m_uiFrameID;                       // 18
		std::uint32_t              m_uiNumMatrices;                   // 1C
		std::uint32_t              m_uiNumRegisters;                  // 20
		std::uint32_t              m_uiAllocatedSize;                 // 24
		void*                      m_pvBoneMatrices;                  // 28
		void*                      m_pvPrevBoneMatrices;              // 2C
		void*                      m_pvSkinToWorldWorldToSkinMatrix;  // 30
	};
	static_assert(sizeof(NiSkinInstance) == 0x34);
}
