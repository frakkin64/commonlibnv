#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/LockFreeStringMap.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class LockFreeCaseInsensitiveStringMap :
		public LockFreeStringMap<T>  // 00
	{
	public:
		// override (LockFreeStringMap<T>)
		virtual ~LockFreeCaseInsensitiveStringMap() = default;                          // 00
		virtual bool GetAt(char const* apKey, T& aData);                                // 02
		virtual bool SetAt(char const* apKey, T const& aData, bool abReplaceExisting);  // 04
		virtual bool RemoveAt(char const* apKey);                                       // 05
		virtual std::uint32_t GetBucketForKey(char const* apKey);                       // 09
		virtual char const* CopyKey(char const* apKey);                                 // 0B
	};
}
