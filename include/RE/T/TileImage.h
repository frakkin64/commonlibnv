#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/T/Tile.h"

namespace RE
{
	class NiNode;
	class NiTexture;
	class TileShaderProperty;

	class TileImage :
		public Tile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TileImage };
		static constexpr auto VTABLE{ VTABLE::TileImage };

		// override (Tile)
		virtual ~TileImage() = default;                                                               // 00
		virtual void Init(Tile* apParent, char const* apName, Tile* apReplacedTile) override;         // 01
		virtual NiNode* MakeNode() override;                                                          // 02
		virtual std::int32_t GetType() override;                                                      // 03
		virtual char const* GetTypeName() override;                                                   // 04
		virtual Tile* PostParse(std::int32_t aiTrait, float afValue, char const* axString) override;  // 06

		TileImage* ctor()
		{
			using func_t = TileImage*(__thiscall*)(TileImage*);
			static REL::Relocation<func_t> func{ Offsets::TileImage::ctor };
			return func(this);
		}

		static void ConvertToActualFilename(char const* apFilename, float& afScale, float a_arg3, char* a_arg4)
		{
			using func_t = decltype(&TileImage::ConvertToActualFilename);
			static REL::Relocation<func_t> func{ Offsets::TileImage::ConvertToActualFilename };
			func(apFilename, afScale, a_arg3, a_arg4);
		}

		static void AddToTesTextures(char const* apFilename, float& afScale, NiPointer<NiTexture>& aspTexture, float a_arg4, NiPointer<NiTexture> a_arg5)
		{
			using func_t = decltype(&TileImage::AddToTesTextures);
			static REL::Relocation<func_t> func{ Offsets::TileImage::AddToTesTextures };
			func(apFilename, afScale, aspTexture, a_arg4, a_arg5);
		}

		void SetSourceTexture(NiTexture* apTexture)
		{
			using func_t = decltype(&TileImage::SetSourceTexture);
			static REL::Relocation<func_t> func{ Offsets::TileImage::SetSourceTexture };
			func(this, apTexture);
		}

	public:
		// members
		float                         fScale;      // 38
		NiPointer<NiTexture>          spTexture;   // 3C
		NiPointer<TileShaderProperty> spTSP;       // 40
		bool                          bIsScissor;  // 44
		std::uint8_t                  pad45[0x3];  // 45
	};
	static_assert(sizeof(TileImage) == 0x48);
}
