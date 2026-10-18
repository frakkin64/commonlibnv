#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkStreamWriter;

	class hkOArchive :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkOArchive };
		static constexpr auto VTABLE{ VTABLE::hkOArchive };

		// override (hkReferencedObject)
		virtual ~hkOArchive() = default;  // 00

		void write8u(std::uint8_t u)
		{
			using func_t = decltype(&hkOArchive::write8u);
			static REL::Relocation<func_t> func{ Offsets::hkOArchive::write8u };
			func(this, u);
		}

		std::int32_t writeRaw(void const* buf, std::int32_t nbytes)
		{
			using func_t = decltype(&hkOArchive::writeRaw);
			static REL::Relocation<func_t> func{ Offsets::hkOArchive::writeRaw };
			return func(this, buf, nbytes);
		}

		hkStreamWriter* getStreamWriter()
		{
			using func_t = decltype(&hkOArchive::getStreamWriter);
			static REL::Relocation<func_t> func{ Offsets::hkOArchive::getStreamWriter };
			return func(this);
		}

		hkOArchive* ctor(hkStreamWriter* sw, hkBool bs)
		{
			using func_t = hkOArchive*(__thiscall*)(hkOArchive*, hkStreamWriter*, hkBool);
			static REL::Relocation<func_t> func{ Offsets::hkOArchive::ctor };
			return func(this, sw, bs);
		}

		void write16u(std::uint16_t u)
		{
			using func_t = decltype(&hkOArchive::write16u);
			static REL::Relocation<func_t> func{ Offsets::hkOArchive::write16u };
			func(this, u);
		}

		void write32(std::int32_t i)
		{
			using func_t = decltype(&hkOArchive::write32);
			static REL::Relocation<func_t> func{ Offsets::hkOArchive::write32 };
			func(this, i);
		}

		void write32u(std::uint32_t u)
		{
			using func_t = decltype(&hkOArchive::write32u);
			static REL::Relocation<func_t> func{ Offsets::hkOArchive::write32u };
			func(this, u);
		}

		void write64u(std::uint64_t u)
		{
			using func_t = decltype(&hkOArchive::write64u);
			static REL::Relocation<func_t> func{ Offsets::hkOArchive::write64u };
			func(this, u);
		}

		void writeFloat32(float f)
		{
			using func_t = decltype(&hkOArchive::writeFloat32);
			static REL::Relocation<func_t> func{ Offsets::hkOArchive::writeFloat32 };
			func(this, f);
		}

	public:
		// members
		hkStreamWriter* m_writer;    // 08
		hkBool          m_byteSwap;  // 0C?
		std::uint8_t    pad0D[0x3];  // 0D
	};
}
