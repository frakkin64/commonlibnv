#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/T/Tile.h"

namespace RE
{
	class NiColorA;
	class NiControllerManager;
	class NiControllerSequence;
	class NiNode;

	class Tile3D :
		public Tile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Tile3D };
		static constexpr auto VTABLE{ VTABLE::Tile3D };

		// override (Tile)
		virtual ~Tile3D() = default;                                                                   // 00
		virtual void Init(Tile* apParent, char const* apName, Tile* apReplacedTile) override;          // 01
		virtual NiNode* MakeNode() override;                                                           // 02
		virtual std::int32_t GetType() override;                                                       // 03
		virtual char const* GetTypeName() override;                                                    // 04
		virtual Tile* PostParse(std::int32_t aiTrait, float afValue, char const* axString) override;   // 06
		virtual void SetAlphaAndColor(NiNode* apNode, float a_arg2, NiColorA const& a_arg3) override;  // 09

		bool IsPlaying()
		{
			using func_t = decltype(&Tile3D::IsPlaying);
			static REL::Relocation<func_t> func{ Offsets::Tile3D::IsPlaying };
			return func(this);
		}

		void UpdateNIF()
		{
			using func_t = decltype(&Tile3D::UpdateNIF);
			static REL::Relocation<func_t> func{ Offsets::Tile3D::UpdateNIF };
			func(this);
		}

	private:
		void RemoveProperties(NiNode* pTarget)
		{
			using func_t = decltype(&Tile3D::RemoveProperties);
			static REL::Relocation<func_t> func{ Offsets::Tile3D::RemoveProperties };
			func(this, pTarget);
		}

		void SetupShaderPropertiesRecurse(NiNode* apNode)
		{
			using func_t = decltype(&Tile3D::SetupShaderPropertiesRecurse);
			static REL::Relocation<func_t> func{ Offsets::Tile3D::SetupShaderPropertiesRecurse };
			func(this, apNode);
		}

	public:
		// members
		NiControllerManager*  pAniManager;       // 38
		NiControllerSequence* pCurrentSequence;  // 3C
		BSStringT<char>       strCurrentName;    // 40
		BSStringT<char>       strFilename;       // 48
	};
	static_assert(sizeof(Tile3D) == 0x50);
}
