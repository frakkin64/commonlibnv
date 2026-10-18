#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/EffectShaderData.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESTexture.h"

namespace RE
{
	class BSShaderPPLightingProperty_TextureEffectData;
	class NiAVObject;
	class ParticleShaderProperty;
	class TESFile;

	class TESEffectShader :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESEffectShader };
		static constexpr auto VTABLE{ VTABLE::TESEffectShader };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kEFSH_ID };

		// override (TESForm)
		virtual ~TESEffectShader() = default;            // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESEffectShader* ctor()
		{
			using func_t = TESEffectShader*(__thiscall*)(TESEffectShader*);
			static REL::Relocation<func_t> func{ Offsets::TESEffectShader::ctor };
			return func(this);
		}

		TESTexture* GetTextureShaderTexture()
		{
			using func_t = decltype(&TESEffectShader::GetTextureShaderTexture);
			static REL::Relocation<func_t> func{ Offsets::TESEffectShader::GetTextureShaderTexture };
			return func(this);
		}

		TESTexture* GetParticleShaderTexture()
		{
			using func_t = decltype(&TESEffectShader::GetParticleShaderTexture);
			static REL::Relocation<func_t> func{ Offsets::TESEffectShader::GetParticleShaderTexture };
			return func(this);
		}

		TESTexture* GetBlockOutTexture()
		{
			using func_t = decltype(&TESEffectShader::GetBlockOutTexture);
			static REL::Relocation<func_t> func{ Offsets::TESEffectShader::GetBlockOutTexture };
			return func(this);
		}

		void StopParticleShader(NiAVObject* apTargetObject, ParticleShaderProperty* apProp)
		{
			using func_t = decltype(&TESEffectShader::StopParticleShader);
			static REL::Relocation<func_t> func{ Offsets::TESEffectShader::StopParticleShader };
			func(this, apTargetObject, apProp);
		}

		void StartTextureShader(NiAVObject* apObject, BSShaderPPLightingProperty_TextureEffectData* apTexEffectData)
		{
			using func_t = decltype(&TESEffectShader::StartTextureShader);
			static REL::Relocation<func_t> func{ Offsets::TESEffectShader::StartTextureShader };
			func(this, apObject, apTexEffectData);
		}

		void StopTextureShader(NiAVObject* apObject, BSShaderPPLightingProperty_TextureEffectData* apTexEffectData)
		{
			using func_t = decltype(&TESEffectShader::StopTextureShader);
			static REL::Relocation<func_t> func{ Offsets::TESEffectShader::StopTextureShader };
			func(this, apObject, apTexEffectData);
		}

		void AnimateTextureEffect(BSShaderPPLightingProperty_TextureEffectData* pData, float afTimeDelta, float afAlphaTime, float afTime, bool abFade)
		{
			using func_t = decltype(&TESEffectShader::AnimateTextureEffect);
			static REL::Relocation<func_t> func{ Offsets::TESEffectShader::AnimateTextureEffect };
			func(this, pData, afTimeDelta, afAlphaTime, afTime, abFade);
		}

	public:
		// members
		EffectShaderData Data;                   // 18
		std::uint8_t     pad110[0x3C];           // 110
		TESTexture       TextureShaderTexture;   // 14C
		TESTexture       ParticleShaderTexture;  // 158
		TESTexture       BlockOutTexture;        // 164
	};
	static_assert(sizeof(TESEffectShader) == 0x170);
}
