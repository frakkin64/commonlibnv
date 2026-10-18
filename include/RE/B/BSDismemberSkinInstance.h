#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiSkinInstance.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAVObject;
	class NiCloningProcess;
	class NiObject;
	class NiSkinData;
	class NiStream;

	class BSDismemberSkinInstance :
		public NiSkinInstance  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDismemberSkinInstance };
		static constexpr auto VTABLE{ VTABLE::BSDismemberSkinInstance };

		class PartitionData;

		class PartitionData
		{
		public:
			// members
			bool          bEnabled;       // 00?
			bool          bStateChange;   // 01?
			std::uint16_t usBodyPartNum;  // 02?
		};

		// override (NiSkinInstance)
		virtual ~BSDismemberSkinInstance() = default;                                 // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		void SetBodyPartEnabled(std::uint16_t ausBodyPartNum, bool abEnabled)
		{
			using func_t = decltype(&BSDismemberSkinInstance::SetBodyPartEnabled);
			static REL::Relocation<func_t> func{ Offsets::BSDismemberSkinInstance::SetBodyPartEnabled };
			func(this, ausBodyPartNum, abEnabled);
		}

		BSDismemberSkinInstance* ctor(NiSkinData* pkSkinData, NiAVObject* pkRootParent, NiAVObject** ppkBones, BSDismemberSkinInstance::PartitionData* apPartitionDataArray, std::uint32_t auiPartitionDataArraySize)
		{
			using func_t = BSDismemberSkinInstance*(__thiscall*)(BSDismemberSkinInstance*, NiSkinData*, NiAVObject*, NiAVObject**, BSDismemberSkinInstance::PartitionData*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BSDismemberSkinInstance::ctor };
			return func(this, pkSkinData, pkRootParent, ppkBones, apPartitionDataArray, auiPartitionDataArraySize);
		}

	public:
		// members
		std::uint32_t                           uiPartitionDataArraySize;  // 34
		BSDismemberSkinInstance::PartitionData* pPartitionDataArray;       // 38
		bool                                    bVisiblePartitions;        // 3C
		std::uint8_t                            pad3D[0x3];                // 3D
	};
	static_assert(sizeof(BSDismemberSkinInstance) == 0x40);
}
