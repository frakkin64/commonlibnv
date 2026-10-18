#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStopwatch.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkVisualDebuggerClient.h"
#include "RE/H/hkVisualDebuggerTrackedObject.h"

namespace RE
{
	class hkClass;
	class hkProcessContext;
	class hkSocket;
	class hkStreamReader;
	class hkStreamWriter;
	class hkVtableClassRegistry;

	class hkVisualDebugger :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkVisualDebugger };
		static constexpr auto VTABLE{ VTABLE::hkVisualDebugger };

		// override (hkReferencedObject)
		virtual ~hkVisualDebugger() = default;  // 00

		// add
		virtual void step(float frameTimeInMs);  // 03
		virtual void pollForNewClients();        // 04

		void serve(std::int32_t listenPort)
		{
			using func_t = decltype(&hkVisualDebugger::serve);
			static REL::Relocation<func_t> func{ Offsets::hkVisualDebugger::serve };
			func(this, listenPort);
		}

		void shutdown()
		{
			using func_t = decltype(&hkVisualDebugger::shutdown);
			static REL::Relocation<func_t> func{ Offsets::hkVisualDebugger::shutdown };
			func(this);
		}

		void addDefaultProcess(char const* viewerName)
		{
			using func_t = decltype(&hkVisualDebugger::addDefaultProcess);
			static REL::Relocation<func_t> func{ Offsets::hkVisualDebugger::addDefaultProcess };
			func(this, viewerName);
		}

		void addTrackedObject(void* obj, hkClass const& klass, char const* group, std::uint32_t tagId)
		{
			using func_t = decltype(&hkVisualDebugger::addTrackedObject);
			static REL::Relocation<func_t> func{ Offsets::hkVisualDebugger::addTrackedObject };
			func(this, obj, klass, group, tagId);
		}

		void removeDefaultProcess(char const* processName)
		{
			using func_t = decltype(&hkVisualDebugger::removeDefaultProcess);
			static REL::Relocation<func_t> func{ Offsets::hkVisualDebugger::removeDefaultProcess };
			func(this, processName);
		}

		hkVisualDebugger* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts, hkVtableClassRegistry const* reg)
		{
			using func_t = hkVisualDebugger*(__thiscall*)(hkVisualDebugger*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&, hkVtableClassRegistry const*);
			static REL::Relocation<func_t> func{ Offsets::hkVisualDebugger::ctor };
			return func(this, contexts, reg);
		}

		void capture(char const* captureFilename)
		{
			using func_t = decltype(&hkVisualDebugger::capture);
			static REL::Relocation<func_t> func{ Offsets::hkVisualDebugger::capture };
			func(this, captureFilename);
		}

	protected:
		void writeStep(std::int32_t i, float t)
		{
			using func_t = decltype(&hkVisualDebugger::writeStep);
			static REL::Relocation<func_t> func{ Offsets::hkVisualDebugger::writeStep };
			func(this, i, t);
		}

		void deleteClient(std::int32_t i)
		{
			using func_t = decltype(&hkVisualDebugger::deleteClient);
			static REL::Relocation<func_t> func{ Offsets::hkVisualDebugger::deleteClient };
			func(this, i);
		}

		void createClient(hkSocket* socket, hkStreamReader* reader, hkStreamWriter* writer)
		{
			using func_t = decltype(&hkVisualDebugger::createClient);
			static REL::Relocation<func_t> func{ Offsets::hkVisualDebugger::createClient };
			func(this, socket, reader, writer);
		}

	public:
		// members
		// not placed: m_server, s_SuppressPollForNewClients
		std::uint32_t                                                    pad08;                   // 08
		hkArray<hkVisualDebuggerClient, hkContainerHeapAllocator>        m_clients;               // 0C
		hkArray<hkProcessContext*, hkContainerHeapAllocator>             m_contexts;              // 18?
		hkArray<hkVisualDebuggerTrackedObject, hkContainerHeapAllocator> m_trackedObjects;        // 24?
		hkArray<void*, hkContainerHeapAllocator>                         m_trackCallbacks;        // 30?
		hkArray<void*, hkContainerHeapAllocator>                         m_trackCallbackHandles;  // 3C?
		const hkVtableClassRegistry*                                     m_classReg;              // 48?
		std::uint32_t                                                    pad4C;                   // 4C
		hkArray<hkStringPtr, hkContainerHeapAllocator>                   m_defaultProcesses;      // 50
		hkBool                                                           m_amTimingFrame;         // 5C?
		std::uint8_t                                                     pad5D[0x3];              // 5D
		hkStopwatch                                                      m_frameTimer;            // 60?
	};
}
