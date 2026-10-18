#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVertexFormat_DataType.h"
#include "RE/H/hkVertexFormat_DataUsage.h"
#include "RE/H/hkVertexFormat_Element.h"
#include "RE/H/hkVertexFormat_HintFlags.h"

namespace RE
{
	class hkVertexFormat
	{
	public:
		using DataType = hkVertexFormat_DataType;
		using DataUsage = hkVertexFormat_DataUsage;
		using Element = hkVertexFormat_Element;
		using HintFlags = hkVertexFormat_HintFlags;

		// members
		hkVertexFormat_Element m_elements[32];  // 00?
		std::int32_t           m_numElements;   // 180?
	};
}
