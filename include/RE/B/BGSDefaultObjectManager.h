#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/D/DEFAULT_OBJECT.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class TESFile;

	class BGSDefaultObjectManager :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSDefaultObjectManager };
		static constexpr auto VTABLE{ VTABLE::BGSDefaultObjectManager };

		// override (TESForm)
		virtual ~BGSDefaultObjectManager() = default;  // 04
		virtual void ClearData() override;             // 05
		virtual bool Load(TESFile* apFile) override;   // 08
		virtual void Save() override;                  // 0B
		virtual void InitItem() override;              // 22

		[[nodiscard]] static BGSDefaultObjectManager* GetSingleton() noexcept
		{
			static REL::Relocation<BGSDefaultObjectManager**> singleton{ Offsets::BGSDefaultObjectManager::pInstance };
			return *singleton;
		}

		static BGSDefaultObjectManager* Instance()
		{
			using func_t = decltype(&BGSDefaultObjectManager::Instance);
			static REL::Relocation<func_t> func{ Offsets::BGSDefaultObjectManager::Instance };
			return func();
		}

		static TESForm* GetDefaultObject(DEFAULT_OBJECT aeObject)
		{
			using func_t = decltype(&BGSDefaultObjectManager::GetDefaultObject);
			static REL::Relocation<func_t> func{ Offsets::BGSDefaultObjectManager::GetDefaultObject };
			return func(aeObject);
		}

	protected:
		BGSDefaultObjectManager* ctor()
		{
			using func_t = BGSDefaultObjectManager*(__thiscall*)(BGSDefaultObjectManager*);
			static REL::Relocation<func_t> func{ Offsets::BGSDefaultObjectManager::ctor };
			return func(this);
		}

	public:
		// members
		TESForm* pObjectArray[34];  // 18
	};
}
