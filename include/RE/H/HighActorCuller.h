#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFadeNodeCuller.h"
#include "RE/M/MobIterOperator.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSMultiBound;
	class BSMultiBoundNode;
	class BSMultiBoundSphere;
	class MobileObject;
	class NiCamera;

	class HighActorCuller :
		public MobIterOperator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::HighActorCuller };
		static constexpr auto VTABLE{ VTABLE::HighActorCuller };

		// override (MobIterOperator)
		virtual void Operate(MobileObject* a_arg1) override;  // 00

		HighActorCuller* ctor()
		{
			using func_t = HighActorCuller*(__thiscall*)(HighActorCuller*);
			static REL::Relocation<func_t> func{ Offsets::HighActorCuller::ctor };
			return func(this);
		}

		void Run(NiCamera* apCamera)
		{
			using func_t = decltype(&HighActorCuller::Run);
			static REL::Relocation<func_t> func{ Offsets::HighActorCuller::Run };
			func(this, apCamera);
		}

	public:
		// members
		BSFadeNodeCuller              Culler;      // 08
		NiPointer<BSMultiBoundNode>   spMBNode;    // 98?
		NiPointer<BSMultiBound>       spMB;        // 9C?
		NiPointer<BSMultiBoundSphere> spMBSphere;  // A0?
	};
}
