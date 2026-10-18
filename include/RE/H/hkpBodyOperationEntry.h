#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpBodyOperation_ExecutionState.h"

namespace RE
{
	class hkpBodyOperation;
	class hkpEntity;

	class hkpBodyOperationEntry
	{
	public:
		// members
		hkpEntity*                      m_entity;     // 00?
		hkpBodyOperation*               m_operation;  // 04?
		std::int32_t                    m_priority;   // 08?
		hkpBodyOperation_ExecutionState m_hint;       // 0C?
	};
}
