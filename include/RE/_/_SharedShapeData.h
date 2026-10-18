#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkResult.h"

namespace RE
{
	class hkpShape;

	class _SharedShapeData
	{
	public:
		class SharedShape;

		class SharedShape
		{
		public:
			// members
			const hkpShape* m_originalShape;     // 00?
			const hkpShape* m_replacementShape;  // 04?
			std::int32_t    m_numReferences;     // 08?
		};

		hkResult setReplacement(hkpShape const* shape, hkpShape const* replacement)
		{
			using func_t = decltype(&_SharedShapeData::setReplacement);
			static REL::Relocation<func_t> func{ Offsets::_SharedShapeData::setReplacement };
			return func(this, shape, replacement);
		}

		void removeSingleReferencedShapeData()
		{
			using func_t = decltype(&_SharedShapeData::removeSingleReferencedShapeData);
			static REL::Relocation<func_t> func{ Offsets::_SharedShapeData::removeSingleReferencedShapeData };
			func(this);
		}

	public:
		// members
		hkArray<_SharedShapeData::SharedShape, hkContainerHeapAllocator> m_sharedShapes;  // 00
	};
}
