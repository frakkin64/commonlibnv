#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpCollisionEvent;
	class hkpContactPointAddedEvent;
	class hkpContactPointEvent;
	class hkpContactPointRemovedEvent;
	class hkpContactProcessEvent;

	class __declspec(novtable) hkpContactListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpContactListener };
		static constexpr auto VTABLE{ VTABLE::hkpContactListener };

		// add
		virtual void contactPointCallback(hkpContactPointEvent const& event);          // 00
		virtual void collisionAddedCallback(hkpCollisionEvent const& event);           // 01
		virtual void collisionRemovedCallback(hkpCollisionEvent const& event);         // 02
		virtual ~hkpContactListener() = default;                                       // 03
		virtual void contactPointAddedCallback(hkpContactPointAddedEvent& event);      // 04
		virtual void contactPointRemovedCallback(hkpContactPointRemovedEvent& event);  // 05
		virtual void contactProcessCallback(hkpContactProcessEvent& event);            // 06
	};
}
