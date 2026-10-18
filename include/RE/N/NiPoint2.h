#pragma once

#include <cmath>
#include <cstddef>

namespace RE
{
	// Two floats, the game's layout (8). The math is implemented here, no game code is called.
	class NiPoint2
	{
	public:
		static const NiPoint2 ZERO;
		static const NiPoint2 UNIT;
		static const NiPoint2 UNIT_X;
		static const NiPoint2 UNIT_Y;

		constexpr NiPoint2() noexcept = default;
		constexpr NiPoint2(float a_x, float a_y) noexcept :
			x(a_x), y(a_y)
		{}

		[[nodiscard]] constexpr float&       operator[](std::size_t a_pos) noexcept { return a_pos == 0 ? x : y; }
		[[nodiscard]] constexpr const float& operator[](std::size_t a_pos) const noexcept { return a_pos == 0 ? x : y; }

		[[nodiscard]] constexpr bool operator==(const NiPoint2& a_rhs) const noexcept { return x == a_rhs.x && y == a_rhs.y; }
		[[nodiscard]] constexpr bool operator!=(const NiPoint2& a_rhs) const noexcept { return !(*this == a_rhs); }

		[[nodiscard]] constexpr NiPoint2 operator+(const NiPoint2& a_rhs) const noexcept { return { x + a_rhs.x, y + a_rhs.y }; }
		[[nodiscard]] constexpr NiPoint2 operator-(const NiPoint2& a_rhs) const noexcept { return { x - a_rhs.x, y - a_rhs.y }; }
		[[nodiscard]] constexpr NiPoint2 operator*(const NiPoint2& a_rhs) const noexcept { return { x * a_rhs.x, y * a_rhs.y }; }
		[[nodiscard]] constexpr NiPoint2 operator/(const NiPoint2& a_rhs) const noexcept { return { x / a_rhs.x, y / a_rhs.y }; }
		[[nodiscard]] constexpr NiPoint2 operator*(float a_scalar) const noexcept { return { x * a_scalar, y * a_scalar }; }
		[[nodiscard]] constexpr NiPoint2 operator/(float a_scalar) const noexcept { return { x / a_scalar, y / a_scalar }; }
		[[nodiscard]] constexpr NiPoint2 operator-() const noexcept { return { -x, -y }; }

		[[nodiscard]] friend constexpr NiPoint2 operator*(float a_scalar, const NiPoint2& a_point) noexcept { return a_point * a_scalar; }

		constexpr NiPoint2& operator+=(const NiPoint2& a_rhs) noexcept { return *this = *this + a_rhs; }
		constexpr NiPoint2& operator-=(const NiPoint2& a_rhs) noexcept { return *this = *this - a_rhs; }
		constexpr NiPoint2& operator*=(const NiPoint2& a_rhs) noexcept { return *this = *this * a_rhs; }
		constexpr NiPoint2& operator/=(const NiPoint2& a_rhs) noexcept { return *this = *this / a_rhs; }
		constexpr NiPoint2& operator*=(float a_scalar) noexcept { return *this = *this * a_scalar; }
		constexpr NiPoint2& operator/=(float a_scalar) noexcept { return *this = *this / a_scalar; }

		[[nodiscard]] constexpr float Dot(const NiPoint2& a_point) const noexcept { return x * a_point.x + y * a_point.y; }
		[[nodiscard]] constexpr float SqrLength() const noexcept { return Dot(*this); }
		[[nodiscard]] constexpr float GetSquaredDistance(const NiPoint2& a_point) const noexcept { return (*this - a_point).SqrLength(); }

		[[nodiscard]] float Length() const noexcept { return std::sqrt(SqrLength()); }
		[[nodiscard]] float GetDistance(const NiPoint2& a_point) const noexcept { return (*this - a_point).Length(); }

		// scales the point to length one and returns the former length (a point of length zero stays as it is)
		float Unitize() noexcept
		{
			const float length = Length();
			if (length > 0.0F) {
				*this /= length;
			}
			return length;
		}

	public:
		// members
		float x{ 0.0F };  // 00
		float y{ 0.0F };  // 04
	};
	static_assert(sizeof(NiPoint2) == 0x8);

	inline constexpr NiPoint2 NiPoint2::ZERO{ 0.0F, 0.0F };
	inline constexpr NiPoint2 NiPoint2::UNIT{ 1.0F, 1.0F };
	inline constexpr NiPoint2 NiPoint2::UNIT_X{ 1.0F, 0.0F };
	inline constexpr NiPoint2 NiPoint2::UNIT_Y{ 0.0F, 1.0F };
}
