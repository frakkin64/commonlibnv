#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class FR2MatrixVTC
	{
	public:
		class RowT
		{
		public:
			// members
			// not placed: p
			const std::uint32_t n;
		};

		class RowConstT
		{
		public:
			// members
			const T* const p;
			const std::uint32_t n;
		};

		// members
		stl::vector<T> data;
		std::uint32_t nrows;
		std::uint32_t ncols;
	};
}
