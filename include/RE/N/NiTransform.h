#pragma once

#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	// Rotation, translation and uniform scale, the game's layout (0x34): a point is transformed as R * (scale * p) + t.
	// The math is implemented here, no game code is called.
	class NiTransform
	{
	public:
		static const NiTransform IDENTITY;

		constexpr NiTransform() noexcept = default;
		constexpr NiTransform(const NiMatrix3& a_rotation, const NiPoint3& a_translation, float a_scale = 1.0F) noexcept :
			m_Rotate(a_rotation), m_Translate(a_translation), m_fScale(a_scale)
		{}

		[[nodiscard]] constexpr bool operator==(const NiTransform& a_rhs) const noexcept { return m_Rotate == a_rhs.m_Rotate && m_Translate == a_rhs.m_Translate && m_fScale == a_rhs.m_fScale; }
		[[nodiscard]] constexpr bool operator!=(const NiTransform& a_rhs) const noexcept { return !(*this == a_rhs); }

		[[nodiscard]] constexpr NiPoint3 operator*(const NiPoint3& a_point) const noexcept { return m_Rotate * (a_point * m_fScale) + m_Translate; }

		// this transform applied after a_rhs
		[[nodiscard]] constexpr NiTransform operator*(const NiTransform& a_rhs) const noexcept
		{
			return { m_Rotate * a_rhs.m_Rotate, m_Rotate * (a_rhs.m_Translate * m_fScale) + m_Translate, m_fScale * a_rhs.m_fScale };
		}

		constexpr void MakeIdentity() noexcept { *this = NiTransform{ NiMatrix3::IDENTITY, NiPoint3::ZERO, 1.0F }; }

		[[nodiscard]] constexpr NiTransform Invert() const noexcept
		{
			const auto  rotation = m_Rotate.Transpose();
			const float scale = 1.0F / m_fScale;
			return { rotation, (rotation * -m_Translate) * scale, scale };
		}

	public:
		// members
		NiMatrix3 m_Rotate{ NiMatrix3::IDENTITY };  // 00
		NiPoint3  m_Translate;                      // 24
		float     m_fScale{ 1.0F };                 // 30
	};
	static_assert(sizeof(NiTransform) == 0x34);

	inline constexpr NiTransform NiTransform::IDENTITY{};
}
