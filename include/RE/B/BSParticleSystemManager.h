#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiNode.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSMasterParticleSystem;
	class BSTaskletGroup;
	class NiAVObject;
	class NiCloningProcess;
	class NiObject;

	class BSParticleSystemManager :
		public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSParticleSystemManager };
		static constexpr auto VTABLE{ VTABLE::BSParticleSystemManager };

		// override (NiNode)
		virtual ~BSParticleSystemManager() = default;                                                           // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                                  // 12
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                            // 18
		virtual void AttachChild(NiAVObject* apChild, bool abFirstAvail) override;                              // 37
		virtual void DetachChild(NiAVObject* pkChild, NiPointer<NiAVObject>& aspAVObject) override;             // 39
		virtual void DetachChild(NiAVObject* pkChild) override;                                                 // 3A
		virtual void DetachChildAt(std::uint32_t i, NiPointer<NiAVObject>& aspAVObject) override;               // 3B
		virtual void DetachChildAt(std::uint32_t i) override;                                                   // 3C
		virtual void SetAt(std::uint32_t i, NiAVObject* pkChild, NiPointer<NiAVObject>& aspAVObject) override;  // 3D
		virtual void SetAt(std::uint32_t i, NiAVObject* pkChild) override;                                      // 3E

		BSParticleSystemManager* ctor()
		{
			using func_t = BSParticleSystemManager*(__thiscall*)(BSParticleSystemManager*);
			static REL::Relocation<func_t> func{ Offsets::BSParticleSystemManager::ctor };
			return func(this);
		}

		void AddEmitter(std::uint32_t auiMasterParticleSystemIndex, NiAVObject* apEmitter)
		{
			using func_t = decltype(&BSParticleSystemManager::AddEmitter);
			static REL::Relocation<func_t> func{ Offsets::BSParticleSystemManager::AddEmitter };
			func(this, auiMasterParticleSystemIndex, apEmitter);
		}

	protected:
		static bool CheckEmitterRecurse(NiAVObject* apObject, BSMasterParticleSystem* apMasterSystem)
		{
			using func_t = decltype(&BSParticleSystemManager::CheckEmitterRecurse);
			static REL::Relocation<func_t> func{ Offsets::BSParticleSystemManager::CheckEmitterRecurse };
			return func(apObject, apMasterSystem);
		}

	public:
		// members
		std::uint32_t*  aIndexToChildLookup;       // AC
		std::uint32_t   uiIndexToChildLookupSize;  // B0
		BSTaskletGroup* pUpdateTaskletGroup;       // B4
	};
	static_assert(sizeof(BSParticleSystemManager) == 0xB8);
}
