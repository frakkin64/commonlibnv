#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SCRIPT_OUTPUT.h"

namespace RE
{
	class SCRIPT_PARAMETER;

	class SCRIPT_FUNCTION
	{
	public:
		// members
		char*             pFunctionName;         // 00
		char*             pShortName;            // 04?
		SCRIPT_OUTPUT     eOutput;               // 08?
		char*             pHelpString;           // 0C?
		bool              bReferenceFunction;    // 10?
		std::uint8_t      pad11;                 // 11
		std::uint16_t     sParamCount;           // 12?
		SCRIPT_PARAMETER* pParameters;           // 14?
		void*             pExecuteFunction;      // 18?
		void*             pCompileFunction;      // 1C?
		void*             pConditionFunction;    // 20?
		bool              bEditorFilter;         // 24?
		bool              bInvalidatesCellList;  // 25?
		std::uint16_t     pad26;                 // 26
	};
}
