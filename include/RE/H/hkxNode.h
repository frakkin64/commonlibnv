#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkMatrix4.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkRefVariant.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkxAttributeHolder.h"

namespace RE
{
	class hkReferencedObject;

	class hkxNode :
		public hkxAttributeHolder  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxNode };
		static constexpr auto VTABLE{ VTABLE::hkxNode };

		class AnnotationData;

		class AnnotationData
		{
		public:
			// members
			float       m_time;         // 00?
			hkStringPtr m_description;  // 04?
		};

		// override (hkxAttributeHolder)
		virtual ~hkxNode() = default;  // 00

		void replaceAllObjects(hkReferencedObject const* oldObject, hkReferencedObject const* newObject)
		{
			using func_t = decltype(&hkxNode::replaceAllObjects);
			static REL::Relocation<func_t> func{ Offsets::hkxNode::replaceAllObjects };
			func(this, oldObject, newObject);
		}

	public:
		// members
		hkStringPtr                                                m_name;            // 14?
		hkRefVariant                                               m_object;          // 18?
		hkArray<hkMatrix4, hkContainerHeapAllocator>               m_keyFrames;       // 1C?
		hkArray<hkRefPtr<hkxNode>, hkContainerHeapAllocator>       m_children;        // 28?
		hkArray<hkxNode::AnnotationData, hkContainerHeapAllocator> m_annotations;     // 34?
		hkStringPtr                                                m_userProperties;  // 40?
		hkBool                                                     m_selected;        // 44?
		std::uint8_t                                               pad45[0x3];        // 45
	};
}
