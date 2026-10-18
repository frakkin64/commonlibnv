#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESForm.h"
#include "RE/B/BGSTextureSet.h"
#include "RE/B/BGSMenuIcon.h"
#include "RE/T/TESClass.h"
#include "RE/T/TESFaction.h"
#include "RE/B/BGSHeadPart.h"
#include "RE/T/TESHair.h"
#include "RE/T/TESEyes.h"
#include "RE/T/TESRace.h"
#include "RE/T/TESSound.h"
#include "RE/T/TESSkill.h"
#include "RE/E/EffectSetting.h"
#include "RE/S/Script.h"
#include "RE/T/TESLandTexture.h"
#include "RE/S/SpellItem.h"
#include "RE/T/TESObjectACTI.h"
#include "RE/B/BGSTerminal.h"
#include "RE/T/TESObjectARMO.h"
#include "RE/T/TESObjectBOOK.h"
#include "RE/T/TESObjectCLOT.h"
#include "RE/T/TESObjectCONT.h"
#include "RE/T/TESObjectDOOR.h"
#include "RE/I/IngredientItem.h"
#include "RE/T/TESObjectLIGH.h"
#include "RE/T/TESObjectMISC.h"
#include "RE/T/TESObjectSTAT.h"
#include "RE/B/BGSMovableStatic.h"
#include "RE/B/BGSPlaceableWater.h"
#include "RE/T/TESGrass.h"
#include "RE/T/TESObjectTREE.h"
#include "RE/T/TESFlora.h"
#include "RE/T/TESFurniture.h"
#include "RE/T/TESObjectWEAP.h"
#include "RE/T/TESAmmo.h"
#include "RE/T/TESNPC.h"
#include "RE/T/TESCreature.h"
#include "RE/T/TESLevCreature.h"
#include "RE/T/TESLevCharacter.h"
#include "RE/A/AlchemyItem.h"
#include "RE/B/BGSNote.h"
#include "RE/B/BGSProjectile.h"
#include "RE/T/TESWeather.h"
#include "RE/T/TESClimate.h"
#include "RE/T/TESObjectCELL.h"
#include "RE/T/TESObjectREFR.h"
#include "RE/C/Character.h"
#include "RE/C/Creature.h"
#include "RE/T/TESWorldSpace.h"
#include "RE/T/TESObjectLAND.h"
#include "RE/N/NavMesh.h"
#include "RE/T/TESQuest.h"
#include "RE/T/TESIdleForm.h"
#include "RE/T/TESPackage.h"
#include "RE/T/TESCombatStyle.h"
#include "RE/T/TESLoadScreen.h"
#include "RE/T/TESLevSpell.h"
#include "RE/T/TESWaterForm.h"
#include "RE/T/TESEffectShader.h"
#include "RE/B/BGSExplosion.h"
#include "RE/T/TESImageSpace.h"
#include "RE/T/TESImageSpaceModifier.h"
#include "RE/B/BGSListForm.h"
#include "RE/B/BGSPerk.h"
#include "RE/B/BGSBodyPartData.h"
#include "RE/B/BGSAddonNode.h"
#include "RE/A/ActorValueInfo.h"
#include "RE/B/BGSRadiationStage.h"
#include "RE/B/BGSCameraPath.h"
#include "RE/B/BGSVoiceType.h"
#include "RE/B/BGSImpactData.h"
#include "RE/B/BGSImpactDataSet.h"
#include "RE/B/BGSEncounterZone.h"
#include "RE/B/BGSMessage.h"
#include "RE/B/BGSRagdoll.h"
#include "RE/B/BGSLightingTemplate.h"
#include "RE/T/TESObjectIMOD.h"
#include "RE/T/TESReputation.h"
#include "RE/T/TESRecipe.h"
#include "RE/T/TESCasinoChips.h"
#include "RE/T/TESCasino.h"
#include "RE/T/TESLoadScreenType.h"
#include "RE/M/MediaSet.h"
#include "RE/M/MediaLocationController.h"
#include "RE/T/TESChallenge.h"
#include "RE/T/TESAmmoEffect.h"
#include "RE/T/TESCaravanCard.h"
#include "RE/T/TESCaravanMoney.h"
#include "RE/T/TESCaravanDeck.h"
#include "RE/B/BGSDehydrationStage.h"
#include "RE/B/BGSHungerStage.h"
#include "RE/B/BGSSleepDeprevationStage.h"

#define COMMONLIBNV_FORMUTIL(a_elem)                                    \
	case a_elem::FORM_ID:                                               \
		if constexpr (std::is_convertible_v<const a_elem*, const T*>) { \
			return static_cast<const a_elem*>(this);                    \
		}                                                               \
		break

namespace RE
{
	template <class T>
	[[nodiscard]] T* TESForm::As() noexcept
	{
		return const_cast<T*>(static_cast<const TESForm*>(this)->As<T>());
	}

