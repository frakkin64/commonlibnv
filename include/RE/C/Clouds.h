#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColor.h"
#include "RE/N/NiPointer.h"
#include "RE/S/SkyObject.h"

namespace RE
{
	class NiGeometry;
	class NiNode;
	class NiTexture;
	class Sky;

	class Clouds :
		public SkyObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Clouds };
		static constexpr auto VTABLE{ VTABLE::Clouds };

		// override (SkyObject)
		virtual ~Clouds() = default;                                      // 00
		virtual void Initialize(NiNode* apSkyRoot) override;              // 02
		virtual void Update(Sky* apSky, float afSecondsPassed) override;  // 03

		Clouds* ctor()
		{
			using func_t = Clouds*(__thiscall*)(Clouds*);
			static REL::Relocation<func_t> func{ Offsets::Clouds::ctor };
			return func(this);
		}

		std::int32_t GetNumLayers() const
		{
			using func_t = decltype(&Clouds::GetNumLayers);
			static REL::Relocation<func_t> func{ Offsets::Clouds::GetNumLayers };
			return func(this);
		}

		void ClearTransTextures()
		{
			using func_t = decltype(&Clouds::ClearTransTextures);
			static REL::Relocation<func_t> func{ Offsets::Clouds::ClearTransTextures };
			func(this);
		}

		void RemoveTextures()
		{
			using func_t = decltype(&Clouds::RemoveTextures);
			static REL::Relocation<func_t> func{ Offsets::Clouds::RemoveTextures };
			func(this);
		}

	public:
		// members
		NiPointer<NiGeometry> spClouds[4];        // 08
		NiPointer<NiTexture>  spTransTexture[4];  // 18
		NiColor               pColors[4];         // 28
		std::uint16_t         usNumLayers;        // 58
		bool                  bForceUpdate;       // 5A
		std::uint8_t          pad5B;              // 5B
	};
	static_assert(sizeof(Clouds) == 0x5C);
}
