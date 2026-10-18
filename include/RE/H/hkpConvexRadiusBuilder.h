#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkDisplayGeometry;

	class hkpConvexRadiusBuilder :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConvexRadiusBuilder };
		static constexpr auto VTABLE{ VTABLE::hkpConvexRadiusBuilder };

		class hkpConvexRadiusBuilderEnvironment;

		class hkpConvexRadiusBuilderEnvironment
		{
		public:
			// members
			float m_minVisibleRadius;  // 00?
		};

		// override (hkReferencedObject)
		virtual ~hkpConvexRadiusBuilder() = default;  // 00

		hkpConvexRadiusBuilder* ctor(hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment const& env)
		{
			using func_t = hkpConvexRadiusBuilder*(__thiscall*)(hkpConvexRadiusBuilder*, hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment const&);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexRadiusBuilder::ctor };
			return func(this, env);
		}

	public:
		// members
		hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment m_environment;      // 08?
		hkDisplayGeometry*                                        m_currentGeometry;  // 0C?
	};
}
