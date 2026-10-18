#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpConstraintBrokenEvent;
	class hkpConstraintInstance;
	class hkpConstraintRepairedEvent;

	class __declspec(novtable) hkpConstraintListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConstraintListener };
		static constexpr auto VTABLE{ VTABLE::hkpConstraintListener };

		// add
		virtual ~hkpConstraintListener() = default;                                        // 00
		virtual void constraintAddedCallback(hkpConstraintInstance* constraint);           // 01
		virtual void constraintRemovedCallback(hkpConstraintInstance* constraint);         // 02
		virtual void constraintDeletedCallback(hkpConstraintInstance* constraint);         // 03
		virtual void constraintViolatedCallback(hkpConstraintInstance* constraint);        // 04
		virtual void constraintBreakingCallback(hkpConstraintBrokenEvent const& event);    // 05
		virtual void constraintRepairedCallback(hkpConstraintRepairedEvent const& event);  // 06
	};
}
