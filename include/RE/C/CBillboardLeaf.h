#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CIdvCamera.h"
#include "RE/C/CVec3.h"

namespace RE
{
	class CTreeFileAccess;

	class CBillboardLeaf :
		public CIdvCamera  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CBillboardLeaf };
		static constexpr auto VTABLE{ VTABLE::CBillboardLeaf };

		// override (CIdvCamera)
		virtual ~CBillboardLeaf() = default;  // 00

		static CBillboardLeaf* Parse(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&CBillboardLeaf::Parse);
			static REL::Relocation<func_t> func{ Offsets::CBillboardLeaf::Parse };
			return func(cFile);
		}

	public:
		// members
		std::uint8_t  m_ucAngleIndex;    // 10?
		std::uint8_t  pad11[0x3];        // 11
		std::uint32_t m_lColor;          // 14?
		std::uint8_t  m_ucColorScale;    // 18?
		std::uint8_t  pad19[0x3];        // 19
		CVec3         m_cNormal;         // 1C?
		CVec3         m_cTangent;        // 28?
		CVec3         m_cBinormal;       // 34?
		std::uint8_t  m_ucTextureIndex;  // 40?
		std::uint8_t  pad41[0x3];        // 41
		float         m_fWindWeight;     // 44?
		std::int32_t  m_nWindGroup;      // 48?
	};
}
