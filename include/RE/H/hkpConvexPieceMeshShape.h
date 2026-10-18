#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpShapeCollection.h"

namespace RE
{
	class hkpConvexPieceStreamData;

	class hkpConvexPieceMeshShape :
		public hkpShapeCollection  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConvexPieceMeshShape };
		static constexpr auto VTABLE{ VTABLE::hkpConvexPieceMeshShape };

		// override (hkpShapeCollection)
		virtual ~hkpConvexPieceMeshShape() = default;  // 00

		// members
		const hkpConvexPieceStreamData* m_convexPieceStream;  // 18
		const hkpShapeCollection*       m_displayMesh;        // 1C
		float                           m_radius;             // 20?
	};
}
