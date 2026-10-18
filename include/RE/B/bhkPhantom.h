#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkWorldObject.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class bhkPhantom :
		public bhkWorldObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkPhantom };
		static constexpr auto VTABLE{ VTABLE::bhkPhantom };

		// override (bhkWorldObject)
		virtual ~bhkPhantom() = default;                                              // 00
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual bool Remove() override;                                               // 28
		virtual void UpdateCFilter() override;                                        // 31

		void ResetPhantomFlags()
		{
			using func_t = decltype(&bhkPhantom::ResetPhantomFlags);
			static REL::Relocation<func_t> func{ Offsets::bhkPhantom::ResetPhantomFlags };
			func(this);
		}

		bhkPhantom* ctor()
		{
			using func_t = bhkPhantom*(__thiscall*)(bhkPhantom*);
			static REL::Relocation<func_t> func{ Offsets::bhkPhantom::ctor };
			return func(this);
		}

	public:
		// members
		std::uint8_t cFlags;      // 14
		std::uint8_t pad15[0x3];  // 15
	};
	static_assert(sizeof(bhkPhantom) == 0x18);
}
