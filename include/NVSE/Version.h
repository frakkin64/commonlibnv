#pragma once

namespace NVSE
{
	// NVSE packs its versions as MAKE_NEW_VEGAS_VERSION_EX(major, minor, build, sub):
	//   ((major & 0xFF) << 24) | ((minor & 0xFF) << 16) | ((build & 0xFFF) << 4) | (sub & 0xF)
	// The runtime "1.4.0.525" is therefore (4, 0, 525).
	[[nodiscard]] constexpr std::uint32_t PackVersion(std::uint32_t a_major, std::uint32_t a_minor, std::uint32_t a_build, std::uint32_t a_sub = 0) noexcept
	{
		return ((a_major & 0xFF) << 24) | ((a_minor & 0xFF) << 16) | ((a_build & 0xFFF) << 4) | (a_sub & 0xF);
	}

	// runtime versions are reported as REL::Version{ 1, major, minor, build } (the game's "1.x.y.z")
	[[nodiscard]] constexpr REL::Version UnpackRuntimeVersion(std::uint32_t a_packed) noexcept
	{
		return REL::Version{ 1, static_cast<std::uint16_t>((a_packed >> 24) & 0xFF), static_cast<std::uint16_t>((a_packed >> 16) & 0xFF), static_cast<std::uint16_t>((a_packed >> 4) & 0xFFF) };
	}

	// NVSE versions are reported as REL::Version{ major, minor, beta, 0 }
	[[nodiscard]] constexpr REL::Version UnpackNVSEVersion(std::uint32_t a_packed) noexcept
	{
		return REL::Version{ static_cast<std::uint16_t>((a_packed >> 24) & 0xFF), static_cast<std::uint16_t>((a_packed >> 16) & 0xFF), static_cast<std::uint16_t>((a_packed >> 4) & 0xFFF), static_cast<std::uint16_t>(a_packed & 0xF) };
	}

	// packed forms as used by the NVSEInterface
	inline constexpr std::uint32_t PACKED_RUNTIME_1_0_0_240{ PackVersion(0, 0, 240) };
	inline constexpr std::uint32_t PACKED_RUNTIME_1_1_0_268{ PackVersion(1, 0, 268) };
	inline constexpr std::uint32_t PACKED_RUNTIME_1_1_1_271{ PackVersion(1, 1, 271) };
	inline constexpr std::uint32_t PACKED_RUNTIME_1_1_1_280{ PackVersion(1, 1, 280) };
	inline constexpr std::uint32_t PACKED_RUNTIME_1_2_0_285{ PackVersion(2, 0, 285) };
	inline constexpr std::uint32_t PACKED_RUNTIME_1_2_0_314{ PackVersion(2, 0, 314) };
	inline constexpr std::uint32_t PACKED_RUNTIME_1_2_0_352{ PackVersion(2, 0, 352) };
	inline constexpr std::uint32_t PACKED_RUNTIME_1_3_0_452{ PackVersion(3, 0, 452) };
	inline constexpr std::uint32_t PACKED_RUNTIME_1_4_0_525{ PackVersion(4, 0, 525) };
	inline constexpr std::uint32_t PACKED_RUNTIME_1_4_0_525ng{ PackVersion(4, 0, 525, 1) };

	inline constexpr std::uint32_t PACKED_EDITOR_1_1_0_262{ PackVersion(1, 0, 262) };
	inline constexpr std::uint32_t PACKED_EDITOR_1_3_0_452{ PackVersion(3, 0, 452) };
	inline constexpr std::uint32_t PACKED_EDITOR_1_4_0_518{ PackVersion(4, 0, 518) };

	inline constexpr REL::Version RUNTIME_1_0_0_240{ 1, 0, 0, 240 };
	inline constexpr REL::Version RUNTIME_1_1_0_268{ 1, 1, 0, 268 };
	inline constexpr REL::Version RUNTIME_1_1_1_271{ 1, 1, 1, 271 };
	inline constexpr REL::Version RUNTIME_1_1_1_280{ 1, 1, 1, 280 };
	inline constexpr REL::Version RUNTIME_1_2_0_285{ 1, 2, 0, 285 };
	inline constexpr REL::Version RUNTIME_1_2_0_314{ 1, 2, 0, 314 };
	inline constexpr REL::Version RUNTIME_1_2_0_352{ 1, 2, 0, 352 };
	inline constexpr REL::Version RUNTIME_1_3_0_452{ 1, 3, 0, 452 };
	inline constexpr REL::Version RUNTIME_1_4_0_525{ 1, 4, 0, 525 };

	inline constexpr auto RUNTIME_LATEST = RUNTIME_1_4_0_525;

	// the NVSE (xNVSE) release these definitions were written against
	inline constexpr REL::Version NVSE_VERSION_REFERENCE{ 6, 4, 9, 0 };
}
