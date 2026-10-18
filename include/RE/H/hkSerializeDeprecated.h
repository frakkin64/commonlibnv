#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkSingleton.h"

namespace RE
{
	class hkClass;
	class hkObjectResource;
	class hkPackfileWriter_AddObjectListener;
	class hkPackfileWriter_Options;
	class hkResource;
	class hkSerializeUtil_ErrorDetails;
	class hkSerializeUtil_FormatDetails;
	class hkStreamReader;
	class hkStreamWriter;

	class hkSerializeDeprecated :
		public hkReferencedObject,  // 00
		public hkSingleton<hkSerializeDeprecated>  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkSerializeDeprecated };
		static constexpr auto VTABLE{ VTABLE::hkSerializeDeprecated };

		// override (hkReferencedObject)
		virtual ~hkSerializeDeprecated() = default;  // 00

		// add
		virtual hkResult saveXmlPackfile(void const* object, hkClass const& klass, hkStreamWriter* writer, hkPackfileWriter_Options const& options, hkPackfileWriter_AddObjectListener* userListener);  // 03
		virtual std::int32_t isLoadable(hkSerializeUtil_FormatDetails const& details);                                                                                                                  // 04
		virtual hkResource* loadOldPackfile(hkStreamReader& sr, hkSerializeUtil_FormatDetails const& details, hkSerializeUtil_ErrorDetails* errorOut);                                                  // 05
		virtual hkObjectResource* loadOldPackfileOnHeap(hkStreamReader& sr, hkSerializeUtil_FormatDetails const& details, hkSerializeUtil_ErrorDetails* errorOut);                                      // 06
	};
}
