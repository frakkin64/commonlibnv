#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpMotion_MotionType.h"
#include "RE/N/NiCollisionObject.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class bhkWorldObject;
	class hkpWorldObject;

	class bhkNiCollisionObject :
		public NiCollisionObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkNiCollisionObject };
		static constexpr auto VTABLE{ VTABLE::bhkNiCollisionObject };

		// add
		virtual NiPoint3 GetVelocity();                                                                      // 28
		virtual void hktoNiTransform();                                                                      // 29
		virtual void NitohkTransform();                                                                      // 2A
		virtual void ClearVelocities();                                                                      // 2B
		virtual void SetMotionType(hkpMotion_MotionType __formal, bhkWorldObject* __formal, bool __formal);  // 2C
		virtual bool QKeyframe();                                                                            // 2D
		virtual void Unk_2E();                                                                               // 2E
		virtual void Unk_2F();                                                                               // 2F
		virtual void Unk_30();                                                                               // 30

		static bhkNiCollisionObject* GetbhkNiCollisionObject(NiAVObject* apObject)
		{
			using func_t = decltype(&bhkNiCollisionObject::GetbhkNiCollisionObject);
			static REL::Relocation<func_t> func{ Offsets::bhkNiCollisionObject::GetbhkNiCollisionObject };
			return func(apObject);
		}

		static bhkNiCollisionObject* Getbhk(hkpWorldObject const* apBody)
		{
			using func_t = decltype(&bhkNiCollisionObject::Getbhk);
			static REL::Relocation<func_t> func{ Offsets::bhkNiCollisionObject::Getbhk };
			return func(apBody);
		}

		void SetReset(bool abTF)
		{
			using func_t = decltype(&bhkNiCollisionObject::SetReset);
			static REL::Relocation<func_t> func{ Offsets::bhkNiCollisionObject::SetReset };
			func(this, abTF);
		}

		void SetNotify(bool abTF)
		{
			using func_t = decltype(&bhkNiCollisionObject::SetNotify);
			static REL::Relocation<func_t> func{ Offsets::bhkNiCollisionObject::SetNotify };
			func(this, abTF);
		}

		void SetSetLocal(bool abTF)
		{
			using func_t = decltype(&bhkNiCollisionObject::SetSetLocal);
			static REL::Relocation<func_t> func{ Offsets::bhkNiCollisionObject::SetSetLocal };
			func(this, abTF);
		}

	protected:
		void SetBit(bool bVal, std::uint16_t uMask)
		{
			using func_t = decltype(&bhkNiCollisionObject::SetBit);
			static REL::Relocation<func_t> func{ Offsets::bhkNiCollisionObject::SetBit };
			func(this, bVal, uMask);
		}

	public:
		// members
		std::uint16_t             m_uFlags;       // 0C
		std::uint16_t             pad0E;          // 0E
		NiPointer<bhkWorldObject> spWorldObject;  // 10
	};
}
