#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkAction.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiObject;
	class NiStream;
	class bhkRigidBody;
	class bhkWorld;
	class hkpRigidBody;

	class bhkUnaryAction :
		public bhkAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkUnaryAction };
		static constexpr auto VTABLE{ VTABLE::bhkUnaryAction };

		// override (bhkAction)
		virtual ~bhkUnaryAction() = default;                                          // 00
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual bool Add(bhkWorld* __formal) override;                                // 27

		bhkUnaryAction* ctor()
		{
			using func_t = bhkUnaryAction*(__thiscall*)(bhkUnaryAction*);
			static REL::Relocation<func_t> func{ Offsets::bhkUnaryAction::ctor };
			return func(this);
		}

		bhkRigidBody* GetRigidBody()
		{
			using func_t = decltype(&bhkUnaryAction::GetRigidBody);
			static REL::Relocation<func_t> func{ Offsets::bhkUnaryAction::GetRigidBody };
			return func(this);
		}

		hkpRigidBody* GethkRigidBody()
		{
			using func_t = decltype(&bhkUnaryAction::GethkRigidBody);
			static REL::Relocation<func_t> func{ Offsets::bhkUnaryAction::GethkRigidBody };
			return func(this);
		}

		void ProcessEntity(bhkWorld* apWorld)
		{
			using func_t = decltype(&bhkUnaryAction::ProcessEntity);
			static REL::Relocation<func_t> func{ Offsets::bhkUnaryAction::ProcessEntity };
			func(this, apWorld);
		}
	};
	static_assert(sizeof(bhkUnaryAction) == 0x10);
}
