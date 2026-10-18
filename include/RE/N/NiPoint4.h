#pragma once

#include <cstddef>

namespace RE
{
	class NiPoint4
	{
	public:
		constexpr NiPoint4() noexcept = default;
		constexpr NiPoint4(float a_x, float a_y, float a_z, float a_w) noexcept :
			x(a_x), y(a_y), z(a_z), w(a_w)
		{}

		[[nodiscard]] constexpr float&       operator[](std::size_t a_pos) noexcept { return (&x)[a_pos]; }
		[[nodiscard]] constexpr const float& operator[](std::size_t a_pos) const noexcept { return (&x)[a_pos]; }

		[[nodiscard]] constexpr bool operator==(const NiPoint4& a_rhs) const noexcept { return x == a_rhs.x && y == a_rhs.y && z == a_rhs.z && w == a_rhs.w; }
		[[nodiscard]] constexpr bool operator!=(const NiPoint4& a_rhs) const noexcept { return !(*this == a_rhs); }

		[[nodiscard]] constexpr NiPoint4 operator+(const NiPoint4& a_rhs) const noexcept { return { x + a_rhs.x, y + a_rhs.y, z + a_rhs.z, w + a_rhs.w }; }
		[[nodiscard]] constexpr NiPoint4 operator-(const NiPoint4& a_rhs) const noexcept { return { x - a_rhs.x, y - a_rhs.y, z - a_rhs.z, w - a_rhs.w }; }
		[[nodiscard]] constexpr NiPoint4 operator*(float a_scalar) const noexcept { return { x * a_scalar, y * a_scalar, z * a_scalar, w * a_scalar }; }
		[[nodiscard]] constexpr NiPoint4 operator/(float a_scalar) const noexcept { return { x / a_scalar, y / a_scalar, z / a_scalar, w / a_scalar }; }
		[[nodiscard]] constexpr NiPoint4 operator-() const noexcept { return { -x, -y, -z, -w }; }

		constexpr NiPoint4& operator+=(const NiPoint4& a_rhs) noexcept { return *this = *this + a_rhs; }
		constexpr NiPoint4& operator-=(const NiPoint4& a_rhs) noexcept { return *this = *this - a_rhs; }
		constexpr NiPoint4& operator*=(float a_scalar) noexcept { return *this = *this * a_scalar; }
		constexpr NiPoint4& operator/=(float a_scalar) noexcept { return *this = *this / a_scalar; }

		// members
		float x{ 0.0F };  // 00
		float y{ 0.0F };  // 04
		float z{ 0.0F };  // 08
		float w{ 0.0F };  // 0C
	};
	static_assert(sizeof(NiPoint4) == 0x10);
}
