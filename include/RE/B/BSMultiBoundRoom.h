#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSMultiBoundNode.h"
#include "RE/B/BSMultiBoundShape_BSMBIntersectResult.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerList.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSCompoundFrustum;
	class BSMultiBound;
	class BSOcclusionPlane;
	class BSPortal;
	class NiBound;
	class NiCloningProcess;
	class NiCullingProcess;
	class NiObject;
	class NiPoint3;
	class NiStream;
	class ShadowSceneLight;

	class BSMultiBoundRoom :
		public BSMultiBoundNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiBoundRoom };
		static constexpr auto VTABLE{ VTABLE::BSMultiBoundRoom };

		// override (BSMultiBoundNode)
		virtual ~BSMultiBoundRoom() = default;                                                                // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                                // 12
		virtual void LoadBinary(NiStream& arStream) override;                                                 // 13
		virtual void LinkObject(NiStream& arStream) override;                                                 // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                                        // 15
		virtual void SaveBinary(NiStream& arStream) override;                                                 // 16
		virtual bool IsEqual(NiObject* apObject) override;                                                    // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                          // 18
		virtual void UpdateWorldBound() override;                                                             // 2F
		virtual void OnVisible(NiCullingProcess& kCuller) override;                                           // 35
		virtual BSMultiBoundRoom* GetMultiBoundRoom() override;                                               // 41
		virtual bool QPointWithin(NiPoint3& aPoint) override;                                                 // 42
		virtual BSMultiBoundShape_BSMBIntersectResult CheckBound(BSMultiBound const& aTargetBound) override;  // 43
		virtual BSMultiBoundShape_BSMBIntersectResult CheckBound(NiBound const& aTargetBound) override;       // 44

		void SetCompoundFrustum(BSCompoundFrustum* apFrustum)
		{
			using func_t = decltype(&BSMultiBoundRoom::SetCompoundFrustum);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundRoom::SetCompoundFrustum };
			func(this, apFrustum);
		}

		void FreeCompoundFrustum()
		{
			using func_t = decltype(&BSMultiBoundRoom::FreeCompoundFrustum);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundRoom::FreeCompoundFrustum };
			func(this);
		}

		BSMultiBoundRoom* ctor()
		{
			using func_t = BSMultiBoundRoom*(__thiscall*)(BSMultiBoundRoom*);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundRoom::ctor };
			return func(this);
		}

	public:
		// members
		NiTPointerList<BSPortal*>               kPortalList;            // B4
		NiTPointerList<BSOcclusionPlane*>       lOccluderList;          // C0
		BSCompoundFrustum*                      pCompoundFrustum;       // CC
		NiTPointerList<NiPointer<BSMultiBound>> kJoinedMultiBoundList;  // D0
		BSSimpleArray<ShadowSceneLight*, 1024>  kLights;                // DC
	};
	static_assert(sizeof(BSMultiBoundRoom) == 0xEC);
}
