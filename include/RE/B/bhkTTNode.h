#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	class hkpCollidable;

	template <class T>
	class bhkTTNode
	{
	public:
		// members
		std::uint32_t iFlags;
		bhkTTNode<T>* pNext;
		const hkpCollidable* pCollidable;
		T* pRef;
	};
}
