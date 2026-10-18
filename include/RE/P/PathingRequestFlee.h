#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PathingRequest.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class PathingRequestFlee :
		public PathingRequest  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingRequestFlee };
		static constexpr auto VTABLE{ VTABLE::PathingRequestFlee };

		// override (PathingRequest)
		virtual ~PathingRequestFlee() = default;                              // 00
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;  // 06
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 07

		void SetMinFleeDistance(float afDistance)
		{
			using func_t = decltype(&PathingRequestFlee::SetMinFleeDistance);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestFlee::SetMinFleeDistance };
			func(this, afDistance);
		}

		PathingRequestFlee* ctor()
		{
			using func_t = PathingRequestFlee*(__thiscall*)(PathingRequestFlee*);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestFlee::ctor };
			return func(this);
		}

	public:
		// members
		float fMinFleeDistance;  // B0
	};
	static_assert(sizeof(PathingRequestFlee) == 0xB4);
}
