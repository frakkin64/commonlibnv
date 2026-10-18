#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ActiveEffect;
	class MagicCaster;
	class MagicItem;

	// not confirmed: no named code in the executable refers to this type
	class SpellDispelData
	{
	public:
		// members
		MagicItem*    pSpell;         // 00?
		MagicCaster*  pCaster;        // 04?
		ActiveEffect* pActiveEffect;  // 08?
	};
}
