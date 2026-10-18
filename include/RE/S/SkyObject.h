#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class NiNode;
	class Sky;

	class __declspec(novtable) SkyObject
	{
	public:
		static constexpr auto RTTI{ RTTI::SkyObject };
		static constexpr auto VTABLE{ VTABLE::SkyObject };

		// add
		virtual ~SkyObject() = default;                          // 00
		virtual NiNode* GetRoot();                               // 01
		virtual void Initialize(NiNode* apSkyRoot);              // 02
		virtual void Update(Sky* apSky, float afSecondsPassed);  // 03

		SkyObject* ctor()
		{
			using func_t = SkyObject*(__thiscall*)(SkyObject*);
			static REL::Relocation<func_t> func{ Offsets::SkyObject::ctor };
			return func(this);
		}

	public:
		// members
		NiPointer<NiNode> spRoot;  // 04
	};
	static_assert(sizeof(SkyObject) == 0x8);
}
