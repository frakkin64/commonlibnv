#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/R/RECIPE_CATEGORY_DATA.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class TESFile;

	class TESRecipeCategory :
		public TESForm,  // 00
		public TESFullName  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRecipeCategory };
		static constexpr auto VTABLE{ VTABLE::TESRecipeCategory };

		// override (TESForm)
		virtual ~TESRecipeCategory() = default;          // 04
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		// members
		RECIPE_CATEGORY_DATA data;        // 24
		std::uint8_t         pad25[0x3];  // 25
	};
	static_assert(sizeof(TESRecipeCategory) == 0x28);
}
