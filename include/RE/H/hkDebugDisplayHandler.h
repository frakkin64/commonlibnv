#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkQsTransform.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkDisplayGeometry;
	class hkTransform;

	class __declspec(novtable) hkDebugDisplayHandler
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDebugDisplayHandler };
		static constexpr auto VTABLE{ VTABLE::hkDebugDisplayHandler };

		// add
		virtual ~hkDebugDisplayHandler() = default;                                                                                                                                                                                                                                                                                                                      // 00
		virtual hkResult addGeometry(const hkArrayBase<hkDisplayGeometry*>* a_arg1, const hkTransform* a_arg2, std::uint32_t a_arg3, std::int32_t a_arg4, std::uint32_t a_arg5);                                                                                                                                                                                         // 01
		virtual hkResult addGeometryInstance(std::uint32_t a_arg1, const hkTransform* a_arg2, std::uint32_t a_arg3, std::int32_t a_arg4, std::uint32_t a_arg5);                                                                                                                                                                                                          // 02
		virtual hkResult setGeometryColor(std::int32_t a_arg1, std::uint32_t a_arg2, std::int32_t a_arg3);                                                                                                                                                                                                                                                               // 03
		virtual hkResult updateGeometry(const hkTransform* a_arg1, std::uint32_t a_arg2, std::int32_t a_arg3);                                                                                                                                                                                                                                                           // 04
		virtual hkResult removeGeometry(std::uint32_t a_arg1, std::int32_t a_arg2, std::uint32_t a_arg3);                                                                                                                                                                                                                                                                // 05
		virtual hkResult updateCamera(const hkVector4* a_arg1, const hkVector4* a_arg2, const hkVector4* a_arg3, float a_arg4, float a_arg5, float a_arg6, const char* a_arg7);                                                                                                                                                                                          // 06
		virtual hkResult updateBehavior(const hkArrayBase<std::int32_t>* a_arg1, const hkArrayBase<std::int32_t>* a_arg2, const hkArrayBase<std::int32_t>* a_arg3, const hkArrayBase<hkVector4>* a_arg4, const hkArrayBase<char*>* a_arg5, const hkArrayBase<std::int32_t>* a_arg6, const hkArrayBase<std::int32_t>* a_arg7, const hkArrayBase<hkQsTransform>* a_arg8);  // 07
		virtual hkResult displayPoint(const hkVector4* a_arg1, std::int32_t a_arg2, std::int32_t a_arg3, std::int32_t a_arg4);                                                                                                                                                                                                                                           // 08
		virtual hkResult displayLine(const hkVector4* a_arg1, const hkVector4* a_arg2, std::int32_t a_arg3, std::int32_t a_arg4, std::int32_t a_arg5);                                                                                                                                                                                                                   // 09
		virtual hkResult displayTriangle(const hkVector4* a_arg1, const hkVector4* a_arg2, const hkVector4* a_arg3, std::int32_t a_arg4, std::int32_t a_arg5, std::int32_t a_arg6);                                                                                                                                                                                      // 0A
		virtual hkResult displayText(const char* a_arg1, std::int32_t a_arg2, std::int32_t a_arg3, std::int32_t a_arg4);                                                                                                                                                                                                                                                 // 0B
		virtual hkResult display3dText(const char* a_arg1, const hkVector4* a_arg2, std::int32_t a_arg3, std::int32_t a_arg4, std::int32_t a_arg5);                                                                                                                                                                                                                      // 0C
		virtual hkResult displayAnnotation(char const* text, std::int32_t id, std::int32_t tag);                                                                                                                                                                                                                                                                         // 0D
		virtual hkResult displayGeometry(const hkArrayBase<hkDisplayGeometry*>* a_arg1, const hkTransform* a_arg2, std::int32_t a_arg3, std::int32_t a_arg4, std::int32_t a_arg5);                                                                                                                                                                                       // 0F (reversed overload group)
		virtual hkResult displayGeometry(const hkArrayBase<hkDisplayGeometry*>* a_arg1, std::int32_t a_arg2, std::int32_t a_arg3, std::int32_t a_arg4);                                                                                                                                                                                                                  // 0E (reversed overload group)
		virtual hkResult sendMemStatsDump(const char* a_arg1, std::int32_t a_arg2);                                                                                                                                                                                                                                                                                      // 10
		virtual hkResult holdImmediate();                                                                                                                                                                                                                                                                                                                                // 11
		virtual void lockForUpdate();                                                                                                                                                                                                                                                                                                                                    // 12
		virtual void unlockForUpdate();                                                                                                                                                                                                                                                                                                                                  // 13
	};
}
