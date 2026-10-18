#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMeshVertexBuffer_LockedVertices.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkMeshVertexBuffer :
		public hkReferencedObject  // 00
	{
	public:
		using LockedVertices = hkMeshVertexBuffer_LockedVertices;

		enum class LockResult : std::int32_t
		{
			kRESULT_SUCCESS = 0x0,
			kRESULT_CANCEL = 0x1,
			kRESULT_FAILED = 0x2,
		};

	};
}
