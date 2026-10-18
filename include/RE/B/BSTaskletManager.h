#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSemaphore.h"

namespace RE
{
	class __declspec(novtable) BSTaskletManager
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTaskletManager };
		static constexpr auto VTABLE{ VTABLE::BSTaskletManager };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05
		virtual void Unk_06();  // 06
		virtual void Unk_07();  // 07
		virtual void Unk_08();  // 08
		virtual void Unk_09();  // 09

		static BSTaskletManager& QInstance()
		{
			using func_t = decltype(&BSTaskletManager::QInstance);
			static REL::Relocation<func_t> func{ Offsets::BSTaskletManager::QInstance };
			return func();
		}

	public:
		// members
		bool          bAvailable;    // 04?
		bool          bSignaled;     // 05?
		std::uint16_t pad06;         // 06
		BSSemaphore   InstanceSema;  // 08?
	};
}
