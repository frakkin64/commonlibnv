#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpMoppCodeGenerator :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMoppCodeGenerator };
		static constexpr auto VTABLE{ VTABLE::hkpMoppCodeGenerator };

		class JumpCommandInfo;

		class JumpCommandInfo
		{
		public:
			// members
			std::int32_t m_position;  // 00?
			std::int32_t m_chunkId;   // 04?
		};

		// override (hkReferencedObject)
		virtual ~hkpMoppCodeGenerator() = default;  // 00

		hkpMoppCodeGenerator* ctor(std::int32_t size)
		{
			using func_t = hkpMoppCodeGenerator*(__thiscall*)(hkpMoppCodeGenerator*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppCodeGenerator::ctor };
			return func(this, size);
		}

	public:
		// members
		std::int32_t                                                             m_size;          // 08?
		std::int32_t                                                             m_pos;           // 0C?
		std::uint8_t*                                                            m_code;          // 10?
		hkArray<hkpMoppCodeGenerator::JumpCommandInfo, hkContainerHeapAllocator> m_jumpCommands;  // 14?
	};
}
