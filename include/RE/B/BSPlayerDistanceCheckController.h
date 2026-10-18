#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTimeController.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiUpdateData;

	class BSPlayerDistanceCheckController :
		public NiTimeController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPlayerDistanceCheckController };
		static constexpr auto VTABLE{ VTABLE::BSPlayerDistanceCheckController };

		// override (NiTimeController)
		virtual ~BSPlayerDistanceCheckController() = default;                   // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;  // 12
		virtual void Update(NiUpdateData& UpdateData) override;                 // 25

		BSPlayerDistanceCheckController* ctor()
		{
			using func_t = BSPlayerDistanceCheckController*(__thiscall*)(BSPlayerDistanceCheckController*);
			static REL::Relocation<func_t> func{ Offsets::BSPlayerDistanceCheckController::ctor };
			return func(this);
		}

	protected:
		void CopyMembers(BSPlayerDistanceCheckController* pkDest, NiCloningProcess& kCloning)
		{
			using func_t = decltype(&BSPlayerDistanceCheckController::CopyMembers);
			static REL::Relocation<func_t> func{ Offsets::BSPlayerDistanceCheckController::CopyMembers };
			func(this, pkDest, kCloning);
		}

	public:
		// members
		float fCheckDistance;  // 34
		void* pfnCallback;     // 38
	};
	static_assert(sizeof(BSPlayerDistanceCheckController) == 0x3C);
}
