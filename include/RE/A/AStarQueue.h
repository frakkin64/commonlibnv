#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarNode.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, class U>
	class AStarQueue
	{
	public:
		// members
		float fMaxFitness;
		AStarNode<T, U>* Buckets[20];
	};
}
