#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPointerList.h"
#include "RE/S/SystemColorManager_HardSystemColor.h"
#include "RE/S/SystemColorManager_SoftSystemColor.h"
#include "RE/S/SystemColorManager_SystemColor.h"

namespace RE
{
	class NiColorA;

	class SystemColorManager
	{
	public:
		using HardSystemColor = SystemColorManager_HardSystemColor;
		using SoftSystemColor = SystemColorManager_SoftSystemColor;
		using SystemColor = SystemColorManager_SystemColor;

		[[nodiscard]] static SystemColorManager* GetSingleton() noexcept
		{
			static REL::Relocation<SystemColorManager**> singleton{ Offsets::SystemColorManager::pInstance };
			return *singleton;
		}

		static SystemColorManager* GetInstance()
		{
			using func_t = decltype(&SystemColorManager::GetInstance);
			static REL::Relocation<func_t> func{ Offsets::SystemColorManager::GetInstance };
			return func();
		}

		bool GetColor(std::int32_t aiID, NiColorA& aOutColor) const
		{
			using func_t = bool (SystemColorManager::*)(std::int32_t, NiColorA&) const;
			static REL::Relocation<func_t> func{ Offsets::SystemColorManager::GetColor };
			return func(this, aiID, aOutColor);
		}

		std::uint32_t GetColor(std::int32_t aiID) const
		{
			using func_t = std::uint32_t (SystemColorManager::*)(std::int32_t) const;
			static REL::Relocation<func_t> func{ Offsets::SystemColorManager::GetColor_1 };
			return func(this, aiID);
		}

		bool SetColor(std::int32_t aiID, NiColorA const& aInColor)
		{
			using func_t = bool (SystemColorManager::*)(std::int32_t, NiColorA const&);
			static REL::Relocation<func_t> func{ Offsets::SystemColorManager::SetColor };
			return func(this, aiID, aInColor);
		}

		bool SetColor(std::int32_t aiID, std::uint32_t aiColor)
		{
			using func_t = bool (SystemColorManager::*)(std::int32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::SystemColorManager::SetColor_1 };
			return func(this, aiID, aiColor);
		}

	protected:
		SystemColorManager* ctor()
		{
			using func_t = SystemColorManager*(__thiscall*)(SystemColorManager*);
			static REL::Relocation<func_t> func{ Offsets::SystemColorManager::ctor };
			return func(this);
		}

		SystemColorManager_SystemColor* Find(std::int32_t aiID) const
		{
			using func_t = decltype(&SystemColorManager::Find);
			static REL::Relocation<func_t> func{ Offsets::SystemColorManager::Find };
			return func(this, aiID);
		}

	public:
		// members
		NiTPointerList<SystemColorManager_SystemColor*> SystemColorList;  // 00?
		std::int32_t                                    iNextID;          // 0C
	};
}
