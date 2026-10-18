#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkDisplayGeometry;

	class hkpShapeDisplayBuilder :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpShapeDisplayBuilder };
		static constexpr auto VTABLE{ VTABLE::hkpShapeDisplayBuilder };

		class hkpShapeDisplayBuilderEnvironment;

		class hkpShapeDisplayBuilderEnvironment
		{
		public:
			hkpShapeDisplayBuilderEnvironment* ctor()
			{
				using func_t = hkpShapeDisplayBuilderEnvironment*(__thiscall*)(hkpShapeDisplayBuilderEnvironment*);
				static REL::Relocation<func_t> func{ Offsets::hkpShapeDisplayBuilder_hkpShapeDisplayBuilderEnvironment::ctor };
				return func(this);
			}

		public:
			// members
			std::int32_t m_spherePhiRes;    // 00
			std::int32_t m_sphereThetaRes;  // 04?
		};

		// override (hkReferencedObject)
		virtual ~hkpShapeDisplayBuilder() = default;  // 00

		hkpShapeDisplayBuilder* ctor(hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment const& env)
		{
			using func_t = hkpShapeDisplayBuilder*(__thiscall*)(hkpShapeDisplayBuilder*, hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment const&);
			static REL::Relocation<func_t> func{ Offsets::hkpShapeDisplayBuilder::ctor };
			return func(this, env);
		}

	public:
		// members
		hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment m_environment;      // 08?
		hkDisplayGeometry*                                        m_currentGeometry;  // 10?
	};
}
