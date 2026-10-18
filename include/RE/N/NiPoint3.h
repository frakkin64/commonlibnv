#pragma once

#include <cmath>
#include <cstddef>

namespace RE
{
	// Three floats, the game's layout (0xC). The math is implemented here, no game code is called.
	class NiPoint3
	{
	public:
		static const NiPoint3 ZERO;
		static const NiPoint3 UNIT;
		static const NiPoint3 UNIT_X;
		static const NiPoint3 UNIT_Y;
		static const NiPoint3 UNIT_Z;

		constexpr NiPoint3() noexcept = default;
		constexpr NiPoint3(float a_x, float a_y, float a_z) noexcept :
			x(a_x), y(a_y), z(a_z)
		{}

		[[nodiscard]] constexpr float&       operator[](std::size_t a_pos) noexcept { return a_pos == 0 ? x : (a_pos == 1 ? y : z); }
		[[nodiscard]] constexpr const float& operator[](std::size_t a_pos) const noexcept { return a_pos == 0 ? x : (a_pos == 1 ? y : z); }

		[[nodiscard]] constexpr bool operator==(const NiPoint3& a_rhs) const noexcept { return x == a_rhs.x && y == a_rhs.y && z == a_rhs.z; }
		[[nodiscard]] constexpr bool operator!=(const NiPoint3& a_rhs) const noexcept { return !(*this == a_rhs); }

		[[nodiscard]] constexpr NiPoint3 operator+(const NiPoint3& a_rhs) const noexcept { return { x + a_rhs.x, y + a_rhs.y, z + a_rhs.z }; }
		[[nodiscard]] constexpr NiPoint3 operator-(const NiPoint3& a_rhs) const noexcept { return { x - a_rhs.x, y - a_rhs.y, z - a_rhs.z }; }
		[[nodiscard]] constexpr NiPoint3 operator*(const NiPoint3& a_rhs) const noexcept { return { x * a_rhs.x, y * a_rhs.y, z * a_rhs.z }; }
		[[nodiscard]] constexpr NiPoint3 operator/(const NiPoint3& a_rhs) const noexcept { return { x / a_rhs.x, y / a_rhs.y, z / a_rhs.z }; }
		[[nodiscard]] constexpr NiPoint3 operator*(float a_scalar) const noexcept { return { x * a_scalar, y * a_scalar, z * a_scalar }; }
		[[nodiscard]] constexpr NiPoint3 operator/(float a_scalar) const noexcept { return { x / a_scalar, y / a_scalar, z / a_scalar }; }
		[[nodiscard]] constexpr NiPoint3 operator-() const noexcept { return { -x, -y, -z }; }

		[[nodiscard]] friend constexpr NiPoint3 operator*(float a_scalar, const NiPoint3& a_point) noexcept { return a_point * a_scalar; }

		constexpr NiPoint3& operator+=(const NiPoint3& a_rhs) noexcept { return *this = *this + a_rhs; }
		constexpr NiPoint3& operator-=(const NiPoint3& a_rhs) noexcept { return *this = *this - a_rhs; }
		constexpr NiPoint3& operator*=(const NiPoint3& a_rhs) noexcept { return *this = *this * a_rhs; }
		constexpr NiPoint3& operator/=(const NiPoint3& a_rhs) noexcept { return *this = *this / a_rhs; }
		constexpr NiPoint3& operator*=(float a_scalar) noexcept { return *this = *this * a_scalar; }
		constexpr NiPoint3& operator/=(float a_scalar) noexcept { return *this = *this / a_scalar; }

		[[nodiscard]] constexpr float    Dot(const NiPoint3& a_point) const noexcept { return x * a_point.x + y * a_point.y + z * a_point.z; }
		[[nodiscard]] constexpr NiPoint3 Cross(const NiPoint3& a_point) const noexcept { return { y * a_point.z - z * a_point.y, z * a_point.x - x * a_point.z, x * a_point.y - y * a_point.x }; }
		[[nodiscard]] constexpr float    SqrLength() const noexcept { return Dot(*this); }
		[[nodiscard]] constexpr float    SqrXYLength() const noexcept { return x * x + y * y; }
		[[nodiscard]] constexpr float    GetSquaredDistance(const NiPoint3& a_point) const noexcept { return (*this - a_point).SqrLength(); }

		[[nodiscard]] float    Length() const noexcept { return std::sqrt(SqrLength()); }
		[[nodiscard]] float    XYLength() const noexcept { return std::sqrt(SqrXYLength()); }
		[[nodiscard]] float    GetDistance(const NiPoint3& a_point) const noexcept { return (*this - a_point).Length(); }
		[[nodiscard]] NiPoint3 UnitCross(const NiPoint3& a_point) const noexcept
		{
			auto result = Cross(a_point);
			result.Unitize();
			return result;
		}

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
		float z{ 0.0F };  // 08
	};
	static_assert(sizeof(NiPoint3) == 0xC);

	inline constexpr NiPoint3 NiPoint3::ZERO{ 0.0F, 0.0F, 0.0F };
	inline constexpr NiPoint3 NiPoint3::UNIT{ 1.0F, 1.0F, 1.0F };
	inline constexpr NiPoint3 NiPoint3::UNIT_X{ 1.0F, 0.0F, 0.0F };
	inline constexpr NiPoint3 NiPoint3::UNIT_Y{ 0.0F, 1.0F, 0.0F };
	inline constexpr NiPoint3 NiPoint3::UNIT_Z{ 0.0F, 0.0F, 1.0F };
}
