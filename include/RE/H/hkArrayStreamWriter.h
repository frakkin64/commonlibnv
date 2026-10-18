#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStreamWriter.h"
#include "RE/H/hkStreamWriter_SeekWhence.h"

namespace RE
{
	class hkArrayStreamWriter :
		public hkStreamWriter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkArrayStreamWriter };
		static constexpr auto VTABLE{ VTABLE::hkArrayStreamWriter };

		enum class ArrayOwnership : std::int32_t
		{
			kARRAY_TAKE = 0x0,
			kARRAY_BORROW = 0x1,
		};

		// override (hkStreamWriter)
		virtual ~hkArrayStreamWriter() = default;                                               // 00
		virtual std::int32_t write(const void* a_arg1, std::int32_t a_arg2) override;           // 04
		virtual hkResult seek(std::int32_t offset, hkStreamWriter_SeekWhence whence) override;  // 07

		// add
		virtual void clear();  // 09

		// members
		hkArray<char, hkContainerHeapAllocator>* m_arr;        // 08
		std::int32_t                             m_offset;     // 0C?
		hkArrayStreamWriter::ArrayOwnership      m_ownerShip;  // 10?
	};
}
