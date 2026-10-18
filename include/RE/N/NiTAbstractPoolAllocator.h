#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	class AllocNode;

	template <class T>
	class NiTAbstractPoolAllocator
	{
	public:
		class AllocNode
		{
		public:
			// members
			AllocNode* m_pkNext;
			void* m_pkData;
			T m_element;
		};

	};
}
