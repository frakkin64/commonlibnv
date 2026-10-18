#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkLocalFrame.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkTransform.h"

namespace RE
{
	class hkLocalFrameCollector;
	class hkLocalFrameGroup;
	class hkVector4;

	class alignas(16) hkSimpleLocalFrame :
		public hkLocalFrame  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkSimpleLocalFrame };
		static constexpr auto VTABLE{ VTABLE::hkSimpleLocalFrame };

		// override (hkLocalFrame)
		virtual ~hkSimpleLocalFrame() = default;  // 00

		// add
		virtual void getLocalTransform(hkTransform* a_arg1) const;                                                 // 03
		virtual void setLocalTransform(hkTransform const& transform);                                              // 04
		virtual void getLocalPosition(hkVector4* a_arg1) const;                                                    // 05
		virtual void getNearbyFrames(const hkVector4* a_arg1, float a_arg2, hkLocalFrameCollector* a_arg3) const;  // 06
		virtual const char* getName() const;                                                                       // 07
		virtual const hkLocalFrame* getParentFrame() const;                                                        // 08
		virtual void setParentFrame(hkLocalFrame const* parentFrame);                                              // 09
		virtual std::int32_t getNumChildFrames() const;                                                            // 0A
		virtual hkLocalFrame* getChildFrame(std::int32_t a_arg1);                                                  // 0B
		virtual const hkLocalFrameGroup* getGroup() const;                                                         // 0C
		virtual void setGroup(hkLocalFrameGroup const* group);                                                     // 0D

		// members
		std::uint8_t                                     pad08[0x8];     // 08
		hkTransform                                      m_transform;    // 10
		hkArray<hkLocalFrame*, hkContainerHeapAllocator> m_children;     // 50
		const hkLocalFrame*                              m_parentFrame;  // 5C
		const hkLocalFrameGroup*                         m_group;        // 60
		hkStringPtr                                      m_name;         // 64
		std::uint8_t                                     pad68[0x8];     // 68
	};
}
