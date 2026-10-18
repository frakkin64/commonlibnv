#pragma once

#include <cstddef>

#include "RE/N/NiPoint3.h"

namespace RE
{
	// A 3 x 3 rotation matrix, the game's layout (0x24): three rows of NiPoint3, applied to a column vector (R * v).
	// The math is implemented here, no game code is called.
	class NiMatrix3
	{
	public:
		static const NiMatrix3 ZERO;
		static const NiMatrix3 IDENTITY;

		constexpr NiMatrix3() noexcept = default;
		constexpr NiMatrix3(const NiPoint3& a_row0, const NiPoint3& a_row1, const NiPoint3& a_row2) noexcept :
			m_pEntry{ a_row0, a_row1, a_row2 }
		{}
		constexpr NiMatrix3(
			float a_x0, float a_y0, float a_z0,
			float a_x1, float a_y1, float a_z1,
			float a_x2, float a_y2, float a_z2) noexcept :
			m_pEntry{ { a_x0, a_y0, a_z0 }, { a_x1, a_y1, a_z1 }, { a_x2, a_y2, a_z2 } }
		{}

		[[nodiscard]] constexpr NiPoint3&       operator[](std::size_t a_row) noexcept { return m_pEntry[a_row]; }
		[[nodiscard]] constexpr const NiPoint3& operator[](std::size_t a_row) const noexcept { return m_pEntry[a_row]; }

		[[nodiscard]] constexpr bool operator==(const NiMatrix3& a_rhs) const noexcept { return m_pEntry[0] == a_rhs.m_pEntry[0] && m_pEntry[1] == a_rhs.m_pEntry[1] && m_pEntry[2] == a_rhs.m_pEntry[2]; }
		[[nodiscard]] constexpr bool operator!=(const NiMatrix3& a_rhs) const noexcept { return !(*this == a_rhs); }

		[[nodiscard]] constexpr NiMatrix3 operator+(const NiMatrix3& a_rhs) const noexcept { return { m_pEntry[0] + a_rhs.m_pEntry[0], m_pEntry[1] + a_rhs.m_pEntry[1], m_pEntry[2] + a_rhs.m_pEntry[2] }; }
		[[nodiscard]] constexpr NiMatrix3 operator-(const NiMatrix3& a_rhs) const noexcept { return { m_pEntry[0] - a_rhs.m_pEntry[0], m_pEntry[1] - a_rhs.m_pEntry[1], m_pEntry[2] - a_rhs.m_pEntry[2] }; }
		[[nodiscard]] constexpr NiMatrix3 operator*(float a_scalar) const noexcept { return { m_pEntry[0] * a_scalar, m_pEntry[1] * a_scalar, m_pEntry[2] * a_scalar }; }
		[[nodiscard]] constexpr NiMatrix3 operator/(float a_scalar) const noexcept { return { m_pEntry[0] / a_scalar, m_pEntry[1] / a_scalar, m_pEntry[2] / a_scalar }; }

		// matrix times column vector
		[[nodiscard]] constexpr NiPoint3 operator*(const NiPoint3& a_point) const noexcept { return { m_pEntry[0].Dot(a_point), m_pEntry[1].Dot(a_point), m_pEntry[2].Dot(a_point) }; }

		[[nodiscard]] constexpr NiMatrix3 operator*(const NiMatrix3& a_rhs) const noexcept
		{
			const auto col0 = a_rhs.GetCol(0);
			const auto col1 = a_rhs.GetCol(1);
			const auto col2 = a_rhs.GetCol(2);
			return {
				m_pEntry[0].Dot(col0), m_pEntry[0].Dot(col1), m_pEntry[0].Dot(col2),
				m_pEntry[1].Dot(col0), m_pEntry[1].Dot(col1), m_pEntry[1].Dot(col2),
				m_pEntry[2].Dot(col0), m_pEntry[2].Dot(col1), m_pEntry[2].Dot(col2)
			};
		}

		[[nodiscard]] constexpr NiPoint3 GetRow(std::size_t a_row) const noexcept { return m_pEntry[a_row]; }
		[[nodiscard]] constexpr NiPoint3 GetCol(std::size_t a_col) const noexcept { return { m_pEntry[0][a_col], m_pEntry[1][a_col], m_pEntry[2][a_col] }; }

		constexpr void SetRow(std::size_t a_row, const NiPoint3& a_value) noexcept { m_pEntry[a_row] = a_value; }
		constexpr void SetCol(std::size_t a_col, const NiPoint3& a_value) noexcept
		{
			for (std::size_t row = 0; row < 3; ++row) {
				m_pEntry[row][a_col] = a_value[row];
			}
		}

		[[nodiscard]] constexpr NiMatrix3 Transpose() const noexcept { return { GetCol(0), GetCol(1), GetCol(2) }; }

		[[nodiscard]] constexpr float Determinant() const noexcept { return m_pEntry[0].Dot(m_pEntry[1].Cross(m_pEntry[2])); }

	public:
		// members
		NiPoint3 m_pEntry[3];  // 00
	};
	static_assert(sizeof(NiMatrix3) == 0x24);

	inline constexpr NiMatrix3 NiMatrix3::ZERO{};
	inline constexpr NiMatrix3 NiMatrix3::IDENTITY{ 1.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 1.0F };
}
