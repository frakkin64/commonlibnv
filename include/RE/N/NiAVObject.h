#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObjectNET.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerList.h"
#include "RE/N/NiTransform.h"

namespace RE
{
	class BSNiBound;
	class NiBound;
	class NiCollisionObject;
	class NiCullingProcess;
	class NiMatrix3;
	class NiNode;
	class NiPoint3;
	class NiProperty;
	class NiQuaternion;
	class NiUpdateData;

	class NiAVObject :
		public NiObjectNET  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiAVObject };
		static constexpr auto VTABLE{ VTABLE::NiAVObject };

		// add
		virtual void Unk_23();                                                                    // 23
		virtual void Unk_24();                                                                    // 24
		virtual void Unk_25();                                                                    // 25
		virtual void Unk_26();                                                                    // 26
		virtual void Unk_27();                                                                    // 27
		virtual void Unk_28();                                                                    // 28
		virtual void UpdateDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags);          // 29
		virtual void UpdateSelectedDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags);  // 2A
		virtual void UpdateRigidDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags);     // 2B
		virtual void Unk_2C();                                                                    // 2C
		virtual void Unk_2D();                                                                    // 2D
		virtual void UpdateWorldData(NiUpdateData& UpdateData);                                   // 2E
		virtual void UpdateWorldBound();                                                          // 2F
		virtual void UpdateTransformAndBounds(NiUpdateData& UpdateData);                          // 30
		virtual void Unk_31();                                                                    // 31
		virtual void Unk_32();                                                                    // 32
		virtual void Unk_33();                                                                    // 33
		virtual void Unk_34();                                                                    // 34
		virtual void OnVisible(NiCullingProcess& kCuller);                                        // 35
		virtual void Unk_36();                                                                    // 36

		void AttachProperty(NiProperty* pkProperty)
		{
			using func_t = decltype(&NiAVObject::AttachProperty);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::AttachProperty };
			func(this, pkProperty);
		}

		NiBound const& GetWorldBound() const
		{
			using func_t = decltype(&NiAVObject::GetWorldBound);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::GetWorldBound };
			return func(this);
		}

		void SetRotate(NiMatrix3 const& kRot)
		{
			using func_t = void (NiAVObject::*)(NiMatrix3 const&);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetRotate };
			func(this, kRot);
		}

		void SetTranslate(NiPoint3 const& kTrn)
		{
			using func_t = void (NiAVObject::*)(NiPoint3 const&);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetTranslate };
			func(this, kTrn);
		}

		void SetScale(float fScale)
		{
			using func_t = decltype(&NiAVObject::SetScale);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetScale };
			func(this, fScale);
		}

		void SetAppCulled(bool bAppCulled)
		{
			using func_t = decltype(&NiAVObject::SetAppCulled);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetAppCulled };
			func(this, bAppCulled);
		}

		bool GetAppCulled() const
		{
			using func_t = decltype(&NiAVObject::GetAppCulled);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::GetAppCulled };
			return func(this);
		}

		NiPoint3 const& GetWorldTranslate() const
		{
			using func_t = decltype(&NiAVObject::GetWorldTranslate);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::GetWorldTranslate };
			return func(this);
		}

		NiMatrix3 const& GetWorldRotate() const
		{
			using func_t = decltype(&NiAVObject::GetWorldRotate);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::GetWorldRotate };
			return func(this);
		}

		void SetSelectiveUpdate(bool bUpdate)
		{
			using func_t = decltype(&NiAVObject::SetSelectiveUpdate);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetSelectiveUpdate };
			func(this, bUpdate);
		}

		std::int32_t IsVisualObject() const
		{
			using func_t = decltype(&NiAVObject::IsVisualObject);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::IsVisualObject };
			return func(this);
		}

		void SetTranslate(float x, float y, float z)
		{
			using func_t = void (NiAVObject::*)(float, float, float);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetTranslate_1 };
			func(this, x, y, z);
		}

		void UpdateObjectControllers(NiUpdateData& UpdateData, bool bProperties)
		{
			using func_t = decltype(&NiAVObject::UpdateObjectControllers);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::UpdateObjectControllers };
			func(this, UpdateData, bProperties);
		}

		void SetWorldTranslate(NiPoint3 const& kTrn)
		{
			using func_t = decltype(&NiAVObject::SetWorldTranslate);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetWorldTranslate };
			func(this, kTrn);
		}

		bool GetSelectiveUpdate() const
		{
			using func_t = decltype(&NiAVObject::GetSelectiveUpdate);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::GetSelectiveUpdate };
			return func(this);
		}

		void DetachParent()
		{
			using func_t = decltype(&NiAVObject::DetachParent);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::DetachParent };
			func(this);
		}

		NiTransform const& GetWorldTransform() const
		{
			using func_t = decltype(&NiAVObject::GetWorldTransform);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::GetWorldTransform };
			return func(this);
		}

		void SetAlwaysDraw(bool abVal)
		{
			using func_t = decltype(&NiAVObject::SetAlwaysDraw);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetAlwaysDraw };
			func(this, abVal);
		}

		void SetFixedBound(bool abTF)
		{
			using func_t = decltype(&NiAVObject::SetFixedBound);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetFixedBound };
			func(this, abTF);
		}

		void CreateBoundIfNone()
		{
			using func_t = decltype(&NiAVObject::CreateBoundIfNone);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::CreateBoundIfNone };
			func(this);
		}

		void GetRotate(NiQuaternion& kQuat) const
		{
			using func_t = decltype(&NiAVObject::GetRotate);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::GetRotate };
			func(this, kQuat);
		}

		bool QHasMovingSound() const
		{
			using func_t = decltype(&NiAVObject::QHasMovingSound);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::QHasMovingSound };
			return func(this);
		}

		void SetSelectiveUpdateRigid(bool bRigid)
		{
			using func_t = decltype(&NiAVObject::SetSelectiveUpdateRigid);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetSelectiveUpdateRigid };
			func(this, bRigid);
		}

		void SetCollisionObject(NiCollisionObject* pkCollisionObject)
		{
			using func_t = decltype(&NiAVObject::SetCollisionObject);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetCollisionObject };
			func(this, pkCollisionObject);
		}

		void SetDisplayObject(bool bDisplay)
		{
			using func_t = decltype(&NiAVObject::SetDisplayObject);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetDisplayObject };
			func(this, bDisplay);
		}

		bool GetDisplayObject() const
		{
			using func_t = decltype(&NiAVObject::GetDisplayObject);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::GetDisplayObject };
			return func(this);
		}

		void SetRotate(float fAngle, float x, float y, float z)
		{
			using func_t = void (NiAVObject::*)(float, float, float, float);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetRotate_1 };
			func(this, fAngle, x, y, z);
		}

		bool QFadedIn() const
		{
			using func_t = decltype(&NiAVObject::QFadedIn);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::QFadedIn };
			return func(this);
		}

		float GetWorldBoundRadius()
		{
			using func_t = decltype(&NiAVObject::GetWorldBoundRadius);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::GetWorldBoundRadius };
			return func(this);
		}

		float GetWorldScale() const
		{
			using func_t = decltype(&NiAVObject::GetWorldScale);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::GetWorldScale };
			return func(this);
		}

		float GetScale() const
		{
			using func_t = decltype(&NiAVObject::GetScale);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::GetScale };
			return func(this);
		}

		void Update(NiUpdateData& UpdateData)
		{
			using func_t = decltype(&NiAVObject::Update);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::Update };
			func(this, UpdateData);
		}

		void UpdateSelected(NiUpdateData& UpdateData)
		{
			using func_t = decltype(&NiAVObject::UpdateSelected);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::UpdateSelected };
			func(this, UpdateData);
		}

		void UpdateProperties()
		{
			using func_t = decltype(&NiAVObject::UpdateProperties);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::UpdateProperties };
			func(this);
		}

		void RemoveProperty(std::int32_t iType)
		{
			using func_t = decltype(&NiAVObject::RemoveProperty);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::RemoveProperty };
			func(this, iType);
		}

	protected:
		void SetBit(bool bVal, std::uint32_t uMask)
		{
			using func_t = decltype(&NiAVObject::SetBit);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::SetBit };
			func(this, bVal, uMask);
		}

		bool GetBit(std::uint32_t uMask) const
		{
			using func_t = decltype(&NiAVObject::GetBit);
			static REL::Relocation<func_t> func{ Offsets::NiAVObject::GetBit };
			return func(this, uMask);
		}

	public:
		// members
		NiNode*                               m_pkParent;           // 18
		NiPointer<NiCollisionObject>          m_spCollisionObject;  // 1C
		BSNiBound*                            m_kWorldBound;        // 20
		NiTPointerList<NiPointer<NiProperty>> m_kPropertyList;      // 24
		std::uint32_t                         m_uFlags;             // 30
		NiTransform                           m_kLocal;             // 34
		NiTransform                           m_kWorld;             // 68
	};
	static_assert(sizeof(NiAVObject) == 0x9C);
}