	template <class T>
	[[nodiscard]] const T* TESForm::As() const noexcept
	{
		switch (static_cast<ENUM_FORM_ID>(cFormType)) {
			COMMONLIBNV_FORMUTIL(TESForm);
			COMMONLIBNV_FORMUTIL(BGSTextureSet);
			COMMONLIBNV_FORMUTIL(BGSMenuIcon);
			COMMONLIBNV_FORMUTIL(TESClass);
			COMMONLIBNV_FORMUTIL(TESFaction);
			COMMONLIBNV_FORMUTIL(BGSHeadPart);
			COMMONLIBNV_FORMUTIL(TESHair);
			COMMONLIBNV_FORMUTIL(TESEyes);
			COMMONLIBNV_FORMUTIL(TESRace);
			COMMONLIBNV_FORMUTIL(TESSound);
			COMMONLIBNV_FORMUTIL(TESSkill);
			COMMONLIBNV_FORMUTIL(EffectSetting);
			COMMONLIBNV_FORMUTIL(Script);
			COMMONLIBNV_FORMUTIL(TESLandTexture);
			COMMONLIBNV_FORMUTIL(SpellItem);
			COMMONLIBNV_FORMUTIL(TESObjectACTI);
			COMMONLIBNV_FORMUTIL(BGSTerminal);
			COMMONLIBNV_FORMUTIL(TESObjectARMO);
			COMMONLIBNV_FORMUTIL(TESObjectBOOK);
			COMMONLIBNV_FORMUTIL(TESObjectCLOT);
			COMMONLIBNV_FORMUTIL(TESObjectCONT);
			COMMONLIBNV_FORMUTIL(TESObjectDOOR);
			COMMONLIBNV_FORMUTIL(IngredientItem);
			COMMONLIBNV_FORMUTIL(TESObjectLIGH);
			COMMONLIBNV_FORMUTIL(TESObjectMISC);
			COMMONLIBNV_FORMUTIL(TESObjectSTAT);
			COMMONLIBNV_FORMUTIL(BGSMovableStatic);
			COMMONLIBNV_FORMUTIL(BGSPlaceableWater);
			COMMONLIBNV_FORMUTIL(TESGrass);
			COMMONLIBNV_FORMUTIL(TESObjectTREE);
			COMMONLIBNV_FORMUTIL(TESFlora);
			COMMONLIBNV_FORMUTIL(TESFurniture);
			COMMONLIBNV_FORMUTIL(TESObjectWEAP);
			COMMONLIBNV_FORMUTIL(TESAmmo);
			COMMONLIBNV_FORMUTIL(TESNPC);
			COMMONLIBNV_FORMUTIL(TESCreature);
			COMMONLIBNV_FORMUTIL(TESLevCreature);
			COMMONLIBNV_FORMUTIL(TESLevCharacter);
			COMMONLIBNV_FORMUTIL(AlchemyItem);
			COMMONLIBNV_FORMUTIL(BGSNote);
			COMMONLIBNV_FORMUTIL(BGSProjectile);
			COMMONLIBNV_FORMUTIL(TESWeather);
			COMMONLIBNV_FORMUTIL(TESClimate);
			COMMONLIBNV_FORMUTIL(TESObjectCELL);
			COMMONLIBNV_FORMUTIL(TESObjectREFR);
			COMMONLIBNV_FORMUTIL(Character);
			COMMONLIBNV_FORMUTIL(Creature);
			COMMONLIBNV_FORMUTIL(TESWorldSpace);
			COMMONLIBNV_FORMUTIL(TESObjectLAND);
			COMMONLIBNV_FORMUTIL(NavMesh);
			COMMONLIBNV_FORMUTIL(TESQuest);
			COMMONLIBNV_FORMUTIL(TESIdleForm);
			COMMONLIBNV_FORMUTIL(TESPackage);
			COMMONLIBNV_FORMUTIL(TESCombatStyle);
			COMMONLIBNV_FORMUTIL(TESLoadScreen);
			COMMONLIBNV_FORMUTIL(TESLevSpell);
			COMMONLIBNV_FORMUTIL(TESWaterForm);
			COMMONLIBNV_FORMUTIL(TESEffectShader);
			COMMONLIBNV_FORMUTIL(BGSExplosion);
			COMMONLIBNV_FORMUTIL(TESImageSpace);
			COMMONLIBNV_FORMUTIL(TESImageSpaceModifier);
			COMMONLIBNV_FORMUTIL(BGSListForm);
			COMMONLIBNV_FORMUTIL(BGSPerk);
			COMMONLIBNV_FORMUTIL(BGSBodyPartData);
			COMMONLIBNV_FORMUTIL(BGSAddonNode);
			COMMONLIBNV_FORMUTIL(ActorValueInfo);
			COMMONLIBNV_FORMUTIL(BGSRadiationStage);
			COMMONLIBNV_FORMUTIL(BGSCameraPath);
			COMMONLIBNV_FORMUTIL(BGSVoiceType);
			COMMONLIBNV_FORMUTIL(BGSImpactData);
			COMMONLIBNV_FORMUTIL(BGSImpactDataSet);
			COMMONLIBNV_FORMUTIL(BGSEncounterZone);
			COMMONLIBNV_FORMUTIL(BGSMessage);
			COMMONLIBNV_FORMUTIL(BGSRagdoll);
			COMMONLIBNV_FORMUTIL(BGSLightingTemplate);
			COMMONLIBNV_FORMUTIL(TESObjectIMOD);
			COMMONLIBNV_FORMUTIL(TESReputation);
			COMMONLIBNV_FORMUTIL(TESRecipe);
			COMMONLIBNV_FORMUTIL(TESCasinoChips);
			COMMONLIBNV_FORMUTIL(TESCasino);
			COMMONLIBNV_FORMUTIL(TESLoadScreenType);
			COMMONLIBNV_FORMUTIL(MediaSet);
			COMMONLIBNV_FORMUTIL(MediaLocationController);
			COMMONLIBNV_FORMUTIL(TESChallenge);
			COMMONLIBNV_FORMUTIL(TESAmmoEffect);
			COMMONLIBNV_FORMUTIL(TESCaravanCard);
			COMMONLIBNV_FORMUTIL(TESCaravanMoney);
			COMMONLIBNV_FORMUTIL(TESCaravanDeck);
			COMMONLIBNV_FORMUTIL(BGSDehydrationStage);
			COMMONLIBNV_FORMUTIL(BGSHungerStage);
			COMMONLIBNV_FORMUTIL(BGSSleepDeprevationStage);
		default:
			break;
		}

		return nullptr;
	}
}

#undef COMMONLIBNV_FORMUTIL
