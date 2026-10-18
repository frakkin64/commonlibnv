#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T, std::size_t N0, std::size_t N1>
	class FR2MatrixCTC
	{
	public:
		// members
		T data[N0][N0];
	};
}
