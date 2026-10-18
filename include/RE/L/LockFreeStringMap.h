#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/LockFreeMap.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class LockFreeStringMap :
		public LockFreeMap<char*, T>
	{
	public:
		class LockFreeStringMapIterator :
			public LockFreeMap<char*, T>::LockFreeMapIterator
		{
		public:
			// add
			virtual ~LockFreeStringMapIterator() = default;  // 00
			virtual void ClearKey();                         // 01

			// members
			char pBuffer[256];
		};

		// override (LockFreeMap<char*, T>)
		virtual ~LockFreeStringMap() = default;                                    // 00
		virtual std::uint32_t GetBucketForKey(char const* apKey);                  // 09
		virtual void DeleteKey(char const* apKey);                                 // 0A
		virtual char const* CopyKey(char const* apKey);                            // 0B
		virtual void CopyKeyDirect(char const* apKey, char const*& arpCopiedKey);  // 0C
		virtual bool IsKeyGreaterOrEqual(char const* apKey1, char const* apKey2);  // 0D
		virtual bool IsKeyEqual(char const* apKey1, char const* apKey2);           // 0E
	};
}
