#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSPerformanceTimer.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class ActorPathingMessageQueue;
	class PathManagerImpl;
	class PathingRequest;

	class PathManager
	{
	public:
		static PathManager* QInstance()
		{
			using func_t = decltype(&PathManager::QInstance);
			static REL::Relocation<func_t> func{ Offsets::PathManager::QInstance };
			return func();
		}

		PathManager* ctor()
		{
			using func_t = PathManager*(__thiscall*)(PathManager*);
			static REL::Relocation<func_t> func{ Offsets::PathManager::ctor };
			return func(this);
		}

		bool Initialize()
		{
			using func_t = decltype(&PathManager::Initialize);
			static REL::Relocation<func_t> func{ Offsets::PathManager::Initialize };
			return func(this);
		}

		void Release()
		{
			using func_t = decltype(&PathManager::Release);
			static REL::Relocation<func_t> func{ Offsets::PathManager::Release };
			func(this);
		}

		bool BuildPath(NiPointer<PathingRequest> aspRequest, NiPointer<ActorPathingMessageQueue> aspMessageQueue, bool abQueue)
		{
			using func_t = decltype(&PathManager::BuildPath);
			static REL::Relocation<func_t> func{ Offsets::PathManager::BuildPath };
			return func(this, aspRequest, aspMessageQueue, abQueue);
		}

		void Update()
		{
			using func_t = decltype(&PathManager::Update);
			static REL::Relocation<func_t> func{ Offsets::PathManager::Update };
			func(this);
		}

		void Pause()
		{
			using func_t = decltype(&PathManager::Pause);
			static REL::Relocation<func_t> func{ Offsets::PathManager::Pause };
			func(this);
		}

		bool QPaused()
		{
			using func_t = decltype(&PathManager::QPaused);
			static REL::Relocation<func_t> func{ Offsets::PathManager::QPaused };
			return func(this);
		}

		void Resume()
		{
			using func_t = decltype(&PathManager::Resume);
			static REL::Relocation<func_t> func{ Offsets::PathManager::Resume };
			func(this);
		}

	public:
		// members
		PathManagerImpl*   pImpl;             // 00
		BSPerformanceTimer PerformanceTimer;  // 04
	};
}
