#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FADER_ENUM.h"

namespace RE
{
	class NiNode;

	class FaderManager
	{
	public:
		void AddRoot(NiNode* apNode, float a_arg2, bool a_arg3)
		{
			using func_t = decltype(&FaderManager::AddRoot);
			static REL::Relocation<func_t> func{ Offsets::FaderManager::AddRoot };
			func(this, apNode, a_arg2, a_arg3);
		}

		void CreateFader(FADER_ENUM aeFader, float a_arg2, bool a_arg3)
		{
			using func_t = decltype(&FaderManager::CreateFader);
			static REL::Relocation<func_t> func{ Offsets::FaderManager::CreateFader };
			func(this, aeFader, a_arg2, a_arg3);
		}

		void RemoveFader(FADER_ENUM aeFader, bool abForce)
		{
			using func_t = decltype(&FaderManager::RemoveFader);
			static REL::Relocation<func_t> func{ Offsets::FaderManager::RemoveFader };
			func(this, aeFader, abForce);
		}

		void UpdateFaders(bool abUpdateLoading)
		{
			using func_t = decltype(&FaderManager::UpdateFaders);
			static REL::Relocation<func_t> func{ Offsets::FaderManager::UpdateFaders };
			func(this, abUpdateLoading);
		}

		bool IsFaderVisible(FADER_ENUM aeFader)
		{
			using func_t = decltype(&FaderManager::IsFaderVisible);
			static REL::Relocation<func_t> func{ Offsets::FaderManager::IsFaderVisible };
			return func(this, aeFader);
		}

	public:
		// members
		NiNode* pRootBelowMenus;  // 00
		NiNode* pRootAboveMenus;  // 04
	};
}
