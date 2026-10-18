#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpBodyOperation_ExecutionState.h"

namespace RE
{
	class hkpBodyOperation :
		public hkReferencedObject  // 00
	{
	public:
		using ExecutionState = hkpBodyOperation_ExecutionState;

		class UpdateInfo;

		class UpdateInfo
		{
		public:
			// members
			hkBool m_bodyIsDeleted;  // 00?
		};

	};
}
