#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESModel.h"

namespace RE
{
	class BGSTextureModel :
		public TESModel  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSTextureModel };
		static constexpr auto VTABLE{ VTABLE::BGSTextureModel };

		// override (TESModel)
		virtual ~BGSTextureModel() = default;                 // 04
		virtual void SetModel(char const* apModel) override;  // 06

		BGSTextureModel* ctor()
		{
			using func_t = BGSTextureModel*(__thiscall*)(BGSTextureModel*);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureModel::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(BGSTextureModel) == 0x18);
}
