#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class StoreEnumeratorErrorType : std::int32_t
	{
		kEsNoError = 0x0,
		kEsOutOfMemory = 0x1,
		kEsFileNotPresent = 0x2,
		kEsXmlInvalidXmlFile = 0x3,
		kEsXmlIdMissing = 0x4,
		kEsXmlTagMissing = 0x5,
		kEsXmlTaxonomyMissingForCountry = 0x6,
		kEsStoreMissing = 0x7,
		kEsLiveHiveURLAbsent = 0x8,
		kEsHttpDownloadFailed = 0x9,
		kEsSignatureVerificationFailed = 0xA,
	};
}
