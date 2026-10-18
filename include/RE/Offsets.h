#pragma once

namespace RE::Offsets
{
	namespace ACTOR_BASE_DATA
	{
		inline constexpr REL::Offset Endian{ 0x7CB90 };
	}

	namespace AILinearTaskThread
	{
		inline constexpr REL::Offset ctor{ 0x4C7630 };
	}

	namespace AILinearTaskThreadManager
	{
		inline constexpr REL::Offset QInstance{ 0x313D80 };
		inline constexpr REL::Offset QRunningThreads{ 0x313D90 };
		inline constexpr REL::Offset CreateThreads{ 0x4C7290 };
		inline constexpr REL::Offset DestroyThreads{ 0x4C73A0 };
		inline constexpr REL::Offset AddThread{ 0x4C74D0 };
		inline constexpr REL::Offset WaitOnThreadStage{ 0x4C7A70 };
		inline constexpr REL::Offset ShouldQueue3DTask{ 0x4C7AA0 };
		inline constexpr REL::Offset AIThreadCombined{ 0x4C7BD0 };
		inline constexpr REL::Offset AIThread1TaskFunc{ 0x4C7DA0 };
		inline constexpr REL::Offset AIThread2TaskFunc{ 0x4C7F50 };
		inline constexpr REL::Offset WaitMainRendering{ 0x4C80D0 };
		inline constexpr REL::Offset SetMainRendering{ 0x4C80E0 };
	}

	namespace AITaskManager
	{
		inline constexpr REL::Offset ctor{ 0x4C9330 };
		inline constexpr REL::Offset dtor{ 0x4C9430 };
		inline constexpr REL::Offset UpdateTasks{ 0x4C94E0 };
		inline constexpr REL::Offset StartTasksDuringRendering{ 0x4CA070 };
	}

	namespace AITaskQueue
	{
		inline constexpr REL::Offset Dequeue{ 0x4C9CF0 };
	}

	namespace AITaskThread
	{
		inline constexpr REL::Offset ctor{ 0x4C9BD0 };
		inline constexpr REL::Offset OnStartup{ 0x4C9D70 };
	}

	namespace AITaskThreadManager
	{
		inline constexpr REL::Offset AddThread{ 0x4C9AE0 };
	}

	namespace AMMO_DATA
	{
		inline constexpr REL::Offset Endian{ 0x103210 };
	}

	namespace AMMO_DATA_NV
	{
		inline constexpr REL::Offset Endian{ 0x103240 };
	}

	namespace AStarDefaultHeap
	{
		inline constexpr REL::Offset ctor{ 0x2BBC30 };
	}

	namespace AbsorbEffect
	{
		inline constexpr REL::Offset Start3D{ 0x4034C0 };
		inline constexpr REL::Offset Update3D{ 0x403B70 };
	}

	namespace AbstractHeap
	{
		inline constexpr REL::Offset BaseAllocate{ 0x6A8F50 };
	}

	namespace ActionPoints
	{
		inline constexpr REL::Offset GetAttackAction{ 0x26DBA0 };
		inline constexpr REL::Offset GetBaseActionPoints{ 0x26DC70 };
		inline constexpr REL::Offset GetActionPoints{ 0x26DCA0 };
		inline constexpr REL::Offset GetWeaponAttackActionPoints{ 0x26DCE0 };
		inline constexpr REL::Offset IsAttackAction{ 0x26DDE0 };
	}

	namespace ActiveEffect
	{
		inline constexpr REL::Offset GetCaster{ 0x5CD60 };
		inline constexpr REL::Offset GetMagnitude{ 0x95460 };
		inline constexpr REL::Offset GetTarget{ 0x19BB30 };
		inline constexpr REL::Offset IsFinished{ 0x305CF0 };
		inline constexpr REL::Offset GetEffectSetting{ 0x3DF1D0 };
		inline constexpr REL::Offset HasConditions{ 0x3DF210 };
		inline constexpr REL::Offset ctor{ 0x403D30 };
		inline constexpr REL::Offset SetFlag{ 0x403E80 };
		inline constexpr REL::Offset SetEnchantmentSource{ 0x4041C0 };
		inline constexpr REL::Offset Dispel{ 0x404210 };
		inline constexpr REL::Offset CheckDisplacementSpellOnTarget{ 0x404250 };
		inline constexpr REL::Offset EvaluateConditions{ 0x4043F0 };
		inline constexpr REL::Offset UpdateEffect{ 0x404560 };
		inline constexpr REL::Offset FromWornEnchantment{ 0x404B60 };
		inline constexpr REL::Offset IsFlagSet{ 0x404B80 };
		inline constexpr REL::Offset AdjustEffectiveness{ 0x404BC0 };
		inline constexpr REL::Offset SetMagnitude{ 0x404CB0 };
		inline constexpr REL::Offset StartSound{ 0x404CD0 };
		inline constexpr REL::Offset ForceNoHitEffect{ 0x405650 };
		inline constexpr REL::Offset SaveActiveEffect{ 0x405880 };
		inline constexpr REL::Offset LoadActiveEffect{ 0x405920 };
		inline constexpr REL::Offset GetActiveEffectListSaveSize{ 0x405A00 };
		inline constexpr REL::Offset SaveActiveEffectList{ 0x405B40 };
		inline constexpr REL::Offset LoadActiveEffectList{ 0x405D40 };
		inline constexpr REL::Offset SaveActiveEffect_1{ 0x406840 };
		inline constexpr REL::Offset LoadActiveEffect_1{ 0x406910 };
		inline constexpr REL::Offset SaveActiveEffectList_1{ 0x406A10 };
		inline constexpr REL::Offset LoadActiveEffectList_1{ 0x406A90 };
		inline constexpr REL::Offset IsActive{ 0x433C20 };
	}

	namespace Actor
	{
		inline constexpr REL::Offset GetActorBase{ 0x181E0 };
		inline constexpr REL::Offset IsUnConscious{ 0x37BD0 };
		inline constexpr REL::Offset IsRestrained{ 0x37BF0 };
		inline constexpr REL::Offset IsMoving{ 0x938E0 };
		inline constexpr REL::Offset IsInCombat{ 0x93BB0 };
		inline constexpr REL::Offset SetUpdateLighting{ 0x96960 };
		inline constexpr REL::Offset IsSneaking{ 0x997B0 };
		inline constexpr REL::Offset GetLifeState{ 0xF8960 };
		inline constexpr REL::Offset IsPlayerTeammate{ 0x166950 };
		inline constexpr REL::Offset IsSleeping{ 0x179670 };
		inline constexpr REL::Offset IsSwimming{ 0x1A2030 };
		inline constexpr REL::Offset IsReanimated{ 0x208D80 };
		inline constexpr REL::Offset CanCastWornEnchantment{ 0x40F7D0 };
		inline constexpr REL::Offset ctor{ 0x47D4A0 };
		inline constexpr REL::Offset ConstructorInitialize{ 0x47D890 };
		inline constexpr REL::Offset CreateRagdollInstance{ 0x47E130 };
		inline constexpr REL::Offset GetTurretBehavior{ 0x47EEB0 };
		inline constexpr REL::Offset AddDeathItems{ 0x47EEF0 };
		inline constexpr REL::Offset HasShadow{ 0x47F200 };
		inline constexpr REL::Offset HasBlood{ 0x47F260 };
		inline constexpr REL::Offset DoesSwim{ 0x47F350 };
		inline constexpr REL::Offset DoesWalk{ 0x47F370 };
		inline constexpr REL::Offset DoesFly{ 0x47F390 };
		inline constexpr REL::Offset FightsInWater{ 0x47F3B0 };
		inline constexpr REL::Offset GetEssential{ 0x47F3D0 };
		inline constexpr REL::Offset GetRespawn{ 0x47F4A0 };
		inline constexpr REL::Offset GetSex{ 0x47F4C0 };
		inline constexpr REL::Offset IsAutoCalc{ 0x47F4E0 };
		inline constexpr REL::Offset HasNoRumors{ 0x47F510 };
		inline constexpr REL::Offset SwimsOnly{ 0x47F570 };
		inline constexpr REL::Offset GetLevel{ 0x47F9F0 };
		inline constexpr REL::Offset EndMovement{ 0x47FAA0 };
		inline constexpr REL::Offset DifficultyLevelCheckModHealth{ 0x480890 };
		inline constexpr REL::Offset DifficultyLevelAdjustHealthModifier{ 0x4808A0 };
		inline constexpr REL::Offset CheckSkillLevelChange{ 0x4808F0 };
		inline constexpr REL::Offset GetPackage{ 0x481450 };
		inline constexpr REL::Offset GetMissedPacks{ 0x481470 };
		inline constexpr REL::Offset GetCurrentEditorPackage{ 0x4814B0 };
		inline constexpr REL::Offset GetPackageSetAsPcurrent{ 0x481510 };
		inline constexpr REL::Offset IsRunningRunOnce{ 0x481570 };
		inline constexpr REL::Offset SetCurrentTarget{ 0x481620 };
		inline constexpr REL::Offset GetCurrentPackageTarget{ 0x481650 };
		inline constexpr REL::Offset EndInterruptPackage{ 0x481680 };
		inline constexpr REL::Offset MoveToSafePoint{ 0x481860 };
		inline constexpr REL::Offset ShouldReset{ 0x481C90 };
		inline constexpr REL::Offset SetLastSeenTime{ 0x481D10 };
		inline constexpr REL::Offset IsEscorterBehind{ 0x484110 };
		inline constexpr REL::Offset IsFollowing{ 0x4842C0 };
		inline constexpr REL::Offset GetBarterGoldBase{ 0x484320 };
		inline constexpr REL::Offset GetClass{ 0x484350 };
		inline constexpr REL::Offset CanMove{ 0x4843A0 };
		inline constexpr REL::Offset CanSpeak{ 0x484480 };
		inline constexpr REL::Offset CanKnockDown{ 0x4845A0 };
		inline constexpr REL::Offset GetMoveMode{ 0x4846E0 };
		inline constexpr REL::Offset IsRunning{ 0x484730 };
		inline constexpr REL::Offset ResetConditionPreventsRun{ 0x4848E0 };
		inline constexpr REL::Offset IsJumping{ 0x4849C0 };
		inline constexpr REL::Offset IsFightingOrAlarmed{ 0x484AE0 };
		inline constexpr REL::Offset IsAllowedToSwim{ 0x484B50 };
		inline constexpr REL::Offset GetWalkSpeed{ 0x484DC0 };
		inline constexpr REL::Offset GetRunSpeed{ 0x484EB0 };
		inline constexpr REL::Offset SetWalkRunFlagDirty{ 0x484F80 };
		inline constexpr REL::Offset GetHeight{ 0x4853A0 };
		inline constexpr REL::Offset GetSneakHeight{ 0x4854D0 };
		inline constexpr REL::Offset IsPointDeepUnderWater{ 0x485520 };
		inline constexpr REL::Offset IsPointDeepUnderWater_1{ 0x485560 };
		inline constexpr REL::Offset AdjustSpeedForFollowing{ 0x4855F0 };
		inline constexpr REL::Offset ModifyMoveModeForFollow{ 0x4858C0 };
		inline constexpr REL::Offset CanChildUseObject{ 0x4859E0 };
		inline constexpr REL::Offset GetSwimWalkSpeed{ 0x485D90 };
		inline constexpr REL::Offset GetSwimRunSpeed{ 0x485ED0 };
		inline constexpr REL::Offset GetKnockedDownMovementDelta{ 0x486B30 };
		inline constexpr REL::Offset ResetLoadedAnimations{ 0x487D00 };
		inline constexpr REL::Offset UpdateAnimationMovement{ 0x4885E0 };
		inline constexpr REL::Offset UpdateRagdollAnimation{ 0x488970 };
		inline constexpr REL::Offset UpdateActor3DPosition{ 0x48B150 };
		inline constexpr REL::Offset RestoreHealth{ 0x48B510 };
		inline constexpr REL::Offset RestoreFatigue{ 0x48B5A0 };
		inline constexpr REL::Offset RestoreActionPoints{ 0x48B660 };
		inline constexpr REL::Offset RestoreActorValue{ 0x48B740 };
		inline constexpr REL::Offset GetCurrentPackageType{ 0x48B7F0 };
		inline constexpr REL::Offset LineOfSight{ 0x48B880 };
		inline constexpr REL::Offset LineOfSight_1{ 0x48C240 };
		inline constexpr REL::Offset IsPointInViewCone{ 0x48C570 };
		inline constexpr REL::Offset QueueEquipObject{ 0x48C650 };
		inline constexpr REL::Offset QueueUnEquipObject{ 0x48C790 };
		inline constexpr REL::Offset EquipObject{ 0x48C830 };
		inline constexpr REL::Offset PutActorInChairBedQuick{ 0x48D2F0 };
		inline constexpr REL::Offset GetOutofFurnitureQuick{ 0x48D640 };
		inline constexpr REL::Offset UnEquipObject{ 0x48D7D0 };
		inline constexpr REL::Offset RemoveWornItem{ 0x48E110 };
		inline constexpr REL::Offset PlayHitSound{ 0x48E1E0 };
		inline constexpr REL::Offset CreateBlood{ 0x48E8D0 };
		inline constexpr REL::Offset CreateBloodOnWeapon{ 0x48FB00 };
		inline constexpr REL::Offset UpdateWeaponConditionEffects{ 0x491190 };
		inline constexpr REL::Offset GetArmorBeingWorn{ 0x491B90 };
		inline constexpr REL::Offset GetBootWeight{ 0x491BE0 };
		inline constexpr REL::Offset GetBestFoodItem{ 0x491D30 };
		inline constexpr REL::Offset GetGoldAmount{ 0x491D70 };
		inline constexpr REL::Offset HasObjects{ 0x491DB0 };
		inline constexpr REL::Offset PutItemInReference{ 0x492E90 };
		inline constexpr REL::Offset ShouldTalkTo{ 0x493190 };
		inline constexpr REL::Offset InitPackageLocations{ 0x493340 };
		inline constexpr REL::Offset GetFatigue{ 0x493500 };
		inline constexpr REL::Offset GetFatiguePercentage{ 0x493530 };
		inline constexpr REL::Offset GetHealthPercentage{ 0x493590 };
		inline constexpr REL::Offset QueueAttack{ 0x4935F0 };
		inline constexpr REL::Offset StartAttack{ 0x493A40 };
		inline constexpr REL::Offset IsAttacking{ 0x494900 };
		inline constexpr REL::Offset PostAnimBlock{ 0x494940 };
		inline constexpr REL::Offset SetBlock{ 0x494CC0 };
		inline constexpr REL::Offset GetBlocked{ 0x494D60 };
		inline constexpr REL::Offset BlockHit{ 0x494D90 };
		inline constexpr REL::Offset Recoil{ 0x494E90 };
		inline constexpr REL::Offset Dodge{ 0x494F90 };
		inline constexpr REL::Offset PickAnimations{ 0x495110 };
		inline constexpr REL::Offset GetAnimGroup{ 0x497910 };
		inline constexpr REL::Offset GetAnimGroupDuration{ 0x497B50 };
		inline constexpr REL::Offset InitiateAggroRadiusGuardPackage{ 0x497BD0 };
		inline constexpr REL::Offset InitiateAvoidPackage{ 0x4982C0 };
		inline constexpr REL::Offset InitiateSurfacePackage{ 0x4984C0 };
		inline constexpr REL::Offset InitiateMovementBlockedPackage{ 0x4985D0 };
		inline constexpr REL::Offset FindMeleeTarget{ 0x4990F0 };
		inline constexpr REL::Offset MeleeAttack{ 0x499200 };
		inline constexpr REL::Offset CombatHit{ 0x499CB0 };
		inline constexpr REL::Offset HitMe{ 0x49A760 };
		inline constexpr REL::Offset GetRandomWornArmor{ 0x49D8B0 };
		inline constexpr REL::Offset Kill{ 0x49D900 };
		inline constexpr REL::Offset DropAddOnObjects{ 0x49F580 };
		inline constexpr REL::Offset QCombatController{ 0x4A0330 };
		inline constexpr REL::Offset HandleCombatProcessLevelChange{ 0x4A0680 };
		inline constexpr REL::Offset ClearInCombat{ 0x4A08E0 };
		inline constexpr REL::Offset RestoreFullHealthAndConditions{ 0x4A0960 };
		inline constexpr REL::Offset GetCurrentSpeed{ 0x4A0B10 };
		inline constexpr REL::Offset GetMaxCarryWeight{ 0x4A0C20 };
		inline constexpr REL::Offset GetEquippedEncumbrance{ 0x4A0C60 };
		inline constexpr REL::Offset GetInventoryWeight{ 0x4A0CD0 };
		inline constexpr REL::Offset IsWeaponDrawn{ 0x4A16D0 };
		inline constexpr REL::Offset GetCurrentWeapon{ 0x4A1710 };
		inline constexpr REL::Offset SetLifeState{ 0x4A1800 };
		inline constexpr REL::Offset ApplyCriticalStage{ 0x4A1A70 };
		inline constexpr REL::Offset GetItemBeingEscorted{ 0x4A2D40 };
		inline constexpr REL::Offset GetHeadingTarget{ 0x4A2ED0 };
		inline constexpr REL::Offset IsTurning{ 0x4A3B30 };
		inline constexpr REL::Offset GetBestDefaultHeadTrackTarget{ 0x4A3ED0 };
		inline constexpr REL::Offset ShouldRotateToTrack{ 0x4A40E0 };
		inline constexpr REL::Offset CanHeadTrack{ 0x4A4810 };
		inline constexpr REL::Offset ClearLastHitData{ 0x4A5300 };
		inline constexpr REL::Offset GetWeaponPosition{ 0x4A5340 };
		inline constexpr REL::Offset ResetFaceData{ 0x4A5530 };
		inline constexpr REL::Offset SetAlert{ 0x4A5E40 };
		inline constexpr REL::Offset SetHavokWeapon{ 0x4A5EB0 };
		inline constexpr REL::Offset SetHavokWeapon_1{ 0x4A5F20 };
		inline constexpr REL::Offset IsinSpectator{ 0x4A6170 };
		inline constexpr REL::Offset IsAlarmed{ 0x4A61B0 };
		inline constexpr REL::Offset IsWaiting{ 0x4A6210 };
		inline constexpr REL::Offset IsFleeing{ 0x4A6650 };
		inline constexpr REL::Offset RemoveFleeTarget{ 0x4A6730 };
		inline constexpr REL::Offset IsTalking{ 0x4A67F0 };
		inline constexpr REL::Offset SetWantWeaponDrawn{ 0x4A6840 };
		inline constexpr REL::Offset GetWantWeaponDrawn{ 0x4A6970 };
		inline constexpr REL::Offset IsContinuingPackageforPC{ 0x4A69D0 };
		inline constexpr REL::Offset UnlockLockDoorsProcedure{ 0x4A6A40 };
		inline constexpr REL::Offset EvaluatePackage{ 0x4A6CE0 };
		inline constexpr REL::Offset SetAnimAction{ 0x4A73E0 };
		inline constexpr REL::Offset GetAnimAction{ 0x4A7570 };
		inline constexpr REL::Offset InitiateBackUpPackage{ 0x4A7760 };
		inline constexpr REL::Offset IsEating{ 0x4A7870 };
		inline constexpr REL::Offset ShouldSkipFallOutBehavior{ 0x4A78F0 };
		inline constexpr REL::Offset IsSurfacing{ 0x4A7A40 };
		inline constexpr REL::Offset ForceIdleAnimation{ 0x4A7A90 };
		inline constexpr REL::Offset TriggerPain{ 0x4A7D50 };
		inline constexpr REL::Offset GetCombatStyle{ 0x4A7F80 };
		inline constexpr REL::Offset IsCloseToGround{ 0x4A8300 };
		inline constexpr REL::Offset IsReloading{ 0x4A8870 };
		inline constexpr REL::Offset GetCurrentAmmoClipPercent{ 0x4A88F0 };
		inline constexpr REL::Offset ShouldUseAmmo{ 0x4A8DD0 };
		inline constexpr REL::Offset StopAttack{ 0x4A8E50 };
		inline constexpr REL::Offset AlertAccompanyToPackageChange{ 0x4A8F60 };
		inline constexpr REL::Offset OffersServicesPackage{ 0x4AC680 };
		inline constexpr REL::Offset IsInCombatantFaction{ 0x4AC6F0 };
		inline constexpr REL::Offset ResetDamagePerSecond{ 0x4ACBA0 };
		inline constexpr REL::Offset CalculateCombatStrength{ 0x4ACBE0 };
		inline constexpr REL::Offset ClearDeathState{ 0x4ACC80 };
		inline constexpr REL::Offset SetUnConscious{ 0x4ACE10 };
		inline constexpr REL::Offset SetRestrained{ 0x4ACE50 };
		inline constexpr REL::Offset GetGhost{ 0x4ACE90 };
		inline constexpr REL::Offset SetGhost{ 0x4ACF10 };
		inline constexpr REL::Offset FakeWeaponHitSound{ 0x4ACFF0 };
		inline constexpr REL::Offset MoveActorAndFollowers{ 0x4AD1C0 };
		inline constexpr REL::Offset MoveActorAndFollowers_1{ 0x4AD910 };
		inline constexpr REL::Offset GetFaceAnimationData{ 0x4ADCB0 };
		inline constexpr REL::Offset GetPickUpSoundName{ 0x4ADCF0 };
		inline constexpr REL::Offset PlayPickUpSound{ 0x4ADED0 };
		inline constexpr REL::Offset DoWeaponKillForce{ 0x4AE000 };
		inline constexpr REL::Offset ObjectHit{ 0x4AE660 };
		inline constexpr REL::Offset GetEyeVector{ 0x4AFF80 };
		inline constexpr REL::Offset CheckInCombat{ 0x4B00C0 };
		inline constexpr REL::Offset IsVisible{ 0x4B0190 };
		inline constexpr REL::Offset DoDeathStuff{ 0x4B01C0 };
		inline constexpr REL::Offset CanAttackActor{ 0x4B0670 };
		inline constexpr REL::Offset GetShouldAttackActor{ 0x4B06D0 };
		inline constexpr REL::Offset GetShouldHelp{ 0x4B0970 };
		inline constexpr REL::Offset ReloadTargets{ 0x4B0B00 };
		inline constexpr REL::Offset InitLightingPropertyPtr{ 0x4B0BD0 };
		inline constexpr REL::Offset GetGunSkill{ 0x4B0DD0 };
		inline constexpr REL::Offset CanUseIdle{ 0x4B2010 };
		inline constexpr REL::Offset StartWeaponGroup{ 0x4B28C0 };
		inline constexpr REL::Offset GetIronSightsAttack{ 0x4B2B60 };
		inline constexpr REL::Offset UpdateActorMover{ 0x4B3230 };
		inline constexpr REL::Offset SetPathfindingGoal{ 0x4B3690 };
		inline constexpr REL::Offset GetCurrentPathfindingGoal{ 0x4B3860 };
		inline constexpr REL::Offset BuildRequest{ 0x4B3880 };
		inline constexpr REL::Offset IsPathValid{ 0x4B3960 };
		inline constexpr REL::Offset SetMoveMode{ 0x4B39F0 };
		inline constexpr REL::Offset ForceMoveMode{ 0x4B3A20 };
		inline constexpr REL::Offset ClearMoveMode{ 0x4B3A80 };
		inline constexpr REL::Offset StopMoving{ 0x4B3AB0 };
		inline constexpr REL::Offset ForceStopMoving{ 0x4B3AD0 };
		inline constexpr REL::Offset DidPathingFail{ 0x4B3B90 };
		inline constexpr REL::Offset IsPathingComplete{ 0x4B3BB0 };
		inline constexpr REL::Offset IsPathing{ 0x4B3BD0 };
		inline constexpr REL::Offset IsWaitingOnPath{ 0x4B3BF0 };
		inline constexpr REL::Offset IsRotating{ 0x4B3C30 };
		inline constexpr REL::Offset SetLookAtTarget{ 0x4B3CD0 };
		inline constexpr REL::Offset ClearLookAtTarget{ 0x4B3D30 };
		inline constexpr REL::Offset GetCachedMoveDelta{ 0x4B3D50 };
		inline constexpr REL::Offset GetClosestBone{ 0x4B3D70 };
		inline constexpr REL::Offset GetDamageLocation{ 0x4B3EF0 };
		inline constexpr REL::Offset ExplodeLimb{ 0x4B3FE0 };
		inline constexpr REL::Offset DismemberLimbs{ 0x4B43A0 };
		inline constexpr REL::Offset Dismember{ 0x4B4D10 };
		inline constexpr REL::Offset ScriptDismember{ 0x4B51B0 };
		inline constexpr REL::Offset DismemberLimb{ 0x4B52A0 };
		inline constexpr REL::Offset HideDismemberedLimb{ 0x4B6290 };
		inline constexpr REL::Offset UnhideDismemberedLimb{ 0x4B64E0 };
		inline constexpr REL::Offset UpdateDismemberedLimbVel{ 0x4B65F0 };
		inline constexpr REL::Offset ClearDismemberedLimbs{ 0x4B6820 };
		inline constexpr REL::Offset CreateDismemberedLimbs{ 0x4B6AE0 };
		inline constexpr REL::Offset RemoveDismemberedLimb{ 0x4B6DF0 };
		inline constexpr REL::Offset IsSkinnedToLimb{ 0x4B6E80 };
		inline constexpr REL::Offset FillBoneArray{ 0x4B6FF0 };
		inline constexpr REL::Offset GetAnimationMoveDelta{ 0x4B7100 };
		inline constexpr REL::Offset QueueReplacementLocomotion{ 0x4B7360 };
		inline constexpr REL::Offset QueueReplacementLocomotion_1{ 0x4B73F0 };
		inline constexpr REL::Offset QueueReplacementLocomotions{ 0x4B78C0 };
		inline constexpr REL::Offset IsCrippled{ 0x4B7B70 };
		inline constexpr REL::Offset AddFactionMinorCrime{ 0x4B7C00 };
		inline constexpr REL::Offset AddFactionMajorCrime{ 0x4B7D20 };
		inline constexpr REL::Offset GetFactionMinorCrime{ 0x4B7E20 };
		inline constexpr REL::Offset GetFactionReaction{ 0x4B7FE0 };
		inline constexpr REL::Offset GetFactionRank{ 0x4B8290 };
		inline constexpr REL::Offset SetFactionsThatCareAboutCrime{ 0x4B8360 };
		inline constexpr REL::Offset HasFactionThatCaresAboutCrime{ 0x4B8490 };
		inline constexpr REL::Offset SetFactionRank{ 0x4B8580 };
		inline constexpr REL::Offset ModFactionRank{ 0x4B86E0 };
		inline constexpr REL::Offset GetFactionFightReaction{ 0x4B87A0 };
		inline constexpr REL::Offset IntegrateFactionLists{ 0x4B8CA0 };
		inline constexpr REL::Offset AddFaction{ 0x4B8E20 };
		inline constexpr REL::Offset IsInFaction{ 0x4B8E90 };
		inline constexpr REL::Offset ProcessDamageImpacts{ 0x4B8F90 };
		inline constexpr REL::Offset ConditionModifiedCallback{ 0x4B9240 };
		inline constexpr REL::Offset MobilityConditionModifiedCallback{ 0x4B9830 };
		inline constexpr REL::Offset HealthFatigueModifiedCallback{ 0x4B9960 };
		inline constexpr REL::Offset EnduranceModifiedCallback{ 0x4B9EA0 };
		inline constexpr REL::Offset QueueReplacementLocomotion_2{ 0x4BA090 };
		inline constexpr REL::Offset InventoryWeightModifiedCallback{ 0x4BA2F0 };
		inline constexpr REL::Offset HasBackPackWorn{ 0x4BA3E0 };
		inline constexpr REL::Offset IsPowerBodyArmorWorn{ 0x4BA410 };
		inline constexpr REL::Offset HandlePostAnimationActions{ 0x4BA600 };
		inline constexpr REL::Offset RequestRotate{ 0x4BB520 };
		inline constexpr REL::Offset RequestRotate_1{ 0x4BB5C0 };
		inline constexpr REL::Offset SetPathfindingFlee{ 0x4BB630 };
		inline constexpr REL::Offset SetIronSights{ 0x4BB650 };
		inline constexpr REL::Offset GetIronSights{ 0x4BBC10 };
		inline constexpr REL::Offset ApplyConstrTemplate{ 0x4BBC40 };
		inline constexpr REL::Offset ResetCachedGunSkill{ 0x4BBDB0 };
		inline constexpr REL::Offset ResetCachedWeaponCondition{ 0x4BBE00 };
		inline constexpr REL::Offset InitiateUseWeaponPackage{ 0x4BBF40 };
		inline constexpr REL::Offset SetActionSoundValue{ 0x4BC240 };
		inline constexpr REL::Offset RegisterGrabIKNote{ 0x4BC300 };
		inline constexpr REL::Offset IsInCombatWithActor{ 0x4BC700 };
		inline constexpr REL::Offset AddFollower{ 0x4BC790 };
		inline constexpr REL::Offset IsFollowing_1{ 0x4BC7F0 };
		inline constexpr REL::Offset CouldBeFollowing{ 0x4BC860 };
		inline constexpr REL::Offset CanUseWeapon{ 0x4BC9D0 };
		inline constexpr REL::Offset SetPlayerTeammate{ 0x4BCA90 };
		inline constexpr REL::Offset AddBackCrime{ 0x4BCBD0 };
		inline constexpr REL::Offset ShouldActorAvoidRadiation{ 0x4BCC80 };
		inline constexpr REL::Offset FadeIn{ 0x4BCD20 };
		inline constexpr REL::Offset UpdateRagdollAnimState{ 0x4BCDF0 };
		inline constexpr REL::Offset FadeSkins{ 0x4BD630 };
		inline constexpr REL::Offset GetVATSAreaFree{ 0x4BD830 };
		inline constexpr REL::Offset GetVATSTargetVisible{ 0x4BDBD0 };
		inline constexpr REL::Offset GetRadius{ 0x4BE1B0 };
		inline constexpr REL::Offset GetWidth{ 0x4BE280 };
		inline constexpr REL::Offset GetLength{ 0x4BE350 };
		inline constexpr REL::Offset GetForwardLength{ 0x4BE420 };
		inline constexpr REL::Offset GetWeaponDamagePerSecond{ 0x4BE600 };
		inline constexpr REL::Offset GetEndurance{ 0x4BE7A0 };
		inline constexpr REL::Offset GetEyeLevel{ 0x4BE940 };
		inline constexpr REL::Offset GetActorAggression{ 0x4BEA10 };
		inline constexpr REL::Offset GetMedicineEffectivenessMultiplier{ 0x4BEBB0 };
		inline constexpr REL::Offset GetSurvivalEffectivenessMultiplier{ 0x4BEC80 };
		inline constexpr REL::Offset InitiateAlarm{ 0x4BED50 };
		inline constexpr REL::Offset InitiatePickPocketWarning{ 0x4BF500 };
		inline constexpr REL::Offset InitiateStealWarning{ 0x4BF7B0 };
		inline constexpr REL::Offset StealAlarm{ 0x4BFA40 };
		inline constexpr REL::Offset IncrementMinorCrimes{ 0x4BFF50 };
		inline constexpr REL::Offset IsAngryWithPlayer{ 0x4BFFC0 };
		inline constexpr REL::Offset IsProcessingTresPassAlarm{ 0x4C0050 };
		inline constexpr REL::Offset PickpocketAlarm{ 0x4C00E0 };
		inline constexpr REL::Offset AttackAlarm{ 0x4C0460 };
		inline constexpr REL::Offset MurderAlarm{ 0x4C09E0 };
		inline constexpr REL::Offset TrespassAlarm{ 0x4C0EC0 };
		inline constexpr REL::Offset UpdateCombatData{ 0x4C1470 };
		inline constexpr REL::Offset SetLocalVariableOnActor{ 0x4C16C0 };
		inline constexpr REL::Offset GetLocalVariableOnActor{ 0x4C1740 };
		inline constexpr REL::Offset SetReloadSpeed{ 0x4C17C0 };
		inline constexpr REL::Offset SetEquipSpeed{ 0x4C1940 };
		inline constexpr REL::Offset IsActorRefEssential{ 0x4C1B30 };
		inline constexpr REL::Offset Eat{ 0x4C1DE0 };
		inline constexpr REL::Offset DrinkPotion{ 0x4C1F80 };
		inline constexpr REL::Offset CastAlchemy{ 0x4C2090 };
		inline constexpr REL::Offset CheckEquipWornEnchantment{ 0x4C2630 };
		inline constexpr REL::Offset CastPermanentMagic{ 0x4C26E0 };
		inline constexpr REL::Offset DispelPermanentMagic{ 0x4C2B60 };
		inline constexpr REL::Offset PreloadPermanentMagic{ 0x4C2E50 };
		inline constexpr REL::Offset UnloadPermanentMagic{ 0x4C30A0 };
		inline constexpr REL::Offset CheckMagicNode{ 0x4C3790 };
		inline constexpr REL::Offset AttachCastingArt{ 0x4C39B0 };
		inline constexpr REL::Offset UpdateMagic{ 0x4C3C40 };
		inline constexpr REL::Offset GetRadiationResistanceMult{ 0x4C4330 };
		inline constexpr REL::Offset UpdateAlpha{ 0x4C4640 };
		inline constexpr REL::Offset GetAlphaMult{ 0x4C4850 };
		inline constexpr REL::Offset SetAlphaMult{ 0x4C4890 };
		inline constexpr REL::Offset IsRefractive{ 0x4C51C0 };
		inline constexpr REL::Offset CheckRadiationLevelChange{ 0x4C5350 };
		inline constexpr REL::Offset CheckDehydrationLevelChange{ 0x4C5610 };
		inline constexpr REL::Offset CheckHungerLevelChange{ 0x4C5890 };
		inline constexpr REL::Offset CheckSleepDeprevationLevelChange{ 0x4C5B10 };
	}

	namespace ActorCause
	{
		inline constexpr REL::Offset IncRefCount{ 0x4BBC0 };
		inline constexpr REL::Offset DecRefCount{ 0x26E2B0 };
		inline constexpr REL::Offset SaveGame{ 0x26E390 };
	}

	namespace ActorLockData
	{
		inline constexpr REL::Offset ctor{ 0x102670 };
	}

	namespace ActorMover
	{
		inline constexpr REL::Offset HasLookAtTarget{ 0x4B3D10 };
		inline constexpr REL::Offset ctor{ 0x5DAD00 };
		inline constexpr REL::Offset ClearCurrentData{ 0x5DAF80 };
		inline constexpr REL::Offset BackGroundBuildPath{ 0x5DB090 };
		inline constexpr REL::Offset SetGoal{ 0x5DBA50 };
		inline constexpr REL::Offset SetGoalAndAngle{ 0x5DBB60 };
		inline constexpr REL::Offset BuildRequest{ 0x5DBC90 };
		inline constexpr REL::Offset DoStartMoving{ 0x5DBDC0 };
		inline constexpr REL::Offset HandleMovementResult{ 0x5DC5E0 };
		inline constexpr REL::Offset OnMoveToHigh{ 0x5DC7F0 };
		inline constexpr REL::Offset EndOfCurrentPathCheck{ 0x5DC980 };
		inline constexpr REL::Offset IsWaitingForAvoidance{ 0x5DCB30 };
		inline constexpr REL::Offset GetDistanceRemaining{ 0x5DCC50 };
		inline constexpr REL::Offset IsPathingComplete{ 0x5DCD40 };
		inline constexpr REL::Offset IsPathing{ 0x5DCDB0 };
		inline constexpr REL::Offset RequestRotateActor{ 0x5DCE20 };
		inline constexpr REL::Offset RequestRotateActor_1{ 0x5DCE80 };
		inline constexpr REL::Offset ForceStopMoving{ 0x5DD0C0 };
		inline constexpr REL::Offset GetPreferredMoveModeType{ 0x5DD130 };
		inline constexpr REL::Offset DoStopMoving{ 0x5DD150 };
		inline constexpr REL::Offset FinishMoving{ 0x5DD1C0 };
		inline constexpr REL::Offset HandleProcessLevelChange{ 0x5DD2D0 };
		inline constexpr REL::Offset SetCurrentFrameMoveModeAndDelta{ 0x5DDC00 };
		inline constexpr REL::Offset GetLookAtPoint{ 0x5DE270 };
		inline constexpr REL::Offset GetCurrentGoal{ 0x5DE2B0 };
		inline constexpr REL::Offset GetCurrentGoal_1{ 0x5DE330 };
		inline constexpr REL::Offset SetPathingFailed{ 0x5DE490 };
		inline constexpr REL::Offset WarpToNextNode{ 0x5DE8B0 };
		inline constexpr REL::Offset MoveActorToLocation{ 0x5DF010 };
	}

	namespace ActorPackage
	{
		inline constexpr REL::Offset Clear{ 0x4C5EF0 };
		inline constexpr REL::Offset InitFromPackage{ 0x4C6080 };
		inline constexpr REL::Offset GetSaveSize{ 0x4C61A0 };
		inline constexpr REL::Offset SaveGame{ 0x4C6250 };
		inline constexpr REL::Offset LoadGame{ 0x4C6320 };
		inline constexpr REL::Offset InitLoadGame{ 0x4C64D0 };
		inline constexpr REL::Offset SaveGame_1{ 0x4C65D0 };
		inline constexpr REL::Offset LoadGame_1{ 0x4C6730 };
		inline constexpr REL::Offset InitLoadGame_1{ 0x4C6970 };
		inline constexpr REL::Offset GetFlag{ 0x4C6B00 };
		inline constexpr REL::Offset FinishLoadGame{ 0x4C6B20 };
	}

	namespace ActorPackageData
	{
		inline constexpr REL::Offset ctor{ 0x27D920 };
		inline constexpr REL::Offset CreateActorPackageData{ 0x4C6CA0 };
	}

	namespace ActorPathHandler
	{
		inline constexpr REL::Offset ctor{ 0x5DFE40 };
	}

	namespace ActorPathingMessage
	{
		inline constexpr REL::Offset ctor{ 0x2E9BD0 };
		inline constexpr REL::Offset ctor_1{ 0x2E9C00 };
		inline constexpr REL::Offset dtor{ 0x400190 };
	}

	namespace ActorPathingMessageQueue
	{
		inline constexpr REL::Offset ctor{ 0x4DF900 };
	}

	namespace ActorValueInfo
	{
		inline constexpr REL::Offset GetActorValueFormID{ 0x26FDF0 };
		inline constexpr REL::Offset ctor{ 0x26FE40 };
	}

	namespace ActorValueOwner
	{
		inline constexpr REL::Offset ctor{ 0x1F78E0 };
		inline constexpr REL::Offset GetClampedActorValue{ 0x26EF20 };
		inline constexpr REL::Offset GetClampedActorFloatValue{ 0x26EF50 };
	}

	namespace AdvancedCombatStyleData
	{
		inline constexpr REL::Offset Endian{ 0x1057A0 };
	}

	namespace AlchemyItem
	{
		inline constexpr REL::Offset ctor{ 0x2820 };
		inline constexpr REL::Offset IsFlagSet{ 0x29D0 };
		inline constexpr REL::Offset GetAddictionItem{ 0x30B0 };
		inline constexpr REL::Offset IsWater{ 0x36D0 };
		inline constexpr REL::Offset GetConsumptionSound{ 0x5ACCE0 };
	}

	namespace AlchemyItemData
	{
		inline constexpr REL::Offset Endian{ 0x3720 };
	}

	namespace AngleSinCos
	{
		inline constexpr REL::Offset operator_call{ 0x2985F0 };
		inline constexpr REL::Offset ctor{ 0x2A04E0 };
		inline constexpr REL::Offset operator_call_1{ 0x2A06F0 };
	}

	namespace AngleSinCosArc
	{
		inline constexpr REL::Offset ctor{ 0x2A05E0 };
		inline constexpr REL::Offset ctor_1{ 0x2A0620 };
		inline constexpr REL::Offset WithinRange{ 0x2A0660 };
		inline constexpr REL::Offset GetLength{ 0x2A07A0 };
	}

	namespace AnimIdle
	{
		inline constexpr REL::Offset ctor{ 0x965D0 };
		inline constexpr REL::Offset FreeAnimIdleData{ 0x96A50 };
		inline constexpr REL::Offset Loaded{ 0x96CD0 };
		inline constexpr REL::Offset Update{ 0x97040 };
		inline constexpr REL::Offset GetSaveSize{ 0x97100 };
		inline constexpr REL::Offset SaveGame{ 0x97180 };
		inline constexpr REL::Offset LoadGame{ 0x972A0 };
		inline constexpr REL::Offset GetAnimIdleSaveSize{ 0x974C0 };
		inline constexpr REL::Offset SaveAnimIdle{ 0x975E0 };
		inline constexpr REL::Offset LoadAnimIdle{ 0x977E0 };
	}

	namespace AnimSequenceBase
	{
		inline constexpr REL::Offset ctor{ 0x8F1B0 };
	}

	namespace AnimSequenceMultiple
	{
		inline constexpr REL::Offset ctor{ 0x8F0C0 };
		inline constexpr REL::Offset GetCorrespondingSequence{ 0x8F500 };
	}

	namespace AnimSequenceSingle
	{
		inline constexpr REL::Offset ctor{ 0x90E10 };
	}

	namespace AnimatingText
	{
		inline constexpr REL::Offset Initialize{ 0x2FFE10 };
		inline constexpr REL::Offset SetTraits{ 0x2FFE80 };
		inline constexpr REL::Offset Update{ 0x2FFEA0 };
		inline constexpr REL::Offset GetDisplayMode{ 0x3000B0 };
		inline constexpr REL::Offset GetFlashMode{ 0x3000D0 };
		inline constexpr REL::Offset ForceFinish{ 0x300110 };
		inline constexpr REL::Offset ctor{ 0x326C90 };
		inline constexpr REL::Offset dtor{ 0x326CF0 };
		inline constexpr REL::Offset ctor_1{ 0x359EB0 };
		inline constexpr REL::Offset operator_call{ 0x359F20 };
		inline constexpr REL::Offset SetDisplayInterval{ 0x366A10 };
	}

	namespace Animation
	{
		inline constexpr REL::Offset GetGroup{ 0x301B0 };
		inline constexpr REL::Offset GetTime{ 0x53700 };
		inline constexpr REL::Offset ctor{ 0x8F810 };
		inline constexpr REL::Offset dtor{ 0x8FB50 };
		inline constexpr REL::Offset ShutdownAllAnimIdles{ 0x8FF50 };
		inline constexpr REL::Offset Init{ 0x8FFD0 };
		inline constexpr REL::Offset AddSpecialAnimations{ 0x90330 };
		inline constexpr REL::Offset AddAnimationsFromList{ 0x90400 };
		inline constexpr REL::Offset AddAnimation{ 0x90500 };
		inline constexpr REL::Offset ShouldQueueSequenceCloning{ 0x90E60 };
		inline constexpr REL::Offset GetCurrentSequence{ 0x91040 };
		inline constexpr REL::Offset GetDuration{ 0x91090 };
		inline constexpr REL::Offset FindSkinnedNode{ 0x910D0 };
		inline constexpr REL::Offset Update{ 0x91180 };
		inline constexpr REL::Offset GetTime_1{ 0x93800 };
		inline constexpr REL::Offset GetAnimsLoading{ 0x93830 };
		inline constexpr REL::Offset UpdateMovement{ 0x93900 };
		inline constexpr REL::Offset UpdateQueuedScenegraph{ 0x93930 };
		inline constexpr REL::Offset UpdateMovementNoWorldUpdate{ 0x939D0 };
		inline constexpr REL::Offset UpdateSceneGraphNoController{ 0x93BD0 };
		inline constexpr REL::Offset InitGroupSpeed{ 0x93D50 };
		inline constexpr REL::Offset GetGroupSpeed{ 0x94300 };
		inline constexpr REL::Offset GetDelta{ 0x94390 };
		inline constexpr REL::Offset GroupLoaded{ 0x94710 };
		inline constexpr REL::Offset PlayGroup{ 0x94740 };
		inline constexpr REL::Offset StartGroup{ 0x948C0 };
		inline constexpr REL::Offset StartGroup_1{ 0x949A0 };
		inline constexpr REL::Offset ForceSection{ 0x955C0 };
		inline constexpr REL::Offset PickBestAnimation{ 0x95740 };
		inline constexpr REL::Offset ShouldBeMoving{ 0x95BE0 };
		inline constexpr REL::Offset SyncSequences{ 0x95DA0 };
		inline constexpr REL::Offset FindSwitchKey{ 0x95E40 };
		inline constexpr REL::Offset FindNextNoteKey{ 0x95F50 };
		inline constexpr REL::Offset ClearGroup{ 0x96080 };
		inline constexpr REL::Offset ZeroGlobalTransform{ 0x96280 };
		inline constexpr REL::Offset ClearAccumRootTranslate{ 0x964D0 };
		inline constexpr REL::Offset GetTESAnimGroup{ 0x96500 };
		inline constexpr REL::Offset GetControllerManager{ 0x96940 };
		inline constexpr REL::Offset GetAnimSequenceMap{ 0x97280 };
		inline constexpr REL::Offset SkipNextBlend{ 0x974A0 };
		inline constexpr REL::Offset SpecialIdleQueue{ 0x97CA0 };
		inline constexpr REL::Offset SpecialIdleAuto{ 0x97F20 };
		inline constexpr REL::Offset SpecialIdleReplace{ 0x98030 };
		inline constexpr REL::Offset SpecialIdleLoaded{ 0x981F0 };
		inline constexpr REL::Offset SpecialIdlePlay{ 0x98230 };
		inline constexpr REL::Offset SpecialIdlePlay_1{ 0x98290 };
		inline constexpr REL::Offset SpecialIdleDonePlaying{ 0x985F0 };
		inline constexpr REL::Offset AnimIdleFree{ 0x98670 };
		inline constexpr REL::Offset SpecialIdleFree{ 0x98910 };
		inline constexpr REL::Offset SpecialIdleWorking{ 0x98F80 };
		inline constexpr REL::Offset ClearBlendInterps{ 0x99080 };
		inline constexpr REL::Offset ClearControllersInterpolators{ 0x99160 };
		inline constexpr REL::Offset ReloadTargets{ 0x99240 };
		inline constexpr REL::Offset BlendOut{ 0x994F0 };
		inline constexpr REL::Offset GetSaveSize{ 0x997F0 };
		inline constexpr REL::Offset SaveGame{ 0x99B90 };
		inline constexpr REL::Offset LoadGame{ 0x9A1C0 };
		inline constexpr REL::Offset Revert{ 0x9A920 };
		inline constexpr REL::Offset SaveGame_1{ 0x9AB40 };
		inline constexpr REL::Offset LoadGame_1{ 0x9B050 };
		inline constexpr REL::Offset Revert_1{ 0x9BB70 };
		inline constexpr REL::Offset UpdateBipOnly{ 0x9BCA0 };
		inline constexpr REL::Offset SetLipTime{ 0x9BDC0 };
		inline constexpr REL::Offset SetLipTime_1{ 0x9BF10 };
		inline constexpr REL::Offset SetAttackSpeed{ 0xC0C90 };
		inline constexpr REL::Offset GetGroupAction{ 0x30F490 };
		inline constexpr REL::Offset ReloadAnimQueued{ 0x4846C0 };
		inline constexpr REL::Offset SetGlobalTimeMultiplier{ 0x48B030 };
		inline constexpr REL::Offset SetMoveSpeed{ 0x4950F0 };
		inline constexpr REL::Offset SkipUpdate{ 0x4EEAA0 };
	}

	namespace ArrowProjectile
	{
		inline constexpr REL::Offset GetArrowCount{ 0x170F60 };
		inline constexpr REL::Offset GetAttachedRef{ 0x45F810 };
		inline constexpr REL::Offset InitHavok{ 0x4CAEA0 };
		inline constexpr REL::Offset CollideActor{ 0x4CBA30 };
		inline constexpr REL::Offset CollideTerrain{ 0x4CC740 };
		inline constexpr REL::Offset Bounce{ 0x4CCCE0 };
		inline constexpr REL::Offset Simulate{ 0x4CCFB0 };
		inline constexpr REL::Offset ProcessCollision{ 0x4CD210 };
		inline constexpr REL::Offset ProcessCollisionActor{ 0x4CD390 };
		inline constexpr REL::Offset ProcessCollisionReference{ 0x4CD520 };
		inline constexpr REL::Offset ProcessCollisionTerrain{ 0x4CD6D0 };
		inline constexpr REL::Offset ProcessBounce{ 0x4CD780 };
		inline constexpr REL::Offset ProcessSimulate{ 0x4CDAF0 };
		inline constexpr REL::Offset GetArrowGroup{ 0x4CDDB0 };
		inline constexpr REL::Offset DeleteAttachedArrows{ 0x4CDDD0 };
		inline constexpr REL::Offset DeleteAttachedArrows_1{ 0x4CE180 };
		inline constexpr REL::Offset PlayArrowCollisionSound{ 0x4CFAD0 };
		inline constexpr REL::Offset PickSceneGraph{ 0x4CFBC0 };
		inline constexpr REL::Offset ApplyCollisionForce{ 0x4D0020 };
	}

	namespace ArrowProjectile_CollisionInfo
	{
		inline constexpr REL::Offset ctor{ 0x4CC6F0 };
	}

	namespace AssociatedItemEffect
	{
		inline constexpr REL::Offset ctor{ 0x406C20 };
	}

	namespace Atmosphere
	{
		inline constexpr REL::Offset ctor{ 0x233080 };
	}

	namespace AttachDistant3DTask
	{
		inline constexpr REL::Offset ctor{ 0x404C0 };
	}

	namespace AudioMarkerData
	{
		inline constexpr REL::Offset Save{ 0x189560 };
		inline constexpr REL::Offset Load{ 0x189600 };
	}

	namespace AutoMemContext
	{
		inline constexpr REL::Offset ctor{ 0x4EB0 };
		inline constexpr REL::Offset dtor{ 0x4EE0 };
		inline constexpr REL::Offset Enter{ 0x4F00 };
		inline constexpr REL::Offset Leave{ 0x4F70 };
	}

	namespace AutoTileLock
	{
		inline constexpr REL::Offset ctor{ 0x6044F0 };
	}

	namespace AvoidAreaStruct
	{
		inline constexpr REL::Offset LoadGame{ 0x4D7420 };
		inline constexpr REL::Offset InitLoadGame{ 0x4D74A0 };
	}

	namespace BGSAbilityPerkEntry
	{
		inline constexpr REL::Offset ctor{ 0x1E9BD0 };
	}

	namespace BGSAcousticSpace
	{
		inline constexpr REL::Offset IsInterior{ 0x18A200 };
		inline constexpr REL::Offset GetDuskSound{ 0x239B40 };
		inline constexpr REL::Offset GetEnvironmentType{ 0x28A810 };
	}

	namespace BGSAcousticSpaceListener
	{
		inline constexpr REL::Offset ctor{ 0x21F460 };
		inline constexpr REL::Offset DequeueRemoval{ 0x21F890 };
	}

	namespace BGSAddonNode
	{
		inline constexpr REL::Offset IsMasterParticleSystem{ 0x48BF0 };
		inline constexpr REL::Offset ctor{ 0xF8B00 };
	}

	namespace BGSAddonNodeSoundHandleExtra
	{
		inline constexpr REL::Offset ctor{ 0xF91B0 };
	}

	namespace BGSAmmoForm
	{
		inline constexpr REL::Offset GetAmmoForm{ 0x74A00 };
		inline constexpr REL::Offset GetAmmoFormList{ 0x74A40 };
		inline constexpr REL::Offset IsRockItLauncher{ 0x74A80 };
		inline constexpr REL::Offset Save{ 0x74AF0 };
		inline constexpr REL::Offset InitItem{ 0x74BC0 };
	}

	namespace BGSBipedModelList
	{
		inline constexpr REL::Offset ctor{ 0x74D10 };
		inline constexpr REL::Offset dtor{ 0x74D40 };
		inline constexpr REL::Offset Save{ 0x74D60 };
		inline constexpr REL::Offset InitItem{ 0x74DA0 };
		inline constexpr REL::Offset GetFormAsBipedModelList{ 0x75020 };
	}

	namespace BGSBodyPart
	{
		inline constexpr REL::Offset ctor{ 0x1E3AF0 };
		inline constexpr REL::Offset dtor{ 0x1E3C60 };
		inline constexpr REL::Offset InitItem{ 0x1E3D80 };
		inline constexpr REL::Offset Load{ 0x1E4100 };
		inline constexpr REL::Offset HideLimb{ 0x1E4730 };
		inline constexpr REL::Offset UnhideLimb{ 0x1E4890 };
		inline constexpr REL::Offset ShowLimb{ 0x1E4970 };
		inline constexpr REL::Offset GetActorValue{ 0x1E5190 };
		inline constexpr REL::Offset GetPartType{ 0x1E5300 };
		inline constexpr REL::Offset IsExplodablePart{ 0x4B4360 };
		inline constexpr REL::Offset IsExplodeChanceAbsolute{ 0x4B4CD0 };
		inline constexpr REL::Offset GetExplosionChance{ 0x4B4CF0 };
	}

	namespace BGSBodyPartData
	{
		inline constexpr REL::Offset ctor{ 0x1E4AF0 };
		inline constexpr REL::Offset GetBodyPart{ 0x1E50F0 };
		inline constexpr REL::Offset GetBodyPart_1{ 0x1E5130 };
		inline constexpr REL::Offset AddBodyPart{ 0x1E5220 };
		inline constexpr REL::Offset GenerateDefaultBodyPartData{ 0x1E53A0 };
		inline constexpr REL::Offset HideChildLimbs{ 0x1E55E0 };
		inline constexpr REL::Offset ShowChildLimbs{ 0x1E5750 };
	}

	namespace BGSCameraPath
	{
		inline constexpr REL::Offset ctor{ 0x18A380 };
		inline constexpr REL::Offset InitParents{ 0x18AEF0 };
		inline constexpr REL::Offset FixNextPaths{ 0x18B190 };
		inline constexpr REL::Offset GetCameraPathToPlay{ 0x18B510 };
		inline constexpr REL::Offset GetChildByIndex{ 0x18B630 };
		inline constexpr REL::Offset RemoveChildAtIndex{ 0x18B6C0 };
		inline constexpr REL::Offset RemoveChild{ 0x18B730 };
		inline constexpr REL::Offset SetParentPath{ 0x1F4BB0 };
	}

	namespace BGSCameraPathManager
	{
		inline constexpr REL::Offset ctor{ 0x18B770 };
		inline constexpr REL::Offset dtor{ 0x18B7D0 };
		inline constexpr REL::Offset CreateDefaultPath{ 0x18B850 };
		inline constexpr REL::Offset DestroyRootPathArrayForms{ 0x18BA40 };
		inline constexpr REL::Offset GetCameraPathToPlay{ 0x18BB50 };
	}

	namespace BGSCameraShot
	{
		inline constexpr REL::Offset InitCamera{ 0x18C5D0 };
		inline constexpr REL::Offset SetCameraLocation{ 0x18CBC0 };
		inline constexpr REL::Offset FreeCamera{ 0x18CE50 };
		inline constexpr REL::Offset Update{ 0x18CF60 };
		inline constexpr REL::Offset GetTargetPos{ 0x18D510 };
		inline constexpr REL::Offset IsInitialized{ 0x18D630 };
	}

	namespace BGSCameraShot_CAMERA_SHOT_DATA
	{
		inline constexpr REL::Offset Endian{ 0x18C3C0 };
	}

	namespace BGSCameraShot_OLD_CAMERA_SHOT_DATA
	{
		inline constexpr REL::Offset Endian{ 0x18C2E0 };
	}

	namespace BGSCellNumericIDArrayMap
	{
		inline constexpr REL::Offset ctor{ 0x452810 };
	}

	namespace BGSChangeFlags
	{
		inline constexpr REL::Offset CheckFlags{ 0x280F0 };
		inline constexpr REL::Offset RemoveFlags{ 0x162210 };
		inline constexpr REL::Offset GetFlagName{ 0x43FEF0 };
		inline constexpr REL::Offset ReduceToForcedChanges{ 0x440F70 };
		inline constexpr REL::Offset AddFlags{ 0x441100 };
		inline constexpr REL::Offset GetUnrevertibleChanges{ 0x441120 };
	}

	namespace BGSClipRoundsForm
	{
		inline constexpr REL::Offset ctor{ 0x750B0 };
		inline constexpr REL::Offset dtor{ 0x750E0 };
	}

	namespace BGSDebris
	{
		inline constexpr REL::Offset GetData{ 0x9140 };
		inline constexpr REL::Offset AddDebrisData{ 0xFA500 };
		inline constexpr REL::Offset SpawnDebris{ 0xFA6F0 };
	}

	namespace BGSDebrisData
	{
		inline constexpr REL::Offset SetFileName{ 0xFA670 };
	}

	namespace BGSDecalEmitter
	{
		inline constexpr REL::Offset Update{ 0xA2D50 };
	}

	namespace BGSDecalManager
	{
		inline constexpr REL::Offset GetInstance{ 0x9FEF0 };
		inline constexpr REL::Offset UpdateSimpleDecals{ 0xA0030 };
		inline constexpr REL::Offset IssueDecalOcclusionQuery{ 0xA04C0 };
		inline constexpr REL::Offset IsValidDecalImpact{ 0xA1060 };
		inline constexpr REL::Offset AddDecal{ 0xA10D0 };
		inline constexpr REL::Offset AddGeometryDecalRecurse{ 0xA1A70 };
		inline constexpr REL::Offset AddProjectedDecalRecurse{ 0xA2070 };
		inline constexpr REL::Offset RemoveAllDecals{ 0xA42A0 };
		inline constexpr REL::Offset ClearPendingQueries{ 0xA4340 };
		inline constexpr REL::Offset pInstance{ 0xDC57F8 };
	}

	namespace BGSDecalNode
	{
		inline constexpr REL::Offset ctor{ 0xEE050 };
		inline constexpr REL::Offset ctor_1{ 0xEE120 };
		inline constexpr REL::Offset Init{ 0xEE390 };
	}

	namespace BGSDefaultObjectManager
	{
		inline constexpr REL::Offset Instance{ 0x18D680 };
		inline constexpr REL::Offset ctor{ 0x18D760 };
		inline constexpr REL::Offset GetDefaultObject{ 0x18DB10 };
		inline constexpr REL::Offset pInstance{ 0xDCA80C };
	}

	namespace BGSDehydrationStage
	{
		inline constexpr REL::Offset ctor{ 0x10B0 };
	}

	namespace BGSDestructibleObjectForm
	{
		inline constexpr REL::Offset ctor{ 0x75350 };
		inline constexpr REL::Offset dtor{ 0x75380 };
		inline constexpr REL::Offset IsDestructible{ 0x753D0 };
		inline constexpr REL::Offset GetDestructionForm{ 0x75400 };
		inline constexpr REL::Offset GetMaxHealth{ 0x75AB0 };
		inline constexpr REL::Offset DamageObject{ 0x75B20 };
		inline constexpr REL::Offset SpawnExplosionsAtBlastNodes{ 0x76CB0 };
		inline constexpr REL::Offset SpawnDebrisAtDebrisNodes{ 0x76DD0 };
		inline constexpr REL::Offset UpdateDamageStageNodes{ 0x76EC0 };
		inline constexpr REL::Offset UpdateCurrentDamageStage{ 0x76F50 };
		inline constexpr REL::Offset ApplyTerminalDamage{ 0x77090 };
		inline constexpr REL::Offset FindModelSwapNodes{ 0x77230 };
		inline constexpr REL::Offset UpdateDestructibleObjects{ 0x772F0 };
		inline constexpr REL::Offset CalcDestructionStage{ 0x77430 };
		inline constexpr REL::Offset HideSmallDebris{ 0x77560 };
		inline constexpr REL::Offset QueueFiles{ 0x77640 };
		inline constexpr REL::Offset GetSelfDamage{ 0x77BC0 };
		inline constexpr REL::Offset ClearDestruction{ 0x77D10 };
		inline constexpr REL::Offset Save{ 0x77F20 };
		inline constexpr REL::Offset InitItem{ 0x78BE0 };
	}

	namespace BGSDistantObjectBlock
	{
		inline constexpr REL::Offset BuildBlockFileName{ 0x2F55F0 };
		inline constexpr REL::Offset BuildBlockFileNameHighPriority{ 0x2F5640 };
		inline constexpr REL::Offset BuildBlockFileNamePA{ 0x2F5690 };
		inline constexpr REL::Offset BuildStingerBlockFileName{ 0x2F56E0 };
		inline constexpr REL::Offset BuildStingerBlockFileNameHighPriority{ 0x2F5730 };
		inline constexpr REL::Offset BuildBlockDiffuseTextureFileName{ 0x2F5780 };
		inline constexpr REL::Offset BuildBlockNormalTextureFileName{ 0x2F57C0 };
		inline constexpr REL::Offset EnableStingerRenderAll{ 0x2F58E0 };
		inline constexpr REL::Offset UpdateStingerVisibility{ 0x2F5970 };
		inline constexpr REL::Offset EnableAllStingerVisibility{ 0x2F5A70 };
		inline constexpr REL::Offset Detach{ 0x2F5AF0 };
		inline constexpr REL::Offset Attach{ 0x2F5CA0 };
		inline constexpr REL::Offset GetHighPriority{ 0x2F6070 };
		inline constexpr REL::Offset OnLoadFinished{ 0x2F6150 };
		inline constexpr REL::Offset TriggerApocalypse{ 0x2F6270 };
		inline constexpr REL::Offset SwitchToLow{ 0x2F6370 };
		inline constexpr REL::Offset SwitchToHigh{ 0x2F6540 };
		inline constexpr REL::Offset Prepare{ 0x2F66E0 };
		inline constexpr REL::Offset PrepareStingerObject{ 0x2F6A90 };
	}

	namespace BGSDistantObjectBlockLoadTask
	{
		inline constexpr REL::Offset ctor{ 0x2F6D10 };
	}

	namespace BGSDistantTreeBlock
	{
		inline constexpr REL::Offset ctor{ 0x2F7540 };
		inline constexpr REL::Offset dtor{ 0x2F76B0 };
		inline constexpr REL::Offset AllocateStaticData{ 0x2F77A0 };
		inline constexpr REL::Offset AllocateStaticDataForTreeType{ 0x2F7A80 };
		inline constexpr REL::Offset AddTree{ 0x2F8470 };
		inline constexpr REL::Offset BuildBlockFileName{ 0x2F8890 };
		inline constexpr REL::Offset ComputeBound{ 0x2F8910 };
		inline constexpr REL::Offset Read{ 0x2F8B40 };
		inline constexpr REL::Offset Attach{ 0x2F8C40 };
		inline constexpr REL::Offset ReadTypes{ 0x2F8F80 };
		inline constexpr REL::Offset SetupShaderProperty{ 0x2F90A0 };
		inline constexpr REL::Offset UpdateShaderProperties{ 0x2F91A0 };
		inline constexpr REL::Offset HideQueuedTrees{ 0x2F9300 };
	}

	namespace BGSDistantTreeBlockLoadTask
	{
		inline constexpr REL::Offset ctor{ 0x2F9360 };
	}

	namespace BGSEncounterZone
	{
		inline constexpr REL::Offset ctor{ 0x125C40 };
		inline constexpr REL::Offset GetCalcedZoneLevel{ 0x126190 };
		inline constexpr REL::Offset DetermineLevel{ 0x126270 };
		inline constexpr REL::Offset ShouldReset{ 0x1262A0 };
		inline constexpr REL::Offset QNeverReset{ 0x126320 };
		inline constexpr REL::Offset CreateNoZone{ 0x126340 };
		inline constexpr REL::Offset GetNoZone{ 0x146A90 };
	}

	namespace BGSEntryPointFunctionData
	{
		inline constexpr REL::Offset StartFunctionData{ 0x1E6250 };
		inline constexpr REL::Offset ctor{ 0x1E6420 };
	}

	namespace BGSEntryPointFunctionDataActivateChoice
	{
		inline constexpr REL::Offset ctor{ 0x1E6540 };
		inline constexpr REL::Offset InitializeData{ 0x1E6C30 };
		inline constexpr REL::Offset SetLabel{ 0x1E6C60 };
	}

	namespace BGSEntryPointFunctionDataLeveledList
	{
		inline constexpr REL::Offset ctor{ 0x1E6510 };
	}

	namespace BGSEntryPointFunctionDataOneValue
	{
		inline constexpr REL::Offset ctor{ 0x1E63F0 };
	}

	namespace BGSEntryPointFunctionDataTwoValue
	{
		inline constexpr REL::Offset ctor{ 0x1E64B0 };
	}

	namespace BGSEntryPointPerkEntry
	{
		inline constexpr REL::Offset ctor{ 0x1E9F60 };
	}

	namespace BGSEquipType
	{
		inline constexpr REL::Offset ctor{ 0x79320 };
		inline constexpr REL::Offset Save{ 0x79350 };
		inline constexpr REL::Offset GetEquipType{ 0x79430 };
		inline constexpr REL::Offset GenerateDefaultMenuIcons{ 0x79570 };
	}

	namespace BGSExplosion
	{
		inline constexpr REL::Offset GetRadiusBSUnits{ 0x77900 };
		inline constexpr REL::Offset IsFlagSet{ 0x77950 };
		inline constexpr REL::Offset ctor{ 0xFABF0 };
		inline constexpr REL::Offset GetSoundLevelValue{ 0xFB810 };
		inline constexpr REL::Offset GetImageSpaceRadiusBSUnits{ 0x5AC550 };
		inline constexpr REL::Offset GetRadiationRadiusBSUnits{ 0x5AD5A0 };
	}

	namespace BGSExplosionData
	{
		inline constexpr REL::Offset Endian{ 0xFAAA0 };
	}

	namespace BGSHeadPart
	{
		inline constexpr REL::Offset ctor{ 0x1E72C0 };
	}

	namespace BGSHungerStage
	{
		inline constexpr REL::Offset ctor{ 0x1A10 };
	}

	namespace BGSIdleCollection
	{
		inline constexpr REL::Offset ctor{ 0x79790 };
		inline constexpr REL::Offset dtor{ 0x797C0 };
		inline constexpr REL::Offset Save{ 0x799F0 };
		inline constexpr REL::Offset InitItem{ 0x79B00 };
		inline constexpr REL::Offset Load{ 0x79C40 };
		inline constexpr REL::Offset RemoveIdleAtIndex{ 0x79EA0 };
		inline constexpr REL::Offset HasIdleForActor{ 0x79FB0 };
	}

	namespace BGSImpactData
	{
		inline constexpr REL::Offset GetDecalMinWidth{ 0xA40A0 };
		inline constexpr REL::Offset GetDecalMaxWidth{ 0xA40C0 };
		inline constexpr REL::Offset GetDecalShininess{ 0xA40E0 };
		inline constexpr REL::Offset IsParallax{ 0xA4100 };
		inline constexpr REL::Offset GetAlphaBlending{ 0xA4140 };
		inline constexpr REL::Offset GetAlphaTesting{ 0xA4180 };
		inline constexpr REL::Offset GetDecalParallaxScale{ 0xA41C0 };
		inline constexpr REL::Offset GetDecalParallaxPasses{ 0xA41E0 };
		inline constexpr REL::Offset GetDecalColor{ 0xA4220 };
		inline constexpr REL::Offset ctor{ 0x18DB40 };
		inline constexpr REL::Offset GetUseTextureSetDecalData{ 0x18DE80 };
		inline constexpr REL::Offset CopyDecalDataFromTextureSet{ 0x18E730 };
		inline constexpr REL::Offset GetSoundLevelValue{ 0x18E790 };
	}

	namespace BGSImpactData_IMPACT_DATA_DATA
	{
		inline constexpr REL::Offset Endian{ 0x18E3A0 };
	}

	namespace BGSImpactData_OLD_IMPACT_DATA_DATA
	{
		inline constexpr REL::Offset Endian{ 0x18E250 };
	}

	namespace BGSImpactDataSet
	{
		inline constexpr REL::Offset GetImpactData{ 0xFB7A0 };
		inline constexpr REL::Offset ctor{ 0x18E810 };
		inline constexpr REL::Offset GetImpactData_1{ 0x18E9D0 };
		inline constexpr REL::Offset CreateDefaultImpactDataSet{ 0x18EA10 };
		inline constexpr REL::Offset ApplyImpactSwap{ 0x18EEB0 };
	}

	namespace BGSLightingTemplate
	{
		inline constexpr REL::Offset ctor{ 0x1265C0 };
	}

	namespace BGSListForm
	{
		inline constexpr REL::Offset GetFormList{ 0x100940 };
		inline constexpr REL::Offset GetItemIndex{ 0x18FF60 };
		inline constexpr REL::Offset AddScriptAddedForm{ 0x190010 };
	}

	namespace BGSLoadFormBuffer
	{
		inline constexpr REL::Offset SetChangeFlags{ 0x28130 };
		inline constexpr REL::Offset GetOldChangeFlags{ 0x2CE30 };
		inline constexpr REL::Offset SetReconstructedForm{ 0x2CE50 };
		inline constexpr REL::Offset GetReconstructedForm{ 0x2CE90 };
		inline constexpr REL::Offset GetRevertOnly{ 0x162D00 };
		inline constexpr REL::Offset SetForm{ 0x3037C0 };
		inline constexpr REL::Offset dtor{ 0x41DB90 };
		inline constexpr REL::Offset ctor{ 0x4643B0 };
		inline constexpr REL::Offset LoadHeader{ 0x4644B0 };
		inline constexpr REL::Offset GetFormType{ 0x4665B0 };
	}

	namespace BGSLoadGameBuffer
	{
		inline constexpr REL::Offset ctor{ 0x4646B0 };
		inline constexpr REL::Offset dtor{ 0x4646F0 };
		inline constexpr REL::Offset Load{ 0x464740 };
		inline constexpr REL::Offset Load_1{ 0x464790 };
		inline constexpr REL::Offset LoadDataFromBuffer{ 0x464820 };
		inline constexpr REL::Offset LoadFormID{ 0x4648A0 };
		inline constexpr REL::Offset LoadFormID_1{ 0x4648E0 };
		inline constexpr REL::Offset LoadData{ 0x464980 };
		inline constexpr REL::Offset LoadString{ 0x4649A0 };
		inline constexpr REL::Offset LoadVariableSizedValue{ 0x464A60 };
	}

	namespace BGSLoadGameSubBuffer
	{
		inline constexpr REL::Offset DeleteBuffer{ 0x35B20 };
		inline constexpr REL::Offset LoadAnimation{ 0x464B00 };
		inline constexpr REL::Offset LoadCharController{ 0x464C50 };
		inline constexpr REL::Offset LoadHavokData{ 0x464D80 };
		inline constexpr REL::Offset CreateLoadFormBuffer{ 0x464E20 };
		inline constexpr REL::Offset SaveAnimation{ 0x464F20 };
		inline constexpr REL::Offset SaveHavokData{ 0x465020 };
		inline constexpr REL::Offset CopyBuffer{ 0x465120 };
		inline constexpr REL::Offset SaveGame{ 0x465510 };
		inline constexpr REL::Offset LoadGame{ 0x4655A0 };
	}

	namespace BGSLoadedReferenceCollection
	{
		inline constexpr REL::Offset ctor{ 0x126C90 };
		inline constexpr REL::Offset dtor{ 0x126D50 };
		inline constexpr REL::Offset Create{ 0x126E10 };
		inline constexpr REL::Offset AddReference{ 0x126F20 };
		inline constexpr REL::Offset RemoveReference{ 0x1270B0 };
		inline constexpr REL::Offset GetFormTypeMap{ 0x1271B0 };
		inline constexpr REL::Offset GetNextObject{ 0x1273C0 };
	}

	namespace BGSMenuIcon
	{
		inline constexpr REL::Offset ctor{ 0x190210 };
	}

	namespace BGSMenuPacker
	{
		inline constexpr REL::Offset DumpInfo{ 0x300350 };
	}

	namespace BGSMessage
	{
		inline constexpr REL::Offset ctor{ 0x190530 };
		inline constexpr REL::Offset GetIsMessageBox{ 0x190D00 };
		inline constexpr REL::Offset QAutoDisplay{ 0x190ED0 };
		inline constexpr REL::Offset SetIcon{ 0x46CF00 };
	}

	namespace BGSMessageIcon
	{
		inline constexpr REL::Offset ctor{ 0x7A130 };
		inline constexpr REL::Offset dtor{ 0x7A1A0 };
		inline constexpr REL::Offset Save{ 0x7A240 };
		inline constexpr REL::Offset GetMessageIconTextureName{ 0x7A300 };
		inline constexpr REL::Offset SetMessageIconTextureName{ 0x7A380 };
	}

	namespace BGSMovableStatic
	{
		inline constexpr REL::Offset ctor{ 0xFBA00 };
	}

	namespace BGSMoviePlayer
	{
		inline constexpr REL::Offset Create{ 0x466FF0 };
		inline constexpr REL::Offset ctor{ 0x4670E0 };
	}

	namespace BGSMusicType
	{
		inline constexpr REL::Offset BuildFileList{ 0x1917B0 };
	}

	namespace BGSNote
	{
		inline constexpr REL::Offset ctor{ 0x1E8060 };
		inline constexpr REL::Offset GetNoteType{ 0x1E8D40 };
		inline constexpr REL::Offset SetNoteType{ 0x1E8F90 };
		inline constexpr REL::Offset GetNoteSound{ 0x1E9100 };
		inline constexpr REL::Offset SetNoteSound{ 0x1E9130 };
		inline constexpr REL::Offset GetNoteImage{ 0x1E9160 };
		inline constexpr REL::Offset GetNoteText{ 0x1E91D0 };
		inline constexpr REL::Offset GetNoteTopic{ 0x1E9240 };
		inline constexpr REL::Offset SetNoteTopic{ 0x1E9270 };
		inline constexpr REL::Offset GetNoteSpeaker{ 0x1E92A0 };
		inline constexpr REL::Offset SetNoteSpeaker{ 0x1E92D0 };
		inline constexpr REL::Offset QHasBeenRead{ 0x398420 };
	}

	namespace BGSNumericIDIndex
	{
		inline constexpr REL::Offset ctor{ 0x44EAF0 };
		inline constexpr REL::Offset GetNumericID{ 0x453500 };
		inline constexpr REL::Offset SetNumericID{ 0x453570 };
	}

	namespace BGSOpenCloseForm
	{
		inline constexpr REL::Offset GetAsOpenCloseForm{ 0x7A3A0 };
		inline constexpr REL::Offset IsOpenCloseForm{ 0x7A490 };
		inline constexpr REL::Offset HandleActivate{ 0x7A560 };
		inline constexpr REL::Offset HandleAnimEndHavok{ 0x7AB40 };
		inline constexpr REL::Offset HandleAnimEnd{ 0x7AC70 };
		inline constexpr REL::Offset SetOpenState{ 0x7AEC0 };
		inline constexpr REL::Offset GetOpenState{ 0x7B250 };
		inline constexpr REL::Offset SnapHavokTo3D{ 0x7B360 };
		inline constexpr REL::Offset ctor{ 0x110620 };
	}

	namespace BGSPerk
	{
		inline constexpr REL::Offset GetNumRanks{ 0x1D4EE0 };
		inline constexpr REL::Offset ctor{ 0x1EAAB0 };
		inline constexpr REL::Offset IsPerkAttainable{ 0x1EBA00 };
		inline constexpr REL::Offset BuildDescriptionString{ 0x1EBAC0 };
		inline constexpr REL::Offset GetLevel{ 0x2AABF0 };
		inline constexpr REL::Offset IsPerkAvailable{ 0x385150 };
	}

	namespace BGSPerkEntry
	{
		inline constexpr REL::Offset ctor{ 0x1E9530 };
		inline constexpr REL::Offset StartPerkEntry{ 0x1E9620 };
		inline constexpr REL::Offset FinishPerkEntry{ 0x1E9690 };
	}

	namespace BGSPickupPutdownSounds
	{
		inline constexpr REL::Offset ctor{ 0x7B4F0 };
		inline constexpr REL::Offset dtor{ 0x7B520 };
		inline constexpr REL::Offset Save{ 0x7B560 };
		inline constexpr REL::Offset InitItem{ 0x7B6A0 };
	}

	namespace BGSPlaceableWater
	{
		inline constexpr REL::Offset IsAutomaticWater{ 0x52440 };
		inline constexpr REL::Offset IsFlagSet{ 0x52460 };
		inline constexpr REL::Offset GetRefractionEnabled{ 0xE3280 };
		inline constexpr REL::Offset GetRefractsLand{ 0xE32A0 };
		inline constexpr REL::Offset IsLODWater{ 0xE32C0 };
		inline constexpr REL::Offset IsDepthEnabled{ 0xE32E0 };
		inline constexpr REL::Offset ctor{ 0xFC1B0 };
		inline constexpr REL::Offset SetReflectsLODLand{ 0xFC3A0 };
	}

	namespace BGSPlaceableWaterData
	{
		inline constexpr REL::Offset ctor{ 0x19F0 };
	}

	namespace BGSPreloadable
	{
		inline constexpr REL::Offset ctor{ 0xF9D90 };
	}

	namespace BGSPrimitive
	{
		inline constexpr REL::Offset GetColor{ 0x13F90 };
		inline constexpr REL::Offset GetRadii{ 0x13FC0 };
		inline constexpr REL::Offset Copy{ 0xA4D40 };
		inline constexpr REL::Offset CreateAbstract{ 0xA4E90 };
		inline constexpr REL::Offset CreateBox{ 0xA5040 };
		inline constexpr REL::Offset CreateSphere{ 0xA5100 };
	}

	namespace BGSPrimitiveBox
	{
		inline constexpr REL::Offset ctor{ 0xA6370 };
	}

	namespace BGSPrimitivePlane
	{
		inline constexpr REL::Offset ctor{ 0xA5280 };
	}

	namespace BGSPrimitiveSphere
	{
		inline constexpr REL::Offset ctor{ 0xA7150 };
		inline constexpr REL::Offset SetRadius{ 0xA78E0 };
	}

	namespace BGSProjectile
	{
		inline constexpr REL::Offset GetData{ 0xEA950 };
		inline constexpr REL::Offset ctor{ 0xFCE60 };
		inline constexpr REL::Offset GetHasExplosion{ 0xFD360 };
		inline constexpr REL::Offset IsFlagSet{ 0xFD420 };
		inline constexpr REL::Offset GetMotionType{ 0xFD4F0 };
		inline constexpr REL::Offset GetCanTurnOff{ 0xFDF20 };
		inline constexpr REL::Offset GetPreCloneCount{ 0xFE080 };
		inline constexpr REL::Offset GetHasExplosionDetonates{ 0x1DE080 };
		inline constexpr REL::Offset GetGravity{ 0x566980 };
		inline constexpr REL::Offset GetHasExplosionAltTrigger{ 0x575300 };
		inline constexpr REL::Offset GetHitScan{ 0x5A7F80 };
		inline constexpr REL::Offset GetHasMuzzleFlash{ 0x5BAF30 };
		inline constexpr REL::Offset GetSupersonic{ 0x5BC870 };
	}

	namespace BGSProjectileData
	{
		inline constexpr REL::Offset Endian{ 0xFCCF0 };
	}

	namespace BGSQuestObjective
	{
		inline constexpr REL::Offset GetCompleted{ 0x1A5DC0 };
		inline constexpr REL::Offset GetDisplayed{ 0x1A5E70 };
		inline constexpr REL::Offset ctor{ 0x1EC090 };
		inline constexpr REL::Offset GetDisplayText{ 0x1EC330 };
		inline constexpr REL::Offset Load{ 0x1EC370 };
		inline constexpr REL::Offset SetState{ 0x1EC5D0 };
	}

	namespace BGSQuestPerkEntry
	{
		inline constexpr REL::Offset ctor{ 0x1E9800 };
	}

	namespace BGSRadiationStage
	{
		inline constexpr REL::Offset ctor{ 0x191B70 };
	}

	namespace BGSRagdoll
	{
		inline constexpr REL::Offset ctor{ 0x1ED680 };
	}

	namespace BGSReconstructCellBlocksMap
	{
		inline constexpr REL::Offset ctor{ 0x4419F0 };
		inline constexpr REL::Offset AddCellForm{ 0x441B20 };
		inline constexpr REL::Offset AddCellForm_1{ 0x441CA0 };
	}

	namespace BGSReconstructCellSubBlocksMap
	{
		inline constexpr REL::Offset ctor{ 0x4416C0 };
	}

	namespace BGSReconstructCellsMap
	{
		inline constexpr REL::Offset ctor{ 0x441340 };
		inline constexpr REL::Offset AddCellForm{ 0x441460 };
	}

	namespace BGSReconstructFormsInAllFilesMap
	{
		inline constexpr REL::Offset ctor{ 0x4433D0 };
		inline constexpr REL::Offset AddForm{ 0x443630 };
		inline constexpr REL::Offset AddReference{ 0x443750 };
		inline constexpr REL::Offset AddReference_1{ 0x4438B0 };
		inline constexpr REL::Offset ReconstructForms{ 0x4439E0 };
		inline constexpr REL::Offset InitReconstructedForm{ 0x443C90 };
		inline constexpr REL::Offset GetFileForFormID{ 0x443FE0 };
	}

	namespace BGSReconstructFormsInFileMap
	{
		inline constexpr REL::Offset ctor{ 0x442180 };
		inline constexpr REL::Offset AddForm{ 0x442310 };
		inline constexpr REL::Offset AddCellForm{ 0x442600 };
		inline constexpr REL::Offset AddCellForm_1{ 0x442730 };
		inline constexpr REL::Offset ReconstructForms{ 0x4427F0 };
	}

	namespace BGSReconstructFormsMap
	{
		inline constexpr REL::Offset ctor{ 0x441190 };
		inline constexpr REL::Offset AddForm{ 0x441250 };
	}

	namespace BGSReconstructWorldSpacesMap
	{
		inline constexpr REL::Offset ctor{ 0x441EA0 };
		inline constexpr REL::Offset AddCellForm{ 0x441FC0 };
	}

	namespace BGSReconstructedForms
	{
		inline constexpr REL::Offset Clear{ 0x443240 };
		inline constexpr REL::Offset AddFormData{ 0x443270 };
		inline constexpr REL::Offset ctor{ 0x443470 };
		inline constexpr REL::Offset dtor{ 0x443540 };
	}

	namespace BGSRepairItemList
	{
		inline constexpr REL::Offset ctor{ 0x7B850 };
		inline constexpr REL::Offset dtor{ 0x7B880 };
		inline constexpr REL::Offset Save{ 0x7B8A0 };
		inline constexpr REL::Offset InitItem{ 0x7B8E0 };
		inline constexpr REL::Offset HasRepairItem{ 0x7BA80 };
		inline constexpr REL::Offset CanItemRepairForm{ 0x7BB50 };
	}

	namespace BGSSaveFormBuffer
	{
		inline constexpr REL::Offset RemoveChange{ 0x1621F0 };
		inline constexpr REL::Offset dtor{ 0x447DD0 };
		inline constexpr REL::Offset ctor{ 0x4659C0 };
		inline constexpr REL::Offset Save{ 0x465A30 };
		inline constexpr REL::Offset SetHeader{ 0x465AD0 };
	}

	namespace BGSSaveGameBuffer
	{
		inline constexpr REL::Offset ClearPosition{ 0x447DB0 };
		inline constexpr REL::Offset SaveDataToBuffer{ 0x465570 };
		inline constexpr REL::Offset ctor{ 0x465BD0 };
		inline constexpr REL::Offset dtor{ 0x465C10 };
		inline constexpr REL::Offset Save{ 0x465C40 };
		inline constexpr REL::Offset Save_1{ 0x465C80 };
		inline constexpr REL::Offset SaveDataToBuffer_1{ 0x465CE0 };
		inline constexpr REL::Offset SaveFormID{ 0x465DB0 };
		inline constexpr REL::Offset SaveFormID_1{ 0x465DF0 };
		inline constexpr REL::Offset SaveData{ 0x465E50 };
		inline constexpr REL::Offset SaveString{ 0x465E70 };
		inline constexpr REL::Offset StartVariableSizedValue{ 0x465F20 };
		inline constexpr REL::Offset SaveVariableSizedValue{ 0x465F60 };
		inline constexpr REL::Offset SaveVariableSizedValue_1{ 0x465FF0 };
		inline constexpr REL::Offset ExpandBuffer{ 0x4660B0 };
		inline constexpr REL::Offset ShiftBuffer{ 0x466140 };
	}

	namespace BGSSaveLoadChangesMap
	{
		inline constexpr REL::Offset ctor{ 0x445550 };
		inline constexpr REL::Offset CheckChangeFlags{ 0x445720 };
		inline constexpr REL::Offset AddChangeFlags{ 0x4457B0 };
		inline constexpr REL::Offset RemoveChanges{ 0x445A20 };
		inline constexpr REL::Offset RemoveChangeFlags{ 0x445A80 };
		inline constexpr REL::Offset GetChanges{ 0x5A4250 };
	}

	namespace BGSSaveLoadFile
	{
		inline constexpr REL::Offset Read{ 0x446300 };
		inline constexpr REL::Offset Write{ 0x446330 };
		inline constexpr REL::Offset Open{ 0x4463C0 };
		inline constexpr REL::Offset GetFilePosition{ 0x446400 };
		inline constexpr REL::Offset SeekSet{ 0x446440 };
		inline constexpr REL::Offset SeekCurrent{ 0x446490 };
	}

	namespace BGSSaveLoadFileEntry
	{
		inline constexpr REL::Offset GetPlayerTitle{ 0x3D5140 };
		inline constexpr REL::Offset GetPlayerLevel{ 0x3D5160 };
		inline constexpr REL::Offset GetPlayTime{ 0x3D5180 };
		inline constexpr REL::Offset GetSaveGameNumber{ 0x3D6950 };
		inline constexpr REL::Offset GetLocation{ 0x3D6970 };
		inline constexpr REL::Offset ctor{ 0x4465B0 };
		inline constexpr REL::Offset SaveGame{ 0x446710 };
		inline constexpr REL::Offset LoadGame{ 0x4467B0 };
		inline constexpr REL::Offset DeleteGame{ 0x4467E0 };
		inline constexpr REL::Offset GetScreenshot{ 0x446820 };
		inline constexpr REL::Offset LoadData{ 0x446900 };
		inline constexpr REL::Offset IsQuicksave{ 0x446AD0 };
		inline constexpr REL::Offset IsAutosave{ 0x446AF0 };
		inline constexpr REL::Offset IsCorrupt{ 0x446B30 };
	}

	namespace BGSSaveLoadFormHeader
	{
		inline constexpr REL::Offset ctor{ 0x464450 };
	}

	namespace BGSSaveLoadFormIDMap
	{
		inline constexpr REL::Offset ctor{ 0x446B60 };
		inline constexpr REL::Offset dtor{ 0x446BE0 };
		inline constexpr REL::Offset Save{ 0x446E00 };
		inline constexpr REL::Offset Load{ 0x446E70 };
	}

	namespace BGSSaveLoadFormInfo
	{
		inline constexpr REL::Offset SetFormType{ 0x453670 };
		inline constexpr REL::Offset GetSizeType{ 0x464520 };
	}

	namespace BGSSaveLoadGame
	{
		inline constexpr REL::Offset GetReconstructingForms{ 0x121B0 };
		inline constexpr REL::Offset GetSaveGameLoading{ 0x2CE10 };
		inline constexpr REL::Offset SetThreadAllowChanges{ 0x623F0 };
		inline constexpr REL::Offset GetSaveGameSaving{ 0x1621D0 };
		inline constexpr REL::Offset GetAllowChanges{ 0x170F00 };
		inline constexpr REL::Offset SetGlobalAllowChanges{ 0x3D6BD0 };
		inline constexpr REL::Offset ctor{ 0x446F30 };
		inline constexpr REL::Offset dtor{ 0x4471F0 };
		inline constexpr REL::Offset SavePluginList{ 0x447590 };
		inline constexpr REL::Offset LoadPluginList{ 0x447660 };
		inline constexpr REL::Offset SaveGame{ 0x447850 };
		inline constexpr REL::Offset SetSaveGameSaving{ 0x447D00 };
		inline constexpr REL::Offset LoadGame{ 0x447DF0 };
		inline constexpr REL::Offset RevertCurrentChanges{ 0x448E70 };
		inline constexpr REL::Offset InitForms{ 0x4492B0 };
		inline constexpr REL::Offset LoadForm{ 0x4495D0 };
		inline constexpr REL::Offset UnloadForm{ 0x449730 };
		inline constexpr REL::Offset LoadCell{ 0x449B10 };
		inline constexpr REL::Offset CheckInitialData{ 0x449D00 };
		inline constexpr REL::Offset HandleUnrevertibleChanges{ 0x44A3A0 };
		inline constexpr REL::Offset QueueInitPackageLocations{ 0x44A520 };
		inline constexpr REL::Offset ShouldAddChanges{ 0x44A620 };
		inline constexpr REL::Offset AddChange{ 0x44A690 };
		inline constexpr REL::Offset GetChange{ 0x44A6D0 };
		inline constexpr REL::Offset GetOldChange{ 0x44A700 };
		inline constexpr REL::Offset ShouldRemoveChanges{ 0x44A740 };
		inline constexpr REL::Offset RemoveChange{ 0x44A780 };
		inline constexpr REL::Offset RemoveChanges{ 0x44A7C0 };
		inline constexpr REL::Offset QueueSubBuffer{ 0x44A810 };
		inline constexpr REL::Offset RevertAllChanges{ 0x44A840 };
		inline constexpr REL::Offset ClearForm{ 0x44A880 };
		inline constexpr REL::Offset ClearFormID{ 0x44A9C0 };
		inline constexpr REL::Offset DeleteForm{ 0x44A9F0 };
		inline constexpr REL::Offset AddChangedFormID{ 0x44AA30 };
		inline constexpr REL::Offset CleanupExpiredData{ 0x44AB20 };
	}

	namespace BGSSaveLoadHistory
	{
		inline constexpr REL::Offset AddNote{ 0x44DFF0 };
		inline constexpr REL::Offset AddNoteVarArgs{ 0x44E020 };
		inline constexpr REL::Offset Save{ 0x44E0D0 };
		inline constexpr REL::Offset Load{ 0x44E190 };
		inline constexpr REL::Offset AddHistory{ 0x44E2C0 };
	}

	namespace BGSSaveLoadManager
	{
		inline constexpr REL::Offset GetSimulatedMode{ 0x24940 };
		inline constexpr REL::Offset Create{ 0x44FC70 };
		inline constexpr REL::Offset SaveGame{ 0x4503B0 };
		inline constexpr REL::Offset LoadGame{ 0x450760 };
		inline constexpr REL::Offset Autosave{ 0x450A40 };
		inline constexpr REL::Offset StartSaveGame{ 0x450BA0 };
		inline constexpr REL::Offset EndSaveGame{ 0x450BF0 };
		inline constexpr REL::Offset StartLoadGame{ 0x450C20 };
		inline constexpr REL::Offset EndLoadGame{ 0x450D60 };
		inline constexpr REL::Offset SaveGameHeader{ 0x450EA0 };
		inline constexpr REL::Offset LoadGameHeader{ 0x450ED0 };
		inline constexpr REL::Offset IsSavingAllowed{ 0x450FE0 };
		inline constexpr REL::Offset GetMinorVersion{ 0x451110 };
		inline constexpr REL::Offset GetVersionInfo{ 0x451120 };
		inline constexpr REL::Offset SetMostRecentSaveGame{ 0x451250 };
		inline constexpr REL::Offset LoadMostRecentSaveGame{ 0x4512F0 };
		inline constexpr REL::Offset GenerateSaveFileName{ 0x4517C0 };
		inline constexpr REL::Offset IsSaveFileNameGenerated{ 0x451980 };
		inline constexpr REL::Offset IsSaveFileNameAutosave{ 0x451A20 };
		inline constexpr REL::Offset IsSaveFileNameQuicksave{ 0x451A60 };
		inline constexpr REL::Offset IsSaveFileNameCustom{ 0x451AA0 };
		inline constexpr REL::Offset GetPlayerLocationName{ 0x451B40 };
		inline constexpr REL::Offset GetPlayTimeString{ 0x451BF0 };
		inline constexpr REL::Offset UpdateQueuedSaves{ 0x451D90 };
		inline constexpr REL::Offset CopySaveGames{ 0x452080 };
		inline constexpr REL::Offset SysUtilDeleteCompleteCallback{ 0x4527D0 };
	}

	namespace BGSSaveLoadQueuedSubBufferMap
	{
		inline constexpr REL::Offset dtor{ 0x465220 };
		inline constexpr REL::Offset LoadAllQueuedSubBuffers{ 0x465360 };
		inline constexpr REL::Offset LoadQueuedSubBuffers{ 0x465390 };
	}

	namespace BGSSaveLoadReferencesMap
	{
		inline constexpr REL::Offset ctor{ 0x452A70 };
		inline constexpr REL::Offset dtor{ 0x452AE0 };
		inline constexpr REL::Offset LoadReferencesForCell{ 0x452D20 };
		inline constexpr REL::Offset LoadChangedReference{ 0x452E40 };
	}

	namespace BGSSaveLoadStatsMap
	{
		inline constexpr REL::Offset BuildStatsMap{ 0x453B90 };
		inline constexpr REL::Offset OutputStats{ 0x453E10 };
		inline constexpr REL::Offset SaveForm{ 0x454B10 };
		inline constexpr REL::Offset WriteFile{ 0x454B80 };
	}

	namespace BGSSceneInfo
	{
		inline constexpr REL::Offset ctor{ 0xA7C40 };
		inline constexpr REL::Offset CollectWaterSceneDataFromCell{ 0xA7D20 };
		inline constexpr REL::Offset CollectSceneDataFromAddonNodes{ 0xA80C0 };
		inline constexpr REL::Offset CollectSceneDataFromNode{ 0xA8230 };
		inline constexpr REL::Offset CollectSceneDataRecursive{ 0xA82D0 };
		inline constexpr REL::Offset CollectSceneDataForLoadedArea{ 0xA8BB0 };
		inline constexpr REL::Offset ReloadBudgetCaps{ 0xA8FE0 };
		inline constexpr REL::Offset GetLoadedAreaNonActorMemoryBudgetCap{ 0xA9050 };
		inline constexpr REL::Offset BuildMNumberString{ 0xA9120 };
	}

	namespace BGSSleepDeprevationStage
	{
		inline constexpr REL::Offset ctor{ 0x20F0 };
	}

	namespace BGSTalkingActivator
	{
		inline constexpr REL::Offset IsRadioStation{ 0xFEDC0 };
		inline constexpr REL::Offset IsRadioStation_1{ 0xFEDE0 };
		inline constexpr REL::Offset IsNonPipboyRadioStation{ 0xFEE60 };
		inline constexpr REL::Offset AddRadioStation{ 0xFF150 };
		inline constexpr REL::Offset GetRadioStationsInRangeOfRef{ 0xFF1A0 };
	}

	namespace BGSTerminal
	{
		inline constexpr REL::Offset GetMenuItemList{ 0x61150 };
		inline constexpr REL::Offset GetPassword{ 0xFD400 };
		inline constexpr REL::Offset ctor{ 0xFFAA0 };
		inline constexpr REL::Offset GetHackDifficultyLockLevel{ 0x1011A0 };
		inline constexpr REL::Offset GetHackMiniGameValue{ 0x101270 };
		inline constexpr REL::Offset IsTerminalRefInUse{ 0x1012C0 };
		inline constexpr REL::Offset IsUnlocked{ 0x1015D0 };
		inline constexpr REL::Offset GetMinSkillRequiredToHack{ 0x1017A0 };
		inline constexpr REL::Offset SetHacked{ 0x1018B0 };
		inline constexpr REL::Offset LockOut{ 0x101930 };
		inline constexpr REL::Offset SetRawDifficulty{ 0x101A80 };
		inline constexpr REL::Offset IsUnlocked_1{ 0x101AE0 };
		inline constexpr REL::Offset SetUnlocked{ 0x101B40 };
	}

	namespace BGSTerrainChunk
	{
		inline constexpr REL::Offset UpdateMultiBoundVisibility{ 0x2FA6D0 };
		inline constexpr REL::Offset BuildChunkFileName{ 0x2FAAD0 };
		inline constexpr REL::Offset BuildChunkDiffuseTextureFileName{ 0x2FAB20 };
		inline constexpr REL::Offset BuildChunkNormalTextureFileName{ 0x2FAB70 };
		inline constexpr REL::Offset GetTexture{ 0x2FABC0 };
		inline constexpr REL::Offset Attach{ 0x2FACB0 };
		inline constexpr REL::Offset AddWaterToSystem{ 0x2FB170 };
		inline constexpr REL::Offset ShowNormalDetail{ 0x2FB640 };
		inline constexpr REL::Offset Hide{ 0x2FB6E0 };
		inline constexpr REL::Offset Show{ 0x2FB760 };
		inline constexpr REL::Offset Prepare{ 0x2FB7E0 };
	}

	namespace BGSTerrainManager
	{
		inline constexpr REL::Offset GetLODLandRoot{ 0xEA9A0 };
		inline constexpr REL::Offset GetLODObjectRoot{ 0xEA9C0 };
		inline constexpr REL::Offset GetTreeNode{ 0xEA9E0 };
		inline constexpr REL::Offset ctor{ 0x2FC490 };
		inline constexpr REL::Offset Update{ 0x2FCA90 };
		inline constexpr REL::Offset GetDiffuseTextureForPoint{ 0x2FCE30 };
		inline constexpr REL::Offset GetNormalTextureForPoint{ 0x2FCE70 };
		inline constexpr REL::Offset GetChunkForPoint{ 0x2FCEB0 };
		inline constexpr REL::Offset GetTreeBlockForPoint{ 0x2FCEF0 };
		inline constexpr REL::Offset HideTree{ 0x2FCFA0 };
		inline constexpr REL::Offset ShowTree{ 0x2FD010 };
		inline constexpr REL::Offset UpdateMultiBoundVisibility{ 0x2FD080 };
		inline constexpr REL::Offset GetCurrentWorldHasLOD{ 0x2FD150 };
		inline constexpr REL::Offset ShowMinimumDetail{ 0x2FD1A0 };
		inline constexpr REL::Offset ShowNormalDetail{ 0x2FD1B0 };
		inline constexpr REL::Offset DisableBlockVisibility{ 0x2FD1C0 };
		inline constexpr REL::Offset EnableBlockVisibility{ 0x2FD1E0 };
		inline constexpr REL::Offset SetNeedsImmediateUpdate{ 0x529260 };
	}

	namespace BGSTerrainNode
	{
		inline constexpr REL::Offset QSplitNode{ 0x2FA840 };
		inline constexpr REL::Offset QPersistentNode{ 0x2FB150 };
		inline constexpr REL::Offset ctor{ 0x2FD210 };
		inline constexpr REL::Offset dtor{ 0x2FD750 };
		inline constexpr REL::Offset UnloadData{ 0x2FD7B0 };
		inline constexpr REL::Offset UnloadDataRecurse{ 0x2FD980 };
		inline constexpr REL::Offset UnloadPersistentDataRecurse{ 0x2FDA10 };
		inline constexpr REL::Offset UpdateTerrain{ 0x2FDAA0 };
		inline constexpr REL::Offset UpdateBlocks{ 0x2FDFC0 };
		inline constexpr REL::Offset UpdateTrees{ 0x2FE330 };
		inline constexpr REL::Offset ShouldSplit{ 0x2FE550 };
		inline constexpr REL::Offset ShouldLoadBlock{ 0x2FE620 };
		inline constexpr REL::Offset ShouldLoadBlockLowPriority{ 0x2FE6D0 };
		inline constexpr REL::Offset ShouldLoadTrees{ 0x2FE780 };
		inline constexpr REL::Offset DistToSquare{ 0x2FE830 };
		inline constexpr REL::Offset UpdateMorphParameters{ 0x2FEA70 };
		inline constexpr REL::Offset ComputeMorphParameter{ 0x2FEB20 };
		inline constexpr REL::Offset GetPointIsInNode{ 0x2FEC00 };
		inline constexpr REL::Offset GetChunkForPoint{ 0x2FEC90 };
		inline constexpr REL::Offset GetTreeBlockForPoint{ 0x2FED30 };
		inline constexpr REL::Offset CheckIntersectsLoadedRange{ 0x2FEDE0 };
		inline constexpr REL::Offset UpdateBlockVisibility{ 0x2FEE90 };
		inline constexpr REL::Offset UpdateWaterVisibility{ 0x2FF0D0 };
		inline constexpr REL::Offset StartTextureMorph{ 0x2FF2C0 };
	}

	namespace BGSTextureModel
	{
		inline constexpr REL::Offset ctor{ 0x2104A0 };
	}

	namespace BGSTextureSet
	{
		inline constexpr REL::Offset GetDecalData{ 0x16A880 };
		inline constexpr REL::Offset ctor{ 0x1922E0 };
		inline constexpr REL::Offset GetAsShaderTextureSet{ 0x192CF0 };
		inline constexpr REL::Offset CreateShaderTextureSet{ 0x192D20 };
		inline constexpr REL::Offset QueueTextureSet{ 0x1930E0 };
		inline constexpr REL::Offset CreateNullTextureSet{ 0x193140 };
	}

	namespace BGSTextureUseMap
	{
		inline constexpr REL::Offset ctor{ 0xA8F50 };
		inline constexpr REL::Offset dtor{ 0xAA340 };
		inline constexpr REL::Offset CollectTexUseData{ 0xAA3A0 };
		inline constexpr REL::Offset CollectTexUseDataRecursive{ 0xAA3D0 };
		inline constexpr REL::Offset WriteToFile{ 0xAA900 };
		inline constexpr REL::Offset CollectTextureUseDataForLoadedArea{ 0xAABB0 };
	}

	namespace BGSTouchSpellForm
	{
		inline constexpr REL::Offset ctor{ 0x7BD10 };
		inline constexpr REL::Offset InitItem{ 0x7BEB0 };
	}

	namespace BGSUnloadedFormBuffer
	{
		inline constexpr REL::Offset GetFormType{ 0x449220 };
		inline constexpr REL::Offset GetVersion{ 0x44B450 };
		inline constexpr REL::Offset Save{ 0x466200 };
		inline constexpr REL::Offset Load{ 0x4662C0 };
		inline constexpr REL::Offset GetAdvancedBuffer{ 0x466390 };
		inline constexpr REL::Offset GetSize{ 0x4663E0 };
		inline constexpr REL::Offset GetSizeType{ 0x466430 };
		inline constexpr REL::Offset GetOverhead{ 0x466450 };
		inline constexpr REL::Offset CreateLoadFormBuffer{ 0x466480 };
		inline constexpr REL::Offset Initialize{ 0x4665D0 };
	}

	namespace BGSVoiceType
	{
		inline constexpr REL::Offset ctor{ 0x1EFFC0 };
	}

	namespace BGSWorldLocation
	{
		inline constexpr REL::Offset ctor{ 0x3A3C0 };
		inline constexpr REL::Offset GetCell{ 0x127900 };
		inline constexpr REL::Offset GetCellOrWorld{ 0x127990 };
		inline constexpr REL::Offset GetDistanceSquared{ 0x127A40 };
		inline constexpr REL::Offset GetDistance{ 0x127A80 };
		inline constexpr REL::Offset GetModifiedDistanceSquared{ 0x127AC0 };
		inline constexpr REL::Offset CheckSpace{ 0x127B20 };
		inline constexpr REL::Offset SaveGame{ 0x127B70 };
		inline constexpr REL::Offset LoadGame{ 0x127BA0 };
		inline constexpr REL::Offset ctor_1{ 0x57EDE0 };
		inline constexpr REL::Offset SetLocation{ 0x589010 };
	}

	namespace BGSZoneTargetListener
	{
		inline constexpr REL::Offset RemoveZone{ 0x176800 };
		inline constexpr REL::Offset ctor{ 0x21FFB0 };
		inline constexpr REL::Offset RemoveTarget{ 0x220130 };
		inline constexpr REL::Offset EmptyList{ 0x2201C0 };
		inline constexpr REL::Offset AddZoneTargetPair{ 0x220340 };
		inline constexpr REL::Offset RemoveZoneEntry{ 0x2205E0 };
		inline constexpr REL::Offset RemoveTargetFromZone{ 0x220680 };
		inline constexpr REL::Offset RemoveTargetFromZone_1{ 0x2206D0 };
	}

	namespace BSAnimGroupSequence
	{
		inline constexpr REL::Offset GetAnimGroup{ 0x8F7F0 };
		inline constexpr REL::Offset ctor{ 0x9BAA0 };
		inline constexpr REL::Offset GetScaledTime{ 0xEEC60 };
		inline constexpr REL::Offset PlaySounds{ 0xEEF00 };
		inline constexpr REL::Offset GetPriority{ 0xEF9A0 };
		inline constexpr REL::Offset GetSequenceSaveSize{ 0xEFAA0 };
		inline constexpr REL::Offset GetSaveSize{ 0xEFB10 };
		inline constexpr REL::Offset SaveGame{ 0xEFC90 };
		inline constexpr REL::Offset LoadGame{ 0xEFD10 };
	}

	namespace BSAnimNoteReceiver
	{
		inline constexpr REL::Offset ctor{ 0x17A960 };
	}

	namespace BSAudio
	{
		inline constexpr REL::Offset GetSynchTime{ 0x23D040 };
		inline constexpr REL::Offset SetMultiThreaded{ 0x6D7230 };
		inline constexpr REL::Offset GetSoundHandleByFilename{ 0x6D7480 };
		inline constexpr REL::Offset GetSoundHandleByName{ 0x6D7550 };
		inline constexpr REL::Offset Update{ 0x6D7740 };
		inline constexpr REL::Offset SetEnvironment{ 0x6D79B0 };
		inline constexpr REL::Offset GetMasterVolume{ 0x6D79F0 };
		inline constexpr REL::Offset GetMusicVolume{ 0x6D7AB0 };
		inline constexpr REL::Offset GetRadioVolume{ 0x6D7AE0 };
		inline constexpr REL::Offset SetRadioVolume{ 0x6D7C00 };
		inline constexpr REL::Offset Precache{ 0x6D8100 };
		inline constexpr REL::Offset MuteType{ 0x6D8480 };
		inline constexpr REL::Offset KillAllOfType{ 0x6D84E0 };
		inline constexpr REL::Offset StopMovingSounds{ 0x6D8570 };
		inline constexpr REL::Offset EndAllSoundsOfType{ 0x6D8780 };
	}

	namespace BSAudioManager
	{
		inline constexpr REL::Offset QInstance{ 0x6D9060 };
		inline constexpr REL::Offset StartAudioThread{ 0x6D9F30 };
		inline constexpr REL::Offset Update{ 0x6DA1D0 };
		inline constexpr REL::Offset SynchVoiceStates{ 0x6DA330 };
		inline constexpr REL::Offset SetVoiceState{ 0x6DA5D0 };
		inline constexpr REL::Offset GetSoundHandleByFilename{ 0x6E5A50 };
		inline constexpr REL::Offset GetDebugString{ 0x6E5FF0 };
		inline constexpr REL::Offset SetAudioCacheSizeInK{ 0x6E6BF0 };
	}

	namespace BSBipNode
	{
		inline constexpr REL::Offset UpdateBipOnly{ 0xEFE80 };
		inline constexpr REL::Offset UpdateAllButBip{ 0xF0040 };
		inline constexpr REL::Offset RemoveObject{ 0xF05C0 };
	}

	namespace BSBound
	{
		inline constexpr REL::Offset Tag{ 0x10EA90 };
	}

	namespace BSClonePools
	{
		inline constexpr REL::Offset MakeClones{ 0xB0910 };
	}

	namespace BSCloneReserver
	{
		inline constexpr REL::Offset DecRefCount{ 0xB0EF0 };
	}

	namespace BSCloningProcess
	{
		inline constexpr REL::Offset ctor{ 0xAD050 };
		inline constexpr REL::Offset dtor{ 0xAD270 };
	}

	namespace BSCompoundFrustum
	{
		inline constexpr REL::Offset ctor{ 0x847660 };
		inline constexpr REL::Offset dtor{ 0x847770 };
		inline constexpr REL::Offset PrethreadOpList{ 0x849850 };
	}

	namespace BSCriticalSection
	{
		inline constexpr REL::Offset TryLock{ 0x4B130 };
		inline constexpr REL::Offset ctor{ 0x4FAE0 };
		inline constexpr REL::Offset Enter{ 0x538A0 };
		inline constexpr REL::Offset Leave{ 0x538C0 };
		inline constexpr REL::Offset Unlock{ 0x42F1F0 };
	}

	namespace BSCullingProcess
	{
		inline constexpr REL::Offset ctor{ 0xA0EB0 };
		inline constexpr REL::Offset SetAccumulator{ 0xA0FD0 };
		inline constexpr REL::Offset PopCullMode{ 0x84F2D0 };
	}

	namespace BSCustomSplatterExtraData
	{
		inline constexpr REL::Offset ctor{ 0xDEA80 };
	}

	namespace BSDLCSystemUtility
	{
		inline constexpr REL::Offset UnmountDLC{ 0x6F5AB0 };
	}

	namespace BSDecalPlacementVectorExtraData
	{
		inline constexpr REL::Offset ctor{ 0x863AB0 };
		inline constexpr REL::Offset FindDecalPlacementVectorGroupRecurse{ 0x863C30 };
	}

	namespace BSDismemberSkinInstance
	{
		inline constexpr REL::Offset SetBodyPartEnabled{ 0x1E4810 };
		inline constexpr REL::Offset ctor{ 0x288470 };
	}

	namespace BSDistantTreeShader
	{
		inline constexpr REL::Offset GetMaxInstances{ 0x7B6030 };
		inline constexpr REL::Offset LoadShaders{ 0x7B6060 };
	}

	namespace BSExtraData
	{
		inline constexpr REL::Offset ctor{ 0xEC80 };
	}

	namespace BSFaceGenAnimationData
	{
		inline constexpr REL::Offset GetModifierValue{ 0x1DD4A0 };
		inline constexpr REL::Offset ctor{ 0x249680 };
		inline constexpr REL::Offset GetTrackEyeXYMinMax{ 0x249F00 };
		inline constexpr REL::Offset GetTrackEyeZMinMax{ 0x249F70 };
		inline constexpr REL::Offset GetTrackDeadZoneXYMinMax{ 0x249FE0 };
		inline constexpr REL::Offset GetTrackDeadZoneZMinMax{ 0x24A070 };
		inline constexpr REL::Offset UpdateEyeTracking{ 0x24BE40 };
		inline constexpr REL::Offset ModifyEyeHeadingAndPitchBasedOnExpression{ 0x24BF90 };
		inline constexpr REL::Offset SetEyePosition{ 0x24C410 };
		inline constexpr REL::Offset CreateCopyBS{ 0x24C5A0 };
		inline constexpr REL::Offset UpdateKeyframeList{ 0x24CA60 };
		inline constexpr REL::Offset GetExpressionTargetChangePerSec{ 0x24FB10 };
		inline constexpr REL::Offset GetExpressionStrengthAddPerSec{ 0x24FB50 };
	}

	namespace BSFaceGenBaseMorphExtraData
	{
		inline constexpr REL::Offset ctor{ 0x2624C0 };
		inline constexpr REL::Offset InitSDM{ 0x262760 };
	}

	namespace BSFaceGenBinaryFile
	{
		inline constexpr REL::Offset ctor{ 0x6C5490 };
		inline constexpr REL::Offset close{ 0x6C5C00 };
		inline constexpr REL::Offset readHeader{ 0x6C5E00 };
	}

	namespace BSFaceGenImage
	{
		inline constexpr REL::Offset GetCompressedImage{ 0x24CEB0 };
	}

	namespace BSFaceGenKeyframe
	{
		inline constexpr REL::Offset ctor{ 0x24EA80 };
	}

	namespace BSFaceGenKeyframeMultiple
	{
		inline constexpr REL::Offset GetNumQuantities{ 0x4EDB0 };
		inline constexpr REL::Offset GetQuantity{ 0x1DD4E0 };
		inline constexpr REL::Offset SetQuantityNoTest{ 0x249A50 };
		inline constexpr REL::Offset SetQuantity{ 0x24A4D0 };
		inline constexpr REL::Offset ctor{ 0x24EB60 };
		inline constexpr REL::Offset ctor_1{ 0x24EC10 };
		inline constexpr REL::Offset operator_call{ 0x24FCD0 };
	}

	namespace BSFaceGenManager
	{
		inline constexpr REL::Offset GetUseFaceGenHeads{ 0x3FAF0 };
		inline constexpr REL::Offset GetUseMultiThreading{ 0xABFA0 };
		inline constexpr REL::Offset GetFaceGenExpressionText{ 0x1DD830 };
		inline constexpr REL::Offset GetFaceGenModifierText{ 0x1DD840 };
		inline constexpr REL::Offset GetFaceGenPhonemeText{ 0x1DD850 };
		inline constexpr REL::Offset GetFixNormals{ 0x205D20 };
		inline constexpr REL::Offset GetFaceGenModelExtraData{ 0x207310 };
		inline constexpr REL::Offset ctor{ 0x250EA0 };
		inline constexpr REL::Offset InitializeSystem{ 0x2519F0 };
		inline constexpr REL::Offset GetInstance{ 0x251B30 };
		inline constexpr REL::Offset GetFaceGenModel{ 0x251B50 };
		inline constexpr REL::Offset LoadEGMData{ 0x251F70 };
		inline constexpr REL::Offset LoadEGTData{ 0x252040 };
		inline constexpr REL::Offset GetModelCache{ 0x252110 };
		inline constexpr REL::Offset LockFaceGenAccess{ 0x252140 };
		inline constexpr REL::Offset UnlockFaceGenAccess{ 0x252190 };
		inline constexpr REL::Offset GetMaxControlID{ 0x2521B0 };
		inline constexpr REL::Offset InitFaceGenCoord{ 0x2521F0 };
		inline constexpr REL::Offset GetFaceCoordValue{ 0x252230 };
		inline constexpr REL::Offset SetFaceCoordValue{ 0x252320 };
		inline constexpr REL::Offset GetFaceCoordAttribute{ 0x252440 };
		inline constexpr REL::Offset SetFaceCoordAttribute{ 0x252470 };
		inline constexpr REL::Offset SetFaceCoordAttributes{ 0x2524E0 };
		inline constexpr REL::Offset CycleFaceGenCoordValue{ 0x252510 };
		inline constexpr REL::Offset CompareFaceGenCoord{ 0x252900 };
		inline constexpr REL::Offset CopyFaceGenCoord{ 0x2529A0 };
		inline constexpr REL::Offset MergeFaceGenCoord{ 0x252AF0 };
		inline constexpr REL::Offset OffsetFaceGenCoord{ 0x252E00 };
		inline constexpr REL::Offset RandomizeFaceGenetic{ 0x252FC0 };
		inline constexpr REL::Offset GetFaceGenModel_1{ 0x2530E0 };
		inline constexpr REL::Offset RefreshMeshFromBaseMorphExtraData{ 0x253340 };
		inline constexpr REL::Offset GetFaceGenBaseMorphExtraData{ 0x253430 };
		inline constexpr REL::Offset ApplyHairMorph{ 0x253470 };
		inline constexpr REL::Offset GetAsEGMFile{ 0x253520 };
		inline constexpr REL::Offset GetAsNIFFile{ 0x253620 };
		inline constexpr REL::Offset GetAsTRIFile{ 0x2536D0 };
		inline constexpr REL::Offset GetAsEGTFile{ 0x2537D0 };
		inline constexpr REL::Offset GetAsNearestDetailDDSFile{ 0x253880 };
		inline constexpr REL::Offset GetAsNIFFileLowLOD{ 0x253A10 };
		inline constexpr REL::Offset GetAsNIFFileHighLOD{ 0x253C40 };
		inline constexpr REL::Offset ResetQuantityArray{ 0x253DC0 };
		inline constexpr REL::Offset ReplaceFaceMeshLOD{ 0x253E50 };
		inline constexpr REL::Offset CreateFaceGenHead{ 0x254720 };
		inline constexpr REL::Offset AttachHairToHead{ 0x255320 };
		inline constexpr REL::Offset AttachEyesToHead{ 0x2558B0 };
		inline constexpr REL::Offset PrepareHeadForShaders{ 0x255FA0 };
		inline constexpr REL::Offset PrecacheFaceGeometry{ 0x257010 };
		inline constexpr REL::Offset ClearBodyTexturesFromPalette{ 0x2570E0 };
		inline constexpr REL::Offset QueueHeadParts{ 0x257150 };
		inline constexpr REL::Offset GetHairName{ 0x257820 };
		inline constexpr REL::Offset GetLodDistance{ 0x2633D0 };
		inline constexpr REL::Offset pInstance{ 0xDD59E8 };
	}

	namespace BSFaceGenModel
	{
		inline constexpr REL::Offset GetEGMFilename{ 0x2505D0 };
		inline constexpr REL::Offset GetEGTFilename{ 0x250600 };
		inline constexpr REL::Offset LoadModel{ 0x259C70 };
		inline constexpr REL::Offset LoadModelMesh{ 0x259CE0 };
		inline constexpr REL::Offset LoadModelTexture{ 0x25A760 };
		inline constexpr REL::Offset ForceLoadModelTexture{ 0x25A840 };
		inline constexpr REL::Offset ApplyCoordinateToNewMesh{ 0x25A910 };
		inline constexpr REL::Offset ApplyCoordinateToExistingMesh{ 0x25A970 };
		inline constexpr REL::Offset ApplyCoordinateTexturingToMesh{ 0x25B410 };
		inline constexpr REL::Offset LoadEGMData{ 0x25BF80 };
		inline constexpr REL::Offset GetEGMDataSize{ 0x25C110 };
		inline constexpr REL::Offset LoadEGTData{ 0x25C2C0 };
		inline constexpr REL::Offset UnloadEGTData{ 0x25C3A0 };
		inline constexpr REL::Offset KillTextureData{ 0x25C400 };
		inline constexpr REL::Offset GetEGTDataSize{ 0x25C490 };
	}

	namespace BSFaceGenModelExtraData
	{
		inline constexpr REL::Offset ctor{ 0x25BE60 };
	}

	namespace BSFaceGenModelMap
	{
		inline constexpr REL::Offset ctor{ 0x24FD80 };
		inline constexpr REL::Offset OutputModelMapContents{ 0x24FE80 };
		inline constexpr REL::Offset SetAt{ 0x24FFD0 };
		inline constexpr REL::Offset GetAt{ 0x250200 };
		inline constexpr REL::Offset LoadEGMData{ 0x250480 };
		inline constexpr REL::Offset LoadEGTData{ 0x250630 };
		inline constexpr REL::Offset KillModelTextureData{ 0x250780 };
		inline constexpr REL::Offset GetTotalDataSize{ 0x250930 };
		inline constexpr REL::Offset UnloadAllEGMAndEGTData{ 0x250A30 };
		inline constexpr REL::Offset VerifyData{ 0x250BA0 };
		inline constexpr REL::Offset FreeLRUData{ 0x250CB0 };
		inline constexpr REL::Offset ClearEGTData{ 0x251E70 };
	}

	namespace BSFaceGenModelMap_Entry
	{
		inline constexpr REL::Offset ctor{ 0x250100 };
	}

	namespace BSFaceGenModelMeshData
	{
		inline constexpr REL::Offset IncRefCount{ 0x4B2A0 };
		inline constexpr REL::Offset DecRefCount{ 0x4B2E0 };
	}

	namespace BSFaceGenModelTextureData
	{
		inline constexpr REL::Offset dtor{ 0x259A20 };
	}

	namespace BSFaceGenMorph
	{
		inline constexpr REL::Offset ctor{ 0x260690 };
	}

	namespace BSFaceGenMorphData
	{
		inline constexpr REL::Offset ctor{ 0x261D10 };
	}

	namespace BSFaceGenMorphDataHair
	{
		inline constexpr REL::Offset ctor{ 0x2621D0 };
	}

	namespace BSFaceGenMorphDataHead
	{
		inline constexpr REL::Offset ctor{ 0x260BA0 };
		inline constexpr REL::Offset ApplyMorph{ 0x262030 };
	}

	namespace BSFaceGenMorphDifferential
	{
		inline constexpr REL::Offset ctor{ 0x260700 };
	}

	namespace BSFaceGenMorphStatistical
	{
		inline constexpr REL::Offset ctor{ 0x260970 };
	}

	namespace BSFaceGenNiNode
	{
		inline constexpr REL::Offset ctor{ 0x2628C0 };
		inline constexpr REL::Offset ApplyFacialExpressions{ 0x262BC0 };
		inline constexpr REL::Offset ApplyFacialModifiers{ 0x262CA0 };
		inline constexpr REL::Offset ApplyFacialPhonemes{ 0x262E90 };
		inline constexpr REL::Offset ApplyFacialCustomMorphs{ 0x262F70 };
		inline constexpr REL::Offset UpdateAllChildrenMorphData{ 0x263050 };
		inline constexpr REL::Offset CheckLOD{ 0x263450 };
		inline constexpr REL::Offset UpdateMorphing{ 0x263510 };
	}

	namespace BSFadeNode
	{
		inline constexpr REL::Offset TurnFadeNodeOn{ 0x76AB0 };
		inline constexpr REL::Offset SetFadingFlag{ 0x76AE0 };
		inline constexpr REL::Offset SetIgnoreFade{ 0x9EE60 };
		inline constexpr REL::Offset SetFadeEnabled{ 0xE20B0 };
		inline constexpr REL::Offset TurnFadeNodeOff{ 0x14B800 };
		inline constexpr REL::Offset SetUserData{ 0x16C7D0 };
		inline constexpr REL::Offset ForceLODMultType{ 0x305B10 };
		inline constexpr REL::Offset QUserData{ 0x5AD610 };
		inline constexpr REL::Offset SetLODMultType{ 0x74DEC0 };
		inline constexpr REL::Offset SetRange{ 0x74DFD0 };
		inline constexpr REL::Offset InitSDM{ 0x74E270 };
	}

	namespace BSFadeNodeCuller
	{
		inline constexpr REL::Offset ctor{ 0x472EA0 };
	}

	namespace BSFile
	{
		inline constexpr REL::Offset Tell{ 0x720A0 };
		inline constexpr REL::Offset FileIsGood{ 0x4905F0 };
		inline constexpr REL::Offset ctor{ 0x700260 };
	}

	namespace BSFileCache
	{
		inline constexpr REL::Offset QInstance{ 0x6FF100 };
	}

	namespace BSFurnitureMarker
	{
		inline constexpr REL::Offset QMark{ 0x1094D0 };
		inline constexpr REL::Offset Find{ 0x854400 };
	}

	namespace BSLinearTaskThread
	{
		inline constexpr REL::Offset WaitForCompletion{ 0x4C7490 };
		inline constexpr REL::Offset Shutdown{ 0x4C74B0 };
		inline constexpr REL::Offset ctor{ 0x4C76A0 };
	}

	namespace BSMultiBound
	{
		inline constexpr REL::Offset SetShape{ 0xADDC0 };
		inline constexpr REL::Offset ctor{ 0x835E00 };
	}

	namespace BSMultiBoundAABB
	{
		inline constexpr REL::Offset SetHalfExtents{ 0x39680 };
		inline constexpr REL::Offset ctor{ 0xA6FC0 };
		inline constexpr REL::Offset ctor_1{ 0x837EC0 };
		inline constexpr REL::Offset GetVertices{ 0x839270 };
	}

	namespace BSMultiBoundNode
	{
		inline constexpr REL::Offset SetCullingMode{ 0x1468D0 };
		inline constexpr REL::Offset ctor{ 0x846970 };
	}

	namespace BSMultiBoundOBB
	{
		inline constexpr REL::Offset SetAxis{ 0x396B0 };
		inline constexpr REL::Offset ctor{ 0x836310 };
		inline constexpr REL::Offset GetVertices{ 0x837A00 };
	}

	namespace BSMultiBoundRoom
	{
		inline constexpr REL::Offset SetCompoundFrustum{ 0x5C4E0 };
		inline constexpr REL::Offset FreeCompoundFrustum{ 0x5C520 };
		inline constexpr REL::Offset ctor{ 0x839640 };
	}

	namespace BSMultiBoundShape
	{
		inline constexpr REL::Offset ctor{ 0x84F980 };
		inline constexpr REL::Offset CopyMembers{ 0x84F9B0 };
	}

	namespace BSNiNode
	{
		inline constexpr REL::Offset ctor{ 0x85F570 };
		inline constexpr REL::Offset ctor_1{ 0x85F680 };
		inline constexpr REL::Offset CopyMembers{ 0x85FB60 };
	}

	namespace BSOcclusionPlane
	{
		inline constexpr REL::Offset SetCenter{ 0x169F0 };
		inline constexpr REL::Offset SetHalfExtents{ 0x16A30 };
		inline constexpr REL::Offset SetRotation{ 0x16A70 };
		inline constexpr REL::Offset ctor{ 0xA5FF0 };
		inline constexpr REL::Offset WithinFrustum{ 0x833CF0 };
		inline constexpr REL::Offset WithinFrustumDistFirst{ 0x8344C0 };
		inline constexpr REL::Offset TestIntersection{ 0x834890 };
		inline constexpr REL::Offset ViewerOnCorrectSide{ 0x8358A0 };
		inline constexpr REL::Offset GetVertices{ 0x835C10 };
	}

	namespace BSOcclusionQuery
	{
		inline constexpr REL::Offset GetResult{ 0x84EDF0 };
	}

	namespace BSPSysArrayEmitter
	{
		inline constexpr REL::Offset ctor{ 0x861B10 };
		inline constexpr REL::Offset GetViewerString{ 0x862090 };
	}

	namespace BSPSysStripUpdateModifier
	{
		inline constexpr REL::Offset ctor{ 0x85FD30 };
	}

	namespace BSPackedTaskQueue
	{
		inline constexpr REL::Offset ThreadBeginInput{ 0x46C600 };
		inline constexpr REL::Offset ctor{ 0x46C620 };
		inline constexpr REL::Offset ThreadEndInput{ 0x46CDD0 };
	}

	namespace BSParallelArrayTask
	{
		inline constexpr REL::Offset ctor{ 0x47CF10 };
	}

	namespace BSParallelTaskManager
	{
		inline constexpr REL::Offset ctor{ 0x844980 };
		inline constexpr REL::Offset RunTask{ 0x844C90 };
	}

	namespace BSParentVelocityModifier
	{
		inline constexpr REL::Offset ctor{ 0x863330 };
	}

	namespace BSParticleSystemManager
	{
		inline constexpr REL::Offset ctor{ 0x8503D0 };
		inline constexpr REL::Offset AddEmitter{ 0x8505C0 };
		inline constexpr REL::Offset CheckEmitterRecurse{ 0x850F90 };
	}

	namespace BSPerformanceTimer
	{
		inline constexpr REL::Offset ctor{ 0x5D260 };
	}

	namespace BSPlayerDistanceCheckController
	{
		inline constexpr REL::Offset ctor{ 0x4D15D0 };
		inline constexpr REL::Offset CopyMembers{ 0x4D17D0 };
	}

	namespace BSPortal
	{
		inline constexpr REL::Offset QSharedGeometryNode{ 0x5C4C0 };
		inline constexpr REL::Offset ctor{ 0xA61F0 };
		inline constexpr REL::Offset ctor_1{ 0x84F8E0 };
	}

	namespace BSPortalSharedNode
	{
		inline constexpr REL::Offset ctor{ 0x84F460 };
	}

	namespace BSRandom
	{
		inline constexpr REL::Offset Float{ 0x76B90 };
		inline constexpr REL::Offset UnsignedInt{ 0x76BE0 };
		inline constexpr REL::Offset QInstance{ 0x76C00 };
		inline constexpr REL::Offset FloatNeg1To1{ 0xDFEC0 };
		inline constexpr REL::Offset Float0To1{ 0xDFF60 };
		inline constexpr REL::Offset Int{ 0x544480 };
		inline constexpr REL::Offset UnsignedInt_1{ 0x6A5230 };
	}

	namespace BSRangeNode
	{
		inline constexpr REL::Offset ctor{ 0x8450D0 };
	}

	namespace BSRenderedTexture
	{
		inline constexpr REL::Offset GetTexture{ 0xBC320 };
		inline constexpr REL::Offset QOutsideFrame{ 0xE9510 };
		inline constexpr REL::Offset StopOffscreen{ 0x76B790 };
		inline constexpr REL::Offset StartOffscreen{ 0x76B8D0 };
	}

	namespace BSSceneGraph
	{
		inline constexpr REL::Offset GetCameraRoot{ 0x158310 };
		inline constexpr REL::Offset ctor{ 0x8517B0 };
	}

	namespace BSScissorTriShape
	{
		inline constexpr REL::Offset ctor{ 0x85CF30 };
	}

	namespace BSSegmentedTriShape
	{
		inline constexpr REL::Offset GetNumSegments{ 0x2FBFE0 };
	}

	namespace BSSemaphore
	{
		inline constexpr REL::Offset Wait{ 0x424E0 };
		inline constexpr REL::Offset Signal{ 0x42550 };
		inline constexpr REL::Offset ctor{ 0x38D3B0 };
		inline constexpr REL::Offset ctor_1{ 0x46C6A0 };
	}

	namespace BSShader
	{
		inline constexpr REL::Offset MakePath{ 0x7E0C00 };
		inline constexpr REL::Offset CompileVertexShaderHLSL{ 0x7E0FE0 };
		inline constexpr REL::Offset CompilePixelShaderHLSL{ 0x7E1750 };
	}

	namespace BSShaderAccumulator
	{
		inline constexpr REL::Offset SetShadowSceneNode{ 0xA1020 };
		inline constexpr REL::Offset SetRenderMode{ 0xA1040 };
		inline constexpr REL::Offset SetWaterReflection{ 0xEA860 };
		inline constexpr REL::Offset ClearAllQueries{ 0x7631D0 };
		inline constexpr REL::Offset CreateRenderPassTree{ 0x763420 };
		inline constexpr REL::Offset RemoveBoundVolume{ 0x766050 };
		inline constexpr REL::Offset ctor{ 0x7660D0 };
	}

	namespace BSShaderBloodSplatter
	{
		inline constexpr REL::Offset LoadShaders{ 0x780090 };
		inline constexpr REL::Offset ctor{ 0x780D30 };
	}

	namespace BSShaderNoLighting
	{
		inline constexpr REL::Offset LoadShaders{ 0x7C5C40 };
	}

	namespace BSShaderNoLightingProperty
	{
		inline constexpr REL::Offset SetBaseMap{ 0x38230 };
	}

	namespace BSShaderPPLightingProperty
	{
		inline constexpr REL::Offset GetNormalTexture{ 0x140570 };
		inline constexpr REL::Offset SetTextureEffectData{ 0x7675C0 };
		inline constexpr REL::Offset SetRefractionRecurse{ 0x768770 };
		inline constexpr REL::Offset AddTexturePass_1x{ 0x7DAC00 };
	}

	namespace BSShaderProperty
	{
		inline constexpr REL::Offset SetFlag{ 0x41130 };
		inline constexpr REL::Offset GetFlag{ 0xA2020 };
		inline constexpr REL::Offset SetAlpha{ 0x7A8AB0 };
		inline constexpr REL::Offset SetFlagRecurse{ 0x7A91A0 };
	}

	namespace BSShaderTextureSet
	{
		inline constexpr REL::Offset ctor{ 0x11D0D0 };
	}

	namespace BSSoundHandle
	{
		inline constexpr REL::Offset Clear{ 0x188D0 };
		inline constexpr REL::Offset operator_call{ 0x1A1F0 };
		inline constexpr REL::Offset ctor{ 0x1A250 };
		inline constexpr REL::Offset ctor_1{ 0x17BD10 };
		inline constexpr REL::Offset SetPosition{ 0x28A7D0 };
		inline constexpr REL::Offset Play{ 0x6D8830 };
		inline constexpr REL::Offset PlayAfter{ 0x6D8870 };
		inline constexpr REL::Offset Pause{ 0x6D88B0 };
		inline constexpr REL::Offset Stop{ 0x6D88F0 };
		inline constexpr REL::Offset IsPlaying{ 0x6D8930 };
		inline constexpr REL::Offset SetVolume{ 0x6D89E0 };
		inline constexpr REL::Offset GetDuration{ 0x6D8B30 };
		inline constexpr REL::Offset SetPosition_1{ 0x6D8B60 };
		inline constexpr REL::Offset SetMinMax{ 0x6D8BE0 };
		inline constexpr REL::Offset IsValid{ 0x6D8CE0 };
		inline constexpr REL::Offset Release{ 0x6D8D10 };
		inline constexpr REL::Offset FadeOutAndRelease{ 0x6D8DA0 };
		inline constexpr REL::Offset SetObjectToFollow{ 0x6D8F20 };
		inline constexpr REL::Offset SetPriority{ 0x6D9030 };
	}

	namespace BSSpinLock
	{
		inline constexpr REL::Offset Lock{ 0xFBF0 };
	}

	namespace BSSplatterExtraData
	{
		inline constexpr REL::Offset ctor{ 0xE04E0 };
	}

	namespace BSStream
	{
		inline constexpr REL::Offset ctor{ 0x3CFD0 };
		inline constexpr REL::Offset InitLoaders{ 0x83A6D0 };
	}

	namespace BSSystemFile
	{
		inline constexpr REL::Offset GetSizeOfFile{ 0x25C1F0 };
		inline constexpr REL::Offset GetSize{ 0x25C290 };
		inline constexpr REL::Offset DeleteFileA{ 0x6FF0B0 };
		inline constexpr REL::Offset ctor{ 0x700900 };
	}

	namespace BSSystemUtility
	{
		inline constexpr REL::Offset QDLCUtility{ 0x1DFA10 };
		inline constexpr REL::Offset QInstance{ 0x6F2640 };
	}

	namespace BSTaskThread
	{
		inline constexpr REL::Offset WaitPauseSemaphore{ 0x42510 };
		inline constexpr REL::Offset SignalPauseSemaphore{ 0x42530 };
		inline constexpr REL::Offset SignalSemaphore{ 0x42600 };
	}

	namespace BSTaskletGroup
	{
		inline constexpr REL::Offset Open{ 0x2C08E0 };
		inline constexpr REL::Offset Close{ 0x2C09D0 };
		inline constexpr REL::Offset AttachTask{ 0x2C5EC0 };
	}

	namespace BSTaskletManager
	{
		inline constexpr REL::Offset QInstance{ 0x700A00 };
	}

	namespace BSTempEffect
	{
		inline constexpr REL::Offset GetAge{ 0x221B00 };
		inline constexpr REL::Offset ctor{ 0x2827B0 };
	}

	namespace BSTempEffectDebris
	{
		inline constexpr REL::Offset ctor{ 0x282B00 };
		inline constexpr REL::Offset Init{ 0x282D10 };
		inline constexpr REL::Offset InitHavok{ 0x283190 };
	}

	namespace BSTempEffectGeometryDecal
	{
		inline constexpr REL::Offset InitializeUsingAGD{ 0x283C10 };
		inline constexpr REL::Offset InitializeUsingData{ 0x285EF0 };
		inline constexpr REL::Offset CreateGeometry{ 0x287D90 };
	}

	namespace BSTempEffectParticle
	{
		inline constexpr REL::Offset ctor{ 0x288FC0 };
		inline constexpr REL::Offset Spawn{ 0x2890B0 };
		inline constexpr REL::Offset Spawn_1{ 0x289210 };
		inline constexpr REL::Offset Init{ 0x289310 };
		inline constexpr REL::Offset GetControllerLifetime{ 0x289840 };
		inline constexpr REL::Offset PlaySequence{ 0x289920 };
		inline constexpr REL::Offset StartSounds{ 0x28A600 };
		inline constexpr REL::Offset StopSounds{ 0x28A850 };
		inline constexpr REL::Offset ResetGravityRecursive{ 0x28A8F0 };
		inline constexpr REL::Offset ResetGravity{ 0x28AA50 };
	}

	namespace BSTempEffectSimpleDecal
	{
		inline constexpr REL::Offset CleanUpMemory{ 0x28B220 };
		inline constexpr REL::Offset PreloadDecalData{ 0x28B3E0 };
		inline constexpr REL::Offset ProcessGeometry{ 0x28B4C0 };
		inline constexpr REL::Offset FinalizeGeometry{ 0x28BE90 };
		inline constexpr REL::Offset AddPolygon{ 0x28CB60 };
		inline constexpr REL::Offset ClipMesh{ 0x28D230 };
		inline constexpr REL::Offset ClipPolygon{ 0x28D660 };
		inline constexpr REL::Offset ClipPolygonAgainstPlane{ 0x28D820 };
		inline constexpr REL::Offset CheckOcclusionQueryResults{ 0x28DE30 };
		inline constexpr REL::Offset CreateDebugBox{ 0x28DEA0 };
		inline constexpr REL::Offset ResizeDataArrays{ 0x28E760 };
	}

	namespace BSTempNode
	{
		inline constexpr REL::Offset ctor{ 0x58EF0 };
	}

	namespace BSTextureData
	{
		inline constexpr REL::Offset ctor{ 0x85ECF0 };
	}

	namespace BSTextureManager
	{
		inline constexpr REL::Offset ReturnRenderedTexture{ 0x76DA10 };
		inline constexpr REL::Offset BorrowRenderedTexture{ 0x76E110 };
	}

	namespace BSTextureSet
	{
		inline constexpr REL::Offset ctor{ 0x11D190 };
	}

	namespace BSThread
	{
		inline constexpr REL::Offset ctor{ 0x6A6360 };
		inline constexpr REL::Offset SetThreadProcessor{ 0x6A6550 };
		inline constexpr REL::Offset SetThreadPriority{ 0x6A6560 };
	}

	namespace BSTimer
	{
		inline constexpr REL::Offset GetRealTimeSeconds{ 0x3013E0 };
		inline constexpr REL::Offset QGlobalTimeMultiplier{ 0x316440 };
		inline constexpr REL::Offset ctor{ 0x36BDA0 };
		inline constexpr REL::Offset Update{ 0x371520 };
		inline constexpr REL::Offset GetSeconds{ 0x44D030 };
		inline constexpr REL::Offset RestoreGlobalTimeMultiplierCache{ 0x53E840 };
		inline constexpr REL::Offset QGlobalTimeMultiplierTarget{ 0x5443F0 };
		inline constexpr REL::Offset SetGlobalTimeMultiplier{ 0x6A4DB0 };
	}

	namespace BSTransCon
	{
		inline constexpr REL::Offset UpdateAllButTarget{ 0xF0380 };
		inline constexpr REL::Offset RemoveControlledItems{ 0xF0640 };
		inline constexpr REL::Offset RemoveTreadControlledItems{ 0xF06D0 };
	}

	namespace BSTreeManager
	{
		inline constexpr REL::Offset GetUseCanopyShadows{ 0x52480 };
		inline constexpr REL::Offset CanTreesLoad{ 0x11D740 };
		inline constexpr REL::Offset AreTreesVisible{ 0x14EE20 };
		inline constexpr REL::Offset SetTreesVisible{ 0x14EE60 };
		inline constexpr REL::Offset GetCamera{ 0x152380 };
		inline constexpr REL::Offset AreLeavesVisible{ 0x1B9790 };
		inline constexpr REL::Offset dtor{ 0x264740 };
		inline constexpr REL::Offset GetInstance{ 0x264840 };
		inline constexpr REL::Offset Create{ 0x264870 };
		inline constexpr REL::Offset Destroy{ 0x264940 };
		inline constexpr REL::Offset GetModelArray{ 0x2649C0 };
		inline constexpr REL::Offset ClearModelCache{ 0x264CD0 };
		inline constexpr REL::Offset CreateTreeForReference{ 0x264F50 };
		inline constexpr REL::Offset Update{ 0x2652E0 };
		inline constexpr REL::Offset GetNearDistance{ 0x265570 };
		inline constexpr REL::Offset GetFarDistance{ 0x2655C0 };
		inline constexpr REL::Offset GetCanopyShadow{ 0x265610 };
		inline constexpr REL::Offset ClearCanopyShadow{ 0x265860 };
		inline constexpr REL::Offset UpdateWindMatrices{ 0x2658B0 };
		inline constexpr REL::Offset GetSizeConversion{ 0x26B0B0 };
	}

	namespace BSTreeModel
	{
		inline constexpr REL::Offset IsInstance{ 0x266F00 };
		inline constexpr REL::Offset CreateBranchGeometry{ 0x267470 };
		inline constexpr REL::Offset CreateLeafGeometry{ 0x268500 };
		inline constexpr REL::Offset CreateBillboardGeometry{ 0x269500 };
		inline constexpr REL::Offset CreateAlphaProperty{ 0x2698F0 };
		inline constexpr REL::Offset GetNumBranchLODLevels{ 0x269990 };
		inline constexpr REL::Offset GetNumLeafLODLevels{ 0x2699D0 };
		inline constexpr REL::Offset InitAsInstance{ 0x26A650 };
		inline constexpr REL::Offset InitFromBase{ 0x26AC40 };
	}

	namespace BSTreeNode
	{
		inline constexpr REL::Offset ctor{ 0x26B120 };
		inline constexpr REL::Offset CheckForCollision{ 0x26CA50 };
		inline constexpr REL::Offset MakeHavokLeaves{ 0x26CB40 };
	}

	namespace BSValueNode
	{
		inline constexpr REL::Offset ctor{ 0x843660 };
		inline constexpr REL::Offset ctor_1{ 0x8436A0 };
	}

	namespace BSWin32TaskletData
	{
		inline constexpr REL::Offset ctor{ 0x2C7850 };
	}

	namespace BSWindModifier
	{
		inline constexpr REL::Offset ctor{ 0x8465A0 };
		inline constexpr REL::Offset SetWind{ 0x8468C0 };
	}

	namespace BSXFlags
	{
		inline constexpr REL::Offset QAddon{ 0x48A40 };
		inline constexpr REL::Offset GetFlags{ 0x48A60 };
		inline constexpr REL::Offset Tag{ 0x48A80 };
		inline constexpr REL::Offset SetFlags{ 0x119230 };
		inline constexpr REL::Offset GetFlags_1{ 0x224B70 };
		inline constexpr REL::Offset ctor{ 0x842F70 };
	}

	namespace BackUpPackage
	{
		inline constexpr REL::Offset InitializeBackUpPackage{ 0x5ED0D0 };
		inline constexpr REL::Offset CalculateBackUpPointInterior{ 0x5ED380 };
		inline constexpr REL::Offset CalculateBackUpPointExterior{ 0x5ED4B0 };
	}

	namespace BackgroundCloneThread
	{
		inline constexpr REL::Offset ctor{ 0x421D0 };
	}

	namespace BarterMenu
	{
		inline constexpr REL::Offset ctor{ 0x32CEB0 };
		inline constexpr REL::Offset Create{ 0x32D250 };
		inline constexpr REL::Offset Close{ 0x32D6D0 };
		inline constexpr REL::Offset UpdateCapsLabels{ 0x32DB60 };
		inline constexpr REL::Offset UpdateLists{ 0x32DC30 };
		inline constexpr REL::Offset PlayerFirstPassFilterFunc{ 0x32E570 };
		inline constexpr REL::Offset VendorFirstPassFilterFunc{ 0x32E6C0 };
		inline constexpr REL::Offset RemoveStolenItems{ 0x32EAC0 };
		inline constexpr REL::Offset GetSortValue{ 0x32ED00 };
		inline constexpr REL::Offset SortFunc{ 0x32F070 };
		inline constexpr REL::Offset InitFunc{ 0x32F210 };
		inline constexpr REL::Offset ItemSelectCallback{ 0x32F6F0 };
		inline constexpr REL::Offset CompleteTransaction{ 0x32FD10 };
		inline constexpr REL::Offset SetFilterModeTitle{ 0x3301F0 };
		inline constexpr REL::Offset FilterModeFunc{ 0x3304B0 };
		inline constexpr REL::Offset ForceBarterUpdate{ 0x330690 };
	}

	namespace BaseExtraList
	{
		inline constexpr REL::Offset ClearLastExtraAll{ 0xF860 };
		inline constexpr REL::Offset RemoveAll{ 0xFAE0 };
		inline constexpr REL::Offset RemoveAllDefault{ 0xFCB0 };
		inline constexpr REL::Offset ItemsInList{ 0xFE20 };
		inline constexpr REL::Offset HasExtra{ 0xFE80 };
		inline constexpr REL::Offset SetHasExtra{ 0xFEE0 };
		inline constexpr REL::Offset AddExtra{ 0xFF60 };
		inline constexpr REL::Offset RemoveExtra{ 0x10020 };
		inline constexpr REL::Offset RemoveExtra_1{ 0x10140 };
		inline constexpr REL::Offset GetExtraData{ 0x10220 };
		inline constexpr REL::Offset GetPrevExtraData{ 0x102D0 };
		inline constexpr REL::Offset IsExtraListEmpty{ 0xBCA60 };
	}

	namespace BaseFormComponent
	{
		inline constexpr REL::Offset ctor{ 0x2D30 };
	}

	namespace BaseProcess
	{
		inline constexpr REL::Offset SetLastTimeProcessed{ 0x293D50 };
		inline constexpr REL::Offset GetLastTimeProcessed{ 0x3DF1F0 };
		inline constexpr REL::Offset HasCachedValues{ 0x484920 };
		inline constexpr REL::Offset SetCachedValueDirty{ 0x484940 };
		inline constexpr REL::Offset SetCachedWalkSpeed{ 0x484CE0 };
		inline constexpr REL::Offset SetCachedRunSpeed{ 0x484D80 };
		inline constexpr REL::Offset IsCachedValueFlagSet{ 0x4ACED0 };
		inline constexpr REL::Offset ctor{ 0x4D0270 };
	}

	namespace BeamProjectile
	{
		inline constexpr REL::Offset ScaleBeamGeometryLength{ 0x5795E0 };
		inline constexpr REL::Offset FindBeamGeometryLength{ 0x579840 };
		inline constexpr REL::Offset ScaleBeam3D{ 0x579A70 };
	}

	namespace BipedAnim
	{
		inline constexpr REL::Offset GetRequester{ 0x3F010 };
		inline constexpr REL::Offset GetBipObject{ 0x3F220 };
		inline constexpr REL::Offset ctor{ 0xAACA0 };
		inline constexpr REL::Offset InitRoot{ 0xAAD00 };
		inline constexpr REL::Offset RemoveAllParts{ 0xAAE70 };
		inline constexpr REL::Offset RemovePart{ 0xAAFF0 };
		inline constexpr REL::Offset RemovePart_1{ 0xAB020 };
		inline constexpr REL::Offset RunBiped3DDetach{ 0xAB0C0 };
		inline constexpr REL::Offset RecursivelyRemoveAllDecalPlacementVectorDataFromWeaponBone{ 0xAB130 };
		inline constexpr REL::Offset GetParentBone{ 0xAB230 };
		inline constexpr REL::Offset InitNaked{ 0xAB250 };
		inline constexpr REL::Offset SetBipedWeapon{ 0xAB400 };
		inline constexpr REL::Offset RemoveBipedWeapon{ 0xAB5B0 };
		inline constexpr REL::Offset AttachBipedWeapon{ 0xAB750 };
		inline constexpr REL::Offset SetBipedPart{ 0xABAD0 };
		inline constexpr REL::Offset QueueBipedParts{ 0xABD30 };
		inline constexpr REL::Offset QueueSkinTextures{ 0xABFE0 };
		inline constexpr REL::Offset QueueSkinTexture{ 0xAC130 };
		inline constexpr REL::Offset LoadBipedParts{ 0xAC1E0 };
		inline constexpr REL::Offset ApplySkinnedObjects{ 0xAD290 };
		inline constexpr REL::Offset AttachSkinnedObject{ 0xAD4A0 };
		inline constexpr REL::Offset AttachToSkeleton{ 0xADE40 };
		inline constexpr REL::Offset AttachToParent{ 0xAE250 };
		inline constexpr REL::Offset LoadFaceGenModel{ 0xAE790 };
		inline constexpr REL::Offset IsFaceGenObject{ 0xAE8A0 };
		inline constexpr REL::Offset CloneHelmet{ 0xAE910 };
		inline constexpr REL::Offset AttachHelmet{ 0xAEB20 };
		inline constexpr REL::Offset LoadAndAttachAddOn{ 0xAEED0 };
		inline constexpr REL::Offset AddAddonNodes{ 0xAF240 };
		inline constexpr REL::Offset GetLightingProperty{ 0xAF290 };
		inline constexpr REL::Offset GetSkinBipedObject{ 0xAF360 };
		inline constexpr REL::Offset AdjustSkinComplexion{ 0xAF490 };
		inline constexpr REL::Offset Get1stPersonModelFileName{ 0xAF950 };
	}

	namespace BlackJackMenu
	{
		inline constexpr REL::Offset ctor{ 0x3315E0 };
		inline constexpr REL::Offset ZeroFlags{ 0x3316F0 };
		inline constexpr REL::Offset Close{ 0x331D30 };
		inline constexpr REL::Offset InitCasinoData{ 0x331D70 };
		inline constexpr REL::Offset Prepare3DElements{ 0x332540 };
		inline constexpr REL::Offset Draw3DElements{ 0x333500 };
		inline constexpr REL::Offset Create{ 0x333630 };
		inline constexpr REL::Offset IsFlagSet{ 0x334D30 };
		inline constexpr REL::Offset SetFlag{ 0x334D50 };
		inline constexpr REL::Offset UpdateCardAlpha{ 0x337E50 };
		inline constexpr REL::Offset ResetCardAlpha{ 0x338270 };
		inline constexpr REL::Offset UpdateTileAlpha{ 0x338560 };
		inline constexpr REL::Offset SetBetTiles{ 0x338CC0 };
		inline constexpr REL::Offset GetHandValue{ 0x338FF0 };
		inline constexpr REL::Offset DealCard{ 0x339090 };
		inline constexpr REL::Offset DealHand{ 0x3393F0 };
		inline constexpr REL::Offset CanDoubleDown{ 0x339650 };
		inline constexpr REL::Offset SwapCardTextures{ 0x3396E0 };
		inline constexpr REL::Offset SetSideHandVisibility{ 0x339970 };
		inline constexpr REL::Offset HighlightSelectedDeck{ 0x3399F0 };
		inline constexpr REL::Offset ClearDeckHighlight{ 0x339AD0 };
		inline constexpr REL::Offset SetBetChips{ 0x339B30 };
		inline constexpr REL::Offset UpdateEarningsString{ 0x33AB40 };
	}

	namespace BlendSettingCollection
	{
		inline constexpr REL::Offset ctor{ 0x232EC0 };
	}

	namespace BookMenu
	{
		inline constexpr REL::Offset Create{ 0x33AD50 };
		inline constexpr REL::Offset UpdateBook{ 0x33B2F0 };
		inline constexpr REL::Offset Close{ 0x33B480 };
		inline constexpr REL::Offset UseWorkbook{ 0x33B500 };
	}

	namespace BoundItemEffect
	{
		inline constexpr REL::Offset DoSummon{ 0x408A30 };
		inline constexpr REL::Offset FindConflictingBoundItems{ 0x40A700 };
	}

	namespace CBillboardLeaf
	{
		inline constexpr REL::Offset Parse{ 0x7405C0 };
	}

	namespace CExpression
	{
		inline constexpr REL::Offset ctor{ 0x193490 };
		inline constexpr REL::Offset SetError{ 0x1934D0 };
		inline constexpr REL::Offset InfixToPostfix{ 0x193500 };
		inline constexpr REL::Offset GetNextToken{ 0x193870 };
		inline constexpr REL::Offset Eval{ 0x193DB0 };
	}

	namespace CFilter
	{
		inline constexpr REL::Offset GetLayer{ 0x3B4D0 };
		inline constexpr REL::Offset SetLayer{ 0xA39F0 };
		inline constexpr REL::Offset GetGroup{ 0xA3A20 };
		inline constexpr REL::Offset GetPart{ 0xD9DA0 };
		inline constexpr REL::Offset SetGroup{ 0x19CE80 };
		inline constexpr REL::Offset ctor{ 0x222290 };
		inline constexpr REL::Offset QBipLayer{ 0x224070 };
		inline constexpr REL::Offset GetBipedPart{ 0x2240B0 };
		inline constexpr REL::Offset SetNoCollision{ 0x410F90 };
		inline constexpr REL::Offset ctor_1{ 0x4C71B0 };
		inline constexpr REL::Offset QNoCollision{ 0x5C19E0 };
		inline constexpr REL::Offset GetViewerStrings{ 0x8849B0 };
	}

	namespace CFrondEngine
	{
		inline constexpr REL::Offset ctor{ 0x717FD0 };
		inline constexpr REL::Offset Parse{ 0x718340 };
		inline constexpr REL::Offset Compute{ 0x718FD0 };
	}

	namespace CHALLENGE_DATA
	{
		inline constexpr REL::Offset Endian{ 0x1F5480 };
	}

	namespace CIdvBezierSpline
	{
		inline constexpr REL::Offset Parse{ 0x737CC0 };
	}

	namespace CLASS_DATA
	{
		inline constexpr REL::Offset Endian{ 0x1F68D0 };
	}

	namespace CLightingEngine
	{
		inline constexpr REL::Offset Parse{ 0x72A940 };
	}

	namespace CONDITION_ITEM_DATA
	{
		inline constexpr REL::Offset Endian{ 0x281170 };
	}

	namespace COORD_DATA
	{
		inline constexpr REL::Offset ctor{ 0x13A510 };
	}

	namespace CProjectedShadow
	{
		inline constexpr REL::Offset Parse{ 0x73E750 };
	}

	namespace CSpeedTreeRT
	{
		inline constexpr REL::Offset DeleteTransientData{ 0x7053E0 };
		inline constexpr REL::Offset LoadTree{ 0x705420 };
		inline constexpr REL::Offset LoadTree_1{ 0x7059E0 };
		inline constexpr REL::Offset SetTreeSize{ 0x706280 };
		inline constexpr REL::Offset SetBranchLightingMethod{ 0x706660 };
		inline constexpr REL::Offset SetLeafLightingMethod{ 0x706810 };
		inline constexpr REL::Offset SetFrondLightingMethod{ 0x7069C0 };
		inline constexpr REL::Offset GetCamera{ 0x706B70 };
		inline constexpr REL::Offset SetCamera{ 0x706C10 };
		inline constexpr REL::Offset SetNumLeafRockingGroups{ 0x7071F0 };
		inline constexpr REL::Offset SetLeafWindMethod{ 0x707510 };
		inline constexpr REL::Offset SetBranchWindMethod{ 0x7076E0 };
		inline constexpr REL::Offset SetFrondWindMethod{ 0x707900 };
		inline constexpr REL::Offset SetLocalMatrices{ 0x708050 };
		inline constexpr REL::Offset SetLodLevel{ 0x708480 };
		inline constexpr REL::Offset GetBoundingBox{ 0x708C80 };
		inline constexpr REL::Offset ParseLodInfo{ 0x7092A0 };
		inline constexpr REL::Offset ParseWindInfo{ 0x7097E0 };
		inline constexpr REL::Offset ParseTextureCoordInfo{ 0x709960 };
		inline constexpr REL::Offset GetCollisionObject{ 0x70A2A0 };
		inline constexpr REL::Offset ParseCollisionObjects{ 0x70A490 };
		inline constexpr REL::Offset GetBranchGeometry{ 0x70B1D0 };
		inline constexpr REL::Offset GetFrondGeometry{ 0x70B920 };
	}

	namespace CSpeedTreeRT_SGeometry
	{
		inline constexpr REL::Offset ctor{ 0x7029F0 };
		inline constexpr REL::Offset dtor{ 0x702AC0 };
	}

	namespace CSpeedTreeRT_STextures
	{
		inline constexpr REL::Offset ctor{ 0x702E20 };
		inline constexpr REL::Offset dtor{ 0x702E80 };
	}

	namespace CTreeEngine
	{
		inline constexpr REL::Offset Compute{ 0x72AF80 };
		inline constexpr REL::Offset Parse{ 0x72B550 };
		inline constexpr REL::Offset ParseTreeInfo{ 0x72BDE0 };
		inline constexpr REL::Offset ParseBranchInfo{ 0x72C790 };
		inline constexpr REL::Offset ParseLeafCluster{ 0x72CBC0 };
		inline constexpr REL::Offset ParseLodInfo{ 0x72CEB0 };
		inline constexpr REL::Offset ParseTextureControls{ 0x72D090 };
		inline constexpr REL::Offset ParseFlareInfo{ 0x72D2E0 };
	}

	namespace CTreeFileAccess
	{
		inline constexpr REL::Offset ParseBool{ 0x706180 };
	}

	namespace CachedValues
	{
		inline constexpr REL::Offset SetUpToDate{ 0x4848C0 };
		inline constexpr REL::Offset IsDirty{ 0x484E90 };
	}

	namespace CachedValuesOwner
	{
		inline constexpr REL::Offset ctor{ 0x47D860 };
	}

	namespace Calendar
	{
		inline constexpr REL::Offset InitGlobals{ 0x467890 };
		inline constexpr REL::Offset GetTimeScale{ 0x467950 };
		inline constexpr REL::Offset GetDateString{ 0x467970 };
		inline constexpr REL::Offset GetYear{ 0x467C60 };
		inline constexpr REL::Offset GetMonth{ 0x467D20 };
		inline constexpr REL::Offset GetDay{ 0x467D60 };
		inline constexpr REL::Offset GetHour{ 0x467DA0 };
		inline constexpr REL::Offset GetDaysPassed{ 0x467DE0 };
		inline constexpr REL::Offset GetHoursPassed{ 0x467E30 };
		inline constexpr REL::Offset GetDayOfTheWeek{ 0x467EF0 };
		inline constexpr REL::Offset GetDayOfWeekString{ 0x467F10 };
	}

	namespace CameraCaster
	{
		inline constexpr REL::Offset Init{ 0x220930 };
		inline constexpr REL::Offset Pick{ 0x220BC0 };
		inline constexpr REL::Offset Add{ 0x221370 };
		inline constexpr REL::Offset GetWorld{ 0x221440 };
		inline constexpr REL::Offset KeepOutOfCharacter{ 0x2214D0 };
	}

	namespace CaravanAIPackage
	{
		inline constexpr REL::Offset Print_WhatIsHeThinking{ 0x33B730 };
	}

	namespace CaravanMenu
	{
		inline constexpr REL::Offset ctor{ 0x33B7E0 };
		inline constexpr REL::Offset SetFlag{ 0x33BAB0 };
		inline constexpr REL::Offset ZeroFlags{ 0x33BB10 };
		inline constexpr REL::Offset Close{ 0x33CA50 };
		inline constexpr REL::Offset PrepareShared3DElements{ 0x33CBF0 };
		inline constexpr REL::Offset PrepareAnteMenu{ 0x33D020 };
		inline constexpr REL::Offset PrepareBettingCurrency{ 0x33D650 };
		inline constexpr REL::Offset PrepareDeckMenu{ 0x33D850 };
		inline constexpr REL::Offset PrepareGameMenu{ 0x33EA90 };
		inline constexpr REL::Offset PrepareResultsMenu{ 0x340980 };
		inline constexpr REL::Offset IsFlagSet{ 0x340F10 };
		inline constexpr REL::Offset Draw3DElements{ 0x340F30 };
		inline constexpr REL::Offset Create{ 0x341060 };
		inline constexpr REL::Offset UpdateCaravanFlags{ 0x349740 };
		inline constexpr REL::Offset UpdateTileAlpha{ 0x349A40 };
		inline constexpr REL::Offset ItemSelectCallback{ 0x34A090 };
		inline constexpr REL::Offset CancelConfirmFunc{ 0x34A270 };
		inline constexpr REL::Offset UpdateBettingUI{ 0x34A2C0 };
		inline constexpr REL::Offset FlipSelectedCardTextures{ 0x34AF70 };
		inline constexpr REL::Offset SwapDeckBuildingTextures{ 0x34B700 };
		inline constexpr REL::Offset ExchangeCurrency{ 0x34CC70 };
		inline constexpr REL::Offset UpdateDealCardTexture{ 0x34D190 };
		inline constexpr REL::Offset UpdateGameHandTextures{ 0x34D730 };
		inline constexpr REL::Offset UpdateSelectedTrackCardTexture{ 0x34DF90 };
		inline constexpr REL::Offset UpdateTrackCardTexture{ 0x34E220 };
		inline constexpr REL::Offset SelectDeckCard{ 0x34E480 };
		inline constexpr REL::Offset SelectTrackCard{ 0x34E6D0 };
		inline constexpr REL::Offset SelectWholeTrack{ 0x34ECB0 };
		inline constexpr REL::Offset DeselectWholeTrack{ 0x34ED40 };
		inline constexpr REL::Offset DeselectTrackCard{ 0x34EDD0 };
		inline constexpr REL::Offset UpdateTrackValue{ 0x34EE70 };
		inline constexpr REL::Offset HandleTrackSelection{ 0x34F360 };
		inline constexpr REL::Offset LoadNewBill{ 0x34F9B0 };
		inline constexpr REL::Offset LoadNewCoin{ 0x34FC00 };
		inline constexpr REL::Offset IsGameOver{ 0x352E20 };
	}

	namespace CellMopp
	{
		inline constexpr REL::Offset ctor{ 0x221D10 };
		inline constexpr REL::Offset Remove{ 0x221E80 };
		inline constexpr REL::Offset Create{ 0x221F60 };
		inline constexpr REL::Offset Make{ 0x222590 };
	}

	namespace ChangesMap
	{
		inline constexpr REL::Offset AddChange{ 0x455010 };
		inline constexpr REL::Offset GetChanges{ 0x455130 };
		inline constexpr REL::Offset RemoveChange{ 0x455150 };
		inline constexpr REL::Offset RemoveChanges{ 0x4551F0 };
		inline constexpr REL::Offset RemoveChanges_1{ 0x455220 };
	}

	namespace CharGenMenu
	{
		inline constexpr REL::Offset ctor{ 0x353230 };
		inline constexpr REL::Offset Create{ 0x353420 };
		inline constexpr REL::Offset Close{ 0x3537B0 };
		inline constexpr REL::Offset InitAttributeList{ 0x3539A0 };
		inline constexpr REL::Offset InitSkillList{ 0x353B10 };
		inline constexpr REL::Offset UpdatePointCounter{ 0x353D20 };
		inline constexpr REL::Offset ResetAttributesFunc{ 0x354330 };
		inline constexpr REL::Offset ResetSkillsFunc{ 0x3543C0 };
		inline constexpr REL::Offset SetAttributesFunc{ 0x354460 };
		inline constexpr REL::Offset TagSkillsFunc{ 0x354530 };
		inline constexpr REL::Offset SetDisplayString{ 0x3545A0 };
	}

	namespace Character
	{
		inline constexpr REL::Offset ctor{ 0x4D1D30 };
		inline constexpr REL::Offset GetClothingValue{ 0x4D3110 };
		inline constexpr REL::Offset Reset3D{ 0x4D3FA0 };
	}

	namespace CharacterProgression
	{
		inline constexpr REL::Offset RewardExperience{ 0x4D5100 };
		inline constexpr REL::Offset QReadyToLevelUp{ 0x4D51F0 };
		inline constexpr REL::Offset BeginLevelUp{ 0x4D5210 };
		inline constexpr REL::Offset FinishLevelUp{ 0x4D5270 };
		inline constexpr REL::Offset ForceLevel{ 0x4D5300 };
		inline constexpr REL::Offset ActorValueModifiedCallback{ 0x4D53F0 };
		inline constexpr REL::Offset SaveGame{ 0x4D5510 };
		inline constexpr REL::Offset LoadGame{ 0x4D5550 };
	}

	namespace CharacterProgressionData
	{
		inline constexpr REL::Offset CheckCanLevelUp{ 0x4D55E0 };
		inline constexpr REL::Offset SaveGame{ 0x4D56C0 };
		inline constexpr REL::Offset LoadGame{ 0x4D56F0 };
	}

	namespace CheckWithinMultiBoundTask
	{
		inline constexpr REL::Offset ctor{ 0x14AA80 };
	}

	namespace Cloner
	{
		inline constexpr REL::Offset copyArray{ 0x9C3D40 };
		inline constexpr REL::Offset copyValue{ 0x9C4210 };
		inline constexpr REL::Offset findDestClass{ 0x9C5440 };
		inline constexpr REL::Offset getClassMemberInfos{ 0x9C56F0 };
		inline constexpr REL::Offset copyObject{ 0x9C5970 };
		inline constexpr REL::Offset copySimpleValue_hkDataObject__Value_{ 0x9C5AB0 };
	}

	namespace Clouds
	{
		inline constexpr REL::Offset ctor{ 0x233CC0 };
		inline constexpr REL::Offset GetNumLayers{ 0x234830 };
		inline constexpr REL::Offset ClearTransTextures{ 0x234930 };
		inline constexpr REL::Offset RemoveTextures{ 0x2349E0 };
	}

	namespace CombatAction
	{
		inline constexpr REL::Offset ctor{ 0x579BD0 };
		inline constexpr REL::Offset GetName{ 0x579E20 };
		inline constexpr REL::Offset CreateCombatAction{ 0x579F90 };
		inline constexpr REL::Offset GetAttackCost{ 0x57AC30 };
		inline constexpr REL::Offset GetMovementCost{ 0x57ACB0 };
		inline constexpr REL::Offset AddPossibleEffect{ 0x57BC60 };
		inline constexpr REL::Offset RemovePrecondition{ 0x57C070 };
		inline constexpr REL::Offset RemoveEffect{ 0x57C240 };
		inline constexpr REL::Offset RemoveExecutionCondition{ 0x57C260 };
		inline constexpr REL::Offset GetFlag{ 0x594250 };
	}

	namespace CombatActionAcquireLineOfSight
	{
		inline constexpr REL::Offset ctor{ 0x57D1C0 };
	}

	namespace CombatActionActivateCombatItem
	{
		inline constexpr REL::Offset ctor{ 0x57CE90 };
	}

	namespace CombatActionApproachTarget
	{
		inline constexpr REL::Offset ctor{ 0x57D130 };
	}

	namespace CombatActionAttackGrenade
	{
		inline constexpr REL::Offset ctor{ 0x57B620 };
	}

	namespace CombatActionAttackGrenadeFlushTarget
	{
		inline constexpr REL::Offset ctor{ 0x57B7A0 };
	}

	namespace CombatActionAttackGrenadeFromCover
	{
		inline constexpr REL::Offset ctor{ 0x57B9E0 };
	}

	namespace CombatActionAttackHandToHand
	{
		inline constexpr REL::Offset ctor{ 0x57B4E0 };
	}

	namespace CombatActionAttackMelee
	{
		inline constexpr REL::Offset ctor{ 0x57B350 };
	}

	namespace CombatActionAttackRanged
	{
		inline constexpr REL::Offset ctor{ 0x57AD10 };
	}

	namespace CombatActionAttackRangedExplosive
	{
		inline constexpr REL::Offset ctor{ 0x57B0B0 };
	}

	namespace CombatActionAttackRangedExplosiveFromCover
	{
		inline constexpr REL::Offset ctor{ 0x57B280 };
	}

	namespace CombatActionAttackRangedFromCover
	{
		inline constexpr REL::Offset ctor{ 0x57AEB0 };
	}

	namespace CombatActionAvoidThreat
	{
		inline constexpr REL::Offset ctor{ 0x57C9D0 };
	}

	namespace CombatActionDodge
	{
		inline constexpr REL::Offset ctor{ 0x57CC00 };
	}

	namespace CombatActionDrawWeapon
	{
		inline constexpr REL::Offset ctor{ 0x57C700 };
	}

	namespace CombatActionFlee
	{
		inline constexpr REL::Offset ctor{ 0x57CD30 };
	}

	namespace CombatActionHide
	{
		inline constexpr REL::Offset ctor{ 0x57D250 };
	}

	namespace CombatActionIgnoreBlockedTarget
	{
		inline constexpr REL::Offset ctor{ 0x57CC80 };
	}

	namespace CombatActionInvestigate
	{
		inline constexpr REL::Offset ctor{ 0x57CB70 };
	}

	namespace CombatActionMove
	{
		inline constexpr REL::Offset ctor{ 0x57BBD0 };
		inline constexpr REL::Offset ChooseLocation{ 0x57BEB0 };
		inline constexpr REL::Offset StartMovementProcedure{ 0x57BED0 };
	}

	namespace CombatActionMoveAndAttackGrenade
	{
		inline constexpr REL::Offset ctor{ 0x57C560 };
	}

	namespace CombatActionMoveAndAttackRanged
	{
		inline constexpr REL::Offset ctor{ 0x57C170 };
	}

	namespace CombatActionMoveAndAttackRangedExplosive
	{
		inline constexpr REL::Offset ctor{ 0x57C3A0 };
	}

	namespace CombatActionMoveAndSwitchToMelee
	{
		inline constexpr REL::Offset ctor{ 0x57BFE0 };
	}

	namespace CombatActionSearch
	{
		inline constexpr REL::Offset ctor{ 0x57CA60 };
	}

	namespace CombatActionSwitchWeapon
	{
		inline constexpr REL::Offset ctor{ 0x57C850 };
	}

	namespace CombatActionUseCombatItem
	{
		inline constexpr REL::Offset ctor{ 0x57CFE0 };
	}

	namespace CombatController
	{
		inline constexpr REL::Offset GetCombatGroup{ 0xFB070 };
		inline constexpr REL::Offset GetCombatState{ 0x186150 };
		inline constexpr REL::Offset GetShowVerboseMessages{ 0x1B6F70 };
		inline constexpr REL::Offset ForceStopCombat{ 0x1C1AE0 };
		inline constexpr REL::Offset GetCombatPlannerData{ 0x1E3FC0 };
		inline constexpr REL::Offset GetCurrentWeapon{ 0x3031C0 };
		inline constexpr REL::Offset ForceFlee{ 0x4D0600 };
		inline constexpr REL::Offset GetAttacker{ 0x57AE90 };
		inline constexpr REL::Offset ctor{ 0x57D3A0 };
		inline constexpr REL::Offset FirstUpdate{ 0x57D990 };
		inline constexpr REL::Offset CalculateAttackerInfo{ 0x57D9D0 };
		inline constexpr REL::Offset Update{ 0x57DA50 };
		inline constexpr REL::Offset UpdateLow{ 0x57E4B0 };
		inline constexpr REL::Offset UpdateLowMovement{ 0x57EF50 };
		inline constexpr REL::Offset ChangeProcessLevel{ 0x57EFE0 };
		inline constexpr REL::Offset ForcePlanUpdate{ 0x57F200 };
		inline constexpr REL::Offset HasLineOfSight{ 0x57F2D0 };
		inline constexpr REL::Offset CheckHasEquip{ 0x57F310 };
		inline constexpr REL::Offset UpdateCurrentWeapon{ 0x57F390 };
		inline constexpr REL::Offset UpdateCurrentCombatStyle{ 0x57F3F0 };
		inline constexpr REL::Offset CheckCurrentWeapon{ 0x57F470 };
		inline constexpr REL::Offset StopCombat{ 0x57F4D0 };
		inline constexpr REL::Offset TakeHit{ 0x57F580 };
		inline constexpr REL::Offset DamagedByAttacker{ 0x57F7F0 };
		inline constexpr REL::Offset AddTarget{ 0x57F930 };
		inline constexpr REL::Offset RemoveTarget{ 0x57F9C0 };
		inline constexpr REL::Offset IsActoraCombatTarget{ 0x57FA10 };
		inline constexpr REL::Offset DebugCombatPlan{ 0x57FB80 };
		inline constexpr REL::Offset GetAttackSkill{ 0x57FC70 };
		inline constexpr REL::Offset GetPowerAttackDelta{ 0x57FD80 };
		inline constexpr REL::Offset GetPowerAttackHitTime{ 0x57FEB0 };
		inline constexpr REL::Offset DeterminePowerAttackDeltas{ 0x57FF60 };
		inline constexpr REL::Offset GetCurrentCombatStyle{ 0x580070 };
		inline constexpr REL::Offset GetPowerAttackDelta_1{ 0x5800E0 };
		inline constexpr REL::Offset SetActionProcedure{ 0x580110 };
		inline constexpr REL::Offset SetMovementProcedure{ 0x5801B0 };
		inline constexpr REL::Offset ClearProcedures{ 0x580250 };
		inline constexpr REL::Offset GetProcedureFailed{ 0x580470 };
		inline constexpr REL::Offset ClearCombatPlan{ 0x580550 };
		inline constexpr REL::Offset InitializeCombatPlanData{ 0x5805B0 };
		inline constexpr REL::Offset SetTarget{ 0x580830 };
		inline constexpr REL::Offset ClearReferencePointers{ 0x580A30 };
		inline constexpr REL::Offset UpdatePackageData{ 0x580AE0 };
		inline constexpr REL::Offset FinishedPackageTask{ 0x581380 };
		inline constexpr REL::Offset IsSearching{ 0x581420 };
		inline constexpr REL::Offset SetMoveMode{ 0x581570 };
		inline constexpr REL::Offset SetActualMoveMode{ 0x5815F0 };
		inline constexpr REL::Offset UpdateLookAtTarget{ 0x581740 };
		inline constexpr REL::Offset IsTargetUndetectable{ 0x5818B0 };
		inline constexpr REL::Offset SetBlock{ 0x5818E0 };
		inline constexpr REL::Offset GetBlocking{ 0x581900 };
		inline constexpr REL::Offset CombatPlanContainsAction{ 0x581940 };
		inline constexpr REL::Offset IsSwitchingWeapons{ 0x581970 };
		inline constexpr REL::Offset IsFleeing{ 0x581990 };
		inline constexpr REL::Offset LoadProcedure{ 0x5823C0 };
		inline constexpr REL::Offset GetAttackerCanSneak{ 0x598A30 };
	}

	namespace CombatCoverLocation
	{
		inline constexpr REL::Offset IsReserved{ 0x1DC960 };
		inline constexpr REL::Offset ctor{ 0x2D3150 };
		inline constexpr REL::Offset SaveGame{ 0x5A2DE0 };
		inline constexpr REL::Offset LoadGame{ 0x5A2EA0 };
	}

	namespace CombatCoverMap
	{
		inline constexpr REL::Offset ctor{ 0x583080 };
		inline constexpr REL::Offset UnreserveCoverLocation{ 0x583520 };
		inline constexpr REL::Offset CanReserveCoverLocation{ 0x5835D0 };
		inline constexpr REL::Offset UnlockForWrite{ 0x595890 };
		inline constexpr REL::Offset LockForWrite{ 0x59C210 };
	}

	namespace CombatCoverSearchInfo
	{
		inline constexpr REL::Offset dtor{ 0x2E4D00 };
		inline constexpr REL::Offset Copy{ 0x597520 };
		inline constexpr REL::Offset Clear{ 0x5975C0 };
		inline constexpr REL::Offset SaveGame{ 0x5A2F50 };
		inline constexpr REL::Offset LoadGame{ 0x5A3050 };
	}

	namespace CombatDialogueManager
	{
		inline constexpr REL::Offset StartDialogue{ 0x583970 };
		inline constexpr REL::Offset StartDialogue_1{ 0x5839B0 };
	}

	namespace CombatFormulas
	{
		inline constexpr REL::Offset GetPowerAttackDamageMultiplier{ 0x244520 };
		inline constexpr REL::Offset SelectDodgeDirection{ 0x244A70 };
		inline constexpr REL::Offset CalcWeaponDamage{ 0x244CE0 };
		inline constexpr REL::Offset CalcWeaponDamageForDisplay{ 0x2450F0 };
		inline constexpr REL::Offset CalcWeaponDamagePerSecond{ 0x245380 };
		inline constexpr REL::Offset GetWeaponRateOfFire{ 0x245D00 };
		inline constexpr REL::Offset GetWeaponShotsPerSecond{ 0x245DC0 };
		inline constexpr REL::Offset CalcCombatWeaponDPS{ 0x246060 };
		inline constexpr REL::Offset CalcDamageToWeapon{ 0x246260 };
		inline constexpr REL::Offset CalcHandToHandDamage{ 0x246310 };
		inline constexpr REL::Offset CalcArmorRating{ 0x246360 };
		inline constexpr REL::Offset CalcBlock{ 0x2463A0 };
		inline constexpr REL::Offset CalcWeaponReach{ 0x2463E0 };
		inline constexpr REL::Offset CheckKnockdown{ 0x246400 };
		inline constexpr REL::Offset GetKnockbackSpeed{ 0x246580 };
		inline constexpr REL::Offset GetRandomBetween{ 0x2465F0 };
		inline constexpr REL::Offset GetArrowGravity{ 0x246660 };
		inline constexpr REL::Offset GetInitialTargetValue{ 0x2466E0 };
		inline constexpr REL::Offset GetBodyPartCondition{ 0x246800 };
		inline constexpr REL::Offset GetArmCondition{ 0x246880 };
		inline constexpr REL::Offset GetGunSpread{ 0x246910 };
		inline constexpr REL::Offset CheckDismemberOrExplode{ 0x246E50 };
		inline constexpr REL::Offset GetVATSChanceToHit{ 0x246F70 };
		inline constexpr REL::Offset GetWeaponConditionJamMult{ 0x2477B0 };
		inline constexpr REL::Offset GetWeaponStrengthRequirementModifier{ 0x247810 };
		inline constexpr REL::Offset GetWeaponSkillRequirementModifier{ 0x247870 };
		inline constexpr REL::Offset CalcExplosionDamageDistance{ 0x2479A0 };
		inline constexpr REL::Offset CalcExplosionDamage{ 0x2479E0 };
		inline constexpr REL::Offset GetScreenSplatterCount{ 0x247AE0 };
	}

	namespace CombatGoal
	{
		inline constexpr REL::Offset CreateCombatGoal{ 0x584490 };
		inline constexpr REL::Offset ctor{ 0x584BA0 };
	}

	namespace CombatGoalActivateCombatItem
	{
		inline constexpr REL::Offset ctor{ 0x584DD0 };
	}

	namespace CombatGoalAdvance
	{
		inline constexpr REL::Offset ctor{ 0x585100 };
	}

	namespace CombatGoalAmbush
	{
		inline constexpr REL::Offset ctor{ 0x585000 };
	}

	namespace CombatGoalAvoidThreats
	{
		inline constexpr REL::Offset ctor{ 0x584CB0 };
	}

	namespace CombatGoalCluster
	{
		inline constexpr REL::Offset ctor{ 0x585200 };
	}

	namespace CombatGoalFallBack
	{
		inline constexpr REL::Offset ctor{ 0x584F80 };
	}

	namespace CombatGoalFindTarget
	{
		inline constexpr REL::Offset ctor{ 0x584C20 };
	}

	namespace CombatGoalFlank
	{
		inline constexpr REL::Offset ctor{ 0x584EE0 };
	}

	namespace CombatGoalFlee
	{
		inline constexpr REL::Offset ctor{ 0x584D40 };
	}

	namespace CombatGoalFlushTarget
	{
		inline constexpr REL::Offset ctor{ 0x585300 };
	}

	namespace CombatGoalGuard
	{
		inline constexpr REL::Offset ctor{ 0x585180 };
	}

	namespace CombatGoalHideFromTarget
	{
		inline constexpr REL::Offset ctor{ 0x585280 };
	}

	namespace CombatGoalKillTarget
	{
		inline constexpr REL::Offset ctor{ 0x584B20 };
	}

	namespace CombatGoalReachDestination
	{
		inline constexpr REL::Offset ctor{ 0x585080 };
	}

	namespace CombatGoalStayInCombatArea
	{
		inline constexpr REL::Offset ctor{ 0x585390 };
	}

	namespace CombatGoalUseCombatItem
	{
		inline constexpr REL::Offset ctor{ 0x584E60 };
	}

	namespace CombatGroup
	{
		inline constexpr REL::Offset GetMember{ 0x503600 };
		inline constexpr REL::Offset GetTarget{ 0x568630 };
		inline constexpr REL::Offset IsSearching{ 0x57EF30 };
		inline constexpr REL::Offset ctor{ 0x585D10 };
		inline constexpr REL::Offset dtor{ 0x585F90 };
		inline constexpr REL::Offset Update{ 0x586150 };
		inline constexpr REL::Offset ForceCombatGroupStrategy{ 0x5862E0 };
		inline constexpr REL::Offset AddTarget{ 0x586410 };
		inline constexpr REL::Offset RemoveTarget{ 0x586500 };
		inline constexpr REL::Offset RemoveTarget_1{ 0x586560 };
		inline constexpr REL::Offset IsTarget{ 0x5865B0 };
		inline constexpr REL::Offset GetCombatTargetForActor{ 0x5865D0 };
		inline constexpr REL::Offset GetCombatMemberForActor{ 0x5865F0 };
		inline constexpr REL::Offset GetCombatTargetForNumericID{ 0x586610 };
		inline constexpr REL::Offset CanAddTarget{ 0x5866D0 };
		inline constexpr REL::Offset CopyTargets{ 0x586740 };
		inline constexpr REL::Offset AddMember{ 0x5867D0 };
		inline constexpr REL::Offset RemoveMember{ 0x5869A0 };
		inline constexpr REL::Offset IsMember{ 0x586A80 };
		inline constexpr REL::Offset GetBestTarget{ 0x586C60 };
		inline constexpr REL::Offset GetCombatTarget{ 0x5871C0 };
		inline constexpr REL::Offset CheckRemoveCombatTarget{ 0x587220 };
		inline constexpr REL::Offset IncrementAttackerCount{ 0x5874B0 };
		inline constexpr REL::Offset MergeGroup{ 0x587530 };
		inline constexpr REL::Offset ClearReferencePointers{ 0x587820 };
		inline constexpr REL::Offset UpdateDebugGeometry{ 0x5878B0 };
		inline constexpr REL::Offset GetSearchLocationCount{ 0x588750 };
		inline constexpr REL::Offset GetSearchLocation{ 0x588770 };
		inline constexpr REL::Offset GetCombatMember{ 0x588790 };
		inline constexpr REL::Offset GetTargetDetectionLevel{ 0x5887B0 };
		inline constexpr REL::Offset GetTargetDetectionLevel_1{ 0x589040 };
		inline constexpr REL::Offset GetTargetLastDetectedLocation{ 0x5890E0 };
		inline constexpr REL::Offset NotifyMemberPlanFinished{ 0x5891D0 };
		inline constexpr REL::Offset NotifyMemberHit{ 0x589230 };
		inline constexpr REL::Offset CreateMovementAvoidNodeArray{ 0x5892A0 };
		inline constexpr REL::Offset CreateFlankingAvoidNodeArray{ 0x589490 };
		inline constexpr REL::Offset CreateFleeAvoidNodeArray{ 0x5895A0 };
		inline constexpr REL::Offset FindTargetNearLocation{ 0x589700 };
		inline constexpr REL::Offset FindMemberNearLocation{ 0x5897F0 };
		inline constexpr REL::Offset FindMemberNearActor{ 0x589880 };
		inline constexpr REL::Offset FindClosestMemberToLocation{ 0x5898B0 };
		inline constexpr REL::Offset FindClosestMemberToActor{ 0x589970 };
		inline constexpr REL::Offset CheckMemberTargetIntersection{ 0x5899A0 };
		inline constexpr REL::Offset ComputeMemberBoundingSphere{ 0x589E20 };
		inline constexpr REL::Offset ComputeTargetBoundingSphere{ 0x589EB0 };
		inline constexpr REL::Offset ComputeMemberBoundingBox{ 0x589F40 };
		inline constexpr REL::Offset ComputeTargetBoundingBox{ 0x58A110 };
		inline constexpr REL::Offset GetMemberGroupStrategyAssignment{ 0x58A310 };
		inline constexpr REL::Offset GetMemberGroupStrategyAssignment_1{ 0x58A340 };
		inline constexpr REL::Offset SetMemberGroupStrategyAssignment{ 0x58A390 };
		inline constexpr REL::Offset FindMemberWithStrategyAssignment{ 0x58A410 };
		inline constexpr REL::Offset CheckGroupStrategyChosenTimeStamp{ 0x58A470 };
		inline constexpr REL::Offset UpdateSearch{ 0x58A580 };
		inline constexpr REL::Offset StartSearch{ 0x58ADD0 };
		inline constexpr REL::Offset UpdateSearchArea{ 0x58AFB0 };
		inline constexpr REL::Offset GetMinMaxSearchRadius{ 0x58B070 };
		inline constexpr REL::Offset ComputeSearchArea{ 0x58B100 };
		inline constexpr REL::Offset BuildSearchTeleportDoorArray{ 0x58B8C0 };
		inline constexpr REL::Offset FindSearchLocation{ 0x58BC00 };
		inline constexpr REL::Offset InvestigatedSearchLocation{ 0x58BD70 };
		inline constexpr REL::Offset AddSearchLocation{ 0x58BFB0 };
		inline constexpr REL::Offset UpdateSearchLocations{ 0x58C0D0 };
		inline constexpr REL::Offset FindSearchDoor{ 0x58C3D0 };
		inline constexpr REL::Offset GetCombatSearchDoor{ 0x58C590 };
		inline constexpr REL::Offset CalculateSearchIgnoreLocations{ 0x58C7B0 };
		inline constexpr REL::Offset UpdateCombatStrength{ 0x58C870 };
		inline constexpr REL::Offset GetMemberCombatStrength{ 0x58CB30 };
		inline constexpr REL::Offset GetAverageMemberDamagePerSecond{ 0x58CC20 };
		inline constexpr REL::Offset FindClusterPartner{ 0x58CD50 };
		inline constexpr REL::Offset UpdateCounts{ 0x58CE80 };
		inline constexpr REL::Offset UpdateAttackerCounts{ 0x58CF70 };
		inline constexpr REL::Offset UpdateTargets{ 0x58D030 };
		inline constexpr REL::Offset UpdateGroupStrategy{ 0x58D1A0 };
		inline constexpr REL::Offset UpdateClusters{ 0x58D2C0 };
		inline constexpr REL::Offset SaveGame{ 0x58DE90 };
		inline constexpr REL::Offset LoadGame{ 0x58E3D0 };
		inline constexpr REL::Offset InitLoadGame{ 0x58E990 };
		inline constexpr REL::Offset FinishLoadGame{ 0x58EB30 };
	}

	namespace CombatGroupCluster
	{
		inline constexpr REL::Offset SaveGame{ 0x585AE0 };
		inline constexpr REL::Offset LoadGame{ 0x585B10 };
		inline constexpr REL::Offset ctor{ 0x58DC00 };
	}

	namespace CombatGroupData
	{
		inline constexpr REL::Offset dtor{ 0x5863B0 };
		inline constexpr REL::Offset ctor{ 0x590320 };
		inline constexpr REL::Offset GetMembersTargetsIntersecting{ 0x5904C0 };
		inline constexpr REL::Offset GetMemberMaximumTargetDetection{ 0x590570 };
		inline constexpr REL::Offset ComputeMinMaxTargetDetection{ 0x5905A0 };
		inline constexpr REL::Offset SortRangedMembers{ 0x590640 };
		inline constexpr REL::Offset GetRangedMemberCount{ 0x590890 };
		inline constexpr REL::Offset GetRangedMember{ 0x590AA0 };
	}

	namespace CombatGroupStrategy
	{
		inline constexpr REL::Offset GetCombatGroupStrategy{ 0x58E980 };
		inline constexpr REL::Offset CreateCombatGroupStrategy{ 0x58FDF0 };
		inline constexpr REL::Offset ctor{ 0x58FFB0 };
		inline constexpr REL::Offset FindCombatGroupStrategy{ 0x5900F0 };
		inline constexpr REL::Offset GetCombatGroupStrategyByName{ 0x590250 };
	}

	namespace CombatGroupStrategyAdvance
	{
		inline constexpr REL::Offset ctor{ 0x590040 };
	}

	namespace CombatGroupStrategyAmbush
	{
		inline constexpr REL::Offset ctor{ 0x590010 };
	}

	namespace CombatGroupStrategyFallBack
	{
		inline constexpr REL::Offset ctor{ 0x58FFE0 };
	}

	namespace CombatGroupStrategyFlank
	{
		inline constexpr REL::Offset ctor{ 0x58FF80 };
	}

	namespace CombatLocation
	{
		inline constexpr REL::Offset SetRadius{ 0x419A50 };
		inline constexpr REL::Offset GetFlag{ 0x57BE60 };
		inline constexpr REL::Offset ctor{ 0x57EE20 };
		inline constexpr REL::Offset SetWorldLocation{ 0x57EE60 };
		inline constexpr REL::Offset SetRef{ 0x597400 };
		inline constexpr REL::Offset SetPoint{ 0x59B8B0 };
		inline constexpr REL::Offset InitLoadGame{ 0x5A2CC0 };
	}

	namespace CombatLocationTarget
	{
		inline constexpr REL::Offset ctor{ 0x5A08D0 };
		inline constexpr REL::Offset SaveGame{ 0x5A3130 };
		inline constexpr REL::Offset LoadGame{ 0x5A31B0 };
		inline constexpr REL::Offset InitLoadGame{ 0x5A3220 };
	}

	namespace CombatManager
	{
		inline constexpr REL::Offset Create{ 0x590F20 };
		inline constexpr REL::Offset Destroy{ 0x590FF0 };
		inline constexpr REL::Offset ctor{ 0x591080 };
		inline constexpr REL::Offset Update{ 0x591500 };
		inline constexpr REL::Offset UpdateMainThread{ 0x591600 };
		inline constexpr REL::Offset UpdateDebugGeometry{ 0x591770 };
		inline constexpr REL::Offset CreateCombatGroup{ 0x591E80 };
		inline constexpr REL::Offset SplitPlayerCombatGroup{ 0x591F80 };
		inline constexpr REL::Offset AddCombatant{ 0x592110 };
		inline constexpr REL::Offset AddGroupMember{ 0x5922B0 };
		inline constexpr REL::Offset AddPretendCombatant{ 0x5923D0 };
		inline constexpr REL::Offset AddSpectatorForCombatGroup{ 0x592480 };
		inline constexpr REL::Offset GetWanttoHelpGroup{ 0x592530 };
		inline constexpr REL::Offset NotifyCombatGroupRemovedTarget{ 0x5926E0 };
		inline constexpr REL::Offset CheckExplosionAttack{ 0x592720 };
		inline constexpr REL::Offset ClearReferencePointers{ 0x592920 };
		inline constexpr REL::Offset AddLocalActor{ 0x5929E0 };
		inline constexpr REL::Offset TargetLocalActor{ 0x592A50 };
		inline constexpr REL::Offset UntargetLocalActor{ 0x592B00 };
		inline constexpr REL::Offset FindLocalActorsInRadius{ 0x592BA0 };
		inline constexpr REL::Offset ShouldPlayCombatMusic{ 0x592D90 };
		inline constexpr REL::Offset GetCombatantCount{ 0x5931C0 };
		inline constexpr REL::Offset SaveGame{ 0x5932D0 };
		inline constexpr REL::Offset LoadGame{ 0x593440 };
		inline constexpr REL::Offset InitLoadGame{ 0x593600 };
	}

	namespace CombatMember
	{
		inline constexpr REL::Offset SaveGame{ 0x5859C0 };
		inline constexpr REL::Offset LoadGame{ 0x585A50 };
	}

	namespace CombatMovementRestrictions
	{
		inline constexpr REL::Offset CanMove{ 0x5CDDE0 };
		inline constexpr REL::Offset CheckMovementRestrictions{ 0x5CFF90 };
		inline constexpr REL::Offset IsLocationSafe{ 0x5D0590 };
		inline constexpr REL::Offset Update{ 0x5D0610 };
	}

	namespace CombatPlan
	{
		inline constexpr REL::Offset dtor{ 0x593F70 };
		inline constexpr REL::Offset AllocateSteps{ 0x593FD0 };
		inline constexpr REL::Offset ExecuteNextAction{ 0x594050 };
		inline constexpr REL::Offset GetIndexForStep{ 0x594270 };
		inline constexpr REL::Offset ValidatePlanStep{ 0x594350 };
		inline constexpr REL::Offset SaveGame{ 0x5948F0 };
		inline constexpr REL::Offset LoadGame{ 0x5949A0 };
	}

	namespace CombatPlanNode
	{
		inline constexpr REL::Offset ctor{ 0x594E60 };
	}

	namespace CombatPlanner
	{
		inline constexpr REL::Offset ctor{ 0x57E330 };
		inline constexpr REL::Offset CreatePlan{ 0x594BD0 };
		inline constexpr REL::Offset CreatePlan_1{ 0x594F10 };
	}

	namespace CombatPlannerData
	{
		inline constexpr REL::Offset ctor{ 0x5958B0 };
		inline constexpr REL::Offset dtor{ 0x595910 };
	}

	namespace CombatProcedure
	{
		inline constexpr REL::Offset GetFailed{ 0x57E310 };
		inline constexpr REL::Offset GetAttacker{ 0x596DE0 };
		inline constexpr REL::Offset GetTarget{ 0x596E00 };
		inline constexpr REL::Offset SetMoveMode{ 0x596E20 };
		inline constexpr REL::Offset ClearMoveMode{ 0x596E40 };
		inline constexpr REL::Offset SetLookAtTarget{ 0x596E60 };
		inline constexpr REL::Offset ClearLookAtTarget{ 0x596EA0 };
		inline constexpr REL::Offset CreateProcedure{ 0x596F10 };
		inline constexpr REL::Offset ctor{ 0x5CA680 };
		inline constexpr REL::Offset SetFailed{ 0x5CAAC0 };
		inline constexpr REL::Offset SetFinished{ 0x5CAAE0 };
	}

	namespace CombatProcedureActivateObject
	{
		inline constexpr REL::Offset ctor{ 0x5CA5F0 };
	}

	namespace CombatProcedureAttackGrenade
	{
		inline constexpr REL::Offset ctor{ 0x5CADF0 };
		inline constexpr REL::Offset ctor_1{ 0x5CAEE0 };
		inline constexpr REL::Offset CheckExplosion{ 0x5CB380 };
		inline constexpr REL::Offset CalculateTargetedPoint{ 0x5CB6E0 };
	}

	namespace CombatProcedureAttackLow
	{
		inline constexpr REL::Offset ctor{ 0x5CBAD0 };
	}

	namespace CombatProcedureAttackMelee
	{
		inline constexpr REL::Offset ctor{ 0x5CC0C0 };
		inline constexpr REL::Offset MeleeDecision{ 0x5CC510 };
		inline constexpr REL::Offset SelectAttack{ 0x5CCB20 };
		inline constexpr REL::Offset StartAttack{ 0x5CCE70 };
		inline constexpr REL::Offset HandleAttack{ 0x5CCED0 };
		inline constexpr REL::Offset HandleBlock{ 0x5CCFB0 };
		inline constexpr REL::Offset CheckStopBlocking{ 0x5CD150 };
		inline constexpr REL::Offset HandleHold{ 0x5CD3D0 };
		inline constexpr REL::Offset StartEngage{ 0x5CD410 };
		inline constexpr REL::Offset HandleEngage{ 0x5CD430 };
		inline constexpr REL::Offset ManeuverDecision{ 0x5CD5E0 };
		inline constexpr REL::Offset HandleDodge{ 0x5CDB00 };
		inline constexpr REL::Offset HandleIdle{ 0x5CDE10 };
		inline constexpr REL::Offset StartClose{ 0x5CDF00 };
		inline constexpr REL::Offset HandleClose{ 0x5CDF80 };
		inline constexpr REL::Offset StartAdvance{ 0x5CE190 };
		inline constexpr REL::Offset HandleAdvance{ 0x5CE1D0 };
		inline constexpr REL::Offset GetCurrentAttackReach{ 0x5CE560 };
		inline constexpr REL::Offset MoveToFaceTargetLocation{ 0x5CE5B0 };
		inline constexpr REL::Offset SelectPowerAttack{ 0x5CE870 };
		inline constexpr REL::Offset WithinAttackRange{ 0x5CEFD0 };
		inline constexpr REL::Offset OutsideAttackRange{ 0x5CF030 };
		inline constexpr REL::Offset CheckForwardPowerAttack{ 0x5CF090 };
		inline constexpr REL::Offset CanDoPowerAttack{ 0x5CF420 };
		inline constexpr REL::Offset AttackDecision{ 0x5CF570 };
		inline constexpr REL::Offset SetManeuverState{ 0x5CF660 };
		inline constexpr REL::Offset SetCombatState{ 0x5CF6D0 };
		inline constexpr REL::Offset CheckResetMovementRestrictions{ 0x5CFC00 };
		inline constexpr REL::Offset StopMoving{ 0x5CFC60 };
		inline constexpr REL::Offset CheckMovementRestrictionsDistance{ 0x5CFC90 };
		inline constexpr REL::Offset GetFacingTargetDistance{ 0x5CFD20 };
		inline constexpr REL::Offset IsTargetMovingAway{ 0x5CFD70 };
		inline constexpr REL::Offset GetMovingTargetVelocity{ 0x5CFE90 };
	}

	namespace CombatProcedureAttackRanged
	{
		inline constexpr REL::Offset ctor{ 0x5D0890 };
		inline constexpr REL::Offset CalculateTargetedPoint{ 0x5D1C90 };
		inline constexpr REL::Offset AimAtTarget{ 0x5D1DE0 };
	}

	namespace CombatProcedureBeInCover
	{
		inline constexpr REL::Offset ctor{ 0x5D2440 };
	}

	namespace CombatProcedureEngageTarget
	{
		inline constexpr REL::Offset ctor{ 0x5D3A00 };
		inline constexpr REL::Offset CanAttackerSneak{ 0x5D4F50 };
		inline constexpr REL::Offset CreateOptimalLocationPath{ 0x5D5000 };
	}

	namespace CombatProcedureEvade
	{
		inline constexpr REL::Offset ctor{ 0x5D5AD0 };
	}

	namespace CombatProcedureHideFromTarget
	{
		inline constexpr REL::Offset ctor{ 0x5D6030 };
	}

	namespace CombatProcedureMove
	{
		inline constexpr REL::Offset ctor{ 0x5D69F0 };
		inline constexpr REL::Offset CreatePath{ 0x5D7C80 };
		inline constexpr REL::Offset CreatePath_1{ 0x5D7D00 };
		inline constexpr REL::Offset CreateAvoidNodeArray{ 0x5D82E0 };
	}

	namespace CombatProcedureSearch
	{
		inline constexpr REL::Offset ctor{ 0x5D8B60 };
	}

	namespace CombatProcedureSwitchWeapon
	{
		inline constexpr REL::Offset ctor{ 0x5DA720 };
	}

	namespace CombatProcedureUseCombatItem
	{
		inline constexpr REL::Offset ctor{ 0x5DAA10 };
	}

	namespace CombatSearchLocation
	{
		inline constexpr REL::Offset GetModifiedScore{ 0x585B40 };
		inline constexpr REL::Offset GetScore{ 0x585BB0 };
		inline constexpr REL::Offset GetColor{ 0x585BE0 };
		inline constexpr REL::Offset ctor{ 0x58FDA0 };
	}

	namespace CombatState
	{
		inline constexpr REL::Offset SetExplosiveProjectileBlocked{ 0x42A80 };
		inline constexpr REL::Offset GetTargetSpaceDifferent{ 0x4B3C10 };
		inline constexpr REL::Offset GetTargetBlocked{ 0x4B3C90 };
		inline constexpr REL::Offset GetCombatWeaponDPS{ 0x57AC90 };
		inline constexpr REL::Offset GetCoverLocation{ 0x57B050 };
		inline constexpr REL::Offset GetCombatWeapon{ 0x57C150 };
		inline constexpr REL::Offset GetCombatItem{ 0x57CFC0 };
		inline constexpr REL::Offset GetHasBufferedDetection{ 0x57EE90 };
		inline constexpr REL::Offset SetInventoryDirty{ 0x57F450 };
		inline constexpr REL::Offset GetHasTarget360LineOfSight{ 0x57FB20 };
		inline constexpr REL::Offset GetSecondaryCoverLocation{ 0x57FB60 };
		inline constexpr REL::Offset GetTargetUnreachable{ 0x57FD40 };
		inline constexpr REL::Offset ClearCombatItem{ 0x581340 };
		inline constexpr REL::Offset ctor{ 0x597600 };
		inline constexpr REL::Offset dtor{ 0x597AA0 };
		inline constexpr REL::Offset ChangeProcessLevel{ 0x597BA0 };
		inline constexpr REL::Offset DoInitialUpdate{ 0x597C30 };
		inline constexpr REL::Offset Update{ 0x597CB0 };
		inline constexpr REL::Offset UpdateImmediateData{ 0x597CF0 };
		inline constexpr REL::Offset GetHasBuffered360LineOfSight{ 0x598980 };
		inline constexpr REL::Offset UpdatePeriodicData{ 0x598A50 };
		inline constexpr REL::Offset UpdateLow{ 0x599160 };
		inline constexpr REL::Offset UpdateCombatPermissions{ 0x599260 };
		inline constexpr REL::Offset UpdateInventoryData{ 0x5993C0 };
		inline constexpr REL::Offset GetBestCombatWeapon{ 0x59A2D0 };
		inline constexpr REL::Offset ClearReferencePointer{ 0x59A420 };
		inline constexpr REL::Offset CheckReferences{ 0x59A530 };
		inline constexpr REL::Offset FiredProjectile{ 0x59A5E0 };
		inline constexpr REL::Offset DamagedByAttacker{ 0x59A6B0 };
		inline constexpr REL::Offset Disarmed{ 0x59A720 };
		inline constexpr REL::Offset PreActivateReference{ 0x59A780 };
		inline constexpr REL::Offset ActivatedReference{ 0x59A7D0 };
		inline constexpr REL::Offset UsedCombatItem{ 0x59A840 };
		inline constexpr REL::Offset TargetChanged{ 0x59A8D0 };
		inline constexpr REL::Offset PlanUpdated{ 0x59A9A0 };
		inline constexpr REL::Offset ReachedDestination{ 0x59AA10 };
		inline constexpr REL::Offset FindCombatLocation{ 0x59AC20 };
		inline constexpr REL::Offset FindGrenadeThrowLocation{ 0x59B5A0 };
		inline constexpr REL::Offset FindBestCoverLocation{ 0x59B8E0 };
		inline constexpr REL::Offset CheckCoverLocation{ 0x59C230 };
		inline constexpr REL::Offset CheckTargetsCoverLOS{ 0x59CA00 };
		inline constexpr REL::Offset BuildTargetLOSLocationsArray{ 0x59CB70 };
		inline constexpr REL::Offset CheckCoverLOS{ 0x59CC60 };
		inline constexpr REL::Offset CheckCoverSafe{ 0x59CCD0 };
		inline constexpr REL::Offset CheckLedgeCoverAngle{ 0x59CEC0 };
		inline constexpr REL::Offset FindBestAdvanceLocation{ 0x59D030 };
		inline constexpr REL::Offset BuildCoveredMoveRequest{ 0x59D310 };
		inline constexpr REL::Offset FindBestAdvanceLocation_1{ 0x59D480 };
		inline constexpr REL::Offset FindCoveredMoveLocation{ 0x59E060 };
		inline constexpr REL::Offset FindBestDodgeLocation{ 0x59E190 };
		inline constexpr REL::Offset FindOptimalLocation{ 0x59E840 };
		inline constexpr REL::Offset FindBestFleeLocation{ 0x59EBE0 };
		inline constexpr REL::Offset FindLOSLocation{ 0x59F480 };
		inline constexpr REL::Offset FindBetterWeapon{ 0x59F6D0 };
		inline constexpr REL::Offset CheckMovement{ 0x5A02A0 };
		inline constexpr REL::Offset ClearCoverLocation{ 0x5A03D0 };
		inline constexpr REL::Offset ClearSecondaryCoverLocation{ 0x5A0470 };
		inline constexpr REL::Offset ReserveCoverLocation{ 0x5A0510 };
		inline constexpr REL::Offset UnreserveCoverLocation{ 0x5A05B0 };
		inline constexpr REL::Offset ClearCombatLocation{ 0x5A0680 };
		inline constexpr REL::Offset SetCombatItem{ 0x5A06C0 };
		inline constexpr REL::Offset SetLocationTargetRef{ 0x5A0790 };
		inline constexpr REL::Offset SetLocationTargetLocation{ 0x5A0910 };
		inline constexpr REL::Offset ClearLocationTarget{ 0x5A0A40 };
		inline constexpr REL::Offset CheckUseLocationTargetMaxDistance{ 0x5A0A80 };
		inline constexpr REL::Offset GetLocationTargetDistance{ 0x5A0B00 };
		inline constexpr REL::Offset UpdateCombatArea{ 0x5A0C50 };
		inline constexpr REL::Offset AddUnreachableCoverLocation{ 0x5A0D00 };
		inline constexpr REL::Offset UpdateCombatStrength{ 0x5A1010 };
		inline constexpr REL::Offset UpdateThreatRatio{ 0x5A1060 };
		inline constexpr REL::Offset BoostConfidence{ 0x5A1280 };
		inline constexpr REL::Offset CheckShouldFlee{ 0x5A1380 };
		inline constexpr REL::Offset QueuePathCheck{ 0x5A1400 };
		inline constexpr REL::Offset SaveGame{ 0x5A17A0 };
		inline constexpr REL::Offset LoadGame{ 0x5A2040 };
		inline constexpr REL::Offset InitLoadGame{ 0x5A2A30 };
		inline constexpr REL::Offset GetInitializing{ 0x5B73B0 };
		inline constexpr REL::Offset SetTargetFlushed{ 0x5CB440 };
		inline constexpr REL::Offset UnreserveSecondaryCoverLocation{ 0x5D6C80 };
		inline constexpr REL::Offset ReserveSecondaryCoverLocation{ 0x5D7C20 };
	}

	namespace CombatStyleData
	{
		inline constexpr REL::Offset Endian{ 0x1059C0 };
	}

	namespace CombatTarget
	{
		inline constexpr REL::Offset ctor{ 0x585410 };
		inline constexpr REL::Offset CopyData{ 0x585520 };
		inline constexpr REL::Offset SaveGame{ 0x5856E0 };
		inline constexpr REL::Offset LoadGame{ 0x585800 };
		inline constexpr REL::Offset InitLoadGame{ 0x585930 };
		inline constexpr REL::Offset ctor_1{ 0x58F8E0 };
	}

	namespace CombatTargetMap
	{
		inline constexpr REL::Offset ctor{ 0x5A3E90 };
		inline constexpr REL::Offset AddTargetAttacker{ 0x5A3FE0 };
	}

	namespace CombatThreat
	{
		inline constexpr REL::Offset ctor{ 0x5A44E0 };
		inline constexpr REL::Offset Initialize{ 0x5A4690 };
		inline constexpr REL::Offset ComputeThreatScore{ 0x5A4710 };
		inline constexpr REL::Offset IsActive{ 0x5A4960 };
		inline constexpr REL::Offset GetThreatLinearVelocity{ 0x5A4A10 };
		inline constexpr REL::Offset GetAvoidNode{ 0x5A4C70 };
		inline constexpr REL::Offset InitLoadGame{ 0x5A4F40 };
	}

	namespace CombatThreatMap
	{
		inline constexpr REL::Offset ctor{ 0x5A4FB0 };
		inline constexpr REL::Offset UpdateThreats{ 0x5A50B0 };
		inline constexpr REL::Offset RemoveThreat{ 0x5A51E0 };
		inline constexpr REL::Offset AddThreat{ 0x5A52F0 };
		inline constexpr REL::Offset AddThreat_1{ 0x5A54A0 };
		inline constexpr REL::Offset AddThreat_2{ 0x5A5530 };
		inline constexpr REL::Offset ComputeThreatScore{ 0x5A5670 };
		inline constexpr REL::Offset CreateAvoidNodeArray{ 0x5A57A0 };
		inline constexpr REL::Offset SaveGame{ 0x5A59E0 };
		inline constexpr REL::Offset LoadGame{ 0x5A5A70 };
	}

	namespace CombatTimeStamp
	{
		inline constexpr REL::Offset ctor{ 0x300A0 };
		inline constexpr REL::Offset operator_float{ 0x2A7F50 };
		inline constexpr REL::Offset SaveGame{ 0x5A5F90 };
		inline constexpr REL::Offset LoadGame{ 0x5A5FF0 };
	}

	namespace CombatTimer
	{
		inline constexpr REL::Offset ElapsedTime{ 0x35E00 };
		inline constexpr REL::Offset GetTargetTime{ 0x2B9130 };
		inline constexpr REL::Offset Reset{ 0x4D7F40 };
		inline constexpr REL::Offset Check{ 0x4D7F80 };
		inline constexpr REL::Offset ctor{ 0x506F60 };
		inline constexpr REL::Offset ForceTrigger{ 0x57F220 };
		inline constexpr REL::Offset IsSet{ 0x57FA50 };
		inline constexpr REL::Offset SaveGame{ 0x5A5EB0 };
		inline constexpr REL::Offset LoadGame{ 0x5A5F20 };
	}

	namespace CombatUtilities
	{
		inline constexpr REL::Offset Init{ 0x5A6050 };
		inline constexpr REL::Offset GetFacingTarget{ 0x5A60E0 };
		inline constexpr REL::Offset GetDistanceBetweenFacingActors{ 0x5A64D0 };
		inline constexpr REL::Offset GetAttackerTargetExtentSum{ 0x5A6770 };
		inline constexpr REL::Offset ComputeFaceTargetDistance{ 0x5A6830 };
		inline constexpr REL::Offset ComputeFaceTargetLocation{ 0x5A68B0 };
		inline constexpr REL::Offset GetWeaponReach{ 0x5A69C0 };
		inline constexpr REL::Offset GetAngleForMeleeAttack{ 0x5A6A40 };
		inline constexpr REL::Offset IsTargetWithinStrikeAngle{ 0x5A6AE0 };
		inline constexpr REL::Offset IsTargetWithinFiringArc{ 0x5A6D70 };
		inline constexpr REL::Offset CalculateProjectileLOS{ 0x5A6E90 };
		inline constexpr REL::Offset CheckProjectileArc{ 0x5A7580 };
		inline constexpr REL::Offset CheckProjectileArc_1{ 0x5A7670 };
		inline constexpr REL::Offset CalculateLOS{ 0x5A7940 };
		inline constexpr REL::Offset FindAngleOfProjectile{ 0x5A7C60 };
		inline constexpr REL::Offset FindAngleOfProjectile_1{ 0x5A7D50 };
		inline constexpr REL::Offset ComputeProjectileTime{ 0x5A7DD0 };
		inline constexpr REL::Offset ComputeProjectileTime_1{ 0x5A7E00 };
		inline constexpr REL::Offset GetProjectileMaximumRange{ 0x5A7F00 };
		inline constexpr REL::Offset GetAttackerFiringZOffset{ 0x5A7FA0 };
		inline constexpr REL::Offset GetAttackerFiringLocation{ 0x5A8050 };
		inline constexpr REL::Offset GetAttackerFiringLocationSimple{ 0x5A8250 };
		inline constexpr REL::Offset GetBackProjectedAttackerFiringLocation{ 0x5A82B0 };
		inline constexpr REL::Offset GetTargetFiringZOffset{ 0x5A8460 };
		inline constexpr REL::Offset GetTargetFiringLocation{ 0x5A8600 };
		inline constexpr REL::Offset GetTargetVelocity{ 0x5A8660 };
		inline constexpr REL::Offset GetAngleToProjectedTarget{ 0x5A86E0 };
		inline constexpr REL::Offset GetAngleToProjectedTarget_1{ 0x5A87F0 };
		inline constexpr REL::Offset GetAngleToProjectedPoint{ 0x5A88E0 };
		inline constexpr REL::Offset GetAngleToProjectedPoint_1{ 0x5A8970 };
		inline constexpr REL::Offset GetAngleToProjectedPoint_2{ 0x5A8AF0 };
		inline constexpr REL::Offset GetProjectedPointForTarget{ 0x5A8BF0 };
		inline constexpr REL::Offset GetProjectedPointForTarget_1{ 0x5A8DF0 };
		inline constexpr REL::Offset GetProjectedPointForTarget_2{ 0x5A8F00 };
		inline constexpr REL::Offset ComputeOptimalWeaponRanges{ 0x5A9180 };
		inline constexpr REL::Offset CalculateCoverPositions{ 0x5A9370 };
		inline constexpr REL::Offset CalculateCoverPositions_1{ 0x5A93A0 };
		inline constexpr REL::Offset CalculateCoverPositions_2{ 0x5A93E0 };
		inline constexpr REL::Offset IsActorUsingMelee{ 0x5A9630 };
		inline constexpr REL::Offset IsActorUsingRanged{ 0x5A96C0 };
		inline constexpr REL::Offset IsDangerousExplosion{ 0x5A9720 };
		inline constexpr REL::Offset CalculateAttackerCombatPositions{ 0x5A9A20 };
		inline constexpr REL::Offset AddLOSDebugGeomtry{ 0x5A9F20 };
	}

	namespace CombatWorldState
	{
		inline constexpr REL::Offset IsSpecifiedVariable{ 0x594830 };
		inline constexpr REL::Offset GetDebugText{ 0x5AA150 };
		inline constexpr REL::Offset GetStateValueText{ 0x5AA1B0 };
	}

	namespace CombatWorldStateArray
	{
		inline constexpr REL::Offset GetSpecifiedVariable{ 0x584470 };
		inline constexpr REL::Offset GetStateValue{ 0x5947F0 };
		inline constexpr REL::Offset ClearValues{ 0x5AA4B0 };
		inline constexpr REL::Offset Update{ 0x5AA4E0 };
		inline constexpr REL::Offset Copy{ 0x5AAD80 };
		inline constexpr REL::Offset IsTrue{ 0x5AADC0 };
		inline constexpr REL::Offset GetDebugText{ 0x5AAE70 };
	}

	namespace CombatWorldStateList
	{
		inline constexpr REL::Offset GetNext{ 0x22D990 };
		inline constexpr REL::Offset RemoveWorldState{ 0x5AA340 };
	}

	namespace CommandEffect
	{
		inline constexpr REL::Offset ctor{ 0x40B560 };
		inline constexpr REL::Offset InitCommandedActor{ 0x40B850 };
		inline constexpr REL::Offset UpdateCommandedActor{ 0x40B8F0 };
	}

	namespace CompanionWheelMenu
	{
		inline constexpr REL::Offset ctor{ 0x354B40 };
		inline constexpr REL::Offset CreateCompanionWheelMenu{ 0x354CF0 };
		inline constexpr REL::Offset GetShouldCompanionWheelOpen{ 0x354D90 };
		inline constexpr REL::Offset Create{ 0x354DE0 };
		inline constexpr REL::Offset Close{ 0x355270 };
		inline constexpr REL::Offset SetButtonAsHighlighted{ 0x3557D0 };
		inline constexpr REL::Offset SetButtonAsHighlighted_1{ 0x355C50 };
		inline constexpr REL::Offset SetButtonContextText{ 0x355DC0 };
		inline constexpr REL::Offset Do_ToggleNearFar{ 0x3560C0 };
		inline constexpr REL::Offset Do_ToggleAggressivePassive{ 0x3561B0 };
		inline constexpr REL::Offset Do_ToggleRangedMelee{ 0x3562B0 };
		inline constexpr REL::Offset Do_ToggleStayFollow{ 0x3563A0 };
		inline constexpr REL::Offset Do_UseStim{ 0x356490 };
		inline constexpr REL::Offset Do_Backup{ 0x356930 };
		inline constexpr REL::Offset TransitionFromCloseToTalkTo{ 0x356980 };
		inline constexpr REL::Offset PlayReactivityBark{ 0x3573D0 };
		inline constexpr REL::Offset RunFollowerCommandScript{ 0x3575B0 };
		inline constexpr REL::Offset DisplayCompanionWheelSubtitle{ 0x357690 };
	}

	namespace ComputersMenu
	{
		inline constexpr REL::Offset ctor{ 0x3577F0 };
		inline constexpr REL::Offset Create{ 0x357B70 };
		inline constexpr REL::Offset Close{ 0x357EA0 };
		inline constexpr REL::Offset FlashCursor{ 0x3585A0 };
		inline constexpr REL::Offset DisplayTerminal{ 0x3586E0 };
		inline constexpr REL::Offset DisplayPreviousTerminal{ 0x358A80 };
		inline constexpr REL::Offset DisplayIntro{ 0x358AD0 };
		inline constexpr REL::Offset FinishIntro{ 0x358D30 };
		inline constexpr REL::Offset PlayNoteSound{ 0x359030 };
		inline constexpr REL::Offset DisplayNoteText{ 0x3590C0 };
		inline constexpr REL::Offset DisplayNoteImage{ 0x359470 };
		inline constexpr REL::Offset Redisplay{ 0x359560 };
		inline constexpr REL::Offset PostDisplay{ 0x3596A0 };
	}

	namespace ComputersMenu_AnimatingTextManager
	{
		inline constexpr REL::Offset Update{ 0x3598D0 };
		inline constexpr REL::Offset AddItem{ 0x359DA0 };
		inline constexpr REL::Offset ForceFinish{ 0x359F50 };
	}

	namespace ConcussionEffect
	{
		inline constexpr REL::Offset CheckApplyConcussion{ 0x40BE40 };
	}

	namespace ContainerItemExtra
	{
		inline constexpr REL::Offset ctor{ 0xE690 };
		inline constexpr REL::Offset Save{ 0xE6C0 };
		inline constexpr REL::Offset Load{ 0xE780 };
		inline constexpr REL::Offset InitItem{ 0xE7F0 };
		inline constexpr REL::Offset Compare{ 0xE920 };
		inline constexpr REL::Offset Copy{ 0xE980 };
		inline constexpr REL::Offset IsDefault{ 0xE9C0 };
		inline constexpr REL::Offset AddToExtraDataList{ 0xEA20 };
		inline constexpr REL::Offset AdjustHealthPercent{ 0xEB90 };
	}

	namespace ContainerMenu
	{
		inline constexpr REL::Offset ctor{ 0x35B0D0 };
		inline constexpr REL::Offset Create{ 0x35B310 };
		inline constexpr REL::Offset Close{ 0x35B750 };
		inline constexpr REL::Offset PlayContainerSound{ 0x35BAF0 };
		inline constexpr REL::Offset InitContainerMode{ 0x35BC80 };
		inline constexpr REL::Offset UpdateLists{ 0x35C280 };
		inline constexpr REL::Offset FirstPassFilterFunc{ 0x35CFC0 };
		inline constexpr REL::Offset SortFunc{ 0x35D130 };
		inline constexpr REL::Offset InitFunc{ 0x35D160 };
		inline constexpr REL::Offset IsPlacingMine{ 0x35D510 };
		inline constexpr REL::Offset SwitchContainer{ 0x35D6B0 };
		inline constexpr REL::Offset TakeAllFn{ 0x35DA60 };
		inline constexpr REL::Offset ItemSelectCallback{ 0x35DC80 };
		inline constexpr REL::Offset PickpocketCheck{ 0x35E0B0 };
		inline constexpr REL::Offset GetStolenValue{ 0x35E240 };
		inline constexpr REL::Offset SetFilterModeTitle{ 0x35E380 };
		inline constexpr REL::Offset FilterModeFunc{ 0x35E650 };
		inline constexpr REL::Offset SetContainerTitle{ 0x35E8C0 };
		inline constexpr REL::Offset PlayReactivityBark{ 0x35EC60 };
		inline constexpr REL::Offset DisplayContainerMenuSubtitle{ 0x35EEA0 };
	}

	namespace ContainerObject
	{
		inline constexpr REL::Offset Save{ 0x81310 };
		inline constexpr REL::Offset InitItem{ 0x81390 };
		inline constexpr REL::Offset Compare{ 0x81470 };
	}

	namespace ContinuousBeamProjectile
	{
		inline constexpr REL::Offset SetKill{ 0x5AB9A0 };
		inline constexpr REL::Offset ScaleBeamGeometryLength{ 0x5ABA90 };
		inline constexpr REL::Offset ScaleBeam3D{ 0x5ABD00 };
		inline constexpr REL::Offset MarkGeometryMutable{ 0x5ABE40 };
	}

	namespace Conversation
	{
		inline constexpr REL::Offset FirstItem{ 0x43B9A0 };
		inline constexpr REL::Offset GetDialogueItemIndex{ 0x43BA50 };
		inline constexpr REL::Offset GetDialogueItemByIndex{ 0x43BAC0 };
		inline constexpr REL::Offset GetSaveSize{ 0x43BB30 };
		inline constexpr REL::Offset SaveGame{ 0x43BC80 };
		inline constexpr REL::Offset LoadGame{ 0x43BEC0 };
		inline constexpr REL::Offset SaveGame_1{ 0x43C270 };
		inline constexpr REL::Offset LoadGame_1{ 0x43C330 };
	}

	namespace Copier
	{
		inline constexpr REL::Offset copyIntoNativeArray{ 0x9C1D30 };
		inline constexpr REL::Offset fillNativeMembers{ 0x9C2D60 };
		inline constexpr REL::Offset getMemberClassAndCheck{ 0x9C3A80 };
		inline constexpr REL::Offset findOrCopy{ 0x9C4430 };
		inline constexpr REL::Offset toObject{ 0x9C4710 };
		inline constexpr REL::Offset fillNativeSimpleMember_hkDataArray__Value_{ 0x9C4A80 };
		inline constexpr REL::Offset ctor{ 0x9C4F20 };
		inline constexpr REL::Offset fillNativeSimpleMember_hkDataObject__Value_{ 0x9C4FA0 };
	}

	namespace CoverReservationInfo
	{
		inline constexpr REL::Offset ctor{ 0x2D3280 };
		inline constexpr REL::Offset CalculateSegmentInfo{ 0x582630 };
		inline constexpr REL::Offset SaveGame{ 0x582C20 };
		inline constexpr REL::Offset LoadGame{ 0x582CA0 };
	}

	namespace CreatedReferenceInitialData
	{
		inline constexpr REL::Offset ctor{ 0x44EB20 };
	}

	namespace Creature
	{
		inline constexpr REL::Offset ctor{ 0x4D43A0 };
		inline constexpr REL::Offset ctor_1{ 0x4D4500 };
		inline constexpr REL::Offset GetWeaponSkill{ 0x4D46F0 };
		inline constexpr REL::Offset MapActorValue{ 0x4D4A80 };
		inline constexpr REL::Offset FindRagDoll{ 0x4D4AB0 };
		inline constexpr REL::Offset CheckMissingLimbs{ 0x4D4B60 };
	}

	namespace CreatureSounds
	{
		inline constexpr REL::Offset Save{ 0x1F03A0 };
		inline constexpr REL::Offset LoadCreatureSound{ 0x1F0480 };
	}

	namespace CreditsMenu
	{
		inline constexpr REL::Offset ctor{ 0x35F070 };
		inline constexpr REL::Offset Create{ 0x35F2A0 };
		inline constexpr REL::Offset InitCreditsRoot{ 0x35FB90 };
		inline constexpr REL::Offset CreateImage{ 0x360CF0 };
	}

	namespace Crime
	{
		inline constexpr REL::Offset ctor{ 0x5EB500 };
		inline constexpr REL::Offset ShouldCrimeBeRemoved{ 0x5EB8A0 };
		inline constexpr REL::Offset AddtoActorKnowList{ 0x5EB9C0 };
		inline constexpr REL::Offset GetSaveSize{ 0x5EBB80 };
		inline constexpr REL::Offset SaveGame{ 0x5EBCA0 };
		inline constexpr REL::Offset SaveGame_1{ 0x5EBFE0 };
		inline constexpr REL::Offset LoadGame{ 0x5EC1A0 };
		inline constexpr REL::Offset InitLoadGame{ 0x5EC400 };
	}

	namespace DECAL_CREATION_DATA
	{
		inline constexpr REL::Offset ctor{ 0xA37B0 };
	}

	namespace DECAL_DATA_DATA
	{
		inline constexpr REL::Offset Endian{ 0x193370 };
	}

	namespace DebugShader
	{
		inline constexpr REL::Offset LoadShaders{ 0x7D16F0 };
	}

	namespace DebugText
	{
		inline constexpr REL::Offset Instance{ 0x60D9E0 };
		inline constexpr REL::Offset ctor{ 0x60DB40 };
		inline constexpr REL::Offset dtor{ 0x60DCC0 };
	}

	namespace DebugTextManager
	{
		inline constexpr REL::Offset Instance{ 0x1BA8D0 };
		inline constexpr REL::Offset OutputDebugPageNames{ 0x402880 };
		inline constexpr REL::Offset SetScreenDebugPage{ 0x4029C0 };
	}

	namespace DecalCaster
	{
		inline constexpr REL::Offset SetCollision{ 0xA1A10 };
		inline constexpr REL::Offset GetInstance{ 0x222A70 };
		inline constexpr REL::Offset Init{ 0x222D60 };
		inline constexpr REL::Offset Pick{ 0x222F80 };
		inline constexpr REL::Offset GetPenetrations{ 0x223090 };
		inline constexpr REL::Offset Add{ 0x2231A0 };
		inline constexpr REL::Offset GetAVObject{ 0x223290 };
		inline constexpr REL::Offset GetCollision{ 0x2232F0 };
		inline constexpr REL::Offset GetCollisionData{ 0x223370 };
		inline constexpr REL::Offset SetCustomPickCollisions{ 0x2233C0 };
	}

	namespace DecalData
	{
		inline constexpr REL::Offset ctor{ 0x193240 };
		inline constexpr REL::Offset Copy{ 0x1932B0 };
		inline constexpr REL::Offset Compare{ 0x1932E0 };
		inline constexpr REL::Offset Save{ 0x193320 };
		inline constexpr REL::Offset Load{ 0x193450 };
	}

	namespace DetailedActorPathHandler
	{
		inline constexpr REL::Offset ctor{ 0x5DFF40 };
		inline constexpr REL::Offset ctor_1{ 0x5E0190 };
		inline constexpr REL::Offset HandleDoorOpening{ 0x5E20C0 };
		inline constexpr REL::Offset IsDoorInPath{ 0x5E22D0 };
		inline constexpr REL::Offset ComputeMoveMode{ 0x5E2AA0 };
		inline constexpr REL::Offset RotateMoveDelta{ 0x5E3560 };
		inline constexpr REL::Offset UpdateTetherPosition{ 0x5E3C00 };
		inline constexpr REL::Offset UpdateTether{ 0x5E3D50 };
		inline constexpr REL::Offset ComputeHeadingAndLooking{ 0x5E4450 };
		inline constexpr REL::Offset UpdateHeading{ 0x5E4800 };
		inline constexpr REL::Offset UpdateLooking{ 0x5E4C60 };
		inline constexpr REL::Offset UpdateStaticAvoidance{ 0x5E4CF0 };
		inline constexpr REL::Offset UpdateAvoidanceCandidateList{ 0x5E54A0 };
		inline constexpr REL::Offset BuildAvoidanceList{ 0x5E5690 };
		inline constexpr REL::Offset UpdateActorAvoidance{ 0x5E5AE0 };
		inline constexpr REL::Offset CheckDetection{ 0x5E6900 };
		inline constexpr REL::Offset UpdateAvoidNodesForPath{ 0x5E71B0 };
		inline constexpr REL::Offset CheckForEndRotate{ 0x5E7550 };
		inline constexpr REL::Offset InitRotationMode{ 0x5E7610 };
		inline constexpr REL::Offset FindPathStartingLocation{ 0x5E77D0 };
		inline constexpr REL::Offset UpdateRotation{ 0x5E7D70 };
		inline constexpr REL::Offset CheckGoalReached{ 0x5E8000 };
		inline constexpr REL::Offset ResetMoveModeAndDelta{ 0x5E8790 };
	}

	namespace DetectLifeEffect
	{
		inline constexpr REL::Offset CheckPlayerRunningDetectLife{ 0x40CEC0 };
		inline constexpr REL::Offset CheckActorDetected{ 0x40CED0 };
	}

	namespace DetectionEvent
	{
		inline constexpr REL::Offset InitLoadGame{ 0x4D7340 };
	}

	namespace DetectionState
	{
		inline constexpr REL::Offset ctor{ 0x26E590 };
		inline constexpr REL::Offset SaveGame{ 0x4D7070 };
		inline constexpr REL::Offset LoadGame{ 0x4D7140 };
		inline constexpr REL::Offset InitLoadGame{ 0x4D7220 };
	}

	namespace DialogMenu
	{
		inline constexpr REL::Offset IsDialogActive{ 0x305100 };
		inline constexpr REL::Offset Create{ 0x361A20 };
		inline constexpr REL::Offset Close{ 0x362160 };
		inline constexpr REL::Offset LoadNextScreen{ 0x362FF0 };
		inline constexpr REL::Offset LoadTopicsList{ 0x3638B0 };
		inline constexpr REL::Offset ServiceStart{ 0x363FF0 };
		inline constexpr REL::Offset ServiceEnd{ 0x3640A0 };
		inline constexpr REL::Offset SetPause{ 0x364200 };
		inline constexpr REL::Offset DebugResetSaidOnceFlags{ 0x364290 };
	}

	namespace DialogueItem
	{
		inline constexpr REL::Offset ctor{ 0x43C520 };
		inline constexpr REL::Offset FirstResponse{ 0x43C7B0 };
		inline constexpr REL::Offset NextResponse{ 0x43C7E0 };
		inline constexpr REL::Offset GetCurrentResponse{ 0x43C820 };
		inline constexpr REL::Offset RunResult{ 0x43C850 };
		inline constexpr REL::Offset GetDialogueResponseIndex{ 0x43C900 };
		inline constexpr REL::Offset GetDialogueResponseByIndex{ 0x43C970 };
		inline constexpr REL::Offset SaveGame{ 0x43CA90 };
		inline constexpr REL::Offset LoadGame{ 0x43CC10 };
		inline constexpr REL::Offset SaveGame_1{ 0x43CE40 };
		inline constexpr REL::Offset LoadGame_1{ 0x43CF40 };
	}

	namespace DialoguePackage
	{
		inline constexpr REL::Offset ctor{ 0x5EDBC0 };
		inline constexpr REL::Offset ctor_1{ 0x5EDD80 };
		inline constexpr REL::Offset Speak{ 0x5EE0A0 };
	}

	namespace DialogueResponse
	{
		inline constexpr REL::Offset dtor{ 0x43C750 };
		inline constexpr REL::Offset ctor{ 0x43D1E0 };
		inline constexpr REL::Offset ctor_1{ 0x43D280 };
		inline constexpr REL::Offset SaveGame{ 0x43D490 };
		inline constexpr REL::Offset LoadGame{ 0x43D550 };
		inline constexpr REL::Offset SaveGame_1{ 0x43D690 };
		inline constexpr REL::Offset LoadGame_1{ 0x43D740 };
	}

	namespace DismemberedLimb
	{
		inline constexpr REL::Offset ctor{ 0x2C470 };
	}

	namespace DoorInPathFilter
	{
		inline constexpr REL::Offset ctor{ 0x5E2690 };
	}

	namespace DoorLock
	{
		inline constexpr REL::Offset ctor{ 0x101D20 };
		inline constexpr REL::Offset dtor{ 0x101E50 };
		inline constexpr REL::Offset SetFromDoorRef{ 0x101E80 };
		inline constexpr REL::Offset CanActorIgnoreDoorLock{ 0x101FD0 };
		inline constexpr REL::Offset IsAnOwner{ 0x1021C0 };
		inline constexpr REL::Offset CanActorIgnoreDoorLock_1{ 0x102310 };
		inline constexpr REL::Offset CanActorUnlockDoorLock{ 0x102450 };
	}

	namespace DoorTeleportData
	{
		inline constexpr REL::Offset ctor{ 0x3A160 };
		inline constexpr REL::Offset SetConnectedCellsPublic{ 0x3A210 };
		inline constexpr REL::Offset GetTeleportCell{ 0x3A2B0 };
		inline constexpr REL::Offset GetTeleportCellMapName{ 0x3A2E0 };
		inline constexpr REL::Offset GetTeleportWorldSpace{ 0x3A320 };
		inline constexpr REL::Offset GetTeleportWorldLocation{ 0x3A390 };
		inline constexpr REL::Offset GetTeleportSpace{ 0x3A3F0 };
		inline constexpr REL::Offset Save{ 0x3A420 };
		inline constexpr REL::Offset Load{ 0x3A4E0 };
		inline constexpr REL::Offset InitItem{ 0x3A590 };
		inline constexpr REL::Offset InitLoadGame{ 0x3A9F0 };
		inline constexpr REL::Offset SaveGame{ 0x3AA40 };
		inline constexpr REL::Offset LoadGame{ 0x3AAA0 };
	}

	namespace EGMData
	{
		inline constexpr REL::Offset ctor{ 0x259560 };
		inline constexpr REL::Offset dtor{ 0x259600 };
	}

	namespace EGTData
	{
		inline constexpr REL::Offset ctor{ 0x259670 };
		inline constexpr REL::Offset dtor{ 0x259710 };
	}

	namespace EXTERIOR_DATA
	{
		inline constexpr REL::Offset ctor{ 0x140720 };
	}

	namespace EdgeExtraInfo
	{
		inline constexpr REL::Offset ctor{ 0x2923C0 };
		inline constexpr REL::Offset SetFromBuffer{ 0x29D1D0 };
		inline constexpr REL::Offset SetFromBufferOld{ 0x29D240 };
	}

	namespace EditableTextField
	{
		inline constexpr REL::Offset HandleKey{ 0x316B00 };
		inline constexpr REL::Offset GetDisplayText{ 0x3170A0 };
	}

	namespace EffectItem
	{
		inline constexpr REL::Offset ctor{ 0x3B30 };
		inline constexpr REL::Offset ctor_1{ 0x3CA0 };
		inline constexpr REL::Offset GetActorValueIndex{ 0x3EA0 };
		inline constexpr REL::Offset IsActorValueUsed{ 0x3EE0 };
		inline constexpr REL::Offset GetRawCost{ 0x3F00 };
		inline constexpr REL::Offset GetCost{ 0x3F80 };
		inline constexpr REL::Offset Save{ 0x40B0 };
		inline constexpr REL::Offset Load{ 0x4120 };
		inline constexpr REL::Offset Copy{ 0x4210 };
		inline constexpr REL::Offset Compare{ 0x42A0 };
		inline constexpr REL::Offset GetMagnitude{ 0x4390 };
		inline constexpr REL::Offset GetArea{ 0x4420 };
		inline constexpr REL::Offset GetDuration{ 0x44D0 };
		inline constexpr REL::Offset SetRange{ 0x4560 };
		inline constexpr REL::Offset IsHostile{ 0x4710 };
		inline constexpr REL::Offset IsUsageMonitorEffect{ 0x4730 };
		inline constexpr REL::Offset SetConditions{ 0x4760 };
		inline constexpr REL::Offset IsDisabled{ 0x5E40 };
		inline constexpr REL::Offset IsScriptEffect{ 0x4231F0 };
	}

	namespace EffectItemData
	{
		inline constexpr REL::Offset ctor{ 0x3BA0 };
	}

	namespace EffectItemList
	{
		inline constexpr REL::Offset ctor{ 0x56A0 };
		inline constexpr REL::Offset Save{ 0x56D0 };
		inline constexpr REL::Offset Load{ 0x5760 };
		inline constexpr REL::Offset Copy{ 0x5B10 };
		inline constexpr REL::Offset GetEffectScore{ 0x5C00 };
		inline constexpr REL::Offset AddEffect{ 0x5D20 };
		inline constexpr REL::Offset IsHostile{ 0x5D80 };
		inline constexpr REL::Offset CanBePoison{ 0x5DA0 };
		inline constexpr REL::Offset GetUsageMonitorEffect{ 0x6200 };
		inline constexpr REL::Offset GetCostliestEffect{ 0x64D0 };
		inline constexpr REL::Offset GetAssociatedSkill{ 0x65E0 };
		inline constexpr REL::Offset BuildMenuString{ 0x6620 };
		inline constexpr REL::Offset GetEffectItemIndex{ 0x6E70 };
		inline constexpr REL::Offset GetEffectItemByIndex{ 0x6EE0 };
	}

	namespace EffectSetting
	{
		inline constexpr REL::Offset IsAssociatedActorValueUsed{ 0x3C60 };
		inline constexpr REL::Offset IsFlagSet{ 0x3E60 };
		inline constexpr REL::Offset IsAssociatedFormUsed{ 0x64B0 };
		inline constexpr REL::Offset ctor{ 0x7020 };
		inline constexpr REL::Offset GetEffectShader{ 0x7820 };
		inline constexpr REL::Offset GetProjectileType{ 0x86A0 };
		inline constexpr REL::Offset QueueAssociatedItem{ 0x8790 };
		inline constexpr REL::Offset IsAssociatedItemLoaded{ 0x8880 };
		inline constexpr REL::Offset IsAssociatedItemQueued{ 0x88A0 };
		inline constexpr REL::Offset QueueEffect{ 0x8970 };
		inline constexpr REL::Offset IsEffectLoaded{ 0x8A00 };
		inline constexpr REL::Offset IsEffectQueued{ 0x8A20 };
		inline constexpr REL::Offset ShouldNegateMagnitude{ 0x3869E0 };
		inline constexpr REL::Offset IsScriptEffect{ 0x3DF1B0 };
		inline constexpr REL::Offset GetEffectArchetype{ 0x410FD0 };
	}

	namespace EffectSetting_EffectSettingData
	{
		inline constexpr REL::Offset Endian{ 0x78C0 };
	}

	namespace EffectShaderData
	{
		inline constexpr REL::Offset Initialize{ 0x106510 };
		inline constexpr REL::Offset Endian{ 0x106850 };
	}

	namespace EnchantmentItem
	{
		inline constexpr REL::Offset IsValidEnchantForObject{ 0x94F0 };
		inline constexpr REL::Offset IsValidEffectForEnchantment{ 0x9720 };
	}

	namespace EscortActorPackageData
	{
		inline constexpr REL::Offset ctor{ 0x5F0900 };
	}

	namespace Explosion
	{
		inline constexpr REL::Offset ctor{ 0x5ABF30 };
		inline constexpr REL::Offset ctor_1{ 0x5AC200 };
		inline constexpr REL::Offset SpawnExplosion{ 0x5AC9C0 };
		inline constexpr REL::Offset IsDistant{ 0x5AD5F0 };
		inline constexpr REL::Offset Init3D{ 0x5AD670 };
		inline constexpr REL::Offset ProcessMovement{ 0x5AE580 };
		inline constexpr REL::Offset ApplyImpactDecals{ 0x5AE6E0 };
		inline constexpr REL::Offset FindTargets{ 0x5AFCC0 };
		inline constexpr REL::Offset ApplyForces{ 0x5AFEF0 };
		inline constexpr REL::Offset ProcessTargets{ 0x5B00A0 };
		inline constexpr REL::Offset GetWeaponSource{ 0x5B0900 };
		inline constexpr REL::Offset PushRigidBody{ 0x5B0920 };
		inline constexpr REL::Offset GetDamage{ 0x5B0F80 };
		inline constexpr REL::Offset StartSounds{ 0x5B1090 };
		inline constexpr REL::Offset StopSounds{ 0x5B11C0 };
		inline constexpr REL::Offset UpdateNonRenderSafeMovement{ 0x5B17A0 };
		inline constexpr REL::Offset RunLOSPick{ 0x5B1810 };
		inline constexpr REL::Offset TestExplosionUnderWater{ 0x5B2940 };
	}

	namespace ExteriorCellLoader
	{
		inline constexpr REL::Offset dtor{ 0x127E50 };
		inline constexpr REL::Offset ClearData{ 0x127FC0 };
		inline constexpr REL::Offset TryCancelTasks{ 0x1281F0 };
		inline constexpr REL::Offset WaitForTasks{ 0x1282D0 };
		inline constexpr REL::Offset QueueCellLoad{ 0x1283C0 };
		inline constexpr REL::Offset CancelAllCellLoads{ 0x128540 };
		inline constexpr REL::Offset RemoveCell{ 0x128560 };
		inline constexpr REL::Offset LoadCellData{ 0x128620 };
		inline constexpr REL::Offset AttachLoadedCell{ 0x1287B0 };
	}

	namespace ExtraActivateLoopSound
	{
		inline constexpr REL::Offset ctor{ 0x36660 };
	}

	namespace ExtraActivateRef
	{
		inline constexpr REL::Offset ctor{ 0x338B0 };
		inline constexpr REL::Offset GetData{ 0x33A00 };
	}

	namespace ExtraActorCause
	{
		inline constexpr REL::Offset ctor{ 0x2CA90 };
	}

	namespace ExtraAnimNoteReceiver
	{
		inline constexpr REL::Offset ctor{ 0x17A870 };
	}

	namespace ExtraAshPileRef
	{
		inline constexpr REL::Offset ctor{ 0x336C0 };
	}

	namespace ExtraCell3D
	{
		inline constexpr REL::Offset ctor{ 0xEC00 };
	}

	namespace ExtraCellCanopyShadowMask
	{
		inline constexpr REL::Offset ctor{ 0xF440 };
	}

	namespace ExtraCellMusicType
	{
		inline constexpr REL::Offset ctor{ 0xEF30 };
	}

	namespace ExtraCreatureAwakeSound
	{
		inline constexpr REL::Offset ctor{ 0x361E0 };
	}

	namespace ExtraCreatureMovementSound
	{
		inline constexpr REL::Offset ctor{ 0x36300 };
	}

	namespace ExtraDataList
	{
		inline constexpr REL::Offset ctor{ 0x10360 };
		inline constexpr REL::Offset AddExtraCopy{ 0x103D0 };
		inline constexpr REL::Offset CopyList{ 0x11EC0 };
		inline constexpr REL::Offset RemoveAllCopyableExtra{ 0x11FD0 };
		inline constexpr REL::Offset RemoveNonPersistentCellData{ 0x120B0 };
		inline constexpr REL::Offset CopyListForContainer{ 0x121E0 };
		inline constexpr REL::Offset DuplicateExtraListForContainer{ 0x12380 };
		inline constexpr REL::Offset CopyListForReference{ 0x12490 };
		inline constexpr REL::Offset CompareListForContainer{ 0x126C0 };
		inline constexpr REL::Offset CompareList{ 0x127E0 };
		inline constexpr REL::Offset Save{ 0x12970 };
		inline constexpr REL::Offset Load{ 0x144A0 };
		inline constexpr REL::Offset InitItem{ 0x16BE0 };
		inline constexpr REL::Offset GetLight{ 0x18250 };
		inline constexpr REL::Offset GetSpellEffectLight{ 0x18280 };
		inline constexpr REL::Offset GetRadioData{ 0x182E0 };
		inline constexpr REL::Offset SetRadioData{ 0x18310 };
		inline constexpr REL::Offset GetTeleport{ 0x18460 };
		inline constexpr REL::Offset GetMapMarkerData{ 0x18490 };
		inline constexpr REL::Offset GetAudioMarkerData{ 0x184C0 };
		inline constexpr REL::Offset GetContainerChanges{ 0x18520 };
		inline constexpr REL::Offset SetOriginalReferenceExtra{ 0x18550 };
		inline constexpr REL::Offset RemoveOriginalReferenceExtra{ 0x18600 };
		inline constexpr REL::Offset GetOriginalReference{ 0x18630 };
		inline constexpr REL::Offset GetOwner{ 0x18660 };
		inline constexpr REL::Offset GetGlobal{ 0x18690 };
		inline constexpr REL::Offset GetRank{ 0x186C0 };
		inline constexpr REL::Offset GetHealth{ 0x186F0 };
		inline constexpr REL::Offset GetLeveledItem{ 0x18720 };
		inline constexpr REL::Offset HasLeveledItem{ 0x18750 };
		inline constexpr REL::Offset GetCount{ 0x18770 };
		inline constexpr REL::Offset GetPoison{ 0x187D0 };
		inline constexpr REL::Offset GetScript{ 0x18800 };
		inline constexpr REL::Offset GetScriptLocals{ 0x18830 };
		inline constexpr REL::Offset GetSound{ 0x18890 };
		inline constexpr REL::Offset GetCreatureAwakeSound{ 0x18940 };
		inline constexpr REL::Offset GetWeaponIdleSound{ 0x189C0 };
		inline constexpr REL::Offset GetWeaponAttackSound{ 0x18A00 };
		inline constexpr REL::Offset GetWorn{ 0x18AB0 };
		inline constexpr REL::Offset GetCanNotWear{ 0x18B10 };
		inline constexpr REL::Offset GetSeedIndex{ 0x18B40 };
		inline constexpr REL::Offset GetPackageStartLocation{ 0x18B70 };
		inline constexpr REL::Offset HasWeaponMods{ 0x18BA0 };
		inline constexpr REL::Offset GetWeaponModSlotActive{ 0x18C00 };
		inline constexpr REL::Offset SetAnimPtr{ 0x18C40 };
		inline constexpr REL::Offset SetStartingPositionPtr{ 0x18D50 };
		inline constexpr REL::Offset SetLightPtr{ 0x18E30 };
		inline constexpr REL::Offset SetLockPtr{ 0x19050 };
		inline constexpr REL::Offset SetTeleportPtr{ 0x19120 };
		inline constexpr REL::Offset SetMapMarkerPtr{ 0x19250 };
		inline constexpr REL::Offset SetAudioMarkerPtr{ 0x19380 };
		inline constexpr REL::Offset SetAudioBuoyMarkerPtr{ 0x194B0 };
		inline constexpr REL::Offset SetActionPtr{ 0x195B0 };
		inline constexpr REL::Offset SetContainerChanges{ 0x19650 };
		inline constexpr REL::Offset SetOwnership{ 0x19700 };
		inline constexpr REL::Offset SetGlobal{ 0x197D0 };
		inline constexpr REL::Offset SetRank{ 0x198A0 };
		inline constexpr REL::Offset SetHealth{ 0x19970 };
		inline constexpr REL::Offset SetUses{ 0x19A20 };
		inline constexpr REL::Offset SetCount{ 0x19AD0 };
		inline constexpr REL::Offset SetTimeLeft{ 0x19BB0 };
		inline constexpr REL::Offset SetCharge{ 0x19C60 };
		inline constexpr REL::Offset SetPoison{ 0x19D10 };
		inline constexpr REL::Offset SetHeadTrackTargetExtra{ 0x19DC0 };
		inline constexpr REL::Offset GetHeadTrackTargetExtra{ 0x19EA0 };
		inline constexpr REL::Offset SetScript{ 0x19ED0 };
		inline constexpr REL::Offset SetScriptLocals{ 0x19F80 };
		inline constexpr REL::Offset SetScale{ 0x19FB0 };
		inline constexpr REL::Offset SetCreatureAwakeSound{ 0x1A090 };
		inline constexpr REL::Offset SetCreatureMovementSound{ 0x1A280 };
		inline constexpr REL::Offset SetWeaponIdleSound{ 0x1A3E0 };
		inline constexpr REL::Offset SetWeaponAttackSound{ 0x1A540 };
		inline constexpr REL::Offset SetActivateLoopSound{ 0x1A6A0 };
		inline constexpr REL::Offset SetSound{ 0x1A800 };
		inline constexpr REL::Offset SetGhost{ 0x1A960 };
		inline constexpr REL::Offset SetWorn{ 0x1AA20 };
		inline constexpr REL::Offset SetCanNotWear{ 0x1AB70 };
		inline constexpr REL::Offset SetSeedIndex{ 0x1AC30 };
		inline constexpr REL::Offset SetPackageStartLocation{ 0x1AD00 };
		inline constexpr REL::Offset RemoveContainerChanges{ 0x1AEB0 };
		inline constexpr REL::Offset RemoveCount{ 0x1AED0 };
		inline constexpr REL::Offset RemoveScript{ 0x1AF50 };
		inline constexpr REL::Offset ClearScriptLocals{ 0x1AFA0 };
		inline constexpr REL::Offset RemoveWorn{ 0x1B010 };
		inline constexpr REL::Offset SetStartingAngle{ 0x1B120 };
		inline constexpr REL::Offset SetStartingLocation{ 0x1B180 };
		inline constexpr REL::Offset SetStartingWorldOrCell{ 0x1B1E0 };
		inline constexpr REL::Offset SetStartingWorldOrCellForRef{ 0x1B2A0 };
		inline constexpr REL::Offset GetStartingWorldOrCell{ 0x1B320 };
		inline constexpr REL::Offset GetActionFlag{ 0x1B370 };
		inline constexpr REL::Offset GetAction{ 0x1B3A0 };
		inline constexpr REL::Offset SetActionFlag{ 0x1B3D0 };
		inline constexpr REL::Offset SetAction{ 0x1B440 };
		inline constexpr REL::Offset ClearAction{ 0x1B470 };
		inline constexpr REL::Offset SetActionRef{ 0x1B4B0 };
		inline constexpr REL::Offset SetHealthPerc{ 0x1B580 };
		inline constexpr REL::Offset GetObjectHealth{ 0x1B6B0 };
		inline constexpr REL::Offset SetObjectHealth{ 0x1B6E0 };
		inline constexpr REL::Offset SetCell3D{ 0x1B7E0 };
		inline constexpr REL::Offset SetbhkWorld{ 0x1B8D0 };
		inline constexpr REL::Offset SetTerminalState{ 0x1BE10 };
		inline constexpr REL::Offset GetTerminalState{ 0x1BF50 };
		inline constexpr REL::Offset SetTerminalLockState{ 0x1BF80 };
		inline constexpr REL::Offset GetTerminalLockState{ 0x1C060 };
		inline constexpr REL::Offset SetAcousticSpace{ 0x1C090 };
		inline constexpr REL::Offset SetClimate{ 0x1C190 };
		inline constexpr REL::Offset SetImageSpace{ 0x1C290 };
		inline constexpr REL::Offset SetImpactSwap{ 0x1C390 };
		inline constexpr REL::Offset GetImpactSwap{ 0x1C460 };
		inline constexpr REL::Offset SetCanopyShadowMask{ 0x1C490 };
		inline constexpr REL::Offset GetCanopyShadowMask{ 0x1C580 };
		inline constexpr REL::Offset SetEditorID{ 0x1C6F0 };
		inline constexpr REL::Offset SetReferencePointer{ 0x1C7F0 };
		inline constexpr REL::Offset GetReferencePointer{ 0x1C8D0 };
		inline constexpr REL::Offset RemoveReferencePointer{ 0x1C900 };
		inline constexpr REL::Offset SetPackageExtra{ 0x1C930 };
		inline constexpr REL::Offset SetPackageExtraTarget{ 0x1CAB0 };
		inline constexpr REL::Offset GetPackageExtra{ 0x1CB10 };
		inline constexpr REL::Offset GetPackageExtraIndex{ 0x1CB40 };
		inline constexpr REL::Offset GetPackageExtraTarget{ 0x1CB70 };
		inline constexpr REL::Offset RemovePackageExtra{ 0x1CC60 };
		inline constexpr REL::Offset SetTrespassPackageExtra{ 0x1CC90 };
		inline constexpr REL::Offset GetTrespassPackage{ 0x1CD70 };
		inline constexpr REL::Offset RemoveTrespassPackage{ 0x1CDA0 };
		inline constexpr REL::Offset AddToPlayerCrimeList{ 0x1CE50 };
		inline constexpr REL::Offset GetPlayerCrimeList{ 0x1CF00 };
		inline constexpr REL::Offset RemoveLevelItemExtra{ 0x1D000 };
		inline constexpr REL::Offset IsExtraDefaultforContainer{ 0x1D120 };
		inline constexpr REL::Offset SetLevelItemExtra{ 0x1D280 };
		inline constexpr REL::Offset SetLevelItemExtraFlag{ 0x1D330 };
		inline constexpr REL::Offset SetPersistentCell{ 0x1D390 };
		inline constexpr REL::Offset GetPersistentCell{ 0x1D460 };
		inline constexpr REL::Offset SetRagDollData{ 0x1D490 };
		inline constexpr REL::Offset SetRagDollDataFromCopy{ 0x1D5B0 };
		inline constexpr REL::Offset GetRagDollData{ 0x1D6D0 };
		inline constexpr REL::Offset SetRunOnceExtraPackage{ 0x1D700 };
		inline constexpr REL::Offset SetEnableStateParent{ 0x1DA40 };
		inline constexpr REL::Offset SetEnableStateParentFlags{ 0x1DC70 };
		inline constexpr REL::Offset AddEnableStateChild{ 0x1DCD0 };
		inline constexpr REL::Offset RemoveEnableStateChild{ 0x1DDA0 };
		inline constexpr REL::Offset GetItemDropper{ 0x1DE00 };
		inline constexpr REL::Offset SetItemDropper{ 0x1DE40 };
		inline constexpr REL::Offset GetDroppedWeapon{ 0x1DF00 };
		inline constexpr REL::Offset GetDroppedItemList{ 0x1DF90 };
		inline constexpr REL::Offset RemoveDroppedItemList{ 0x1DFD0 };
		inline constexpr REL::Offset AddDroppedItem{ 0x1E000 };
		inline constexpr REL::Offset RemoveDroppedItem{ 0x1E0D0 };
		inline constexpr REL::Offset SetWaterType{ 0x1E160 };
		inline constexpr REL::Offset SetRandomTeleportMarker{ 0x1E250 };
		inline constexpr REL::Offset GetAshPileRef{ 0x1E310 };
		inline constexpr REL::Offset SetAshPileRef{ 0x1E340 };
		inline constexpr REL::Offset GetLinkedRef{ 0x1E410 };
		inline constexpr REL::Offset SetLinkedRef{ 0x1E440 };
		inline constexpr REL::Offset GetLinkedRefChildren{ 0x1E500 };
		inline constexpr REL::Offset AddLinkedRefChild{ 0x1E530 };
		inline constexpr REL::Offset RemoveLinkedRefChild{ 0x1E600 };
		inline constexpr REL::Offset SetOpenCloseActivateRef{ 0x1E690 };
		inline constexpr REL::Offset GetActivateParentList{ 0x1E780 };
		inline constexpr REL::Offset GetActivateData{ 0x1E7B0 };
		inline constexpr REL::Offset RemoveActivateParent{ 0x1E960 };
		inline constexpr REL::Offset GetActivateDelay{ 0x1E9E0 };
		inline constexpr REL::Offset SetActivateDelay{ 0x1EA30 };
		inline constexpr REL::Offset IsActivateParentOnly{ 0x1EB60 };
		inline constexpr REL::Offset SetActivateParentOnly{ 0x1EBA0 };
		inline constexpr REL::Offset GetActivateTextOverride{ 0x1EC80 };
		inline constexpr REL::Offset SetActivateTextOverride{ 0x1ECE0 };
		inline constexpr REL::Offset GetActivateRefChildren{ 0x1EDA0 };
		inline constexpr REL::Offset SetActivateChildrenTimer{ 0x1EFF0 };
		inline constexpr REL::Offset GetActivateChildrenTimer{ 0x1F020 };
		inline constexpr REL::Offset GetDecalRefs{ 0x1F050 };
		inline constexpr REL::Offset AddDecalRef{ 0x1F080 };
		inline constexpr REL::Offset GetReflectedRefs{ 0x1F140 };
		inline constexpr REL::Offset GetReflectorRefs{ 0x1F170 };
		inline constexpr REL::Offset SetReflectsRef{ 0x1F4C0 };
		inline constexpr REL::Offset SetRefractsRef{ 0x1F650 };
		inline constexpr REL::Offset GetLitWaterRefs{ 0x1F810 };
		inline constexpr REL::Offset SetWaterLightRef{ 0x1F840 };
		inline constexpr REL::Offset SetLitWaterRef{ 0x1F940 };
		inline constexpr REL::Offset AddPrimitive{ 0x1FA60 };
		inline constexpr REL::Offset GetPrimitive{ 0x1FBE0 };
		inline constexpr REL::Offset SetPatrolRefData{ 0x1FC10 };
		inline constexpr REL::Offset GetPatrolRefData{ 0x1FE90 };
		inline constexpr REL::Offset SetOcclusionPlaneLinkedRefData{ 0x1FEC0 };
		inline constexpr REL::Offset GetOcclusionPlaneLinkedRefData{ 0x20100 };
		inline constexpr REL::Offset SetLinkedPlaneRef{ 0x20160 };
		inline constexpr REL::Offset SetPortalLinkedRefData{ 0x20210 };
		inline constexpr REL::Offset GetPortalLinkedRefData{ 0x20410 };
		inline constexpr REL::Offset SetRoomLinkedRefData{ 0x20440 };
		inline constexpr REL::Offset GetRoomLinkedRefData{ 0x207E0 };
		inline constexpr REL::Offset GetRoomIsMaster{ 0x20810 };
		inline constexpr REL::Offset GetMasterRoom{ 0x208B0 };
		inline constexpr REL::Offset SetPortalLinkedRoomRef{ 0x20A60 };
		inline constexpr REL::Offset GetPortalLinkedRoomRef{ 0x20BC0 };
		inline constexpr REL::Offset AddRoomLinkedRoomRef{ 0x20C10 };
		inline constexpr REL::Offset RemoveRoomLinkedPortalRef{ 0x20DA0 };
		inline constexpr REL::Offset GetPortal{ 0x20DD0 };
		inline constexpr REL::Offset SetPortal{ 0x20E00 };
		inline constexpr REL::Offset GetRoom{ 0x20ED0 };
		inline constexpr REL::Offset SetRoom{ 0x20F00 };
		inline constexpr REL::Offset SetCollisionData{ 0x20FD0 };
		inline constexpr REL::Offset GetCollisionData{ 0x211A0 };
		inline constexpr REL::Offset SetActorPackageData{ 0x211D0 };
		inline constexpr REL::Offset GetActorPackageData{ 0x212B0 };
		inline constexpr REL::Offset NotifyGuardsAboutActivation{ 0x213C0 };
		inline constexpr REL::Offset GetMerchantContainer{ 0x21400 };
		inline constexpr REL::Offset SetMerchantContainer{ 0x21430 };
		inline constexpr REL::Offset GetLevCreaMultiplier{ 0x214F0 };
		inline constexpr REL::Offset SetLevCreaModifier{ 0x21540 };
		inline constexpr REL::Offset SetNoRumors{ 0x21600 };
		inline constexpr REL::Offset ClearRumorsExtra{ 0x216B0 };
		inline constexpr REL::Offset HasLevCreaCalced{ 0x216D0 };
		inline constexpr REL::Offset GetLevCreaOriginalBase{ 0x216F0 };
		inline constexpr REL::Offset GetLevCreaTemplate{ 0x21720 };
		inline constexpr REL::Offset SetLeveledCreature{ 0x21750 };
		inline constexpr REL::Offset SetDetachTime{ 0x21850 };
		inline constexpr REL::Offset SetSeenData{ 0x21940 };
		inline constexpr REL::Offset SetNorthRotation{ 0x21A70 };
		inline constexpr REL::Offset GetXTarget{ 0x21B40 };
		inline constexpr REL::Offset SetXTarget{ 0x21B70 };
		inline constexpr REL::Offset GetEncounterZone{ 0x21C30 };
		inline constexpr REL::Offset SetEncounterZone{ 0x21C60 };
		inline constexpr REL::Offset SetEmittanceSource{ 0x21D50 };
		inline constexpr REL::Offset GetMultiBoundRef{ 0x21E10 };
		inline constexpr REL::Offset SetMultiBoundRef{ 0x21E40 };
		inline constexpr REL::Offset SetMultiBoundData{ 0x21F30 };
		inline constexpr REL::Offset GetMultiBound{ 0x22020 };
		inline constexpr REL::Offset SetMultiBound{ 0x22050 };
		inline constexpr REL::Offset GetOcclusionPlane{ 0x22120 };
		inline constexpr REL::Offset SetOcclusionPlane{ 0x22150 };
		inline constexpr REL::Offset SetRadius{ 0x22220 };
		inline constexpr REL::Offset GetRadius{ 0x22320 };
		inline constexpr REL::Offset SetRadiation{ 0x22350 };
		inline constexpr REL::Offset AddFollower{ 0x22480 };
		inline constexpr REL::Offset AddFriendHit{ 0x22590 };
		inline constexpr REL::Offset GetFriendHitCount{ 0x22640 };
		inline constexpr REL::Offset RemoveFriendHitsExtra{ 0x22670 };
		inline constexpr REL::Offset RemoveFollower{ 0x22690 };
		inline constexpr REL::Offset GetFollowerExtra{ 0x22700 };
		inline constexpr REL::Offset RemoveFollowerExtra{ 0x22720 };
		inline constexpr REL::Offset SetRefractionPropertyExtra{ 0x22750 };
		inline constexpr REL::Offset GetRefractionPropertyExtra{ 0x22820 };
		inline constexpr REL::Offset SetLastFinishedSequence{ 0x22850 };
		inline constexpr REL::Offset GetLastFinishedSequence{ 0x228F0 };
		inline constexpr REL::Offset RemoveLastFinishedSequence{ 0x22920 };
		inline constexpr REL::Offset SetSavedAnimation{ 0x22940 };
		inline constexpr REL::Offset RemoveSavedAnimation{ 0x22AA0 };
		inline constexpr REL::Offset SetSavedHavokData{ 0x22AC0 };
		inline constexpr REL::Offset RestoreSavedHavokData{ 0x22BC0 };
		inline constexpr REL::Offset RemoveSavedHavokData{ 0x22C20 };
		inline constexpr REL::Offset GetSaveSize{ 0x22C40 };
		inline constexpr REL::Offset SaveGame{ 0x235E0 };
		inline constexpr REL::Offset LoadGame{ 0x24960 };
		inline constexpr REL::Offset InitLoadGame{ 0x26020 };
		inline constexpr REL::Offset FinishInitLoadGame{ 0x26720 };
		inline constexpr REL::Offset Revert{ 0x267D0 };
		inline constexpr REL::Offset RemoveAllSaveableData{ 0x269C0 };
		inline constexpr REL::Offset SaveGame_1{ 0x26A30 };
		inline constexpr REL::Offset LoadGame_1{ 0x28150 };
		inline constexpr REL::Offset InitLoadGame_1{ 0x2CEB0 };
		inline constexpr REL::Offset FinishLoadGame{ 0x2D9E0 };
		inline constexpr REL::Offset Revert_1{ 0x2DAE0 };
		inline constexpr REL::Offset RevertUnsavedExtra{ 0x2DD90 };
		inline constexpr REL::Offset SetHotKey{ 0x2DDE0 };
		inline constexpr REL::Offset GetHotKey{ 0x2DE90 };
		inline constexpr REL::Offset RemoveHotKey{ 0x2DEC0 };
		inline constexpr REL::Offset SetInfoGeneralTopic{ 0x2DEE0 };
		inline constexpr REL::Offset GetInfoGeneralTopic{ 0x2DF90 };
		inline constexpr REL::Offset SetTalkingActorExtra{ 0x2E060 };
		inline constexpr REL::Offset GetTalkingActorExtra{ 0x2E110 };
		inline constexpr REL::Offset SetModelSwap{ 0x2E150 };
		inline constexpr REL::Offset GetModelSwap{ 0x2E250 };
		inline constexpr REL::Offset SetNavMeshPortal{ 0x2E2C0 };
		inline constexpr REL::Offset SetWeaponModSlot{ 0x2E380 };
		inline constexpr REL::Offset GetWeaponModFlags{ 0x2E560 };
		inline constexpr REL::Offset AddFactionChangesExtra{ 0x2E760 };
		inline constexpr REL::Offset GetFactionChangesExtra{ 0x2E800 };
		inline constexpr REL::Offset AddDismembermentExtra{ 0x2E820 };
		inline constexpr REL::Offset GetDismembermentExtra{ 0x2E8C0 };
		inline constexpr REL::Offset RemoveDismembermentExtra{ 0x2E8E0 };
		inline constexpr REL::Offset SetActorCauseExtra{ 0x2E930 };
		inline constexpr REL::Offset SetCombatStyle{ 0x2EA50 };
		inline constexpr REL::Offset GetAmmoExtra{ 0x2EB40 };
		inline constexpr REL::Offset SetAmmoExtra{ 0x2EB60 };
		inline constexpr REL::Offset GetSayToExtra{ 0x2EDE0 };
		inline constexpr REL::Offset SetExtraSayTopicInfoOnceADayExtra{ 0x2EF20 };
		inline constexpr REL::Offset RemoveExtraSayTopicInfoOnceADayExtra{ 0x2F000 };
		inline constexpr REL::Offset SetInWaterZone{ 0x2F030 };
		inline constexpr REL::Offset QWaterZoneMap{ 0x2F1D0 };
		inline constexpr REL::Offset SetIgnoredBySandbox{ 0x2F200 };
		inline constexpr REL::Offset SetPatrolRefInUse{ 0x2F300 };
		inline constexpr REL::Offset GetPatrolRefCanBeUsedBy{ 0x2F3D0 };
		inline constexpr REL::Offset GetOrCreateExtraFollowerSwimBreadcrumbs{ 0x2F420 };
	}

	namespace ExtraDecalRefs
	{
		inline constexpr REL::Offset ctor{ 0x33CA0 };
		inline constexpr REL::Offset InitItem{ 0x33DB0 };
	}

	namespace ExtraDismemberedLimbs
	{
		inline constexpr REL::Offset ctor{ 0x30200 };
		inline constexpr REL::Offset Dismembered{ 0x303E0 };
	}

	namespace ExtraDroppedItemList
	{
		inline constexpr REL::Offset ctor{ 0x35950 };
	}

	namespace ExtraEditorID
	{
		inline constexpr REL::Offset ctor{ 0x1C5E0 };
	}

	namespace ExtraEditorRefMoveData
	{
		inline constexpr REL::Offset ctor{ 0x35FA0 };
	}

	namespace ExtraEncounterZone
	{
		inline constexpr REL::Offset ctor{ 0x32E60 };
	}

	namespace ExtraFollowerSwimBreadcrumbs
	{
		inline constexpr REL::Offset ctor{ 0x37C40 };
	}

	namespace ExtraFriendHits
	{
		inline constexpr REL::Offset ctor{ 0x35C40 };
	}

	namespace ExtraGuardedRefData
	{
		inline constexpr REL::Offset ctor{ 0x30F30 };
	}

	namespace ExtraHavok
	{
		inline constexpr REL::Offset ctor{ 0xEDA0 };
	}

	namespace ExtraItemDropper
	{
		inline constexpr REL::Offset ctor{ 0x35920 };
	}

	namespace ExtraLastFinishedSequence
	{
		inline constexpr REL::Offset ctor{ 0x351D0 };
	}

	namespace ExtraLevCreaModifier
	{
		inline constexpr REL::Offset ctor{ 0x35040 };
	}

	namespace ExtraLeveledCreature
	{
		inline constexpr REL::Offset ctor{ 0x311F0 };
	}

	namespace ExtraLight
	{
		inline constexpr REL::Offset ctor{ 0x308F0 };
	}

	namespace ExtraLitWaterRefs
	{
		inline constexpr REL::Offset ctor{ 0x11D20 };
		inline constexpr REL::Offset InitItem{ 0x34050 };
	}

	namespace ExtraLock
	{
		inline constexpr REL::Offset ctor{ 0x30C70 };
		inline constexpr REL::Offset UnLockDoor{ 0x117360 };
	}

	namespace ExtraMerchantContainer
	{
		inline constexpr REL::Offset ctor{ 0x34FC0 };
	}

	namespace ExtraModdingItem
	{
		inline constexpr REL::Offset ctor{ 0x2E650 };
	}

	namespace ExtraMultiBound
	{
		inline constexpr REL::Offset ctor{ 0x35690 };
	}

	namespace ExtraNavMeshPortal
	{
		inline constexpr REL::Offset ctor{ 0x16AD0 };
	}

	namespace ExtraOcclusionPlane
	{
		inline constexpr REL::Offset ctor{ 0x357A0 };
	}

	namespace ExtraOpenCloseActivateRef
	{
		inline constexpr REL::Offset ctor{ 0x1E750 };
	}

	namespace ExtraPackageStartLocation
	{
		inline constexpr REL::Offset ctor{ 0x32650 };
		inline constexpr REL::Offset ctor_1{ 0x326C0 };
	}

	namespace ExtraPatrolRefInUseData
	{
		inline constexpr REL::Offset ctor{ 0x379A0 };
		inline constexpr REL::Offset GetCanBeUsedBy{ 0x37AB0 };
	}

	namespace ExtraPlayerCrimeList
	{
		inline constexpr REL::Offset ctor{ 0x329D0 };
		inline constexpr REL::Offset ctor_1{ 0x32AA0 };
	}

	namespace ExtraPortal
	{
		inline constexpr REL::Offset ctor{ 0x35820 };
	}

	namespace ExtraPrimitive
	{
		inline constexpr REL::Offset ctor{ 0x1FAF0 };
	}

	namespace ExtraRadioData
	{
		inline constexpr REL::Offset ctor{ 0x183E0 };
	}

	namespace ExtraRagDollData
	{
		inline constexpr REL::Offset ctor{ 0x32CB0 };
	}

	namespace ExtraReferencePointer
	{
		inline constexpr REL::Offset ctor{ 0x327E0 };
	}

	namespace ExtraReflectedRefs
	{
		inline constexpr REL::Offset ctor{ 0x11B40 };
	}

	namespace ExtraReflectorRefs
	{
		inline constexpr REL::Offset InitItem{ 0x33ED0 };
	}

	namespace ExtraRegionList
	{
		inline constexpr REL::Offset ctor{ 0xEF00 };
	}

	namespace ExtraRoom
	{
		inline constexpr REL::Offset ctor{ 0x358A0 };
	}

	namespace ExtraSayToTopicInfo
	{
		inline constexpr REL::Offset ctor{ 0x37690 };
		inline constexpr REL::Offset ctor_1{ 0x376E0 };
	}

	namespace ExtraSayTopicInfoOnceADay
	{
		inline constexpr REL::Offset ctor{ 0x37440 };
		inline constexpr REL::Offset ctor_1{ 0x37510 };
	}

	namespace ExtraScript
	{
		inline constexpr REL::Offset ctor{ 0x32000 };
	}

	namespace ExtraSecuritronFace
	{
		inline constexpr REL::Offset GetPersonality{ 0x28070 };
		inline constexpr REL::Offset GetMood{ 0x280B0 };
		inline constexpr REL::Offset ctor{ 0x2CCC0 };
		inline constexpr REL::Offset ApplyFace{ 0x37F90 };
		inline constexpr REL::Offset SetPersonality{ 0x38260 };
		inline constexpr REL::Offset SetMood{ 0x38280 };
	}

	namespace ExtraSound
	{
		inline constexpr REL::Offset ctor{ 0x360C0 };
	}

	namespace ExtraSpecialRenderFlags
	{
		inline constexpr REL::Offset ctor{ 0x11E40 };
	}

	namespace ExtraStartingPosition
	{
		inline constexpr REL::Offset ctor{ 0x30780 };
	}

	namespace ExtraStartingWorldOrCell
	{
		inline constexpr REL::Offset ctor{ 0x308C0 };
	}

	namespace ExtraTalkingActor
	{
		inline constexpr REL::Offset CreateLocalMobileObjectCopy{ 0x36780 };
		inline constexpr REL::Offset ctor{ 0x36B20 };
	}

	namespace ExtraTerminalState
	{
		inline constexpr REL::Offset ctor{ 0x1BEF0 };
	}

	namespace ExtraWaterLightRefs
	{
		inline constexpr REL::Offset ctor{ 0x11C80 };
	}

	namespace ExtraWaterZoneMap
	{
		inline constexpr REL::Offset ctor{ 0x37750 };
	}

	namespace ExtraWeaponAttackSound
	{
		inline constexpr REL::Offset ctor{ 0x36540 };
	}

	namespace ExtraWeaponIdleSound
	{
		inline constexpr REL::Offset ctor{ 0x36420 };
	}

	namespace ExtraWeaponModFlags
	{
		inline constexpr REL::Offset ctor{ 0x2CC40 };
	}

	namespace FILE_TEX_DATA
	{
		inline constexpr REL::Offset Endian{ 0x135A60 };
	}

	namespace FILE_TEX_VERT_DATA
	{
		inline constexpr REL::Offset Endian{ 0x135AA0 };
	}

	namespace FOCollisionListener
	{
		inline constexpr REL::Offset Instance{ 0x53720 };
		inline constexpr REL::Offset ctor{ 0x223430 };
		inline constexpr REL::Offset DealObjectDamage{ 0x223640 };
		inline constexpr REL::Offset StoreObjectDamage{ 0x2238B0 };
		inline constexpr REL::Offset pInstance{ 0xDCC224 };
	}

	namespace FOHUDEffectManager
	{
		inline constexpr REL::Offset ctor{ 0x3F7610 };
	}

	namespace FOIslandActivationListener
	{
		inline constexpr REL::Offset ctor{ 0x224150 };
		inline constexpr REL::Offset AddToWorld{ 0x2242A0 };
		inline constexpr REL::Offset RemoveFromWorld{ 0x2242F0 };
	}

	namespace FOLEY_SOUND
	{
		inline constexpr REL::Offset ctor{ 0x113D60 };
	}

	namespace FOPipboyManager
	{
		inline constexpr REL::Offset ResetColors{ 0x3F7F40 };
		inline constexpr REL::Offset UpdateKnobs{ 0x3F8320 };
		inline constexpr REL::Offset MoveKnob{ 0x3F8610 };
		inline constexpr REL::Offset TriggerRandomEffect{ 0x3F8A80 };
		inline constexpr REL::Offset InitButtons{ 0x3F9070 };
		inline constexpr REL::Offset InitLight{ 0x3F9840 };
		inline constexpr REL::Offset InitKnobs{ 0x3F99D0 };
		inline constexpr REL::Offset ActivateButton{ 0x3FA010 };
		inline constexpr REL::Offset SetTabKnobPosition{ 0x3FA0F0 };
		inline constexpr REL::Offset UpdateIdleAnims{ 0x3FA220 };
		inline constexpr REL::Offset ShowPipboyLightEffect{ 0x3FA310 };
		inline constexpr REL::Offset UpdateLightEffect{ 0x3FA540 };
		inline constexpr REL::Offset FadeLight{ 0x3FA810 };
		inline constexpr REL::Offset SetRefractive{ 0x3FA8D0 };
	}

	namespace FORM
	{
		inline constexpr REL::Offset Endian{ 0x70650 };
	}

	namespace FORenderedMenu
	{
		inline constexpr REL::Offset SetScreenLightFlickerIntensity{ 0x3F99B0 };
		inline constexpr REL::Offset ctor{ 0x3FAA20 };
		inline constexpr REL::Offset SetScreenTexture{ 0x3FAE70 };
		inline constexpr REL::Offset TriggerBurst{ 0x3FB150 };
		inline constexpr REL::Offset PrepareGeometry{ 0x3FC2D0 };
		inline constexpr REL::Offset CreateMenuLight{ 0x3FC400 };
		inline constexpr REL::Offset HidePopupMenus{ 0x3FC790 };
		inline constexpr REL::Offset UnhidePopupMenus{ 0x3FC8D0 };
		inline constexpr REL::Offset GetCamera{ 0x4B6200 };
		inline constexpr REL::Offset SetScreenLightBaseIntensity{ 0x565580 };
		inline constexpr REL::Offset GetInitialized{ 0x574D90 };
	}

	namespace FORenderedMenuRaceSex
	{
		inline constexpr REL::Offset InitLight{ 0x3FE560 };
		inline constexpr REL::Offset LightButton{ 0x3FE950 };
	}

	namespace FORenderedTerminal
	{
		inline constexpr REL::Offset ctor{ 0x305FE0 };
		inline constexpr REL::Offset InitLight{ 0x3FF960 };
		inline constexpr REL::Offset FadeOut{ 0x3FFAF0 };
		inline constexpr REL::Offset PlayShutdownSound{ 0x3FFE40 };
	}

	namespace FOVATSEffectManager
	{
		inline constexpr REL::Offset SetEffectMode{ 0x4AC20 };
		inline constexpr REL::Offset ctor{ 0x3FFEC0 };
		inline constexpr REL::Offset dtor{ 0x4001B0 };
		inline constexpr REL::Offset UpdatePulse{ 0x4007B0 };
		inline constexpr REL::Offset UpdateTargetPulse{ 0x400820 };
		inline constexpr REL::Offset UpdateDistort{ 0x400870 };
		inline constexpr REL::Offset UpdateScan{ 0x400900 };
		inline constexpr REL::Offset SetTarget{ 0x400AC0 };
		inline constexpr REL::Offset SetMultiTarget{ 0x400D50 };
		inline constexpr REL::Offset SetSelectedMultiTarget{ 0x400E50 };
		inline constexpr REL::Offset ClearMultiTargets{ 0x400ED0 };
		inline constexpr REL::Offset DrawTargetToTexture{ 0x400F30 };
		inline constexpr REL::Offset DrawTarget{ 0x401420 };
		inline constexpr REL::Offset DrawSingleTarget{ 0x401450 };
		inline constexpr REL::Offset DrawMultipleTargets{ 0x401880 };
		inline constexpr REL::Offset ShutdownEffect{ 0x4019D0 };
		inline constexpr REL::Offset PrepareEffect{ 0x401A60 };
		inline constexpr REL::Offset PrepareScanEffect{ 0x401AD0 };
		inline constexpr REL::Offset PrepareHighlightEffect{ 0x401BB0 };
		inline constexpr REL::Offset IsolateBodyPart{ 0x401DA0 };
		inline constexpr REL::Offset EnableBodyPartOnSkinInstance{ 0x402220 };
		inline constexpr REL::Offset ShowBipedObjectOnActor{ 0x402260 };
		inline constexpr REL::Offset RestoreBodyParts{ 0x4022C0 };
		inline constexpr REL::Offset ClearQueries{ 0x4026B0 };
	}

	namespace FUNCTION_DATA
	{
		inline constexpr REL::Offset Endian{ 0x281110 };
	}

	namespace FaceGenNpcData
	{
		inline constexpr REL::Offset ctor{ 0x1DD590 };
		inline constexpr REL::Offset dtor{ 0x1DD6F0 };
	}

	namespace FaderManager
	{
		inline constexpr REL::Offset AddRoot{ 0x3006C0 };
		inline constexpr REL::Offset CreateFader{ 0x300960 };
		inline constexpr REL::Offset RemoveFader{ 0x3010E0 };
		inline constexpr REL::Offset UpdateFaders{ 0x3011D0 };
		inline constexpr REL::Offset IsFaderVisible{ 0x301450 };
	}

	namespace FalloutRadio_FORadioReceiver
	{
		inline constexpr REL::Offset dtor{ 0x4321E0 };
		inline constexpr REL::Offset ctor{ 0x4327D0 };
		inline constexpr REL::Offset SaveGame{ 0x435F10 };
		inline constexpr REL::Offset LoadGame{ 0x435F80 };
		inline constexpr REL::Offset InitLoadGame{ 0x435FE0 };
	}

	namespace FalloutRadio_FORadioStation
	{
		inline constexpr REL::Offset SaveGame{ 0x436600 };
		inline constexpr REL::Offset LoadGame{ 0x436630 };
		inline constexpr REL::Offset InitLoadGame{ 0x436660 };
	}

	namespace FalloutRadio_StationState
	{
		inline constexpr REL::Offset IsContBroadcast{ 0x433040 };
		inline constexpr REL::Offset SetTransmitting{ 0x4330B0 };
		inline constexpr REL::Offset SetContBroadcast{ 0x433100 };
		inline constexpr REL::Offset SaveGame{ 0x436110 };
		inline constexpr REL::Offset LoadGame{ 0x436240 };
		inline constexpr REL::Offset FinishLoadGame{ 0x436470 };
	}

	namespace FanGenCtlsGrpC
	{
		inline constexpr REL::Offset ctor{ 0x251450 };
		inline constexpr REL::Offset readFromFile{ 0x6AAF10 };
		inline constexpr REL::Offset getAttribute{ 0x6ABDB0 };
		inline constexpr REL::Offset setAttribute{ 0x6ABF30 };
		inline constexpr REL::Offset setAttributes{ 0x6AC170 };
		inline constexpr REL::Offset getCaricature{ 0x6AC3F0 };
		inline constexpr REL::Offset setCaricature{ 0x6AC820 };
		inline constexpr REL::Offset getRace{ 0x6ACDB0 };
		inline constexpr REL::Offset setRace{ 0x6ACF40 };
		inline constexpr REL::Offset random{ 0x6AD140 };
		inline constexpr REL::Offset reflect{ 0x6AD890 };
		inline constexpr REL::Offset tween{ 0x6ADAC0 };
	}

	namespace FanLinCtlS
	{
		inline constexpr REL::Offset dtor{ 0x2593E0 };
	}

	namespace FastModifierCollection
	{
		inline constexpr REL::Offset dtor{ 0x537F40 };
	}

	namespace FastNavMeshEdgeHandle
	{
		inline constexpr REL::Offset ctor{ 0x2C4350 };
	}

	namespace FastNavMeshEdgeLocation
	{
		inline constexpr REL::Offset ctor{ 0x2A0480 };
		inline constexpr REL::Offset ctor_1{ 0x2A0C10 };
		inline constexpr REL::Offset ctor_2{ 0x2A0E50 };
		inline constexpr REL::Offset operator_call{ 0x2CF900 };
	}

	namespace FastNavMeshEdgeLocationProxy
	{
		inline constexpr REL::Offset ctor{ 0x2D4550 };
	}

	namespace FastNavMeshVertHandle
	{
		inline constexpr REL::Offset ctor{ 0x29A660 };
	}

	namespace FileFinder
	{
		inline constexpr REL::Offset Locate{ 0x56A20 };
		inline constexpr REL::Offset GetFile{ 0x6FDF20 };
		inline constexpr REL::Offset Exist{ 0x6FE0D0 };
	}

	namespace FindObjectIterator
	{
		inline constexpr REL::Offset ctor{ 0x1271F0 };
		inline constexpr REL::Offset ctor_1{ 0x1272D0 };
	}

	namespace FindTriangleForLocationFilter
	{
		inline constexpr REL::Offset ctor{ 0x2C8DF0 };
	}

	namespace FlameProjectile
	{
		inline constexpr REL::Offset FindFlameConeAngle{ 0x5B3DA0 };
	}

	namespace FleePackage
	{
		inline constexpr REL::Offset SetRefFleeTo{ 0x594EF0 };
		inline constexpr REL::Offset ctor{ 0x5F0E00 };
		inline constexpr REL::Offset FindTeleportDoor{ 0x5F1140 };
		inline constexpr REL::Offset GetClosestAvoidedRef{ 0x5F1210 };
		inline constexpr REL::Offset AddAvoidedRef{ 0x5F1310 };
		inline constexpr REL::Offset RemoveAvoidedRef{ 0x5F1350 };
		inline constexpr REL::Offset CreateAvoidNodeArray{ 0x5F1440 };
		inline constexpr REL::Offset EvaluateReferenceforTeleportDoor{ 0x5F1600 };
		inline constexpr REL::Offset UpdateAvoidedRefList{ 0x5F1830 };
	}

	namespace FollowerBarks_FollowerBarkEntry
	{
		inline constexpr REL::Offset BuildBarkEntry{ 0x4D6000 };
		inline constexpr REL::Offset Trigger{ 0x4D6050 };
	}

	namespace Font
	{
		inline constexpr REL::Offset GetBaseLine{ 0x1BD580 };
		inline constexpr REL::Offset ctor{ 0x612020 };
		inline constexpr REL::Offset PrepText{ 0x612FB0 };
		inline constexpr REL::Offset MakeTriShape{ 0x614A20 };
		inline constexpr REL::Offset MakeIconsTriShape{ 0x614DA0 };
		inline constexpr REL::Offset Load{ 0x615320 };
	}

	namespace Font_TextData
	{
		inline constexpr REL::Offset ctor{ 0x359330 };
	}

	namespace FontManager
	{
		inline constexpr REL::Offset Instance{ 0x1BD5B0 };
		inline constexpr REL::Offset GetFont{ 0x1BD5C0 };
		inline constexpr REL::Offset ctor{ 0x6168B0 };
		inline constexpr REL::Offset CollectTo{ 0x616EA0 };
		inline constexpr REL::Offset PrepHypertext{ 0x617390 };
		inline constexpr REL::Offset PrepText{ 0x618A30 };
		inline constexpr REL::Offset CreateText{ 0x618F00 };
		inline constexpr REL::Offset CalculateStringDimensions{ 0x61B020 };
	}

	namespace FootIK_DATA
	{
		inline constexpr REL::Offset Copy{ 0x1ECB30 };
		inline constexpr REL::Offset ctor{ 0x1ED850 };
	}

	namespace FormComponentCollection
	{
		inline constexpr REL::Offset ctor{ 0x7C050 };
		inline constexpr REL::Offset InitFormComponentArray{ 0x7C070 };
		inline constexpr REL::Offset ClearFormComponentArray{ 0x7C540 };
	}

	namespace FurnitureMark
	{
		inline constexpr REL::Offset QNumber{ 0x1094B0 };
		inline constexpr REL::Offset ctor{ 0x109890 };
		inline constexpr REL::Offset GetHeading{ 0x168650 };
		inline constexpr REL::Offset SetNumber{ 0x168AB0 };
		inline constexpr REL::Offset SetPosition{ 0x58DDD0 };
		inline constexpr REL::Offset SetHeading{ 0x854550 };
		inline constexpr REL::Offset LoadBinary{ 0x8545D0 };
		inline constexpr REL::Offset SaveBinary{ 0x854660 };
	}

	namespace FutBinaryFileC
	{
		inline constexpr REL::Offset ctor{ 0x6C3DF0 };
		inline constexpr REL::Offset isCorrectFileId{ 0x6C3FE0 };
		inline constexpr REL::Offset openForUpdate{ 0x6C4B00 };
		inline constexpr REL::Offset openForAppend{ 0x6C4F00 };
		inline constexpr REL::Offset writeHeader{ 0x6C5220 };
		inline constexpr REL::Offset readHeader{ 0x6C52B0 };
		inline constexpr REL::Offset close{ 0x6C5430 };
	}

	namespace GameSettingCollection
	{
		inline constexpr REL::Offset ctor{ 0x4B10 };
		inline constexpr REL::Offset pSingleton{ 0xDC8048 };
	}

	namespace GeometryDecalShader
	{
		inline constexpr REL::Offset LoadShaders{ 0x7CB4D0 };
	}

	namespace GrabIK_DATA
	{
		inline constexpr REL::Offset Copy{ 0x1ED360 };
		inline constexpr REL::Offset ctor{ 0x1ED980 };
	}

	namespace GridArray
	{
		inline constexpr REL::Offset ctor{ 0xB9E00 };
	}

	namespace GridCellArray
	{
		inline constexpr REL::Offset SetRecreateCanopyShadowMaskTexture{ 0x51520 };
		inline constexpr REL::Offset ctor{ 0xBA280 };
		inline constexpr REL::Offset Get{ 0xBA490 };
		inline constexpr REL::Offset GetAttached{ 0xBA5A0 };
		inline constexpr REL::Offset AttachAllLand3D{ 0xBA7D0 };
		inline constexpr REL::Offset UpdateDistantLandBlending{ 0xBA8D0 };
		inline constexpr REL::Offset AttachToWorld{ 0xBA960 };
		inline constexpr REL::Offset ShowLandBorders{ 0xBACA0 };
		inline constexpr REL::Offset ToggleCollisionGeometry{ 0xBAD40 };
		inline constexpr REL::Offset ShowPrimitives{ 0xBAE20 };
		inline constexpr REL::Offset ClearCanopyShadowMaskTexture{ 0xBAEC0 };
		inline constexpr REL::Offset RecreateCanopyShadowMaskTexture{ 0xBAF10 };
	}

	namespace GuardActorPackageData
	{
		inline constexpr REL::Offset ResetWarningTimer{ 0x502680 };
		inline constexpr REL::Offset ctor{ 0x5F27A0 };
	}

	namespace HUDMainMenu
	{
		inline constexpr REL::Offset GetMenuMode{ 0x58030 };
		inline constexpr REL::Offset ForceObjectiveReminders{ 0x1CFCB0 };
		inline constexpr REL::Offset ctor{ 0x36BB40 };
		inline constexpr REL::Offset Create{ 0x36BFE0 };
		inline constexpr REL::Offset UpdateEnemyHealth{ 0x3701E0 };
		inline constexpr REL::Offset UpdateActorValue{ 0x371540 };
		inline constexpr REL::Offset SetMenuMode{ 0x371700 };
		inline constexpr REL::Offset UpdateWeaponStatus{ 0x3721C0 };
		inline constexpr REL::Offset HeadingBetweenLocations{ 0x372840 };
		inline constexpr REL::Offset SetRegionText{ 0x3728F0 };
		inline constexpr REL::Offset SetLocationText{ 0x372AA0 };
		inline constexpr REL::Offset SetWorldspaceText{ 0x372C30 };
		inline constexpr REL::Offset SetTargetType{ 0x372D10 };
		inline constexpr REL::Offset Revert{ 0x373050 };
		inline constexpr REL::Offset SetEnemyActor{ 0x373190 };
		inline constexpr REL::Offset UpdateSneak{ 0x3732D0 };
		inline constexpr REL::Offset IsQuestNameShowing{ 0x3735D0 };
		inline constexpr REL::Offset AreObjectivesShowing{ 0x373650 };
		inline constexpr REL::Offset DisplayQuestReminder{ 0x3736D0 };
		inline constexpr REL::Offset UpdateRadiationMeterConditions{ 0x3737C0 };
		inline constexpr REL::Offset SetRadiationLevel{ 0x3738C0 };
		inline constexpr REL::Offset UpdateStatusModeUI{ 0x3739F0 };
		inline constexpr REL::Offset StatusModeTileEffects{ 0x373E90 };
		inline constexpr REL::Offset UpdateRadiationMeter{ 0x374090 };
		inline constexpr REL::Offset SetBrightness{ 0x374800 };
		inline constexpr REL::Offset UpdateMeter{ 0x3748B0 };
		inline constexpr REL::Offset UpdateMeter_1{ 0x374B00 };
		inline constexpr REL::Offset ShowSubtitle{ 0x374FD0 };
		inline constexpr REL::Offset GetNextSubtitle{ 0x375230 };
		inline constexpr REL::Offset ShowMessage{ 0x375380 };
		inline constexpr REL::Offset HideSubtitle{ 0x375670 };
		inline constexpr REL::Offset HideMessage{ 0x3756E0 };
		inline constexpr REL::Offset ClearAllSubtitlesAndMessages{ 0x375920 };
		inline constexpr REL::Offset SetInfoForRef{ 0x375A00 };
		inline constexpr REL::Offset DisplayWaterRadiation{ 0x378990 };
		inline constexpr REL::Offset DisplayWaterHealth{ 0x378A90 };
		inline constexpr REL::Offset RefreshInfoForRef{ 0x378B10 };
		inline constexpr REL::Offset GetCompassAngle{ 0x378B80 };
		inline constexpr REL::Offset UpdateCompass{ 0x379070 };
		inline constexpr REL::Offset ShowQuestName{ 0x37A480 };
		inline constexpr REL::Offset ShowQuestObjective{ 0x37A5B0 };
		inline constexpr REL::Offset UpdateQuestText{ 0x37A650 };
		inline constexpr REL::Offset SortNPCTicks{ 0x37B300 };
		inline constexpr REL::Offset HandleReminderFade{ 0x37B430 };
		inline constexpr REL::Offset HandleCinematicFade{ 0x37C170 };
		inline constexpr REL::Offset UpdateXPMeter{ 0x37C4E0 };
		inline constexpr REL::Offset UpdateHotkeysWheel{ 0x37DA60 };
		inline constexpr REL::Offset ResetHUDOpacity{ 0x37E430 };
		inline constexpr REL::Offset UpdateBreathMeter{ 0x37E4F0 };
		inline constexpr REL::Offset UpdateExplosiveIndicator{ 0x37E750 };
		inline constexpr REL::Offset ShowCrippledGuy{ 0x37EAF0 };
		inline constexpr REL::Offset Create3DCamera{ 0x37EE50 };
		inline constexpr REL::Offset Draw3DElements{ 0x37F0D0 };
		inline constexpr REL::Offset ClearGunScope{ 0x37F270 };
		inline constexpr REL::Offset InitGunScope{ 0x37F2F0 };
		inline constexpr REL::Offset SetGunScopeVisible{ 0x37F3C0 };
		inline constexpr REL::Offset ShowDDTIcon{ 0x37F420 };
		inline constexpr REL::Offset ShowEnemyDDTIcon{ 0x37F490 };
		inline constexpr REL::Offset KillQuestName{ 0x37F500 };
		inline constexpr REL::Offset KillQuestObjectives{ 0x37F5E0 };
		inline constexpr REL::Offset UpdateShake{ 0x37F700 };
		inline constexpr REL::Offset ShiftConditionTileOver{ 0x37F890 };
	}

	namespace HackingMenu
	{
		inline constexpr REL::Offset ctor{ 0x3654F0 };
		inline constexpr REL::Offset Create{ 0x365B80 };
		inline constexpr REL::Offset Close{ 0x366AA0 };
		inline constexpr REL::Offset FindTile{ 0x367BB0 };
		inline constexpr REL::Offset ScrollLog{ 0x367EF0 };
		inline constexpr REL::Offset ClearEntry{ 0x368020 };
		inline constexpr REL::Offset Prepare{ 0x368070 };
		inline constexpr REL::Offset MakeHexString{ 0x368970 };
		inline constexpr REL::Offset CommonPositions{ 0x368A10 };
		inline constexpr REL::Offset MakePasswordFile{ 0x368AA0 };
		inline constexpr REL::Offset GetGuaranteedPossible{ 0x369520 };
		inline constexpr REL::Offset GetCharHit{ 0x369700 };
		inline constexpr REL::Offset DoIntro{ 0x369830 };
		inline constexpr REL::Offset DoInGame{ 0x369B50 };
		inline constexpr REL::Offset DoShutdown{ 0x36A3F0 };
		inline constexpr REL::Offset AccessTerminal{ 0x36A510 };
		inline constexpr REL::Offset TransitionToComputersMenu{ 0x36A540 };
		inline constexpr REL::Offset GetGarbageString{ 0x36A670 };
		inline constexpr REL::Offset RemoveDud{ 0x36A730 };
		inline constexpr REL::Offset FlashCursor{ 0x36A9D0 };
		inline constexpr REL::Offset UpdateCursorPos{ 0x36AB40 };
		inline constexpr REL::Offset UpdateScrollingCursor{ 0x36AC10 };
		inline constexpr REL::Offset MakeGuessBlock{ 0x36AD50 };
	}

	namespace HackingMenu_Grid
	{
		inline constexpr REL::Offset dtor{ 0x3687D0 };
		inline constexpr REL::Offset ctor{ 0x368810 };
		inline constexpr REL::Offset operator_call{ 0x36B0C0 };
	}

	namespace HackingMenu_GridRow
	{
		inline constexpr REL::Offset operator_call{ 0x36B200 };
	}

	namespace HackingMenu_TerminalIO
	{
		inline constexpr REL::Offset ctor{ 0x36B300 };
	}

	namespace HackingMenu_WordList
	{
		inline constexpr REL::Offset Add{ 0x36B240 };
	}

	namespace HavokError
	{
		inline constexpr REL::Offset SetRootDir{ 0x224D70 };
		inline constexpr REL::Offset ctor{ 0x224F90 };
		inline constexpr REL::Offset isReportEnabled{ 0x225C50 };
	}

	namespace HavokFileStreambufReader
	{
		inline constexpr REL::Offset ctor{ 0x226000 };
	}

	namespace HavokFileStreambufWriter
	{
		inline constexpr REL::Offset ctor{ 0x2261A0 };
	}

	namespace HavokSaveData
	{
		inline constexpr REL::Offset ctor{ 0x15EBF0 };
	}

	namespace HavokStreambufFactory
	{
		inline constexpr REL::Offset ctor{ 0x224DE0 };
	}

	namespace HighActorCuller
	{
		inline constexpr REL::Offset ctor{ 0x472E00 };
		inline constexpr REL::Offset Run{ 0x4D6F50 };
	}

	namespace HighProcess
	{
		inline constexpr REL::Offset SetSkippedLastUpdate{ 0x4C8FD0 };
		inline constexpr REL::Offset ctor{ 0x4D7510 };
		inline constexpr REL::Offset InitBoneLOD{ 0x4DA1A0 };
		inline constexpr REL::Offset ProcessWarning{ 0x4DB240 };
		inline constexpr REL::Offset ProcessCreateFollow{ 0x4DB4F0 };
		inline constexpr REL::Offset ProcessAlertBehavior{ 0x4DD8E0 };
		inline constexpr REL::Offset ProcessSearchforTarget{ 0x4DD980 };
		inline constexpr REL::Offset ProcessSurface{ 0x4DF060 };
		inline constexpr REL::Offset ShouldWaitForEscortTarget{ 0x4DF1E0 };
		inline constexpr REL::Offset ComputeRandomPoint{ 0x4E3DC0 };
		inline constexpr REL::Offset FindDoorsToSendYellAlarm{ 0x4E3EA0 };
		inline constexpr REL::Offset SetupPhantom{ 0x4E4E50 };
		inline constexpr REL::Offset DetectDoorsForPathing{ 0x4E51B0 };
		inline constexpr REL::Offset EvaluateBoneLod{ 0x4E5730 };
		inline constexpr REL::Offset ProcessBackUp{ 0x4E7C70 };
		inline constexpr REL::Offset ProcessSurfaceOneHour{ 0x4EEAC0 };
		inline constexpr REL::Offset ProcessTakeBackItem{ 0x4F21F0 };
		inline constexpr REL::Offset ProcessEscortOneHour{ 0x4F2610 };
		inline constexpr REL::Offset ProcessFollowOneHour{ 0x4F31D0 };
		inline constexpr REL::Offset ProcessWanderOneHour{ 0x4F36C0 };
		inline constexpr REL::Offset ReconcileDetectionData{ 0x4F63E0 };
		inline constexpr REL::Offset AimAtTarget{ 0x4F74C0 };
		inline constexpr REL::Offset FadeIn{ 0x4FE8F0 };
		inline constexpr REL::Offset FadeOutAndMove{ 0x4FE9E0 };
		inline constexpr REL::Offset FadeAndDelete{ 0x4FEAB0 };
		inline constexpr REL::Offset FadeAndDisable{ 0x4FEB60 };
		inline constexpr REL::Offset FadeUpdate{ 0x4FEC10 };
		inline constexpr REL::Offset SkipFadeIn{ 0x4FF030 };
		inline constexpr REL::Offset FindSpecialIdletoPlay{ 0x4FF0B0 };
		inline constexpr REL::Offset DetectActor{ 0x4FF350 };
		inline constexpr REL::Offset CheckTargetCombatDetectionState{ 0x4FFC30 };
		inline constexpr REL::Offset ShouldRunCombatDetection{ 0x4FFD10 };
		inline constexpr REL::Offset ReactToCombatSituation{ 0x4FFE50 };
		inline constexpr REL::Offset OnNewHeadTrackTarget{ 0x5014D0 };
		inline constexpr REL::Offset UpdateHeadTrackTargets{ 0x501550 };
		inline constexpr REL::Offset SayGoodBye{ 0x501740 };
		inline constexpr REL::Offset ProcessGuardInit{ 0x502640 };
		inline constexpr REL::Offset ProcessGuardIdle{ 0x5026C0 };
		inline constexpr REL::Offset ProcessGuardWarn{ 0x502BD0 };
		inline constexpr REL::Offset ProcessGuardWaitToAttack{ 0x502C80 };
		inline constexpr REL::Offset FireAtObject{ 0x5037E0 };
		inline constexpr REL::Offset AddAvoidPathingArea{ 0x5042A0 };
	}

	namespace HitCaster
	{
		inline constexpr REL::Offset Init{ 0x2269A0 };
		inline constexpr REL::Offset CastShape{ 0x226B30 };
		inline constexpr REL::Offset SetShapeGroup{ 0x226C50 };
		inline constexpr REL::Offset Add{ 0x226D20 };
		inline constexpr REL::Offset GetInstance{ 0x226DD0 };
	}

	namespace HitData
	{
		inline constexpr REL::Offset IsFlagSet{ 0x18CBA0 };
		inline constexpr REL::Offset IncRefCount{ 0x47ADF0 };
		inline constexpr REL::Offset DecRefCount{ 0x47CEA0 };
		inline constexpr REL::Offset ctor{ 0x5B4D90 };
		inline constexpr REL::Offset InitializeHitData{ 0x5B5050 };
		inline constexpr REL::Offset InitializeHitData_1{ 0x5B5120 };
		inline constexpr REL::Offset InitializeHitData_2{ 0x5B5170 };
		inline constexpr REL::Offset InitializeHitData_3{ 0x5B5650 };
		inline constexpr REL::Offset InitializeHitData_4{ 0x5B5720 };
		inline constexpr REL::Offset InitializeExplosionData{ 0x5B5770 };
		inline constexpr REL::Offset InitializeImpactData{ 0x5B58D0 };
		inline constexpr REL::Offset ReduceDamage{ 0x5B5A30 };
		inline constexpr REL::Offset SetTargetedLimb{ 0x5B6620 };
		inline constexpr REL::Offset CheckCriticalStrike{ 0x5B7060 };
		inline constexpr REL::Offset DetermineOutcome{ 0x5B73D0 };
	}

	namespace HotKeysWheel
	{
		inline constexpr REL::Offset dtor{ 0x301520 };
		inline constexpr REL::Offset Initialize{ 0x301610 };
		inline constexpr REL::Offset GetVisible{ 0x301740 };
		inline constexpr REL::Offset SetVisible{ 0x301760 };
		inline constexpr REL::Offset UpdateHotkeyList{ 0x3017B0 };
		inline constexpr REL::Offset SetHotkeyItem{ 0x3019E0 };
		inline constexpr REL::Offset MoveHighlight{ 0x301BD0 };
		inline constexpr REL::Offset HighlightHotkey{ 0x301E00 };
		inline constexpr REL::Offset UseHotkeyItem{ 0x301E80 };
		inline constexpr REL::Offset IsDPadPressed{ 0x302140 };
	}

	namespace IBSAnimNoteReceiver
	{
		inline constexpr REL::Offset ctor{ 0x17A9D0 };
	}

	namespace IDLE_ANIM_ROOT
	{
		inline constexpr REL::Offset ctor{ 0x1FF890 };
		inline constexpr REL::Offset AddRootFilenameList{ 0x1FF950 };
		inline constexpr REL::Offset dtor{ 0x1FFFC0 };
	}

	namespace IDLE_DATA
	{
		inline constexpr REL::Offset Endian{ 0x1FEA20 };
	}

	namespace INIPrefSetting
	{
		inline constexpr REL::Offset ctor{ 0xDE370 };
		inline constexpr REL::Offset ctor_1{ 0x309F00 };
	}

	namespace INIPrefSettingCollection
	{
		inline constexpr REL::Offset ctor{ 0xDE530 };
	}

	namespace INISettingCollection
	{
		inline constexpr REL::Offset ctor{ 0x4F600 };
		inline constexpr REL::Offset MainKey{ 0x843DA0 };
	}

	namespace INTERIOR_DATA
	{
		inline constexpr REL::Offset Endian{ 0x126790 };
	}

	namespace IOManager
	{
		inline constexpr REL::Offset LoadAllQueuedPriorities{ 0x56520 };
		inline constexpr REL::Offset ctor{ 0x83DA50 };
		inline constexpr REL::Offset RequeuePrioritiesToNewPriority{ 0x83E1B0 };
		inline constexpr REL::Offset Pause{ 0x83E310 };
		inline constexpr REL::Offset Resume{ 0x83E340 };
	}

	namespace IOTask
	{
		inline constexpr REL::Offset GetIOTaskPriority{ 0x3CC60 };
		inline constexpr REL::Offset GetPriority{ 0x3CC80 };
		inline constexpr REL::Offset AddToPostProcessQueue{ 0x3D690 };
		inline constexpr REL::Offset ctor{ 0x40540 };
	}

	namespace ImageSpaceEffectParam
	{
		inline constexpr REL::Offset ctor{ 0xEBA20 };
	}

	namespace ImageSpaceManager
	{
		inline constexpr REL::Offset GetEffect{ 0xEBBC0 };
		inline constexpr REL::Offset SetMotionBlurConst{ 0x1B9F50 };
		inline constexpr REL::Offset SetMenuBGBlendEnabled{ 0x3123A0 };
		inline constexpr REL::Offset SetMenuBGBlendValue{ 0x3123F0 };
		inline constexpr REL::Offset ApplyRadialBlurParamModifier{ 0x78B000 };
		inline constexpr REL::Offset ApplyDepthOfFieldParamModifier{ 0x78B0D0 };
		inline constexpr REL::Offset ApplyRadialBlurParamModifier_1{ 0x78B760 };
		inline constexpr REL::Offset InitGeometry{ 0x78C170 };
		inline constexpr REL::Offset CreatePartialScreenGeometry{ 0x78C3B0 };
	}

	namespace ImageSpaceModifierInstance
	{
		inline constexpr REL::Offset Stop{ 0x1293F0 };
		inline constexpr REL::Offset ctor{ 0x129540 };
		inline constexpr REL::Offset SetPermanent{ 0x1BBD60 };
		inline constexpr REL::Offset SetStrength{ 0x23F790 };
	}

	namespace ImageSpaceModifierInstanceDRB
	{
		inline constexpr REL::Offset ctor{ 0x12A590 };
	}

	namespace ImageSpaceModifierInstanceForm
	{
		inline constexpr REL::Offset ctor{ 0x129700 };
		inline constexpr REL::Offset Trigger{ 0x1299A0 };
		inline constexpr REL::Offset Stop{ 0x129C90 };
	}

	namespace ImageSpaceModifierInstanceRB
	{
		inline constexpr REL::Offset ctor{ 0x12A290 };
	}

	namespace ImageSpaceModifierInstanceTemp
	{
		inline constexpr REL::Offset ctor{ 0x12A8B0 };
	}

	namespace ImageSpaceShaderParam
	{
		inline constexpr REL::Offset ctor{ 0x78A9E0 };
		inline constexpr REL::Offset InitConstantMap{ 0x78AB10 };
	}

	namespace ImpactSwap
	{
		inline constexpr REL::Offset ctor{ 0x18EFD0 };
		inline constexpr REL::Offset Save{ 0x18F080 };
		inline constexpr REL::Offset Load{ 0x18F180 };
		inline constexpr REL::Offset InitItem{ 0x18F210 };
		inline constexpr REL::Offset Copy{ 0x18F4C0 };
	}

	namespace IngredientItem
	{
		inline constexpr REL::Offset ctor{ 0x98F0 };
	}

	namespace IntSeenData
	{
		inline constexpr REL::Offset ctor{ 0x47A100 };
	}

	namespace Interface
	{
		inline constexpr REL::Offset Init{ 0x302250 };
		inline constexpr REL::Offset InitSecond{ 0x3022C0 };
		inline constexpr REL::Offset Free{ 0x302330 };
		inline constexpr REL::Offset IsInMenuMode{ 0x302360 };
		inline constexpr REL::Offset GetTopMenuID{ 0x3023C0 };
		inline constexpr REL::Offset GetMenuID{ 0x302400 };
		inline constexpr REL::Offset IsTopMenuID{ 0x302450 };
		inline constexpr REL::Offset IsTopMenuFadedIn{ 0x3024E0 };
		inline constexpr REL::Offset GetMenuModeType{ 0x302640 };
		inline constexpr REL::Offset IsMenuIDVisible{ 0x302680 };
		inline constexpr REL::Offset PreIdleStuff{ 0x3027E0 };
		inline constexpr REL::Offset Idle{ 0x302810 };
		inline constexpr REL::Offset PostIdleStuff{ 0x302840 };
		inline constexpr REL::Offset Accumulate{ 0x302870 };
		inline constexpr REL::Offset Click{ 0x3028B0 };
		inline constexpr REL::Offset SwapBuffers{ 0x302960 };
		inline constexpr REL::Offset IsolateElementsOfMenu{ 0x302990 };
		inline constexpr REL::Offset IsolateMenuElements{ 0x302C80 };
		inline constexpr REL::Offset RestoreMenuElements{ 0x302DD0 };
		inline constexpr REL::Offset IsDebugTextVisible{ 0x302FC0 };
		inline constexpr REL::Offset ToggleDebugTextVisible{ 0x303000 };
		inline constexpr REL::Offset UpdateScreenShape{ 0x303100 };
		inline constexpr REL::Offset GetFullHelp{ 0x303150 };
		inline constexpr REL::Offset GetTargetREFR{ 0x303180 };
		inline constexpr REL::Offset GetPickREFR{ 0x303310 };
		inline constexpr REL::Offset SetPickREFR{ 0x303350 };
		inline constexpr REL::Offset GetActivateREFR{ 0x303390 };
		inline constexpr REL::Offset GetTelekinesisREFR{ 0x3033D0 };
		inline constexpr REL::Offset GetActivatePickLocation{ 0x303430 };
		inline constexpr REL::Offset RefreshActivateREFR{ 0x303490 };
		inline constexpr REL::Offset SetPickDistance{ 0x3034C0 };
		inline constexpr REL::Offset ShowMenus{ 0x303500 };
		inline constexpr REL::Offset HideMenus{ 0x303610 };
		inline constexpr REL::Offset EmergencyCloseAllMenusAndBreakStuff{ 0x3037E0 };
		inline constexpr REL::Offset SetMenuSystemVisible{ 0x303810 };
		inline constexpr REL::Offset SetCrosshairTargetType{ 0x303860 };
		inline constexpr REL::Offset SetEnemyActor{ 0x3038B0 };
		inline constexpr REL::Offset ToggleSafeZone{ 0x3038E0 };
		inline constexpr REL::Offset SetFirstChanceTextureRelease{ 0x303920 };
		inline constexpr REL::Offset ForceTextureRelease{ 0x303980 };
		inline constexpr REL::Offset GetControlPushTextFor{ 0x3039B0 };
		inline constexpr REL::Offset IsConsoleVisible{ 0x303D50 };
		inline constexpr REL::Offset CloseConsole{ 0x303DA0 };
		inline constexpr REL::Offset OpenConsole{ 0x303E10 };
		inline constexpr REL::Offset CreateMessageMenu{ 0x303E80 };
		inline constexpr REL::Offset GetMessageMenuResult{ 0x303FA0 };
		inline constexpr REL::Offset DisableMessageMenu{ 0x303FE0 };
		inline constexpr REL::Offset CloseMessageMenu{ 0x304000 };
		inline constexpr REL::Offset CreateModalMessageMenu{ 0x304010 };
		inline constexpr REL::Offset CreateMapMenu{ 0x304140 };
		inline constexpr REL::Offset SetMapMenuVisible{ 0x304170 };
		inline constexpr REL::Offset GetFogOfWarEnabled{ 0x3043D0 };
		inline constexpr REL::Offset SetFogOfWarEnabled{ 0x304420 };
		inline constexpr REL::Offset CreateRepairMenu{ 0x304490 };
		inline constexpr REL::Offset SetRepairMenuVisible{ 0x3044C0 };
		inline constexpr REL::Offset CreateRepairServicesMenu{ 0x304690 };
		inline constexpr REL::Offset CreateItemModMenu{ 0x3046C0 };
		inline constexpr REL::Offset SetItemModMenuVisible{ 0x3046F0 };
		inline constexpr REL::Offset CreateInventoryMenu{ 0x3048C0 };
		inline constexpr REL::Offset SetInventoryMenuVisible{ 0x3048F0 };
		inline constexpr REL::Offset GetInventoryMenuVisible{ 0x304AD0 };
		inline constexpr REL::Offset UpdateInventory{ 0x304AF0 };
		inline constexpr REL::Offset CreateStatsMenu{ 0x304BE0 };
		inline constexpr REL::Offset SetStatsMenuVisible{ 0x304C10 };
		inline constexpr REL::Offset UpdateActorValue{ 0x304E10 };
		inline constexpr REL::Offset CreateContainerMenu{ 0x304ED0 };
		inline constexpr REL::Offset CloseContainer{ 0x304F50 };
		inline constexpr REL::Offset CreateBarterMenu{ 0x304F80 };
		inline constexpr REL::Offset CreateRecipeMenu{ 0x304FC0 };
		inline constexpr REL::Offset ContainerIsRecipe{ 0x305000 };
		inline constexpr REL::Offset ContainerIsBarter{ 0x305020 };
		inline constexpr REL::Offset CreateDialogMenu{ 0x305070 };
		inline constexpr REL::Offset InDialog{ 0x3050D0 };
		inline constexpr REL::Offset SetDialogPause{ 0x305110 };
		inline constexpr REL::Offset InDialogWith{ 0x305190 };
		inline constexpr REL::Offset ShowSubtitle{ 0x305210 };
		inline constexpr REL::Offset ShowMessage{ 0x3052F0 };
		inline constexpr REL::Offset ClearAllSubtitlesAndMessages{ 0x3053B0 };
		inline constexpr REL::Offset CreateMainMenu{ 0x3053F0 };
		inline constexpr REL::Offset SetRegionText{ 0x305420 };
		inline constexpr REL::Offset CreateSleepMenu{ 0x3054F0 };
		inline constexpr REL::Offset CloseSleepMenu{ 0x3055C0 };
		inline constexpr REL::Offset CreateVATSMenu{ 0x305640 };
		inline constexpr REL::Offset UpdateSleeping{ 0x3056F0 };
		inline constexpr REL::Offset CloseVATSMenu{ 0x305780 };
		inline constexpr REL::Offset ForceReload{ 0x305800 };
		inline constexpr REL::Offset CreateLockPickMenu{ 0x305830 };
		inline constexpr REL::Offset CreateRaceSexMenu{ 0x305870 };
		inline constexpr REL::Offset IsDragDropping{ 0x3058E0 };
		inline constexpr REL::Offset GetVATSEffect{ 0x305910 };
		inline constexpr REL::Offset GetHUDEffects{ 0x305950 };
		inline constexpr REL::Offset GetPipboy{ 0x305990 };
		inline constexpr REL::Offset GetDragDroppingState{ 0x305A90 };
		inline constexpr REL::Offset SetDragDroppingState{ 0x305AD0 };
		inline constexpr REL::Offset ClearReferencePointers{ 0x305B30 };
		inline constexpr REL::Offset SetMainMenuDefaults{ 0x305B70 };
		inline constexpr REL::Offset GetStatsPageNumber{ 0x305C70 };
		inline constexpr REL::Offset GetInventoryPageNumber{ 0x305CB0 };
		inline constexpr REL::Offset GetMagicPageNumber{ 0x305D10 };
		inline constexpr REL::Offset GetMapPageNumber{ 0x305D50 };
		inline constexpr REL::Offset GetCurrentMainMenu{ 0x305D90 };
		inline constexpr REL::Offset CreateLoadingMenu{ 0x305E00 };
		inline constexpr REL::Offset CloseLoadingMenu{ 0x305E30 };
		inline constexpr REL::Offset GetLoadingMenuVisible{ 0x305E80 };
		inline constexpr REL::Offset IsInGameLoadingMenuOpen{ 0x305EA0 };
		inline constexpr REL::Offset CreateHackingMenu{ 0x305EC0 };
		inline constexpr REL::Offset CreateComputersMenu{ 0x306130 };
		inline constexpr REL::Offset SetSurgeryCursorPos{ 0x306230 };
		inline constexpr REL::Offset CreateLevelUpMenu{ 0x306270 };
		inline constexpr REL::Offset CreateCharGenMenu{ 0x3062A0 };
		inline constexpr REL::Offset SetInfoForRef{ 0x3062E0 };
		inline constexpr REL::Offset CloseAllSupportMenus{ 0x306320 };
		inline constexpr REL::Offset SaveGame{ 0x306610 };
		inline constexpr REL::Offset SaveGame_1{ 0x3066D0 };
		inline constexpr REL::Offset LoadGame{ 0x306860 };
		inline constexpr REL::Offset FinishLoadGame{ 0x306A90 };
		inline constexpr REL::Offset Revert{ 0x306AE0 };
		inline constexpr REL::Offset GetMenusRoot{ 0x306CD0 };
		inline constexpr REL::Offset GetInterfaceRoot{ 0x306D30 };
		inline constexpr REL::Offset AttachDefaultAlphaProperty{ 0x306D50 };
		inline constexpr REL::Offset SetFirstChanceTextureRelease_1{ 0x306DB0 };
		inline constexpr REL::Offset GetScreenHeight{ 0x306DF0 };
		inline constexpr REL::Offset GetScreenWidth{ 0x306E00 };
		inline constexpr REL::Offset GetRealScreenHeight{ 0x306E10 };
		inline constexpr REL::Offset GetRealScreenWidth{ 0x306E40 };
		inline constexpr REL::Offset GetAspectRatioRatio{ 0x306E70 };
		inline constexpr REL::Offset GetRenderedMenuScreenWidth{ 0x306E80 };
		inline constexpr REL::Offset GetRenderedMenuScreenHeight{ 0x306E90 };
		inline constexpr REL::Offset PlayMenuSound{ 0x306F30 };
		inline constexpr REL::Offset NewTimer{ 0x306F50 };
		inline constexpr REL::Offset UpdateAllTimers{ 0x306F70 };
		inline constexpr REL::Offset ClearTimer{ 0x306F90 };
		inline constexpr REL::Offset AddToEnterStack{ 0x306FB0 };
		inline constexpr REL::Offset PopFromEnterStack{ 0x306FD0 };
		inline constexpr REL::Offset SetCurrentFocusTarget{ 0x306FF0 };
		inline constexpr REL::Offset RecursiveFade{ 0x307010 };
		inline constexpr REL::Offset FindTextReplacementString{ 0x3070C0 };
		inline constexpr REL::Offset MatchTextReplaceConstantToGameSettings{ 0x307330 };
		inline constexpr REL::Offset TestConstantForGameSettings{ 0x3073D0 };
		inline constexpr REL::Offset LoadModelFile{ 0x307660 };
		inline constexpr REL::Offset ClearTempModel{ 0x307820 };
		inline constexpr REL::Offset GetMeshesFolder{ 0x307860 };
		inline constexpr REL::Offset CopyOrDeepCopyNode{ 0x307870 };
		inline constexpr REL::Offset SetNeedToUpdate{ 0x307930 };
		inline constexpr REL::Offset CreateMenuByClass{ 0x307990 };
		inline constexpr REL::Offset IsInRenderedMenu{ 0x3079B0 };
		inline constexpr REL::Offset IsRenderedMenu{ 0x307A30 };
		inline constexpr REL::Offset GetCurrentRenderedMenu{ 0x307AD0 };
		inline constexpr REL::Offset IsCurrentRenderedMenuTopmost{ 0x307B30 };
		inline constexpr REL::Offset IsWideScreen{ 0x307B40 };
		inline constexpr REL::Offset SizeOfAScreenPixelInCrazyAssMenuCoordinates{ 0x307B60 };
		inline constexpr REL::Offset InitializeTabline{ 0x307BE0 };
		inline constexpr REL::Offset PopulateItemStatsDisplay{ 0x307E30 };
		inline constexpr REL::Offset QueueMenuCreate{ 0x309470 };
		inline constexpr REL::Offset HandleQueuedMenuOpen{ 0x3094F0 };
		inline constexpr REL::Offset IsPipboyOpening{ 0x309BC0 };
		inline constexpr REL::Offset IsPipboyClosed{ 0x309BE0 };
		inline constexpr REL::Offset InitGunScope{ 0x309C20 };
		inline constexpr REL::Offset SetGunScopeVisible{ 0x309C40 };
		inline constexpr REL::Offset Has360Controller{ 0x309D40 };
	}

	namespace InterfaceManager
	{
		inline constexpr REL::Offset Instance{ 0xB7210 };
		inline constexpr REL::Offset IsInMenuMode{ 0x3023A0 };
		inline constexpr REL::Offset GetPipboy{ 0x304370 };
		inline constexpr REL::Offset GetRealScreenHeight{ 0x306E20 };
		inline constexpr REL::Offset GetRealScreenWidth{ 0x306E50 };
		inline constexpr REL::Offset IsInRenderedMenu{ 0x3079F0 };
		inline constexpr REL::Offset GetCurrentRenderedMenu{ 0x307AF0 };
		inline constexpr REL::Offset Initialize{ 0x309FD0 };
		inline constexpr REL::Offset ctor{ 0x30A130 };
		inline constexpr REL::Offset dtor{ 0x30A920 };
		inline constexpr REL::Offset Init{ 0x30ADB0 };
		inline constexpr REL::Offset InitSecond{ 0x30B240 };
		inline constexpr REL::Offset SetStatsPageNumber{ 0x30B790 };
		inline constexpr REL::Offset SetInventoryPageNumber{ 0x30B810 };
		inline constexpr REL::Offset SetMapPageNumber{ 0x30B870 };
		inline constexpr REL::Offset PreIdleStuff{ 0x30B8F0 };
		inline constexpr REL::Offset RefreshActivateREFR{ 0x30BC20 };
		inline constexpr REL::Offset Idle{ 0x30C4A0 };
		inline constexpr REL::Offset GetMouseWheel{ 0x30EC70 };
		inline constexpr REL::Offset GetScreenAspect{ 0x30ECB0 };
		inline constexpr REL::Offset UpdatePipboy{ 0x30EE80 };
		inline constexpr REL::Offset OpenPipboy{ 0x30F4E0 };
		inline constexpr REL::Offset DoGamepadEvent{ 0x30F6E0 };
		inline constexpr REL::Offset GetTopGamepadButton{ 0x310060 };
		inline constexpr REL::Offset DisplayCurrentPickRef{ 0x310AD0 };
		inline constexpr REL::Offset UpdateCursor{ 0x3118D0 };
		inline constexpr REL::Offset PostIdleStuff{ 0x311EA0 };
		inline constexpr REL::Offset RecursiveFade{ 0x312450 };
		inline constexpr REL::Offset PickMenus{ 0x3126C0 };
		inline constexpr REL::Offset CreateSceneGraph{ 0x312E90 };
		inline constexpr REL::Offset DrawInterface_Screen{ 0x3134D0 };
		inline constexpr REL::Offset LastMinuteUpdate{ 0x313C70 };
		inline constexpr REL::Offset UpdateTileModels{ 0x313E20 };
		inline constexpr REL::Offset Accumulate{ 0x313F00 };
		inline constexpr REL::Offset Click{ 0x313FB0 };
		inline constexpr REL::Offset EmergencyCloseAllMenusAndBreakStuff{ 0x314C60 };
		inline constexpr REL::Offset SetTargetREFR{ 0x314D70 };
		inline constexpr REL::Offset AddToEnterStack{ 0x314D90 };
		inline constexpr REL::Offset GetEnterStackTop{ 0x314F00 };
		inline constexpr REL::Offset GetEnterStack{ 0x314F70 };
		inline constexpr REL::Offset PopFromEnterStack{ 0x314FD0 };
		inline constexpr REL::Offset SetCursorPos{ 0x3151B0 };
		inline constexpr REL::Offset GetChar{ 0x3154B0 };
		inline constexpr REL::Offset ClearOverTileTarget{ 0x3157B0 };
		inline constexpr REL::Offset SetCurrentFocusTarget{ 0x315860 };
		inline constexpr REL::Offset GetDefaultFocus{ 0x315CA0 };
		inline constexpr REL::Offset GetScreenWidth{ 0x315D40 };
		inline constexpr REL::Offset GetScreenHeight{ 0x315DA0 };
		inline constexpr REL::Offset UpdateScreenShape{ 0x315E00 };
		inline constexpr REL::Offset ForceTextureRelease{ 0x3160B0 };
		inline constexpr REL::Offset ScanForMaxFocus{ 0x3160F0 };
		inline constexpr REL::Offset UpdateAllTimers{ 0x316320 };
		inline constexpr REL::Offset FreeTimerList{ 0x316450 };
		inline constexpr REL::Offset NewTimer{ 0x3164C0 };
		inline constexpr REL::Offset ClearTimer{ 0x3165D0 };
		inline constexpr REL::Offset GetTimerPercent{ 0x316660 };
		inline constexpr REL::Offset TileIsAcceptingEvents{ 0x316910 };
		inline constexpr REL::Offset PlayMenuSound{ 0x317280 };
		inline constexpr REL::Offset PreLoadMenus{ 0x317600 };
		inline constexpr REL::Offset PreLoadMainMenus{ 0x317660 };
		inline constexpr REL::Offset SetCursorAlpha{ 0x317740 };
		inline constexpr REL::Offset GetScreenSafeX{ 0x3177C0 };
		inline constexpr REL::Offset GetScreenSafeY{ 0x317820 };
		inline constexpr REL::Offset GetMenuHeight{ 0x317860 };
		inline constexpr REL::Offset IsInPipboyMenu{ 0x3178A0 };
		inline constexpr REL::Offset IsPipboyMenuTopmost{ 0x317920 };
		inline constexpr REL::Offset IsCurrentRenderedMenuTopmost{ 0x317990 };
		inline constexpr REL::Offset ClearMenuButton{ 0x317DE0 };
		inline constexpr REL::Offset DoWheelMove{ 0x318080 };
		inline constexpr REL::Offset EnterRenderedMenu{ 0x3181D0 };
		inline constexpr REL::Offset SetLockpickControlsDisable{ 0x318930 };
		inline constexpr REL::Offset GetCurrentImagespaceMod{ 0x318AB0 };
		inline constexpr REL::Offset UpdatePipBoyInventoryEffects{ 0x319790 };
		inline constexpr REL::Offset GetCursorY{ 0x33B020 };
		inline constexpr REL::Offset GetCursorX{ 0x347D00 };
		inline constexpr REL::Offset GetMouseVisible{ 0x355680 };
		inline constexpr REL::Offset GetPipboyMouseX{ 0x3697F0 };
		inline constexpr REL::Offset GetPipboyMouseY{ 0x3983C0 };
		inline constexpr REL::Offset Get3dAccumulator{ 0x3FD640 };
		inline constexpr REL::Offset IsDoneSecondInit{ 0x5373F0 };
		inline constexpr REL::Offset pInstance{ 0xDD8A80 };
	}

	namespace InterfaceManager_TutorialManager
	{
		inline constexpr REL::Offset GetSaveLoadSize{ 0x306810 };
		inline constexpr REL::Offset Update{ 0x3182E0 };
		inline constexpr REL::Offset FlagAsShown{ 0x3185E0 };
		inline constexpr REL::Offset ShowMessage{ 0x318630 };
		inline constexpr REL::Offset Save{ 0x3187A0 };
		inline constexpr REL::Offset HasBeenShown{ 0x318840 };
	}

	namespace InventoryChanges
	{
		inline constexpr REL::Offset IsEmpty{ 0x2CDE0 };
		inline constexpr REL::Offset ResetCachedWeights{ 0xBF0E0 };
		inline constexpr REL::Offset RemoveHotKeyItem{ 0xBF330 };
		inline constexpr REL::Offset GetObjectInList{ 0xBFBA0 };
		inline constexpr REL::Offset WearingObject{ 0xBFDA0 };
		inline constexpr REL::Offset RemoveAllObjectsWorn{ 0xBFE50 };
		inline constexpr REL::Offset GetOriginalContainer{ 0xBFFB0 };
		inline constexpr REL::Offset RemoveWorn{ 0xC0CF0 };
		inline constexpr REL::Offset RemoveItem{ 0xC37D0 };
		inline constexpr REL::Offset DropItemIntoWorld{ 0xC6DD0 };
		inline constexpr REL::Offset GetBestAmmoForWeapon{ 0xC7300 };
		inline constexpr REL::Offset GetObjectCount{ 0xC8F30 };
		inline constexpr REL::Offset GetCount{ 0xC8FD0 };
		inline constexpr REL::Offset RemoveStolenItems{ 0xCB5F0 };
		inline constexpr REL::Offset CleanUpBadData{ 0xCBBC0 };
		inline constexpr REL::Offset DuplicateAllItems{ 0xCD9C0 };
		inline constexpr REL::Offset RemoveAllItems{ 0xCE380 };
		inline constexpr REL::Offset ContainerHasObjects{ 0xCFFE0 };
		inline constexpr REL::Offset GetInventoryWeight{ 0xD0900 };
		inline constexpr REL::Offset GetEquippedWeight{ 0xD1180 };
		inline constexpr REL::Offset InitLeveledItems{ 0xD1440 };
		inline constexpr REL::Offset InitFromContainerExtra{ 0xD1610 };
		inline constexpr REL::Offset InitScripts{ 0xD1960 };
		inline constexpr REL::Offset ClearAllChangeItems{ 0xD3660 };
		inline constexpr REL::Offset GetSaveSize{ 0xD3960 };
		inline constexpr REL::Offset SaveGame{ 0xD3AB0 };
		inline constexpr REL::Offset LoadGame{ 0xD3CC0 };
		inline constexpr REL::Offset LoadGame_1{ 0xD4160 };
		inline constexpr REL::Offset InitLoadGame{ 0xD42F0 };
		inline constexpr REL::Offset IterateInventory{ 0xD4530 };
		inline constexpr REL::Offset GetNextItem{ 0xD4830 };
		inline constexpr REL::Offset GetItemGroup{ 0xD4B00 };
		inline constexpr REL::Offset GetRepairItemGroup{ 0xD4BD0 };
		inline constexpr REL::Offset GetItemModGroup{ 0xD4CA0 };
	}

	namespace InventoryIterator
	{
		inline constexpr REL::Offset ctor{ 0x127270 };
	}

	namespace InventoryMenu
	{
		inline constexpr REL::Offset SetCurrentTab{ 0x306A40 };
		inline constexpr REL::Offset IsKeyringOpen{ 0x30ED30 };
		inline constexpr REL::Offset ctor{ 0x37FA00 };
		inline constexpr REL::Offset Create{ 0x37FC10 };
		inline constexpr REL::Offset SavePageState{ 0x37FFD0 };
		inline constexpr REL::Offset LoadPageState{ 0x3800C0 };
		inline constexpr REL::Offset DropCurrentItem{ 0x380C50 };
		inline constexpr REL::Offset SelectCurrentItem{ 0x380D60 };
		inline constexpr REL::Offset UpdateButtons{ 0x381680 };
		inline constexpr REL::Offset IsItemRepairable{ 0x381860 };
		inline constexpr REL::Offset ClearCurrentItem{ 0x381B10 };
		inline constexpr REL::Offset SetKnobPosition{ 0x382470 };
		inline constexpr REL::Offset SortFunc{ 0x3824E0 };
		inline constexpr REL::Offset FilterFunc{ 0x382620 };
		inline constexpr REL::Offset InitFunc{ 0x382850 };
		inline constexpr REL::Offset UpdateInventoryMenu{ 0x382A90 };
	}

	namespace ItemChange
	{
		inline constexpr REL::Offset GetContainerObject{ 0x4DDC0 };
		inline constexpr REL::Offset ctor{ 0xBC550 };
		inline constexpr REL::Offset dtor{ 0xBC5F0 };
		inline constexpr REL::Offset ctor_1{ 0xBC650 };
		inline constexpr REL::Offset DeleteAllExtra{ 0xBC780 };
		inline constexpr REL::Offset GetExtraTotalCount{ 0xBC8F0 };
		inline constexpr REL::Offset GetExtraTotalDefaultCount{ 0xBC980 };
		inline constexpr REL::Offset GetAmountNonDefaultExtra{ 0xBCA80 };
		inline constexpr REL::Offset HasLeveledExtra{ 0xBCB70 };
		inline constexpr REL::Offset RemoveLeveledItemExtra{ 0xBCD10 };
		inline constexpr REL::Offset GetItemHealth{ 0xBCDB0 };
		inline constexpr REL::Offset SetItemHealth{ 0xBD030 };
		inline constexpr REL::Offset GetItemCharge{ 0xBD350 };
		inline constexpr REL::Offset GetItemValue{ 0xBD400 };
		inline constexpr REL::Offset GetItemOwnership{ 0xBD740 };
		inline constexpr REL::Offset GetModSlots{ 0xBD820 };
		inline constexpr REL::Offset HasModEffectActive{ 0xBD8D0 };
		inline constexpr REL::Offset HasModEffectActive_1{ 0xBDA70 };
		inline constexpr REL::Offset GetPoison{ 0xBDCC0 };
		inline constexpr REL::Offset GetWorn{ 0xBDDD0 };
		inline constexpr REL::Offset GetScript{ 0xBDE40 };
		inline constexpr REL::Offset GetScriptLocals{ 0xBDEA0 };
		inline constexpr REL::Offset GetModifiedAttackDamage{ 0xBDF00 };
		inline constexpr REL::Offset GetModifiedArmorRating{ 0xBDF90 };
		inline constexpr REL::Offset GetModifiedDamageThreshold{ 0xBE0B0 };
		inline constexpr REL::Offset GetIconOne{ 0xBE200 };
		inline constexpr REL::Offset GetFullName{ 0xBE2D0 };
		inline constexpr REL::Offset GetSaveSize{ 0xBE5A0 };
		inline constexpr REL::Offset SaveGame{ 0xBE6F0 };
		inline constexpr REL::Offset LoadGame{ 0xBE930 };
		inline constexpr REL::Offset SaveGame_1{ 0xBED60 };
		inline constexpr REL::Offset LoadGame_1{ 0xBEE00 };
		inline constexpr REL::Offset ctor_2{ 0x36B630 };
	}

	namespace ItemModMenu
	{
		inline constexpr REL::Offset ctor{ 0x383310 };
		inline constexpr REL::Offset Create{ 0x383440 };
		inline constexpr REL::Offset InitFunc{ 0x3836D0 };
		inline constexpr REL::Offset ItemModItem{ 0x383AF0 };
		inline constexpr REL::Offset Update{ 0x3840F0 };
		inline constexpr REL::Offset ResetMenu{ 0x3846A0 };
		inline constexpr REL::Offset InitItemModMenu{ 0x384710 };
	}

	namespace KFModel
	{
		inline constexpr REL::Offset ctor{ 0x3B640 };
		inline constexpr REL::Offset InitSequence{ 0x3B7E0 };
		inline constexpr REL::Offset DecManualRefCount{ 0x3BAC0 };
		inline constexpr REL::Offset GetRefCount{ 0x431B0 };
		inline constexpr REL::Offset IncRefCount{ 0x4B010 };
		inline constexpr REL::Offset DecRefCount{ 0x4B050 };
	}

	namespace LEVELED_OBJECT_FILE
	{
		inline constexpr REL::Offset Endian{ 0x88510 };
	}

	namespace LOADED_CELL_DATA
	{
		inline constexpr REL::Offset ctor{ 0x144F60 };
		inline constexpr REL::Offset dtor{ 0x145200 };
	}

	namespace LOAD_FORM_DATA
	{
		inline constexpr REL::Offset Endian{ 0x1A6B10 };
	}

	namespace LevelUpMenu
	{
		inline constexpr REL::Offset ctor{ 0x384A40 };
		inline constexpr REL::Offset Create{ 0x384C80 };
		inline constexpr REL::Offset Close{ 0x3851D0 };
		inline constexpr REL::Offset InitLists{ 0x385540 };
		inline constexpr REL::Offset SetCurrentPage{ 0x385830 };
		inline constexpr REL::Offset UpdatePointCounter{ 0x385990 };
		inline constexpr REL::Offset ResetSkillsFunc{ 0x386170 };
		inline constexpr REL::Offset ResetPerksFunc{ 0x386200 };
		inline constexpr REL::Offset PerkUpdateFunc{ 0x386240 };
		inline constexpr REL::Offset UpdatePerksFunc{ 0x3864E0 };
		inline constexpr REL::Offset SortPerksFunc{ 0x3865D0 };
		inline constexpr REL::Offset SetDisplayString{ 0x3866E0 };
		inline constexpr REL::Offset ApplyPerkEffects{ 0x3867A0 };
	}

	namespace LightEffect
	{
		inline constexpr REL::Offset ctor{ 0x40E610 };
		inline constexpr REL::Offset AttachLight{ 0x40E970 };
		inline constexpr REL::Offset DetachLight{ 0x40ED60 };
		inline constexpr REL::Offset AttachBestLightEffect{ 0x40EE50 };
	}

	namespace LipSyncBackgroundManager
	{
		inline constexpr REL::Offset dtor{ 0x505E50 };
		inline constexpr REL::Offset BuildLipSynicFile{ 0x505F30 };
		inline constexpr REL::Offset CancelLipFile{ 0x506050 };
		inline constexpr REL::Offset RemoveTask{ 0x5060F0 };
	}

	namespace LipSynchAnim
	{
		inline constexpr REL::Offset ctor{ 0xD4F70 };
		inline constexpr REL::Offset LoadFromFile{ 0xD52F0 };
		inline constexpr REL::Offset LoadFromFile_1{ 0xD5350 };
		inline constexpr REL::Offset Scatter{ 0xD5570 };
		inline constexpr REL::Offset Decompress{ 0xD5880 };
		inline constexpr REL::Offset ApplyToNode{ 0xD5930 };
		inline constexpr REL::Offset ChangeFilenameToLipSynch{ 0xD5AD0 };
	}

	namespace LipTask
	{
		inline constexpr REL::Offset ctor{ 0x505BA0 };
	}

	namespace ListBoxBase
	{
		inline constexpr REL::Offset ctor{ 0x3240C0 };
	}

	namespace LoadScreenType_Data
	{
		inline constexpr REL::Offset Endian{ 0x1A7400 };
	}

	namespace LoadedAreaBound
	{
		inline constexpr REL::Offset ctor{ 0x226FD0 };
		inline constexpr REL::Offset Update{ 0x2271B0 };
		inline constexpr REL::Offset GetBoundFromCell{ 0x227980 };
		inline constexpr REL::Offset CheckForDynamicBodiesOutsideBound{ 0x2286F0 };
		inline constexpr REL::Offset SetBodiesMotionOutsideAABB{ 0x228980 };
		inline constexpr REL::Offset Clear{ 0x228DA0 };
		inline constexpr REL::Offset CheckPhantomsOutsideAABB{ 0x228DF0 };
		inline constexpr REL::Offset WarpBody{ 0x228F90 };
		inline constexpr REL::Offset WarpActor{ 0x2295E0 };
		inline constexpr REL::Offset FindWarpLocation{ 0x2296D0 };
	}

	namespace LoadedFile
	{
		inline constexpr REL::Offset ctor{ 0x3BAF0 };
		inline constexpr REL::Offset dtor{ 0x3BB80 };
		inline constexpr REL::Offset IncRefCount{ 0x4B0F0 };
		inline constexpr REL::Offset DecRefCount{ 0x4B180 };
	}

	namespace LoadingMenu
	{
		inline constexpr REL::Offset SetFlag{ 0x58080 };
		inline constexpr REL::Offset GetFlag{ 0x58110 };
		inline constexpr REL::Offset ctor{ 0x388440 };
		inline constexpr REL::Offset Reset{ 0x388AB0 };
		inline constexpr REL::Offset InitStatsTilesList{ 0x388F30 };
		inline constexpr REL::Offset InitObjectiveTilesList{ 0x388F80 };
		inline constexpr REL::Offset InitXPProgressTilesList{ 0x388FE0 };
		inline constexpr REL::Offset InitTipTilesList{ 0x389080 };
		inline constexpr REL::Offset _Create{ 0x3890E0 };
		inline constexpr REL::Offset Update{ 0x389820 };
		inline constexpr REL::Offset UpdateWheel{ 0x38A230 };
		inline constexpr REL::Offset SetScreenInfo{ 0x38A280 };
		inline constexpr REL::Offset SetNextSlide{ 0x38A3E0 };
		inline constexpr REL::Offset MakeLoadScreenList{ 0x38A5A0 };
		inline constexpr REL::Offset ForceFinish{ 0x38AA90 };
		inline constexpr REL::Offset NextSwap{ 0x38ABD0 };
		inline constexpr REL::Offset PrepPlayerTiles{ 0x38AEC0 };
		inline constexpr REL::Offset ShowPlayerTiles{ 0x38AFA0 };
		inline constexpr REL::Offset UpdatePlayerTileAlphas{ 0x38AFC0 };
		inline constexpr REL::Offset UpdateStatsTilesAlphas{ 0x38B100 };
		inline constexpr REL::Offset UpdateObjectiveTilesAlphas{ 0x38B190 };
		inline constexpr REL::Offset UpdateTipTilesAlphas{ 0x38B220 };
		inline constexpr REL::Offset UpdateXPProgressTilesAlphas{ 0x38B360 };
		inline constexpr REL::Offset UpdatePlayerTileVisibilities{ 0x38B3F0 };
		inline constexpr REL::Offset UpdateStatsTilesVisibilities{ 0x38B650 };
		inline constexpr REL::Offset UpdateObjectiveTilesVisibilities{ 0x38B6A0 };
		inline constexpr REL::Offset UpdateTipTilesVisibilities{ 0x38B6F0 };
		inline constexpr REL::Offset UpdateXPProgressTilesVisibilities{ 0x38B7C0 };
		inline constexpr REL::Offset GetPlayerTileDefaultSettings{ 0x38B810 };
		inline constexpr REL::Offset CalcLoadScreenTypeTextWindowFaces{ 0x38B9B0 };
		inline constexpr REL::Offset UpdatePlayerTileSettings{ 0x38BB60 };
		inline constexpr REL::Offset InitStatsTilesSettings{ 0x38BC80 };
		inline constexpr REL::Offset InitObjectiveTilesSettings{ 0x38BF80 };
		inline constexpr REL::Offset InitXPProgressTilesSettings{ 0x38C210 };
		inline constexpr REL::Offset InitTipTilesSettings{ 0x38C770 };
		inline constexpr REL::Offset HideAllBut{ 0x38CBD0 };
		inline constexpr REL::Offset FadeIn{ 0x38CC50 };
		inline constexpr REL::Offset FadeIn_1{ 0x38CE10 };
		inline constexpr REL::Offset FadeIn3D{ 0x38CF10 };
		inline constexpr REL::Offset SuspendBackgroundThread{ 0x38CFC0 };
		inline constexpr REL::Offset ResumeBackgroundThread{ 0x38D020 };
		inline constexpr REL::Offset ShowChanges{ 0x38D080 };
		inline constexpr REL::Offset SetupForMainMenu{ 0x38D280 };
		inline constexpr REL::Offset GetPlayerLevelProgress{ 0x38D5A0 };
		inline constexpr REL::Offset FillDisplayData{ 0x38D670 };
		inline constexpr REL::Offset SaveGame{ 0x38D6B0 };
		inline constexpr REL::Offset LoadGame{ 0x38D770 };
	}

	namespace LoadingMenuThread
	{
		inline constexpr REL::Offset ctor{ 0x38D2F0 };
		inline constexpr REL::Offset Unsuspend{ 0x38D570 };
	}

	namespace LockPickMenu
	{
		inline constexpr REL::Offset ctor{ 0x38D930 };
		inline constexpr REL::Offset Create{ 0x38DB00 };
		inline constexpr REL::Offset Prepare3DElements{ 0x38E1C0 };
		inline constexpr REL::Offset Draw3DElements{ 0x38E7C0 };
		inline constexpr REL::Offset Create3DCamera{ 0x38E900 };
		inline constexpr REL::Offset RotateLockpick{ 0x3908F0 };
		inline constexpr REL::Offset RotateLockpickModel{ 0x390DF0 };
		inline constexpr REL::Offset RotateLock{ 0x390F40 };
		inline constexpr REL::Offset CreateSweetSpot{ 0x391000 };
		inline constexpr REL::Offset IsTurningLock{ 0x391540 };
	}

	namespace LookIK_DATA
	{
		inline constexpr REL::Offset Copy{ 0x1ECFD0 };
		inline constexpr REL::Offset ctor{ 0x1ED910 };
	}

	namespace LoveTesterMenu
	{
		inline constexpr REL::Offset ctor{ 0x320550 };
		inline constexpr REL::Offset Create{ 0x3915F0 };
		inline constexpr REL::Offset Close{ 0x3917A0 };
		inline constexpr REL::Offset InitMachine{ 0x3928E0 };
		inline constexpr REL::Offset InitCamera{ 0x3945F0 };
		inline constexpr REL::Offset Draw3DElements{ 0x3948D0 };
		inline constexpr REL::Offset TurnPage{ 0x3949F0 };
		inline constexpr REL::Offset GetCurrentStatesActorValue{ 0x394D30 };
		inline constexpr REL::Offset GetTotalPointsUsed{ 0x394D80 };
		inline constexpr REL::Offset RefreshTotalPointsValue{ 0x3953F0 };
		inline constexpr REL::Offset RefreshLeftAVButton{ 0x395580 };
		inline constexpr REL::Offset RefreshRightAVButton{ 0x395630 };
		inline constexpr REL::Offset DecreaseActorValue{ 0x3957C0 };
		inline constexpr REL::Offset DecreaseCurrentActorValue{ 0x3958E0 };
		inline constexpr REL::Offset IncreaseActorValue{ 0x395A00 };
		inline constexpr REL::Offset IncreaseCurrentActorValue{ 0x395B30 };
		inline constexpr REL::Offset NextPage{ 0x395C60 };
		inline constexpr REL::Offset CloseCallback{ 0x395CE0 };
		inline constexpr REL::Offset LoadButtonAndTextImages{ 0x396100 };
		inline constexpr REL::Offset pInstance{ 0xDDA2C8 };
	}

	namespace LoveTesterMenu_ActorValueButton
	{
		inline constexpr REL::Offset ctor{ 0x394FF0 };
	}

	namespace LoveTesterMenu_LoveTesterButton
	{
		inline constexpr REL::Offset ctor{ 0x394E70 };
	}

	namespace LoveTesterMenu_LoveTesterPage
	{
		inline constexpr REL::Offset ctor{ 0x3207A0 };
	}

	namespace LoveTesterMenu_LoveTesterTextItem
	{
		inline constexpr REL::Offset ctor{ 0x3950B0 };
	}

	namespace LowProcess
	{
		inline constexpr REL::Offset SetBit{ 0x4D7E00 };
		inline constexpr REL::Offset GetBit{ 0x4D7E60 };
		inline constexpr REL::Offset GetPackageIdleDone{ 0x4E7C00 };
		inline constexpr REL::Offset ctor{ 0x506DC0 };
		inline constexpr REL::Offset GetTimeDelta{ 0x507260 };
		inline constexpr REL::Offset LowCopy{ 0x507510 };
		inline constexpr REL::Offset SetCurrentPackageFromSchedule{ 0x507700 };
		inline constexpr REL::Offset ShouldStopCombatControllerToFinishPackage{ 0x507960 };
		inline constexpr REL::Offset UpdatePackageTargetForCombat{ 0x5079F0 };
		inline constexpr REL::Offset ResetTarget{ 0x50A070 };
		inline constexpr REL::Offset SetPackageIdleDone{ 0x50AC20 };
		inline constexpr REL::Offset EvaluateReferenceforAcquire{ 0x50DD80 };
		inline constexpr REL::Offset EvaluateGenericLocation{ 0x50E660 };
		inline constexpr REL::Offset BuildMulitTargetObjectList{ 0x510E20 };
	}

	namespace MESSAGEBOX_BUTTON
	{
		inline constexpr REL::Offset ctor{ 0x190B60 };
		inline constexpr REL::Offset dtor{ 0x191170 };
	}

	namespace MTRenderingSystem
	{
		inline constexpr REL::Offset QInstance{ 0xEA970 };
		inline constexpr REL::Offset AddThread{ 0x7A2E00 };
		inline constexpr REL::Offset WaitOnThreadStage{ 0x7A3130 };
		inline constexpr REL::Offset AddAccumTask{ 0x7A3390 };
		inline constexpr REL::Offset CreateThreads{ 0x7A3720 };
	}

	namespace MagicBallProjectile
	{
		inline constexpr REL::Offset ctor{ 0x40F6E0 };
		inline constexpr REL::Offset ctor_1{ 0x40F810 };
		inline constexpr REL::Offset Init3D{ 0x40FCF0 };
	}

	namespace MagicBoltProjectile
	{
		inline constexpr REL::Offset ctor{ 0x411980 };
		inline constexpr REL::Offset Init3D{ 0x412220 };
		inline constexpr REL::Offset UpdateBranch{ 0x412700 };
		inline constexpr REL::Offset SetState{ 0x4133D0 };
	}

	namespace MagicCaster
	{
		inline constexpr REL::Offset ctor{ 0x415300 };
		inline constexpr REL::Offset dtor{ 0x4153B0 };
		inline constexpr REL::Offset GetCasterAsActor{ 0x415410 };
		inline constexpr REL::Offset CastSpell{ 0x415480 };
		inline constexpr REL::Offset ReleaseCast{ 0x415870 };
		inline constexpr REL::Offset InterruptCast{ 0x415B00 };
		inline constexpr REL::Offset FindTargets{ 0x415D00 };
		inline constexpr REL::Offset FindTargetsInArea{ 0x416F10 };
		inline constexpr REL::Offset FindTargets_1{ 0x417160 };
		inline constexpr REL::Offset AddTarget{ 0x417940 };
		inline constexpr REL::Offset CheckWillKill{ 0x417970 };
		inline constexpr REL::Offset DoExplosion{ 0x417B90 };
		inline constexpr REL::Offset ExplodeRigidBody{ 0x418150 };
		inline constexpr REL::Offset ExplodeActor{ 0x418310 };
		inline constexpr REL::Offset FireProjectile{ 0x418610 };
		inline constexpr REL::Offset SetState{ 0x418AF0 };
		inline constexpr REL::Offset UpdateLight{ 0x418B10 };
		inline constexpr REL::Offset GetMagicCasterFormID{ 0x418BE0 };
		inline constexpr REL::Offset GetMagicCasterByNumericID{ 0x418C60 };
		inline constexpr REL::Offset FindExplosionLOS{ 0x418CE0 };
		inline constexpr REL::Offset RunExplosionLOSPick{ 0x4190D0 };
	}

	namespace MagicFogProjectile
	{
		inline constexpr REL::Offset ctor{ 0x4192A0 };
		inline constexpr REL::Offset ctor_1{ 0x419360 };
		inline constexpr REL::Offset ClearTargetList{ 0x419830 };
		inline constexpr REL::Offset AdjustParticles{ 0x419890 };
		inline constexpr REL::Offset Init3D{ 0x419A90 };
	}

	namespace MagicHitEffect
	{
		inline constexpr REL::Offset SetFinished{ 0x61310 };
		inline constexpr REL::Offset ctor{ 0x41B650 };
		inline constexpr REL::Offset ctor_1{ 0x41B700 };
		inline constexpr REL::Offset InstantiateHitEffects{ 0x41B8E0 };
	}

	namespace MagicItem
	{
		inline constexpr REL::Offset ctor{ 0x2C90 };
		inline constexpr REL::Offset GetMagicItemFormID{ 0xA1E0 };
		inline constexpr REL::Offset GetMagicItemByNumericID{ 0xA250 };
		inline constexpr REL::Offset GetAVEffect{ 0xA300 };
		inline constexpr REL::Offset Preload{ 0xA420 };
		inline constexpr REL::Offset FinishedLoading{ 0xAB70 };
		inline constexpr REL::Offset IsLoaded{ 0xB470 };
		inline constexpr REL::Offset IsLoadingOrLoaded{ 0xB580 };
		inline constexpr REL::Offset IsLoading{ 0xB6B0 };
		inline constexpr REL::Offset Unload{ 0xB800 };
		inline constexpr REL::Offset GetCannotCastString{ 0xBEF0 };
		inline constexpr REL::Offset MagicItemInitItem{ 0xC030 };
	}

	namespace MagicItemForm
	{
		inline constexpr REL::Offset ctor{ 0x9190 };
	}

	namespace MagicItemObject
	{
		inline constexpr REL::Offset ctor{ 0x2B40 };
	}

	namespace MagicLight
	{
		inline constexpr REL::Offset ctor{ 0x41BF80 };
		inline constexpr REL::Offset Init{ 0x41C030 };
		inline constexpr REL::Offset Update{ 0x41C320 };
		inline constexpr REL::Offset Fade{ 0x41C470 };
	}

	namespace MagicModelHitEffect
	{
		inline constexpr REL::Offset ctor{ 0x41C530 };
	}

	namespace MagicProjectile
	{
		inline constexpr REL::Offset AddTrackedProjectile{ 0x40FAE0 };
		inline constexpr REL::Offset ctor{ 0x41DBB0 };
		inline constexpr REL::Offset ctor_1{ 0x41DD00 };
		inline constexpr REL::Offset Launch{ 0x41E040 };
		inline constexpr REL::Offset GetDummyObjectReference{ 0x41E310 };
		inline constexpr REL::Offset Clone3D{ 0x41E440 };
		inline constexpr REL::Offset Clone3D_1{ 0x41E460 };
		inline constexpr REL::Offset KillAreaEffectGeometry{ 0x41E730 };
		inline constexpr REL::Offset CheckShotBehindWall{ 0x41EBA0 };
		inline constexpr REL::Offset ApplyCollisionForce{ 0x41F000 };
		inline constexpr REL::Offset GetCaster{ 0x5185E0 };
	}

	namespace MagicShaderHitEffect
	{
		inline constexpr REL::Offset ctor{ 0x41F220 };
		inline constexpr REL::Offset ctor_1{ 0x41F350 };
		inline constexpr REL::Offset ctor_2{ 0x41F580 };
		inline constexpr REL::Offset GetAffectedScenegraph{ 0x420C10 };
	}

	namespace MagicTarget
	{
		inline constexpr REL::Offset ctor{ 0x422A40 };
		inline constexpr REL::Offset GetTargetAsActor{ 0x422B40 };
		inline constexpr REL::Offset IsSpellTarget{ 0x422B90 };
		inline constexpr REL::Offset IsEffectTarget{ 0x422CF0 };
		inline constexpr REL::Offset HasDamageHealthEffect{ 0x422E00 };
		inline constexpr REL::Offset GetUsageMonitorEffectMagnitude{ 0x422EB0 };
		inline constexpr REL::Offset HasRecoverableActorValueEffect{ 0x422F70 };
		inline constexpr REL::Offset CheckAddEffect{ 0x423210 };
		inline constexpr REL::Offset UpdateTarget{ 0x423C40 };
		inline constexpr REL::Offset Dispel{ 0x424400 };
		inline constexpr REL::Offset Dispel_1{ 0x424800 };
		inline constexpr REL::Offset Dispel_2{ 0x4248E0 };
		inline constexpr REL::Offset CheckAddiction{ 0x424E70 };
		inline constexpr REL::Offset RemoveEffect{ 0x4251C0 };
		inline constexpr REL::Offset ActiveEffectListCompareFn{ 0x425270 };
		inline constexpr REL::Offset GetMagicTargetFormID{ 0x4254C0 };
		inline constexpr REL::Offset GetMagicTargetByNumericID{ 0x425550 };
	}

	namespace Main
	{
		inline constexpr REL::Offset GetMasterParticleSystemManager{ 0x5A190 };
		inline constexpr REL::Offset GetWorldSceneGraph{ 0x5C670 };
		inline constexpr REL::Offset CreateMenuRootNode3D{ 0xDC650 };
		inline constexpr REL::Offset QDrawWorldAccum{ 0xE2190 };
		inline constexpr REL::Offset WorldRootCamera{ 0x124C90 };
		inline constexpr REL::Offset GetSceneIsComplex{ 0x125420 };
		inline constexpr REL::Offset QFaderToBlackVisible{ 0x1C42D0 };
		inline constexpr REL::Offset ctor{ 0x46C160 };
		inline constexpr REL::Offset Main_AudioInit{ 0x46CE40 };
		inline constexpr REL::Offset InitTES{ 0x46CF20 };
		inline constexpr REL::Offset InitSceneGraph{ 0x46D590 };
		inline constexpr REL::Offset OnIdle_ScaleLOD{ 0x46EFE0 };
		inline constexpr REL::Offset OnIdle_UpdateTimer{ 0x46F260 };
		inline constexpr REL::Offset OnIdle_PollControls{ 0x46F390 };
		inline constexpr REL::Offset OnIdle_HandleMenuBackground{ 0x46F450 };
		inline constexpr REL::Offset OnIdle_UpdateAudio{ 0x46F640 };
		inline constexpr REL::Offset UpdateNonRenderSafeAITasks{ 0x46F6A0 };
		inline constexpr REL::Offset OnIdle_UpdateProcessLists{ 0x46F890 };
		inline constexpr REL::Offset OnIdle_UpdatePlayer{ 0x46F940 };
		inline constexpr REL::Offset OnIdle_UpdateCurrentGridCell{ 0x46FBE0 };
		inline constexpr REL::Offset OnIdle_UpdateAnimationsAndEffects{ 0x46FC60 };
		inline constexpr REL::Offset OnIdle_DoInterfaceIdle{ 0x46FD70 };
		inline constexpr REL::Offset OnIdle_UpdateImageSpace{ 0x46FD90 };
		inline constexpr REL::Offset PostSwapProcess{ 0x4705D0 };
		inline constexpr REL::Offset OnIdle_PostThreadsProcess{ 0x470610 };
		inline constexpr REL::Offset DrawWorld{ 0x4706B0 };
		inline constexpr REL::Offset DrawWorldRenderedMenu{ 0x4707C0 };
		inline constexpr REL::Offset DrawWorldWireframe{ 0x470A00 };
		inline constexpr REL::Offset DrawWorldStandard{ 0x470BD0 };
		inline constexpr REL::Offset DrawWorld_UpdateOffscreenBuffers{ 0x471290 };
		inline constexpr REL::Offset UpdateOffscreenInterface{ 0x471A50 };
		inline constexpr REL::Offset SetActive{ 0x471C90 };
		inline constexpr REL::Offset RenderMenuBackground{ 0x471DC0 };
		inline constexpr REL::Offset LoadPluginsFromFile{ 0x472430 };
		inline constexpr REL::Offset DrawWorld_UpdateWater{ 0x4727D0 };
		inline constexpr REL::Offset DrawWorldMenu3D{ 0x472940 };
		inline constexpr REL::Offset DrawWorld_WaitForParallelUpdate{ 0x472AD0 };
		inline constexpr REL::Offset DrawWorld_Init{ 0x472B00 };
		inline constexpr REL::Offset DrawWorld_InitRenderTexture{ 0x472F50 };
		inline constexpr REL::Offset DrawWorld_DrawScene{ 0x473200 };
		inline constexpr REL::Offset DrawWorld_Add1stPersonToDepthBuffer{ 0x4746D0 };
		inline constexpr REL::Offset DrawWorld_Refraction{ 0x474920 };
		inline constexpr REL::Offset DrawWorld_VATSOcclusionQuery{ 0x4749B0 };
		inline constexpr REL::Offset DrawWorld_VATS{ 0x474AC0 };
		inline constexpr REL::Offset DrawWorld_RestartRenderTexture{ 0x474B50 };
		inline constexpr REL::Offset DrawWorld_CopyMenuBG{ 0x474B90 };
		inline constexpr REL::Offset DrawWorld_MTSetup1stPerson{ 0x474C10 };
		inline constexpr REL::Offset DrawWorld_MTRender1stPerson{ 0x475110 };
		inline constexpr REL::Offset DrawWorld_DrawRenderedMenuParent{ 0x475BF0 };
		inline constexpr REL::Offset DrawWorld_DoDepth{ 0x475E40 };
		inline constexpr REL::Offset DrawWorld_ImageSpace{ 0x475FD0 };
		inline constexpr REL::Offset DrawWorld_RenderedMenu{ 0x4761E0 };
		inline constexpr REL::Offset DrawWorld_ScreenSplatter{ 0x476A20 };
		inline constexpr REL::Offset KillMenuBGTexture{ 0x477430 };
		inline constexpr REL::Offset PerformGameReset{ 0x4774A0 };
		inline constexpr REL::Offset GetControls{ 0x477720 };
		inline constexpr REL::Offset InitSky{ 0x477730 };
	}

	namespace MapMarkerData
	{
		inline constexpr REL::Offset ctor{ 0x38BB0 };
		inline constexpr REL::Offset Save{ 0x38C10 };
		inline constexpr REL::Offset Load{ 0x38CA0 };
		inline constexpr REL::Offset GetLocationName{ 0x38EB0 };
		inline constexpr REL::Offset GetVisible{ 0x38ED0 };
		inline constexpr REL::Offset GetTravelLoc{ 0x38EF0 };
		inline constexpr REL::Offset SetVisible{ 0x4DE40 };
		inline constexpr REL::Offset SetTravelLoc{ 0x4DE80 };
	}

	namespace MapMenu
	{
		inline constexpr REL::Offset ctor{ 0x396740 };
		inline constexpr REL::Offset Create{ 0x396B90 };
		inline constexpr REL::Offset CalculatePlayerMarkerSpace{ 0x3984D0 };
		inline constexpr REL::Offset FastTravelCallback{ 0x398710 };
		inline constexpr REL::Offset SetPlayerMarkerCallback{ 0x398840 };
		inline constexpr REL::Offset StopNoteSound{ 0x398AD0 };
		inline constexpr REL::Offset ClearAudioLogSubtites{ 0x398BF0 };
		inline constexpr REL::Offset LoadChallenge{ 0x3991B0 };
		inline constexpr REL::Offset LoadNote{ 0x3993D0 };
		inline constexpr REL::Offset HighlightCenterMarker{ 0x399DC0 };
		inline constexpr REL::Offset UpdatePlayingSounds{ 0x39A660 };
		inline constexpr REL::Offset UpdateMenu{ 0x39ABA0 };
		inline constexpr REL::Offset UpdateCurrentPage{ 0x39AF30 };
		inline constexpr REL::Offset UpdateNotes{ 0x39B240 };
		inline constexpr REL::Offset ToggleNotesChallengeMode{ 0x39B460 };
		inline constexpr REL::Offset UpdateChallenges{ 0x39B600 };
		inline constexpr REL::Offset UpdateQuests{ 0x39B8E0 };
		inline constexpr REL::Offset QuestObjectiveSortFunc{ 0x39BC90 };
		inline constexpr REL::Offset RadioSortFunc{ 0x39BD70 };
		inline constexpr REL::Offset RadioFilterFunc{ 0x39BE30 };
		inline constexpr REL::Offset UpdateRadioList{ 0x39BEA0 };
		inline constexpr REL::Offset ResetWaveform{ 0x39C090 };
		inline constexpr REL::Offset UpdateWaveform{ 0x39C0C0 };
		inline constexpr REL::Offset SetKnobPosition{ 0x39C340 };
		inline constexpr REL::Offset WorldToMapCoord{ 0x39C380 };
		inline constexpr REL::Offset ZoomMap{ 0x39C5A0 };
		inline constexpr REL::Offset UpdateWorldMap{ 0x39CDB0 };
		inline constexpr REL::Offset UpdateLocalMap{ 0x39D410 };
		inline constexpr REL::Offset AddMapIcons{ 0x39DBB0 };
		inline constexpr REL::Offset AddQuestMarkers{ 0x39E0A0 };
		inline constexpr REL::Offset CreatePlayerMarker{ 0x39F360 };
		inline constexpr REL::Offset SetPlayerMarker{ 0x39F640 };
		inline constexpr REL::Offset DeletePlayerMarker{ 0x39F6F0 };
		inline constexpr REL::Offset GetWorldMapTrackingRef{ 0x39F7E0 };
		inline constexpr REL::Offset CreateWaypointPath{ 0x39F8D0 };
		inline constexpr REL::Offset ClearMapMemory{ 0x3A1490 };
		inline constexpr REL::Offset ClearWorldMapTexture{ 0x3A1670 };
		inline constexpr REL::Offset ShouldRenderLocalMap{ 0x3A1750 };
	}

	namespace MediaLocationController
	{
		inline constexpr REL::Offset ctor{ 0x195310 };
		inline constexpr REL::Offset GetRandomListItem{ 0x195560 };
		inline constexpr REL::Offset Update{ 0x195600 };
		inline constexpr REL::Offset GetDayNight{ 0x195D30 };
		inline constexpr REL::Offset InitItemList{ 0x196190 };
	}

	namespace MediaSet
	{
		inline constexpr REL::Offset ctor{ 0x197610 };
		inline constexpr REL::Offset Update{ 0x197990 };
		inline constexpr REL::Offset UpdateLocation{ 0x197A60 };
		inline constexpr REL::Offset UpdateDungeon{ 0x198060 };
		inline constexpr REL::Offset UpdateBattle{ 0x198550 };
		inline constexpr REL::Offset UpdateIncidentals{ 0x198890 };
	}

	namespace MediaSet_MediaLayer
	{
		inline constexpr REL::Offset ctor{ 0x1977D0 };
		inline constexpr REL::Offset Clear{ 0x197850 };
		inline constexpr REL::Offset Copy{ 0x199700 };
		inline constexpr REL::Offset ctor_1{ 0x199780 };
		inline constexpr REL::Offset Compare{ 0x199A50 };
		inline constexpr REL::Offset dtor{ 0x3D9EC0 };
	}

	namespace MemoryManager
	{
		inline constexpr REL::Offset Instance{ 0x1020 };
		inline constexpr REL::Offset SpecifyPools{ 0x466770 };
		inline constexpr REL::Offset ProcessMemoryProblem{ 0x466A90 };
		inline constexpr REL::Offset SpecifyMemoryLayout{ 0x466E00 };
		inline constexpr REL::Offset GetThreadScrapHeap{ 0x6A42E0 };
	}

	namespace MemoryManagerFile
	{
		inline constexpr REL::Offset ctor{ 0x4783C0 };
	}

	namespace MemoryPool
	{
		inline constexpr REL::Offset Allocate{ 0x6A6AA0 };
		inline constexpr REL::Offset Free{ 0x6A6C70 };
		inline constexpr REL::Offset FreeUnusedPages{ 0x6A6F90 };
		inline constexpr REL::Offset CheckFreeBlocks{ 0x6A7300 };
	}

	namespace Menu
	{
		inline constexpr REL::Offset IsMenuVisible{ 0x3027B0 };
		inline constexpr REL::Offset GetMenuTile{ 0x326070 };
		inline constexpr REL::Offset SetRenderedMenu{ 0x467A20 };
		inline constexpr REL::Offset ctor{ 0x61C4A0 };
		inline constexpr REL::Offset RemoveFromXMLArchive{ 0x61CA20 };
		inline constexpr REL::Offset CreateFinalMasterXMLFile{ 0x61D410 };
		inline constexpr REL::Offset StartFadeOut{ 0x61D910 };
		inline constexpr REL::Offset InstantFadeOut{ 0x61D9E0 };
		inline constexpr REL::Offset StartFadeIn{ 0x61DB20 };
		inline constexpr REL::Offset PrepForVisibility{ 0x61DC20 };
		inline constexpr REL::Offset SetMenuTile{ 0x61DC70 };
		inline constexpr REL::Offset RenderTemplate{ 0x61DDB0 };
		inline constexpr REL::Offset GetMaxDepth{ 0x61DFB0 };
		inline constexpr REL::Offset SetMenuByClass{ 0x61E130 };
	}

	namespace MenuConsole
	{
		inline constexpr REL::Offset IsVisible{ 0xA4020 };
		inline constexpr REL::Offset ctor{ 0x31AF10 };
		inline constexpr REL::Offset Instance{ 0x31B160 };
		inline constexpr REL::Offset Idle{ 0x31B210 };
		inline constexpr REL::Offset PrintLine{ 0x31D030 };
		inline constexpr REL::Offset PrintLine_1{ 0x31D0A0 };
		inline constexpr REL::Offset ScrollBy{ 0x31D380 };
		inline constexpr REL::Offset RefreshLines{ 0x31D410 };
		inline constexpr REL::Offset ToggleVisible{ 0x31D580 };
		inline constexpr REL::Offset SetVisible{ 0x31D620 };
		inline constexpr REL::Offset OnEnterMenuMode{ 0x31D770 };
		inline constexpr REL::Offset DumpTextures{ 0x31D800 };
		inline constexpr REL::Offset IsMenuTexture{ 0x31DCA0 };
		inline constexpr REL::Offset WriteToOutputFile{ 0x31DD90 };
		inline constexpr REL::Offset pInstance{ 0xDD8CE8 };
	}

	namespace MenuManager
	{
		inline constexpr REL::Offset Instance{ 0x31E290 };
		inline constexpr REL::Offset CreateMenuByClass{ 0x31E420 };
		inline constexpr REL::Offset ReloadMenu{ 0x320AA0 };
		inline constexpr REL::Offset GetFrontmostMenu{ 0x320E60 };
		inline constexpr REL::Offset IsMenuOpen{ 0x320F90 };
		inline constexpr REL::Offset pInstance{ 0xDD8D54 };
	}

	namespace MenuTopic
	{
		inline constexpr REL::Offset ctor{ 0x43DA50 };
		inline constexpr REL::Offset ctor_1{ 0x43DB00 };
		inline constexpr REL::Offset FillResponseList{ 0x43DF80 };
		inline constexpr REL::Offset FirstResponse{ 0x43E0C0 };
		inline constexpr REL::Offset GetSaveSize{ 0x43F280 };
		inline constexpr REL::Offset SaveGame{ 0x43F3E0 };
		inline constexpr REL::Offset LoadGame{ 0x43F680 };
		inline constexpr REL::Offset SaveGame_1{ 0x43FB10 };
		inline constexpr REL::Offset LoadGame_1{ 0x43FBE0 };
	}

	namespace MenuTopicManager
	{
		inline constexpr REL::Offset FirstTopic{ 0x43E370 };
		inline constexpr REL::Offset GetCurrentTopic{ 0x43E4C0 };
		inline constexpr REL::Offset GetGreeting{ 0x43E4F0 };
		inline constexpr REL::Offset Destroy{ 0x43E510 };
		inline constexpr REL::Offset Initialize{ 0x43E620 };
		inline constexpr REL::Offset DoSpeechChallengeCheck{ 0x43E850 };
		inline constexpr REL::Offset ProcessCurrentTopic{ 0x43EBB0 };
		inline constexpr REL::Offset FillTopicList{ 0x43ED50 };
		inline constexpr REL::Offset GetCurrentTopicList{ 0x43F260 };
		inline constexpr REL::Offset pInstance{ 0xDDDDE4 };
	}

	namespace MessageHandler
	{
		inline constexpr REL::Offset IncDisableWarningCount{ 0x3B2B0 };
		inline constexpr REL::Offset ForceNextWarningToDisplay{ 0x61300 };
		inline constexpr REL::Offset QWarningCount{ 0x6E8A0 };
		inline constexpr REL::Offset SetWarningCount{ 0xFFFE0 };
		inline constexpr REL::Offset Handler{ 0x2259F0 };
		inline constexpr REL::Offset WriteFile{ 0x83BE50 };
	}

	namespace MessageMenu
	{
		inline constexpr REL::Offset ctor{ 0x3A8A10 };
		inline constexpr REL::Offset Create{ 0x3A8BA0 };
		inline constexpr REL::Offset Close{ 0x3A8DF0 };
		inline constexpr REL::Offset AddMessageToQueue{ 0x3A8E60 };
		inline constexpr REL::Offset GetQueueHead{ 0x3A92A0 };
		inline constexpr REL::Offset LoadNextMessage{ 0x3A92E0 };
		inline constexpr REL::Offset ClearMessageQueue{ 0x3AA480 };
		inline constexpr REL::Offset ClearMessageQueueHead{ 0x3AA530 };
		inline constexpr REL::Offset DisableMessageMenu{ 0x3AA6B0 };
		inline constexpr REL::Offset AddMessageToQueue_1{ 0x3AA720 };
		inline constexpr REL::Offset SetPauseMenuMode{ 0x3AAF20 };
	}

	namespace MessageMenu_MessageMenuEntry
	{
		inline constexpr REL::Offset ctor{ 0x3A8850 };
		inline constexpr REL::Offset dtor{ 0x3A8960 };
	}

	namespace MiddleHighProcess
	{
		inline constexpr REL::Offset ctor{ 0x513FE0 };
		inline constexpr REL::Offset ClearReservation{ 0x514B40 };
		inline constexpr REL::Offset DidPathingFail{ 0x515EF0 };
		inline constexpr REL::Offset SetTargetData{ 0x51AE00 };
		inline constexpr REL::Offset ProcessEscortOneHour{ 0x51C810 };
		inline constexpr REL::Offset ProcessFollowOneHour{ 0x51D3C0 };
		inline constexpr REL::Offset ProcessEatOneHour{ 0x51D790 };
		inline constexpr REL::Offset ProcessActivateOneHour{ 0x51D810 };
		inline constexpr REL::Offset SetWeaponFlags{ 0x51E780 };
		inline constexpr REL::Offset ReloadDynamicIdleOn1stPerson{ 0x521250 };
		inline constexpr REL::Offset AlignToFurnitureAndAddPostAnimSitSleep{ 0x521350 };
		inline constexpr REL::Offset FindBedChairs{ 0x522670 };
		inline constexpr REL::Offset EvaluateReferenceforSitSleep{ 0x522960 };
		inline constexpr REL::Offset ReparentWeapon{ 0x523960 };
		inline constexpr REL::Offset SaveCharController{ 0x528880 };
		inline constexpr REL::Offset LoadCharController{ 0x528A50 };
		inline constexpr REL::Offset ShouldPickPackIdle{ 0x529820 };
		inline constexpr REL::Offset PickPackageIdles{ 0x529960 };
		inline constexpr REL::Offset ClearShootingAction{ 0x52BF20 };
		inline constexpr REL::Offset ClearFurnitureMarker{ 0x52C680 };
	}

	namespace MiddleLowProcess
	{
		inline constexpr REL::Offset ctor{ 0x52C950 };
	}

	namespace MiscStat
	{
		inline constexpr REL::Offset ctor{ 0xD5B60 };
	}

	namespace MissileProjectile
	{
		inline constexpr REL::Offset ProcessBounce{ 0x5B8C90 };
		inline constexpr REL::Offset ProcessImpale{ 0x5B90B0 };
		inline constexpr REL::Offset ProcessStick{ 0x5BA660 };
	}

	namespace MobIterOperator
	{
		inline constexpr REL::Offset ctor{ 0x1D8B10 };
	}

	namespace MobileObject
	{
		inline constexpr REL::Offset GetRunsInLow{ 0x37BB0 };
		inline constexpr REL::Offset IsTalkingActivator{ 0x174900 };
		inline constexpr REL::Offset SetRotation{ 0x46D490 };
		inline constexpr REL::Offset ctor{ 0x52EB50 };
		inline constexpr REL::Offset CleanUpOtherMobileObjects{ 0x52ED60 };
		inline constexpr REL::Offset GetCharController{ 0x5306D0 };
		inline constexpr REL::Offset SetPackageStartLocationFromCurrentLocation{ 0x5316C0 };
		inline constexpr REL::Offset GetCurrentProcessType{ 0x531850 };
		inline constexpr REL::Offset ModHeading{ 0x531D30 };
		inline constexpr REL::Offset GetLooking{ 0x531D70 };
		inline constexpr REL::Offset SetLooking{ 0x531D90 };
		inline constexpr REL::Offset ModLooking{ 0x531E50 };
		inline constexpr REL::Offset GetCollisionFilter{ 0x531ED0 };
		inline constexpr REL::Offset SetChaseBip{ 0x531FB0 };
		inline constexpr REL::Offset PlaySound{ 0x533010 };
		inline constexpr REL::Offset PlaySoundByEditorName{ 0x533270 };
		inline constexpr REL::Offset GetDesiredProcessLevel{ 0x5334B0 };
		inline constexpr REL::Offset IsinDialogue{ 0x5336C0 };
		inline constexpr REL::Offset IsInAir{ 0x5337B0 };
		inline constexpr REL::Offset IsInDialoguewithPlayer{ 0x533840 };
		inline constexpr REL::Offset StopCurrentDialogue{ 0x534250 };
		inline constexpr REL::Offset GetCurrentPackage{ 0x5344A0 };
		inline constexpr REL::Offset UpdateTopicInfoSayOnce{ 0x535AE0 };
		inline constexpr REL::Offset SoundFileCallBack{ 0x535CC0 };
		inline constexpr REL::Offset ChangeDialogueAnimation{ 0x535D90 };
		inline constexpr REL::Offset SayToCallBack{ 0x536A20 };
		inline constexpr REL::Offset DialogueConversationCallBack{ 0x536AC0 };
		inline constexpr REL::Offset GetActualHeading{ 0x536DA0 };
	}

	namespace MobileObjectMessage
	{
		inline constexpr REL::Offset ctor{ 0x4C8190 };
	}

	namespace MobileObjectTaskletData
	{
		inline constexpr REL::Offset RunToCompletion{ 0x4C8240 };
		inline constexpr REL::Offset ctor{ 0x4C82E0 };
		inline constexpr REL::Offset SendEndMessage{ 0x4CA040 };
	}

	namespace Model
	{
		inline constexpr REL::Offset DecRefCount{ 0xC130 };
		inline constexpr REL::Offset ctor{ 0x3AAF0 };
		inline constexpr REL::Offset ctor_1{ 0x3ABF0 };
		inline constexpr REL::Offset DecManualRefCount{ 0x3ACB0 };
		inline constexpr REL::Offset InitModel{ 0x3ACE0 };
		inline constexpr REL::Offset IncManualRefCount{ 0x52C870 };
	}

	namespace ModelLoader
	{
		inline constexpr REL::Offset GetLoadTexturesDegraded{ 0x3C130 };
		inline constexpr REL::Offset dtor{ 0x42AA0 };
		inline constexpr REL::Offset OutputModelMapContents{ 0x43270 };
		inline constexpr REL::Offset ReuseQueuedTexture{ 0x43540 };
		inline constexpr REL::Offset QueueTexture{ 0x436C0 };
		inline constexpr REL::Offset QueueTexture_1{ 0x43AF0 };
		inline constexpr REL::Offset QueueModel{ 0x43D30 };
		inline constexpr REL::Offset QueueModel_1{ 0x43DC0 };
		inline constexpr REL::Offset QueueModel_2{ 0x44040 };
		inline constexpr REL::Offset QueueModel_3{ 0x440D0 };
		inline constexpr REL::Offset QueueModel_4{ 0x442C0 };
		inline constexpr REL::Offset QueueModel_5{ 0x44350 };
		inline constexpr REL::Offset QueueTreeModel{ 0x44540 };
		inline constexpr REL::Offset QueueTreeModel_1{ 0x445C0 };
		inline constexpr REL::Offset QueueReference{ 0x44850 };
		inline constexpr REL::Offset QueueBoundObject{ 0x44D40 };
		inline constexpr REL::Offset QueueBoundObject_1{ 0x44DC0 };
		inline constexpr REL::Offset QueueHelmet{ 0x450C0 };
		inline constexpr REL::Offset ReleaseModel{ 0x45300 };
		inline constexpr REL::Offset ReleaseKF{ 0x45370 };
		inline constexpr REL::Offset CancelReplacementKFList{ 0x45430 };
		inline constexpr REL::Offset CancelReference{ 0x45570 };
		inline constexpr REL::Offset IsReferenceQueued{ 0x45750 };
		inline constexpr REL::Offset QueueCreatureParts{ 0x457D0 };
		inline constexpr REL::Offset QueueAnimations{ 0x45A10 };
		inline constexpr REL::Offset QueueModelList{ 0x463B0 };
		inline constexpr REL::Offset QueueKFList{ 0x46500 };
		inline constexpr REL::Offset QueueReplacementKFList{ 0x465F0 };
		inline constexpr REL::Offset GetModelForBoundObject{ 0x46A60 };
		inline constexpr REL::Offset UpdateQueuedReferencePriorities{ 0x46B50 };
		inline constexpr REL::Offset LoadQueuedPriorityCallback{ 0x46EA0 };
		inline constexpr REL::Offset LoadFile{ 0x47080 };
		inline constexpr REL::Offset LoadKF{ 0x471C0 };
		inline constexpr REL::Offset FindModel{ 0x472A0 };
		inline constexpr REL::Offset BuildFileList{ 0x47300 };
		inline constexpr REL::Offset BuildKFFileList{ 0x47330 };
		inline constexpr REL::Offset CopyFilenameList{ 0x47850 };
		inline constexpr REL::Offset QueueFaceGenFile{ 0x47A40 };
		inline constexpr REL::Offset QueueEGMFile{ 0x47BF0 };
		inline constexpr REL::Offset QueueTRIFile{ 0x48080 };
		inline constexpr REL::Offset CancelAllFiles{ 0x48420 };
		inline constexpr REL::Offset ClearUnusedModels{ 0x48620 };
		inline constexpr REL::Offset TryAndRemoveModel{ 0x48920 };
		inline constexpr REL::Offset LoadAddonNodes{ 0x489B0 };
		inline constexpr REL::Offset LoadAddons{ 0x48A90 };
		inline constexpr REL::Offset ReleaseFile{ 0x5A5E0 };
		inline constexpr REL::Offset ReleaseKFFile{ 0x8EFF0 };
	}

	namespace ModifierList
	{
		inline constexpr REL::Offset ctor{ 0x537000 };
		inline constexpr REL::Offset DeleteAllModifiers{ 0x5370B0 };
		inline constexpr REL::Offset AddModifier{ 0x537380 };
		inline constexpr REL::Offset AdjustModifier{ 0x537480 };
		inline constexpr REL::Offset GetModifier{ 0x537730 };
		inline constexpr REL::Offset LoadGame{ 0x5379C0 };
		inline constexpr REL::Offset Revert{ 0x537B30 };
		inline constexpr REL::Offset SaveGame{ 0x537B50 };
		inline constexpr REL::Offset LoadGame_1{ 0x537C60 };
	}

	namespace Moon
	{
		inline constexpr REL::Offset ctor{ 0x234A70 };
		inline constexpr REL::Offset RemoveTextures{ 0x2369A0 };
	}

	namespace MovedReferenceInitialData
	{
		inline constexpr REL::Offset ctor{ 0x44EB50 };
	}

	namespace Movie
	{
		inline constexpr REL::Offset Update{ 0xAC1060 };
	}

	namespace MoviePlayer
	{
		inline constexpr REL::Offset StartSequence{ 0xAC16D0 };
		inline constexpr REL::Offset GetPlayingSequence{ 0xAC17C0 };
		inline constexpr REL::Offset PlaySequence{ 0xAC2760 };
		inline constexpr REL::Offset Pause{ 0xAC2A10 };
	}

	namespace MultiBoundMarkerData
	{
		inline constexpr REL::Offset Load{ 0x38FC0 };
		inline constexpr REL::Offset CreateMultiBoundForRef{ 0x39490 };
		inline constexpr REL::Offset CreateRoomForRef{ 0x396E0 };
		inline constexpr REL::Offset MultiBoundIntersectsCell{ 0x39940 };
	}

	namespace MuzzleFlash
	{
		inline constexpr REL::Offset Init{ 0x5BAF50 };
		inline constexpr REL::Offset Update{ 0x5BB080 };
		inline constexpr REL::Offset Position3D{ 0x5BB240 };
		inline constexpr REL::Offset UpdateLight{ 0x5BB8A0 };
	}

	namespace NAVMESH_PORTAL
	{
		inline constexpr REL::Offset Endian{ 0x141E0 };
	}

	namespace NavMesh
	{
		inline constexpr REL::Offset GetTriangle{ 0x1582F0 };
		inline constexpr REL::Offset ctor{ 0x28EB80 };
		inline constexpr REL::Offset GetParentSpace{ 0x28EF70 };
		inline constexpr REL::Offset GetNavMeshInfo{ 0x28EFB0 };
		inline constexpr REL::Offset GetEdge{ 0x28EFD0 };
		inline constexpr REL::Offset GetEdgeVertices{ 0x28F040 };
		inline constexpr REL::Offset GetVertex{ 0x28F0A0 };
		inline constexpr REL::Offset GetEdgeVertices_1{ 0x28F0C0 };
		inline constexpr REL::Offset GetTriangleVertices{ 0x28F160 };
		inline constexpr REL::Offset GetEdgeExtraInfo{ 0x28F230 };
		inline constexpr REL::Offset GetMatchingEdge{ 0x28F340 };
		inline constexpr REL::Offset GetMatchingEdge_1{ 0x28F3B0 };
		inline constexpr REL::Offset GetMatchingEdge_2{ 0x28F460 };
		inline constexpr REL::Offset GetMatchingEdge_3{ 0x28F670 };
		inline constexpr REL::Offset CheckNavMesh{ 0x28F6D0 };
		inline constexpr REL::Offset CheckNavMeshAgainstNeighbors{ 0x2908F0 };
		inline constexpr REL::Offset ClearNavMesh{ 0x290D50 };
		inline constexpr REL::Offset DeleteExtraEdgeInfo{ 0x290E90 };
		inline constexpr REL::Offset AddExtraEdgeInfo{ 0x291020 };
		inline constexpr REL::Offset CreateCoverArray{ 0x2910A0 };
		inline constexpr REL::Offset GetTrianglesForGridCell{ 0x2911F0 };
		inline constexpr REL::Offset GetGridIndicesForTriangle{ 0x291350 };
		inline constexpr REL::Offset AddStaticAvoidNode{ 0x291510 };
		inline constexpr REL::Offset GetExtraEdgeInfo{ 0x293D30 };
		inline constexpr REL::Offset MakeCopyForObstacle{ 0x2942E0 };
		inline constexpr REL::Offset SetDisableNavMesh{ 0x294500 };
		inline constexpr REL::Offset FixPortalsFromNavMeshDeletion{ 0x2953B0 };
		inline constexpr REL::Offset FlipTriangle{ 0x295660 };
		inline constexpr REL::Offset ComputeBounds{ 0x2957F0 };
		inline constexpr REL::Offset CreateGrid{ 0x2959B0 };
		inline constexpr REL::Offset AddTrianglesToGrid{ 0x2965D0 };
		inline constexpr REL::Offset RemoveTrianglesFromGrid{ 0x2967F0 };
		inline constexpr REL::Offset FindTriangleForLocation{ 0x296A50 };
		inline constexpr REL::Offset FindClosestTriangleForLocation{ 0x296CF0 };
		inline constexpr REL::Offset FindClosestOpenEdgeForLocation{ 0x297010 };
		inline constexpr REL::Offset FindPortalTriangles{ 0x297590 };
		inline constexpr REL::Offset IsPointInsideNavmesh{ 0x297670 };
		inline constexpr REL::Offset SetEmptyEdgeExtraInfo{ 0x2976A0 };
		inline constexpr REL::Offset ComputeTriangleZForLocation{ 0x297980 };
		inline constexpr REL::Offset ComputeNavMeshZForLocation{ 0x297B70 };
		inline constexpr REL::Offset FindRandomPointWithinRadius{ 0x297C10 };
		inline constexpr REL::Offset MoveAwayFromEdge{ 0x297D40 };
		inline constexpr REL::Offset FindInterectingEdge{ 0x298060 };
		inline constexpr REL::Offset FindInterectingEdge2{ 0x298160 };
		inline constexpr REL::Offset FindIntersectingEdgeFast{ 0x298320 };
		inline constexpr REL::Offset UpdateNavMeshInfo{ 0x2986D0 };
		inline constexpr REL::Offset GetOverlappedTriangleList{ 0x2987D0 };
		inline constexpr REL::Offset AddObstacle{ 0x298F40 };
		inline constexpr REL::Offset RemoveObstacle{ 0x298FC0 };
		inline constexpr REL::Offset RemoveObstacle_1{ 0x299000 };
		inline constexpr REL::Offset ClearAllObstacles{ 0x2993C0 };
		inline constexpr REL::Offset GetUndoDataMaxObstacleCount{ 0x299690 };
		inline constexpr REL::Offset GetObstacleForTriangle{ 0x2997B0 };
		inline constexpr REL::Offset AddClosedDoor{ 0x2997E0 };
		inline constexpr REL::Offset GetClosedDoorInfoForTriangle{ 0x299AF0 };
		inline constexpr REL::Offset CreatePOVs{ 0x299B60 };
		inline constexpr REL::Offset GetPOVsForTriangle{ 0x29A830 };
		inline constexpr REL::Offset GetObstaclePOVsForTriangle{ 0x29A940 };
		inline constexpr REL::Offset ReconnectEnabledPortals{ 0x29AA20 };
		inline constexpr REL::Offset GetNeighborCount{ 0x2D8910 };
	}

	namespace NavMeshArray
	{
		inline constexpr REL::Offset ctor{ 0x694E0 };
		inline constexpr REL::Offset AddNavMesh{ 0x69500 };
		inline constexpr REL::Offset dtor{ 0x141A60 };
		inline constexpr REL::Offset RemoveNavMesh{ 0x29BB00 };
	}

	namespace NavMeshBounds
	{
		inline constexpr REL::Offset ctor{ 0x29BCF0 };
		inline constexpr REL::Offset dtor{ 0x29BDA0 };
		inline constexpr REL::Offset FillBoundsChunk{ 0x29C4C0 };
		inline constexpr REL::Offset SetFromBoundsChunk{ 0x29C8F0 };
		inline constexpr REL::Offset CopyTo{ 0x29CC80 };
	}

	namespace NavMeshGrid
	{
		inline constexpr REL::Offset GetGridRowAndColumn{ 0x2912A0 };
		inline constexpr REL::Offset Clear{ 0x29D2D0 };
		inline constexpr REL::Offset GetTriangleData{ 0x29D370 };
		inline constexpr REL::Offset GetTriangleDataForAABB{ 0x29D4B0 };
		inline constexpr REL::Offset SetBoundingExtents{ 0x29D800 };
		inline constexpr REL::Offset Load{ 0x29DA40 };
		inline constexpr REL::Offset CopyTo{ 0x29DD50 };
	}

	namespace NavMeshInfo
	{
		inline constexpr REL::Offset GetDisabled{ 0x28F320 };
		inline constexpr REL::Offset GetWorldSpace{ 0x290800 };
		inline constexpr REL::Offset GetParentSpace{ 0x290830 };
		inline constexpr REL::Offset GetNavMeshEvenDisabled{ 0x290860 };
		inline constexpr REL::Offset SetDisabled{ 0x293EF0 };
		inline constexpr REL::Offset GetNavMesh{ 0x29AD00 };
		inline constexpr REL::Offset HasNavMesh{ 0x29DFB0 };
		inline constexpr REL::Offset ctor{ 0x2B46A0 };
		inline constexpr REL::Offset dtor{ 0x2B4790 };
		inline constexpr REL::Offset FillInfoChunk{ 0x2B48F0 };
		inline constexpr REL::Offset SetFromInfoChunk{ 0x2B4B50 };
		inline constexpr REL::Offset FillPortalChunk{ 0x2B4E80 };
		inline constexpr REL::Offset SetFromPortalChunk{ 0x2B51A0 };
		inline constexpr REL::Offset InitDoorPointers{ 0x2B5490 };
		inline constexpr REL::Offset CreateFromNavMesh{ 0x2B5560 };
		inline constexpr REL::Offset CopyTo{ 0x2B5AB0 };
		inline constexpr REL::Offset GetCell{ 0x2B7770 };
		inline constexpr REL::Offset GetInteriorCell{ 0x2B77B0 };
	}

	namespace NavMeshInfoMap
	{
		inline constexpr REL::Offset GetNavMeshInfo{ 0x293D70 };
		inline constexpr REL::Offset ctor{ 0x2B5C30 };
		inline constexpr REL::Offset DeleteNavMeshInfo{ 0x2B6A00 };
		inline constexpr REL::Offset Clear{ 0x2B6B20 };
		inline constexpr REL::Offset CheckMap{ 0x2B6C60 };
		inline constexpr REL::Offset FindNavMeshInfoForCell{ 0x2B77E0 };
		inline constexpr REL::Offset FindNavMeshInfoForCellKey{ 0x2B7850 };
		inline constexpr REL::Offset GetAllNavMeshInfo{ 0x2B7910 };
		inline constexpr REL::Offset AddInfoToCellKeyMap{ 0x2B7980 };
	}

	namespace NavMeshInfoSearch
	{
		inline constexpr REL::Offset ctor{ 0x2B8340 };
		inline constexpr REL::Offset Pathfind{ 0x2B8C50 };
	}

	namespace NavMeshObstacleCutter
	{
		inline constexpr REL::Offset ctor{ 0x2BBB80 };
		inline constexpr REL::Offset dtor{ 0x2BBC50 };
		inline constexpr REL::Offset SplitNavMeshFromObstacle{ 0x2BBD30 };
		inline constexpr REL::Offset UndoNavMeshFromObstacleUndoData{ 0x2BC3E0 };
		inline constexpr REL::Offset ResetNavMeshFromObstacleUndoData{ 0x2BC8E0 };
		inline constexpr REL::Offset GetTrianglesMaxObstacleCount{ 0x2BC940 };
		inline constexpr REL::Offset GetModifiedTriangleList{ 0x2BCA20 };
		inline constexpr REL::Offset GenerateOutsideVertsAndEdges{ 0x2BCC60 };
		inline constexpr REL::Offset GenerateBoxVertsAndEdges{ 0x2BD040 };
		inline constexpr REL::Offset SplitEdges{ 0x2BD540 };
		inline constexpr REL::Offset RemoveInvalidEdges{ 0x2BDCB0 };
		inline constexpr REL::Offset CreateRemainingEdges{ 0x2BDF50 };
		inline constexpr REL::Offset CreateNewTriangles{ 0x2BE120 };
		inline constexpr REL::Offset RemovePOVs{ 0x2BE6F0 };
		inline constexpr REL::Offset SetObstacleCount{ 0x2BE770 };
		inline constexpr REL::Offset ConnectTriangles{ 0x2BE830 };
		inline constexpr REL::Offset CreateSwappedEdgeList{ 0x2BE950 };
		inline constexpr REL::Offset UpdateCoverArray{ 0x2BEC20 };
		inline constexpr REL::Offset CheckTriangleAgainstObstacle{ 0x2BEC40 };
		inline constexpr REL::Offset CheckTriangleAgainstOverlapped{ 0x2BEDE0 };
		inline constexpr REL::Offset CheckPotentialEdgeAgainstRunningEdgeList{ 0x2BEEA0 };
		inline constexpr REL::Offset IsVertInOverlappedArea{ 0x2BF1D0 };
		inline constexpr REL::Offset IsPointInOverlappedArea{ 0x2BF220 };
		inline constexpr REL::Offset CreateVertex{ 0x2BF3C0 };
		inline constexpr REL::Offset CreateEdge{ 0x2BF4D0 };
	}

	namespace NavMeshObstacleManager
	{
		inline constexpr REL::Offset ctor{ 0x2C02C0 };
		inline constexpr REL::Offset dtor{ 0x2C0510 };
		inline constexpr REL::Offset GetInstance{ 0x2C0720 };
		inline constexpr REL::Offset Initialize{ 0x2C07D0 };
		inline constexpr REL::Offset Release{ 0x2C0900 };
		inline constexpr REL::Offset ClearAllObstacles{ 0x2C09F0 };
		inline constexpr REL::Offset AddObstacleForReference{ 0x2C0C30 };
		inline constexpr REL::Offset RemoveObstacleForReference{ 0x2C0C80 };
		inline constexpr REL::Offset OnDoorOpen{ 0x2C0DC0 };
		inline constexpr REL::Offset OnDoorClose{ 0x2C0F10 };
		inline constexpr REL::Offset OnDoorRemove{ 0x2C1060 };
		inline constexpr REL::Offset ReallyAddObstaclesForReference{ 0x2C1190 };
		inline constexpr REL::Offset UpdateObstacle{ 0x2C1760 };
		inline constexpr REL::Offset UpdateObstaclesForReference{ 0x2C1920 };
		inline constexpr REL::Offset AddObstacleToUpdateList{ 0x2C1C70 };
		inline constexpr REL::Offset AddActivationListener{ 0x2C1D60 };
		inline constexpr REL::Offset RemoveActivationListener{ 0x2C1E00 };
		inline constexpr REL::Offset GetCellListForObstacle{ 0x2C1EA0 };
		inline constexpr REL::Offset GetNavMeshListForObstacle{ 0x2C2050 };
		inline constexpr REL::Offset AddObstaclesFor3DRecursive{ 0x2C2210 };
		inline constexpr REL::Offset FindFirstObstacleFor3D{ 0x2C2550 };
		inline constexpr REL::Offset UpdateObstacleData{ 0x2C2650 };
		inline constexpr REL::Offset UpdateObstacleActiveStatus{ 0x2C3440 };
		inline constexpr REL::Offset GetObstacleDataForReference{ 0x2C34F0 };
		inline constexpr REL::Offset IsPointInBox{ 0x2C3570 };
		inline constexpr REL::Offset Update{ 0x2C3640 };
		inline constexpr REL::Offset GetProcessedTaskCount{ 0x2C3920 };
		inline constexpr REL::Offset GetBackgroundTaskCount{ 0x2C3970 };
		inline constexpr REL::Offset ForceUpdateAllObstacles{ 0x2C39C0 };
		inline constexpr REL::Offset ReconnectPortals{ 0x2C3BA0 };
		inline constexpr REL::Offset CreatePortal{ 0x2C4390 };
		inline constexpr REL::Offset CreateOneWayPortal{ 0x2C4460 };
		inline constexpr REL::Offset ProcessNewReferences{ 0x2C45E0 };
		inline constexpr REL::Offset ProcessDeactivatedObstacles{ 0x2C4AD0 };
		inline constexpr REL::Offset ProcessMovingReferences{ 0x2C4D30 };
		inline constexpr REL::Offset QueueTasks{ 0x2C4EC0 };
		inline constexpr REL::Offset AddProcessedTask{ 0x2C4F70 };
		inline constexpr REL::Offset ProcessNewDoors{ 0x2C5190 };
		inline constexpr REL::Offset DrawObstacles{ 0x2C5460 };
		inline constexpr REL::Offset CreateBoundingBox3DNode{ 0x2C5840 };
		inline constexpr REL::Offset AddBoundingBox3DNode{ 0x2C5B20 };
		inline constexpr REL::Offset PushTask{ 0x2C5CE0 };
		inline constexpr REL::Offset GetTaskForNavMesh{ 0x2C5EF0 };
	}

	namespace NavMeshPOVSearch
	{
		inline constexpr REL::Offset ctor{ 0x29E110 };
		inline constexpr REL::Offset BuildPOVListForTriangles{ 0x29E3B0 };
		inline constexpr REL::Offset BuildPath{ 0x29F010 };
		inline constexpr REL::Offset CheckArcAgainstPOVs{ 0x2A0940 };
		inline constexpr REL::Offset CheckArcAgainstNavMesh2{ 0x2A0C50 };
		inline constexpr REL::Offset CheckSegmentAgainstNavMesh{ 0x2A0EF0 };
		inline constexpr REL::Offset DrawArc{ 0x2A1180 };
		inline constexpr REL::Offset DrawLine{ 0x2A1330 };
	}

	namespace NavMeshPtr
	{
		inline constexpr REL::Offset operator_call{ 0x2F4C0 };
		inline constexpr REL::Offset ctor{ 0x2FA20 };
		inline constexpr REL::Offset dtor{ 0x2FA40 };
		inline constexpr REL::Offset MakeNavMeshPtr{ 0x64FC0 };
		inline constexpr REL::Offset ctor_1{ 0x64FF0 };
		inline constexpr REL::Offset MakeNavMeshPtr_1{ 0x290890 };
		inline constexpr REL::Offset ctor_2{ 0x2DD640 };
	}

	namespace NavMeshRender
	{
		inline constexpr REL::Offset GetInstance{ 0x152BA0 };
		inline constexpr REL::Offset GetDraw{ 0x152BB0 };
		inline constexpr REL::Offset ctor{ 0x2A2A20 };
		inline constexpr REL::Offset dtor{ 0x2A3580 };
		inline constexpr REL::Offset SetDraw{ 0x2A36E0 };
		inline constexpr REL::Offset AddDrawOnlyNavMeshes{ 0x2A37A0 };
		inline constexpr REL::Offset UpdateRenderOnlyNavMeshes{ 0x2A5CA0 };
		inline constexpr REL::Offset GetTriangleColor{ 0x2A5DA0 };
		inline constexpr REL::Offset SetTransparentOverLayMode{ 0x2A5EE0 };
	}

	namespace NavMeshSaveStruct
	{
		inline constexpr REL::Offset Endian{ 0x293DC0 };
	}

	namespace NavMeshSearch
	{
		inline constexpr REL::Offset ctor{ 0x2A6A40 };
		inline constexpr REL::Offset BuildNodePath{ 0x2A6B70 };
		inline constexpr REL::Offset SetNodeData{ 0x2A6EF0 };
	}

	namespace NavMeshSearchClosePoint
	{
		inline constexpr REL::Offset BuildNodePath{ 0x2A8B60 };
		inline constexpr REL::Offset SetNodeData{ 0x2A8D20 };
	}

	namespace NavMeshSearchFlee
	{
		inline constexpr REL::Offset ctor{ 0x2A9200 };
		inline constexpr REL::Offset BuildNodePath{ 0x2A92E0 };
		inline constexpr REL::Offset GetKeyForNode{ 0x2A94F0 };
		inline constexpr REL::Offset SetNodeData{ 0x2A9580 };
	}

	namespace NavMeshSearchHide
	{
		inline constexpr REL::Offset ctor{ 0x2A9CB0 };
		inline constexpr REL::Offset BuildNodePath{ 0x2A9D80 };
		inline constexpr REL::Offset SetNodeData{ 0x2A9F60 };
	}

	namespace NavMeshSearchLOS
	{
		inline constexpr REL::Offset ctor{ 0x2AA620 };
		inline constexpr REL::Offset BuildNodePath{ 0x2AA780 };
		inline constexpr REL::Offset SetNodeData{ 0x2AAC10 };
	}

	namespace NavMeshSearchMaxCost
	{
		inline constexpr REL::Offset ctor{ 0x2AB410 };
		inline constexpr REL::Offset BuildNodePath{ 0x2AB4A0 };
		inline constexpr REL::Offset FindClosestPoint{ 0x2AB670 };
	}

	namespace NavMeshSearchNode
	{
		inline constexpr REL::Offset GetTriangle{ 0x2A78D0 };
	}

	namespace NavMeshSearchSLPoint
	{
		inline constexpr REL::Offset FindStraightLinePath{ 0x2AC220 };
		inline constexpr REL::Offset CheckPointOnGoalCircle{ 0x2AC8B0 };
	}

	namespace NavMeshTriangle
	{
		inline constexpr REL::Offset ClearFlag{ 0x119270 };
		inline constexpr REL::Offset GetVert{ 0x1582D0 };
		inline constexpr REL::Offset EdgeHasExtraInfo{ 0x28F1D0 };
		inline constexpr REL::Offset IsEdgeConnected{ 0x28F200 };
		inline constexpr REL::Offset HasCover{ 0x290770 };
		inline constexpr REL::Offset ClearEdgeExtraInfo{ 0x290790 };
		inline constexpr REL::Offset SetTri{ 0x2907D0 };
		inline constexpr REL::Offset HasEdgeExtraInfo{ 0x290E10 };
		inline constexpr REL::Offset SetEdgeExtraInfo{ 0x290E30 };
		inline constexpr REL::Offset GetEdgeCoverData{ 0x291040 };
		inline constexpr REL::Offset GetFlag{ 0x291140 };
		inline constexpr REL::Offset SetFlag{ 0x291570 };
		inline constexpr REL::Offset IsPreferred{ 0x293B70 };
		inline constexpr REL::Offset IsNoLargeCreature{ 0x293B90 };
		inline constexpr REL::Offset SetObjectCount{ 0x293BD0 };
		inline constexpr REL::Offset Endian{ 0x293C10 };
		inline constexpr REL::Offset GetObjectCount{ 0x299790 };
		inline constexpr REL::Offset IsWater{ 0x2A5EC0 };
		inline constexpr REL::Offset GetCoverLevel{ 0x2AD3B0 };
	}

	namespace NavMeshTriangleEdgePortal
	{
		inline constexpr REL::Offset Load{ 0x29DFD0 };
	}

	namespace NiAVObject
	{
		inline constexpr REL::Offset AttachProperty{ 0x39410 };
		inline constexpr REL::Offset SetBit{ 0x3B370 };
		inline constexpr REL::Offset GetWorldBound{ 0x3D450 };
		inline constexpr REL::Offset SetRotate{ 0x3FA80 };
		inline constexpr REL::Offset SetTranslate{ 0x40460 };
		inline constexpr REL::Offset SetScale{ 0x40490 };
		inline constexpr REL::Offset SetAppCulled{ 0x50F90 };
		inline constexpr REL::Offset GetAppCulled{ 0x56610 };
		inline constexpr REL::Offset GetBit{ 0x56630 };
		inline constexpr REL::Offset GetWorldTranslate{ 0x5BB80 };
		inline constexpr REL::Offset GetWorldRotate{ 0x61130 };
		inline constexpr REL::Offset SetSelectiveUpdate{ 0x902F0 };
		inline constexpr REL::Offset IsVisualObject{ 0xB2960 };
		inline constexpr REL::Offset SetTranslate_1{ 0xBC1F0 };
		inline constexpr REL::Offset UpdateObjectControllers{ 0xEFF50 };
		inline constexpr REL::Offset SetWorldTranslate{ 0xF00E0 };
		inline constexpr REL::Offset GetSelectiveUpdate{ 0xF0140 };
		inline constexpr REL::Offset DetachParent{ 0x10F5A0 };
		inline constexpr REL::Offset GetWorldTransform{ 0x124C40 };
		inline constexpr REL::Offset SetAlwaysDraw{ 0x146780 };
		inline constexpr REL::Offset SetFixedBound{ 0x1467C0 };
		inline constexpr REL::Offset CreateBoundIfNone{ 0x1467E0 };
		inline constexpr REL::Offset GetRotate{ 0x16D230 };
		inline constexpr REL::Offset QHasMovingSound{ 0x170EA0 };
		inline constexpr REL::Offset SetSelectiveUpdateRigid{ 0x176660 };
		inline constexpr REL::Offset SetCollisionObject{ 0x22BC90 };
		inline constexpr REL::Offset SetDisplayObject{ 0x235FE0 };
		inline constexpr REL::Offset GetDisplayObject{ 0x2366B0 };
		inline constexpr REL::Offset SetRotate_1{ 0x2404B0 };
		inline constexpr REL::Offset QFadedIn{ 0x3FF8E0 };
		inline constexpr REL::Offset GetWorldBoundRadius{ 0x47CE50 };
		inline constexpr REL::Offset GetWorldScale{ 0x4D01E0 };
		inline constexpr REL::Offset GetScale{ 0x5CDAE0 };
		inline constexpr REL::Offset Update{ 0x659C60 };
		inline constexpr REL::Offset UpdateSelected{ 0x659C90 };
		inline constexpr REL::Offset UpdateProperties{ 0x65A040 };
		inline constexpr REL::Offset RemoveProperty{ 0x65B230 };
	}

	namespace NiAdditionalGeometryData
	{
		inline constexpr REL::Offset ctor{ 0x137BF0 };
		inline constexpr REL::Offset ctor_1{ 0x239830 };
	}

	namespace NiAdditionalGeometryData_NiAGDDataStream
	{
		inline constexpr REL::Offset GetViewerStrings{ 0x673530 };
	}

	namespace NiAlphaProperty
	{
		inline constexpr REL::Offset ctor{ 0x391C0 };
		inline constexpr REL::Offset SetSrcBlendMode{ 0x39340 };
		inline constexpr REL::Offset SetField{ 0x39360 };
		inline constexpr REL::Offset SetDestBlendMode{ 0x39390 };
		inline constexpr REL::Offset SetAlphaTesting{ 0x393C0 };
		inline constexpr REL::Offset SetTestMode{ 0x393E0 };
		inline constexpr REL::Offset SetAlphaBlending{ 0x9ED90 };
		inline constexpr REL::Offset SetBit{ 0x233BA0 };
		inline constexpr REL::Offset SetNoSorter{ 0x236000 };
		inline constexpr REL::Offset SetTestRef{ 0x54DB80 };
		inline constexpr REL::Offset GetViewerString{ 0x65CB90 };
	}

	namespace NiBSBoneLODController
	{
		inline constexpr REL::Offset FindBoneRootNodes{ 0x852C30 };
		inline constexpr REL::Offset CollectMarkedBones{ 0x853030 };
		inline constexpr REL::Offset ctor{ 0x853D70 };
	}

	namespace NiBillboardNode
	{
		inline constexpr REL::Offset ctor{ 0x11CF00 };
		inline constexpr REL::Offset GetViewerString{ 0x67DB60 };
	}

	namespace NiBinaryExtraData
	{
		inline constexpr REL::Offset ctor{ 0x139F50 };
	}

	namespace NiBinaryStream
	{
		inline constexpr REL::Offset Read{ 0x62D80 };
		inline constexpr REL::Offset Write{ 0x73180 };
	}

	namespace NiBound
	{
		inline constexpr REL::Offset SetCenterAndRadius{ 0xA51D0 };
		inline constexpr REL::Offset operator_call{ 0xA5250 };
		inline constexpr REL::Offset ctor{ 0x2240D0 };
		inline constexpr REL::Offset GetViewerString{ 0x67FB20 };
	}

	namespace NiCamera
	{
		inline constexpr REL::Offset GetViewFrustum{ 0x5BBE0 };
		inline constexpr REL::Offset GetViewPort{ 0xA0D10 };
		inline constexpr REL::Offset SetMaxFarNearRatio{ 0x107700 };
		inline constexpr REL::Offset SetViewPort{ 0x312E60 };
		inline constexpr REL::Offset SetMinNearPlaneDist{ 0x333FD0 };
		inline constexpr REL::Offset SetViewFrustum{ 0x66FAF0 };
		inline constexpr REL::Offset WorldPtToScreenPt{ 0x66FC50 };
		inline constexpr REL::Offset WindowPointToRay{ 0x671080 };
		inline constexpr REL::Offset ctor{ 0x6712F0 };
	}

	namespace NiCloningProcess
	{
		inline constexpr REL::Offset ctor{ 0xAD0C0 };
	}

	namespace NiCollisionData
	{
		inline constexpr REL::Offset GetViewerString{ 0xAACEF0 };
		inline constexpr REL::Offset GetViewerString_1{ 0xAACFD0 };
	}

	namespace NiColor
	{
		inline constexpr REL::Offset GetViewerString{ 0x6696C0 };
	}

	namespace NiColorA
	{
		inline constexpr REL::Offset ctor{ 0x14430 };
		inline constexpr REL::Offset GetViewerString{ 0x669720 };
	}

	namespace NiControllerManager
	{
		inline constexpr REL::Offset GetSequenceByName{ 0x7A520 };
		inline constexpr REL::Offset ActivateSequence{ 0x7AAB0 };
		inline constexpr REL::Offset DeactivateSequence{ 0x7B220 };
		inline constexpr REL::Offset DeactivateAll{ 0x8FEF0 };
		inline constexpr REL::Offset GetSequenceCount{ 0x95D00 };
		inline constexpr REL::Offset GetSequenceAt{ 0x95D20 };
		inline constexpr REL::Offset GetObjectPalette{ 0x137BD0 };
	}

	namespace NiControllerSequence
	{
		inline constexpr REL::Offset GetPhase{ 0x93770 };
		inline constexpr REL::Offset SetSequenceWeight{ 0x95480 };
		inline constexpr REL::Offset ResetSequence{ 0x954C0 };
		inline constexpr REL::Offset GetEndKeyTime{ 0x108100 };
		inline constexpr REL::Offset GetOffset{ 0x239AA0 };
		inline constexpr REL::Offset GetBeginKeyTime{ 0x359450 };
		inline constexpr REL::Offset SetOffset{ 0x58ADB0 };
		inline constexpr REL::Offset GetObjectNameAt{ 0x6307C0 };
	}

	namespace NiCullingProcess
	{
		inline constexpr REL::Offset ctor{ 0x669400 };
	}

	namespace NiD3DDefaultShader
	{
		inline constexpr REL::Offset ctor{ 0xA7C6B0 };
	}

	namespace NiD3DGPUProgramCache
	{
		inline constexpr REL::Offset ctor{ 0xA8E450 };
	}

	namespace NiD3DShader
	{
		inline constexpr REL::Offset _SDMInit{ 0xA91DC0 };
	}

	namespace NiD3DShaderFactory
	{
		inline constexpr REL::Offset _SDMInit{ 0xA92E60 };
	}

	namespace NiD3DShaderInterface
	{
		inline constexpr REL::Offset InitializeShaderSystem{ 0xA81940 };
	}

	namespace NiD3DShaderProgramCreator
	{
		inline constexpr REL::Offset CreateVertexShader{ 0xA98890 };
		inline constexpr REL::Offset CreatePixelShader{ 0xA988D0 };
	}

	namespace NiD3DShaderProgramCreatorHLSL
	{
		inline constexpr REL::Offset LoadShaderCodeFromFile{ 0xA962A0 };
		inline constexpr REL::Offset LoadShaderCodeFromBuffer{ 0xA964A0 };
	}

	namespace NiDX9Renderer
	{
		inline constexpr REL::Offset GetRenderer{ 0x3C4B0 };
		inline constexpr REL::Offset LockRenderer{ 0xA0370 };
		inline constexpr REL::Offset UnlockRenderer{ 0xA03C0 };
		inline constexpr REL::Offset SetScreenSpaceCameraData{ 0xA0DD0 };
		inline constexpr REL::Offset GetBackbufferWidth{ 0xDEE10 };
		inline constexpr REL::Offset GetBackbufferHeight{ 0xDEE70 };
		inline constexpr REL::Offset SetCameraData{ 0xE9BB0 };
		inline constexpr REL::Offset SetCameraData_1{ 0xE9C90 };
		inline constexpr REL::Offset ClearBuffer{ 0x3148C0 };
		inline constexpr REL::Offset BeginOffScreenFrame{ 0x46BA10 };
		inline constexpr REL::Offset EndOffScreenFrame{ 0x46BA90 };
		inline constexpr REL::Offset BeginUsingRenderTargetGroup{ 0x76B2A0 };
		inline constexpr REL::Offset CreateDirect3D9{ 0xA69460 };
		inline constexpr REL::Offset AddToBatch{ 0xA74A40 };
	}

	namespace NiDX9VertexBufferManager
	{
		inline constexpr REL::Offset PackSkinnedVB{ 0xA8C820 };
	}

	namespace NiDynamicEffect
	{
		inline constexpr REL::Offset IncRevisionID{ 0xBC2C0 };
	}

	namespace NiExtraData
	{
		inline constexpr REL::Offset ctor{ 0x67B2E0 };
		inline constexpr REL::Offset ctor_1{ 0x67B440 };
	}

	namespace NiFixedString
	{
		inline constexpr REL::Offset ctor{ 0x38170 };
		inline constexpr REL::Offset dtor{ 0x381B0 };
		inline constexpr REL::Offset operator_char_const{ 0x3B1B0 };
	}

	namespace NiFloatInterpolator
	{
		inline constexpr REL::Offset ReplaceKeys{ 0x12CE40 };
	}

	namespace NiFogProperty
	{
		inline constexpr REL::Offset GetViewerString{ 0x699E50 };
	}

	namespace NiFormArray
	{
		inline constexpr REL::Offset GetIndexForForm{ 0xD6100 };
		inline constexpr REL::Offset GetFormAt{ 0xD6170 };
		inline constexpr REL::Offset ctor{ 0x18B3F0 };
	}

	namespace NiFrustum
	{
		inline constexpr REL::Offset ctor{ 0x671B70 };
		inline constexpr REL::Offset GetViewerString{ 0x671BC0 };
	}

	namespace NiGeometry
	{
		inline constexpr REL::Offset GetSkinInstance{ 0x3FAD0 };
		inline constexpr REL::Offset GetVertexCount{ 0x56650 };
		inline constexpr REL::Offset GetVertices{ 0x9EC60 };
		inline constexpr REL::Offset SetModelBound{ 0xA5200 };
		inline constexpr REL::Offset GetNormals{ 0xA8030 };
		inline constexpr REL::Offset GetColors{ 0xA8050 };
		inline constexpr REL::Offset GetActiveVertexCount{ 0xA8090 };
		inline constexpr REL::Offset SetSkinInstance{ 0xADDE0 };
		inline constexpr REL::Offset GetModelBound{ 0x137B10 };
		inline constexpr REL::Offset SetAdditionalGeometryData{ 0x139EF0 };
		inline constexpr REL::Offset GetModelData{ 0x1495F0 };
	}

	namespace NiGeometryData
	{
		inline constexpr REL::Offset SetKeepFlags{ 0x410D0 };
		inline constexpr REL::Offset SetCompressFlags{ 0x410F0 };
		inline constexpr REL::Offset SetConsistency{ 0x667050 };
	}

	namespace NiGeometryDataIteratorNiPoint3
	{
		inline constexpr REL::Offset ctor{ 0x134550 };
	}

	namespace NiLight
	{
		inline constexpr REL::Offset SetAmbientColor{ 0xBC280 };
		inline constexpr REL::Offset SetDiffuseColor{ 0xBC2E0 };
		inline constexpr REL::Offset SetDimmer{ 0x10DD20 };
		inline constexpr REL::Offset SetSpecularColor{ 0x10DD50 };
	}

	namespace NiLines
	{
		inline constexpr REL::Offset ctor{ 0x6746E0 };
	}

	namespace NiMaterialProperty
	{
		inline constexpr REL::Offset GetType{ 0xAF350 };
		inline constexpr REL::Offset SetEmittance{ 0xBC450 };
		inline constexpr REL::Offset SetChanged{ 0xBC480 };
		inline constexpr REL::Offset SetShineness{ 0x254700 };
		inline constexpr REL::Offset SetAlpha{ 0x28C9F0 };
	}

	namespace NiMatrix3
	{
		inline constexpr REL::Offset GetCol{ 0x39F50 };
		inline constexpr REL::Offset GetRow{ 0x76930 };
		inline constexpr REL::Offset SetCol{ 0x769C0 };
		inline constexpr REL::Offset SetRow{ 0x1DF510 };
		inline constexpr REL::Offset GetRow_1{ 0x1DF560 };
	}

	namespace NiNode
	{
		inline constexpr REL::Offset GetArrayCount{ 0x3B480 };
		inline constexpr REL::Offset GetAt{ 0x3B4A0 };
		inline constexpr REL::Offset GetChildCount{ 0x53470 };
		inline constexpr REL::Offset GetAtChecked{ 0x5BC00 };
		inline constexpr REL::Offset CompactChildArray{ 0xADD70 };
		inline constexpr REL::Offset RemoveAllChildren{ 0xDEF90 };
		inline constexpr REL::Offset QNotVisible{ 0x152470 };
		inline constexpr REL::Offset DetachAllChildren{ 0x172160 };
		inline constexpr REL::Offset ctor{ 0x65ECB0 };
	}

	namespace NiObject
	{
		inline constexpr REL::Offset IsKindOf{ 0x3B300 };
		inline constexpr REL::Offset IsExactKindOf{ 0x5BAD0 };
		inline constexpr REL::Offset DynamicCast{ 0x253270 };
		inline constexpr REL::Offset Clone{ 0x65D2C0 };
		inline constexpr REL::Offset ctor{ 0x65D3A0 };
		inline constexpr REL::Offset CreateDeepCopy{ 0x65D510 };
	}

	namespace NiObjectNET
	{
		inline constexpr REL::Offset GetName{ 0x13F40 };
		inline constexpr REL::Offset SetName{ 0x65B950 };
		inline constexpr REL::Offset AddExtraData{ 0x65BCA0 };
	}

	namespace NiPSysEmitterCtlr
	{
		inline constexpr REL::Offset GetBirthRateInterpolator{ 0x239B60 };
	}

	namespace NiPSysModifier
	{
		inline constexpr REL::Offset ctor{ 0x831720 };
	}

	namespace NiParticleSystem
	{
		inline constexpr REL::Offset GetModifierCount{ 0xD7D50 };
		inline constexpr REL::Offset GetModifierAt{ 0xD7D70 };
	}

	namespace NiPick
	{
		inline constexpr REL::Offset SetObserveAppCullFlag{ 0x58B30 };
		inline constexpr REL::Offset SetFrontOnly{ 0x232D20 };
		inline constexpr REL::Offset SetTarget{ 0x305FC0 };
		inline constexpr REL::Offset ctor{ 0xA98F20 };
		inline constexpr REL::Offset dtor{ 0xA98FA0 };
	}

	namespace NiPixelData
	{
		inline constexpr REL::Offset MarkAsChanged{ 0xF31B0 };
		inline constexpr REL::Offset GetPixels{ 0x24DAC0 };
		inline constexpr REL::Offset ctor{ 0x67C190 };
	}

	namespace NiPlane
	{
		inline constexpr REL::Offset WhichSide{ 0x9DA80 };
		inline constexpr REL::Offset Distance{ 0xB6190 };
		inline constexpr REL::Offset ctor{ 0x669990 };
		inline constexpr REL::Offset GetViewerString{ 0x669A60 };
	}

	namespace NiPoint2
	{
		inline constexpr REL::Offset ctor{ 0x52DC0 };
		inline constexpr REL::Offset operator_call{ 0x52DF0 };
		inline constexpr REL::Offset operator_call_1{ 0x2AD180 };
	}

	namespace NiPoint3
	{
		inline constexpr REL::Offset ctor{ 0x16870 };
		inline constexpr REL::Offset operator_call{ 0x39090 };
		inline constexpr REL::Offset operator_call_1{ 0x39180 };
		inline constexpr REL::Offset operator_call_2{ 0x578C0 };
		inline constexpr REL::Offset Length{ 0x57990 };
		inline constexpr REL::Offset Unitize{ 0xA0C10 };
		inline constexpr REL::Offset operator_call_3{ 0xA51B0 };
		inline constexpr REL::Offset SqrLength{ 0xA7290 };
		inline constexpr REL::Offset XYLength{ 0x189850 };
		inline constexpr REL::Offset SqrXYLength{ 0x195C80 };
		inline constexpr REL::Offset GetViewerString{ 0x659AF0 };
	}

	namespace NiPointLight
	{
		inline constexpr REL::Offset SetConstantAttenuation{ 0x10C630 };
		inline constexpr REL::Offset SetLinearAttenuation{ 0x10C660 };
		inline constexpr REL::Offset SetQuadraticAttenuation{ 0x10C690 };
		inline constexpr REL::Offset ctor{ 0x67D670 };
	}

	namespace NiProperty
	{
		inline constexpr REL::Offset ctor{ 0x39260 };
	}

	namespace NiQuatTransform
	{
		inline constexpr REL::Offset GetViewerStrings{ 0x638CB0 };
	}

	namespace NiQuaternion
	{
		inline constexpr REL::Offset GetViewerString{ 0x66E190 };
	}

	namespace NiRTTI
	{
		inline constexpr REL::Offset ctor{ 0x67B610 };
	}

	namespace NiRefObject
	{
		inline constexpr REL::Offset ctor{ 0x968B0 };
	}

	namespace NiRenderer
	{
		inline constexpr REL::Offset GetFrameState{ 0xE9530 };
		inline constexpr REL::Offset ms_pkRenderer{ 0xDF4748 };
	}

	namespace NiShadeProperty
	{
		inline constexpr REL::Offset GetType{ 0x38220 };
		inline constexpr REL::Offset GetShaderPropertyType{ 0x41110 };
	}

	namespace NiSingleShaderMaterialLibrary
	{
		inline constexpr REL::Offset ctor{ 0x68FCE0 };
	}

	namespace NiSkinInstance
	{
		inline constexpr REL::Offset SetBone{ 0xADDA0 };
		inline constexpr REL::Offset GetSkinData{ 0x1585E0 };
		inline constexpr REL::Offset ctor{ 0x2884C0 };
	}

	namespace NiSourceTexture
	{
		inline constexpr REL::Offset Create{ 0x65FD70 };
		inline constexpr REL::Offset Create_1{ 0x65FF10 };
	}

	namespace NiStencilProperty
	{
		inline constexpr REL::Offset ctor{ 0x9EC80 };
		inline constexpr REL::Offset SetDrawMode{ 0x9EE30 };
		inline constexpr REL::Offset GetViewerString{ 0x66F1E0 };
		inline constexpr REL::Offset GetViewerString_1{ 0x66F2D0 };
	}

	namespace NiStream
	{
		inline constexpr REL::Offset GetObjectCount{ 0x3B1E0 };
		inline constexpr REL::Offset GetObjectAt{ 0x3B200 };
		inline constexpr REL::Offset ReadLinkID{ 0x6645B0 };
		inline constexpr REL::Offset ReadMultipleLinkIDs{ 0x664670 };
		inline constexpr REL::Offset LoadRTTI{ 0x665800 };
	}

	namespace NiTexture
	{
		inline constexpr REL::Offset QState{ 0x3C430 };
	}

	namespace NiTexture_FormatPrefs
	{
		inline constexpr REL::Offset ctor{ 0xF31D0 };
	}

	namespace NiTextureEffect
	{
		inline constexpr REL::Offset _SDMInit{ 0x6927E0 };
		inline constexpr REL::Offset GetViewerString{ 0x692A60 };
		inline constexpr REL::Offset GetViewerString_1{ 0x692B00 };
	}

	namespace NiTexturingProperty
	{
		inline constexpr REL::Offset GetViewerString{ 0x669B90 };
		inline constexpr REL::Offset GetViewerString_1{ 0x669C50 };
		inline constexpr REL::Offset _SDMInit{ 0x66B410 };
	}

	namespace NiTimeController
	{
		inline constexpr REL::Offset SetActive{ 0x7AA40 };
		inline constexpr REL::Offset GetActive{ 0xF05A0 };
		inline constexpr REL::Offset GetViewerString{ 0x66D120 };
		inline constexpr REL::Offset GetViewerString_1{ 0x66D190 };
	}

	namespace NiTransform
	{
		inline constexpr REL::Offset ctor{ 0x76A80 };
		inline constexpr REL::Offset Invert{ 0xB4880 };
		inline constexpr REL::Offset MakeIdentity{ 0x686BF0 };
	}

	namespace NiTriBasedGeom
	{
		inline constexpr REL::Offset GetActiveTriangleCount{ 0xA1FF0 };
	}

	namespace NiTriShape
	{
		inline constexpr REL::Offset ctor{ 0x674410 };
	}

	namespace NiTriShapeData
	{
		inline constexpr REL::Offset ctor{ 0x67B630 };
	}

	namespace NiUpdateData
	{
		inline constexpr REL::Offset ctor{ 0x3D410 };
	}

	namespace NiVertexColorProperty
	{
		inline constexpr REL::Offset GetViewerString{ 0x65F0D0 };
		inline constexpr REL::Offset GetViewerString_1{ 0x65F160 };
	}

	namespace NightEyeEffect
	{
		inline constexpr REL::Offset ApplyVisualEffect{ 0x425990 };
	}

	namespace NonActorMagicCaster
	{
		inline constexpr REL::Offset ctor{ 0x425A10 };
		inline constexpr REL::Offset ctor_1{ 0x425AD0 };
		inline constexpr REL::Offset CleanUpOtherMobileObjects{ 0x425C20 };
	}

	namespace NonActorMagicTarget
	{
		inline constexpr REL::Offset ctor{ 0x425EA0 };
		inline constexpr REL::Offset ctor_1{ 0x425FD0 };
	}

	namespace NonLinearInterpolator
	{
		inline constexpr REL::Offset Setup{ 0x546020 };
		inline constexpr REL::Offset GetCurrent{ 0x546190 };
	}

	namespace OBJ_TREE
	{
		inline constexpr REL::Offset Endian{ 0x14290 };
	}

	namespace OBJ_WEAP
	{
		inline constexpr REL::Offset Endian{ 0x120FF0 };
	}

	namespace OCCLUSION_PLANE_DATA
	{
		inline constexpr REL::Offset Endian{ 0x140F0 };
	}

	namespace OLD_BIPED_MODEL
	{
		inline constexpr REL::Offset Endian{ 0x112810 };
	}

	namespace OLD_CLASS_DATA
	{
		inline constexpr REL::Offset Endian{ 0x1F6C90 };
	}

	namespace ObstacleTaskData
	{
		inline constexpr REL::Offset ctor{ 0x2C77A0 };
		inline constexpr REL::Offset AddOperation{ 0x2C7A30 };
		inline constexpr REL::Offset SortOperationsFunction{ 0x2C7E60 };
		inline constexpr REL::Offset ReplaceNavMesh{ 0x2C85E0 };
	}

	namespace ObstacleUndoData
	{
		inline constexpr REL::Offset ctor{ 0x2BC230 };
	}

	namespace OcclusionPlaneLinkedRefData
	{
		inline constexpr REL::Offset Endian{ 0x14370 };
	}

	namespace PACKAGE_DATA
	{
		inline constexpr REL::Offset Endian{ 0x270760 };
	}

	namespace PACK_DIALOGUE_DATA
	{
		inline constexpr REL::Offset Endian{ 0x27B100 };
	}

	namespace PACK_LOC_FILE
	{
		inline constexpr REL::Offset Endian{ 0x27EFF0 };
	}

	namespace PACK_TARG_FILE
	{
		inline constexpr REL::Offset Endian{ 0x27FF10 };
	}

	namespace PACK_USE_WEAPON_DATA_PKW3
	{
		inline constexpr REL::Offset Endian{ 0x27CA10 };
	}

	namespace PART_DATA
	{
		inline constexpr REL::Offset Endian{ 0x1E3FE0 };
	}

	namespace POVVertexData
	{
		inline constexpr REL::Offset dtor{ 0x29A7D0 };
	}

	namespace PackageEventAction
	{
		inline constexpr REL::Offset ctor{ 0x27DA40 };
		inline constexpr REL::Offset Load{ 0x27DD20 };
		inline constexpr REL::Offset InitItem{ 0x27E190 };
	}

	namespace PackageList
	{
		inline constexpr REL::Offset InitItem{ 0x27E560 };
		inline constexpr REL::Offset FindCurrentPackage{ 0x27E780 };
		inline constexpr REL::Offset FindMissedPackages{ 0x27EC40 };
	}

	namespace PackageLocation
	{
		inline constexpr REL::Offset GetLocType{ 0x278CA0 };
		inline constexpr REL::Offset ctor{ 0x27F030 };
		inline constexpr REL::Offset dtor{ 0x27F110 };
		inline constexpr REL::Offset SetLocType{ 0x27F140 };
		inline constexpr REL::Offset GetRadius{ 0x27F1C0 };
		inline constexpr REL::Offset SetRadius{ 0x27F1F0 };
		inline constexpr REL::Offset IsRefAtLocationTrigger{ 0x27F220 };
		inline constexpr REL::Offset GetRunningPackageLocReference{ 0x27F2A0 };
		inline constexpr REL::Offset GetLocReference{ 0x27F390 };
		inline constexpr REL::Offset SetLocReference{ 0x27F3C0 };
		inline constexpr REL::Offset GetLocCell{ 0x27F3E0 };
		inline constexpr REL::Offset SetLocCell{ 0x27F410 };
		inline constexpr REL::Offset GetLocObject{ 0x27F430 };
		inline constexpr REL::Offset GetLocObjectType{ 0x27F480 };
		inline constexpr REL::Offset Copy{ 0x27F4D0 };
		inline constexpr REL::Offset Compare{ 0x27F600 };
		inline constexpr REL::Offset Save{ 0x27F6C0 };
		inline constexpr REL::Offset InitItem{ 0x27F760 };
		inline constexpr REL::Offset SaveGame{ 0x27FB60 };
		inline constexpr REL::Offset LoadGame{ 0x27FBE0 };
		inline constexpr REL::Offset InitLoadGame{ 0x27FC50 };
	}

	namespace PackageSchedule
	{
		inline constexpr REL::Offset GetStartDayOfWeek{ 0x278CC0 };
		inline constexpr REL::Offset GetStartDate{ 0x278CE0 };
		inline constexpr REL::Offset Compare{ 0x27FE10 };
		inline constexpr REL::Offset Save{ 0x27FEC0 };
		inline constexpr REL::Offset GetStartTime{ 0x46A460 };
	}

	namespace PackageTarget
	{
		inline constexpr REL::Offset GetTargType{ 0x119B00 };
		inline constexpr REL::Offset ctor{ 0x27FF70 };
		inline constexpr REL::Offset GetTargReference{ 0x280020 };
		inline constexpr REL::Offset GetTargObject{ 0x280050 };
		inline constexpr REL::Offset GetTargObjectType{ 0x280080 };
		inline constexpr REL::Offset SetTargType{ 0x2800B0 };
		inline constexpr REL::Offset SetTargReference{ 0x280110 };
		inline constexpr REL::Offset SetTargObject{ 0x280140 };
		inline constexpr REL::Offset Copy{ 0x2801A0 };
		inline constexpr REL::Offset Compare{ 0x280220 };
		inline constexpr REL::Offset Save{ 0x2802F0 };
		inline constexpr REL::Offset InitItem{ 0x2803B0 };
		inline constexpr REL::Offset InitLoadGame{ 0x280830 };
	}

	namespace ParticleShader
	{
		inline constexpr REL::Offset GetNumParticles{ 0x7A52D0 };
	}

	namespace PathBuilder
	{
		inline constexpr REL::Offset ctor{ 0x2C8D30 };
		inline constexpr REL::Offset UpdateDetailedPath{ 0x2C9170 };
		inline constexpr REL::Offset UpdatePathMoveToHigh{ 0x2C93F0 };
		inline constexpr REL::Offset BuildNavMeshInfoPath{ 0x2C94C0 };
		inline constexpr REL::Offset BuildTeleportDoorPath{ 0x2C9B20 };
		inline constexpr REL::Offset FindLoadedNodeIndices{ 0x2C9FC0 };
		inline constexpr REL::Offset BuildDetailedPath{ 0x2CA0E0 };
		inline constexpr REL::Offset FindVirtualNodeSegments{ 0x2CA500 };
		inline constexpr REL::Offset BuildDetailedPathForLoadedVirtualNodes{ 0x2CA850 };
		inline constexpr REL::Offset BuildPathToNavMeshSearchStart{ 0x2CAA40 };
		inline constexpr REL::Offset BuildPathFromNavMeshSearchGoal{ 0x2CAC90 };
		inline constexpr REL::Offset BuildPathToValidNavMeshTriangle{ 0x2CB050 };
		inline constexpr REL::Offset BuildStraightPathUsingRayCasts{ 0x2CB4C0 };
		inline constexpr REL::Offset CheckClosestEdgeToGoal{ 0x2CB6A0 };
		inline constexpr REL::Offset BuildNavMeshPathForVirtualNodes{ 0x2CB950 };
		inline constexpr REL::Offset AddNodesFromNavMesh{ 0x2CC5E0 };
		inline constexpr REL::Offset TryBuildStraightPath{ 0x2CD1F0 };
		inline constexpr REL::Offset RunPathSmoother{ 0x2CD8A0 };
		inline constexpr REL::Offset FindClosestOpenEdge{ 0x2CDB40 };
		inline constexpr REL::Offset FindEntryPoint{ 0x2CDE50 };
		inline constexpr REL::Offset FindExitPoint{ 0x2CE2D0 };
		inline constexpr REL::Offset BuildNavMeshInfoPathInSpace{ 0x2CE8B0 };
		inline constexpr REL::Offset BuildStraightPathForVirtualNodes{ 0x2CEC40 };
		inline constexpr REL::Offset dtor{ 0x2D0B80 };
	}

	namespace PathBuilder_FindTriangleForLocationWaterFilter
	{
		inline constexpr REL::Offset ctor{ 0x2C8DD0 };
	}

	namespace PathManager
	{
		inline constexpr REL::Offset QInstance{ 0x7D0B0 };
		inline constexpr REL::Offset ctor{ 0x2EB820 };
		inline constexpr REL::Offset Initialize{ 0x2EB8C0 };
		inline constexpr REL::Offset Release{ 0x2EB980 };
		inline constexpr REL::Offset BuildPath{ 0x2EB9D0 };
		inline constexpr REL::Offset Update{ 0x2EBC50 };
		inline constexpr REL::Offset Pause{ 0x2EBC70 };
		inline constexpr REL::Offset QPaused{ 0x2EBC90 };
		inline constexpr REL::Offset Resume{ 0x2EBCD0 };
	}

	namespace PathManagerImpl
	{
		inline constexpr REL::Offset ctor{ 0x2EAA30 };
		inline constexpr REL::Offset Initialize{ 0x2EABE0 };
		inline constexpr REL::Offset Release{ 0x2EAC40 };
		inline constexpr REL::Offset BuildPath{ 0x2EAC70 };
		inline constexpr REL::Offset Update{ 0x2EAE40 };
		inline constexpr REL::Offset Pause{ 0x2EB310 };
		inline constexpr REL::Offset Resume{ 0x2EB3B0 };
		inline constexpr REL::Offset CancelCurrentPathsAndPause{ 0x2EB440 };
		inline constexpr REL::Offset ClearInventoryPointersFromCurrentRequests{ 0x2EB6B0 };
	}

	namespace PathSmoother
	{
		inline constexpr REL::Offset ctor{ 0x2ED100 };
		inline constexpr REL::Offset dtor{ 0x2ED220 };
		inline constexpr REL::Offset SmoothPath{ 0x2ED530 };
		inline constexpr REL::Offset AddPathingNode{ 0x2ED730 };
		inline constexpr REL::Offset AddPathingNode_1{ 0x2ED7A0 };
		inline constexpr REL::Offset BuildInternalArrays{ 0x2ED850 };
		inline constexpr REL::Offset AddStartVert{ 0x2EDBC0 };
		inline constexpr REL::Offset CreateVert{ 0x2EDC40 };
		inline constexpr REL::Offset AddFirstEdge{ 0x2EDD30 };
		inline constexpr REL::Offset CreateBoundsEdge{ 0x2EDFC0 };
		inline constexpr REL::Offset CreatePathEdge{ 0x2EE070 };
		inline constexpr REL::Offset AddLeftVert{ 0x2EE150 };
		inline constexpr REL::Offset AddRightVert{ 0x2EE390 };
		inline constexpr REL::Offset AddGoalVert{ 0x2EE5D0 };
		inline constexpr REL::Offset DuplicateVert{ 0x2EE740 };
		inline constexpr REL::Offset SplitBoundsEdge{ 0x2EED30 };
		inline constexpr REL::Offset BuildShrunkEdgeLeftRightArrays{ 0x2EEF80 };
		inline constexpr REL::Offset ComputeShrunkPoint{ 0x2EF0C0 };
		inline constexpr REL::Offset CheckBoundsEdges{ 0x2EF920 };
		inline constexpr REL::Offset TestBoundsEdgeAgainstOtherBound{ 0x2EFD80 };
		inline constexpr REL::Offset PushPoint{ 0x2F0050 };
		inline constexpr REL::Offset BuildBestPointOnEdge{ 0x2F0450 };
		inline constexpr REL::Offset HandleWaterTriangles{ 0x2F0D20 };
		inline constexpr REL::Offset BuildStraightenedPath{ 0x2F10D0 };
		inline constexpr REL::Offset HandleAvoidNodes{ 0x2F1440 };
		inline constexpr REL::Offset BuildFinalPath{ 0x2F1C10 };
		inline constexpr REL::Offset ComputeTangents{ 0x2F1D30 };
		inline constexpr REL::Offset IsSegmentValid{ 0x2F1E90 };
		inline constexpr REL::Offset PointInShrunkPath{ 0x2F1FC0 };
	}

	namespace PathSmoother_AvoidNode
	{
		inline constexpr REL::Offset IsPointInNode{ 0x2F1BC0 };
	}

	namespace PathSmootherPOV
	{
		inline constexpr REL::Offset ctor{ 0x2AE120 };
	}

	namespace PathSmootherPOVLink
	{
		inline constexpr REL::Offset ctor{ 0x2B1D80 };
		inline constexpr REL::Offset operator_call{ 0x2B3910 };
	}

	namespace PathSmootherPOVSearch
	{
		inline constexpr REL::Offset ctor{ 0x2AD4C0 };
		inline constexpr REL::Offset SmoothPath{ 0x2AD770 };
		inline constexpr REL::Offset BuildPOVList{ 0x2ADCB0 };
		inline constexpr REL::Offset AddPOVsFromTrianglePath{ 0x2AE370 };
		inline constexpr REL::Offset CheckAddPOVForVert{ 0x2AEBA0 };
		inline constexpr REL::Offset AddPOVsFromAvoidNodes{ 0x2AEFC0 };
		inline constexpr REL::Offset AddPOVsFromStaticAvoidNodes{ 0x2AF2B0 };
		inline constexpr REL::Offset AddGoalPOVsForGoalsOnNavMeshEdge{ 0x2AF500 };
		inline constexpr REL::Offset CreatePathingNodes{ 0x2AFCC0 };
		inline constexpr REL::Offset AddNodeForNormalChanges{ 0x2B05F0 };
		inline constexpr REL::Offset CheckAndAddNodeConnection{ 0x2B0F40 };
		inline constexpr REL::Offset CheckForLastNode{ 0x2B1970 };
		inline constexpr REL::Offset CheckArcAgainstNavMesh{ 0x2B1E50 };
		inline constexpr REL::Offset CheckSegmentAgainstNavMesh{ 0x2B2060 };
		inline constexpr REL::Offset DoubleCheckArcAgainstNavMesh{ 0x2B23D0 };
		inline constexpr REL::Offset TripleCheckSegmentAgainstNavMesh{ 0x2B25F0 };
		inline constexpr REL::Offset CheckSegmentAgainstAvoidNodes{ 0x2B2C00 };
	}

	namespace PathingAvoidNode
	{
		inline constexpr REL::Offset ctor{ 0x2915D0 };
		inline constexpr REL::Offset GetCostForPoint{ 0x2DC780 };
		inline constexpr REL::Offset SaveGame{ 0x2DC890 };
		inline constexpr REL::Offset LoadGame{ 0x2DC910 };
	}

	namespace PathingAvoidNodeArray
	{
		inline constexpr REL::Offset GetCostForPoint{ 0x2DC990 };
		inline constexpr REL::Offset ComputeCenter{ 0x2DC9F0 };
		inline constexpr REL::Offset ctor{ 0x2E3850 };
	}

	namespace PathingCoverLocation
	{
		inline constexpr REL::Offset dtor{ 0x2D32C0 };
		inline constexpr REL::Offset operator_call{ 0x2E4430 };
		inline constexpr REL::Offset GetKey{ 0x2E4570 };
		inline constexpr REL::Offset CheckDynamicCoverValid{ 0x2E4650 };
		inline constexpr REL::Offset GetDynamicCoverObstacleTimeStamp{ 0x2E4740 };
		inline constexpr REL::Offset IsLedgeCover{ 0x2E4820 };
		inline constexpr REL::Offset IsLeftSideClosest{ 0x2E4840 };
		inline constexpr REL::Offset IsStandCover{ 0x582BE0 };
	}

	namespace PathingLOSGrid
	{
		inline constexpr REL::Offset Setup{ 0x2DFB00 };
		inline constexpr REL::Offset Setup_1{ 0x2DFBA0 };
		inline constexpr REL::Offset IsLocationSeen{ 0x2DFDC0 };
		inline constexpr REL::Offset SetLocationSeen{ 0x2DFE90 };
		inline constexpr REL::Offset SaveGame{ 0x2DFFC0 };
		inline constexpr REL::Offset LoadGame{ 0x2E0070 };
		inline constexpr REL::Offset ctor{ 0x2E0730 };
		inline constexpr REL::Offset ctor_1{ 0x2E0A90 };
	}

	namespace PathingLOSGridCell
	{
		inline constexpr REL::Offset SetLOSMapFromSeenTriangles{ 0x2DF230 };
		inline constexpr REL::Offset SetSeenTrianglesFromLOSMap{ 0x2DF440 };
		inline constexpr REL::Offset IsLocationSeen{ 0x2DF5F0 };
		inline constexpr REL::Offset SetLocationSeen{ 0x2DF780 };
		inline constexpr REL::Offset SaveGame{ 0x2DF9C0 };
		inline constexpr REL::Offset LoadGame{ 0x2DFA70 };
	}

	namespace PathingLOSGridMap
	{
		inline constexpr REL::Offset ctor{ 0x2E01D0 };
		inline constexpr REL::Offset Initialize{ 0x2E0320 };
		inline constexpr REL::Offset Clear{ 0x2E03E0 };
		inline constexpr REL::Offset ClearSeen{ 0x2E05B0 };
		inline constexpr REL::Offset Setup{ 0x2E05F0 };
		inline constexpr REL::Offset SetLOSMapFromSeenTriangles{ 0x2E07A0 };
		inline constexpr REL::Offset SetSeenTrianglesFromLOSMap{ 0x2E0920 };
		inline constexpr REL::Offset LoadGame{ 0x2E0D20 };
	}

	namespace PathingLOSMap
	{
		inline constexpr REL::Offset GetAt{ 0x2D7EE0 };
		inline constexpr REL::Offset ctor{ 0x2E1370 };
		inline constexpr REL::Offset Setup{ 0x2E1500 };
		inline constexpr REL::Offset GetNavMeshAndTriangleForIndex{ 0x2E1670 };
		inline constexpr REL::Offset CreateDebugGeometry{ 0x2E1800 };
	}

	namespace PathingLocation
	{
		inline constexpr REL::Offset dtor{ 0xFF7E0 };
		inline constexpr REL::Offset QUnused{ 0x2A9520 };
		inline constexpr REL::Offset ctor{ 0x2DCBB0 };
		inline constexpr REL::Offset ctor_1{ 0x2DCC40 };
		inline constexpr REL::Offset operator_call{ 0x2DCCE0 };
		inline constexpr REL::Offset ctor_2{ 0x2DCD70 };
		inline constexpr REL::Offset ctor_3{ 0x2DCE10 };
		inline constexpr REL::Offset ctor_4{ 0x2DCEE0 };
		inline constexpr REL::Offset ctor_5{ 0x2DCF20 };
		inline constexpr REL::Offset SetAllMeshesReachable{ 0x2DCFE0 };
		inline constexpr REL::Offset ctor_6{ 0x2DD010 };
		inline constexpr REL::Offset ctor_7{ 0x2DD0D0 };
		inline constexpr REL::Offset ctor_8{ 0x2DD220 };
		inline constexpr REL::Offset SetupData{ 0x2DD280 };
		inline constexpr REL::Offset SetNavMeshInfo{ 0x2DD3E0 };
		inline constexpr REL::Offset SetLocation{ 0x2DD460 };
		inline constexpr REL::Offset GetCell{ 0x2DD4F0 };
		inline constexpr REL::Offset GetBestNavMeshInfo{ 0x2DD540 };
		inline constexpr REL::Offset GetNavMesh{ 0x2DD610 };
		inline constexpr REL::Offset HasNavMeshData{ 0x2DD6A0 };
		inline constexpr REL::Offset ResolveNavMeshInfo{ 0x2DD6F0 };
		inline constexpr REL::Offset ClearTriangleData{ 0x2DDBE0 };
		inline constexpr REL::Offset ResolveToClosestNavmeshAndTriangle{ 0x2DDC00 };
		inline constexpr REL::Offset ResolveNavMeshInfoOnly{ 0x2DE250 };
		inline constexpr REL::Offset PrintDebugText{ 0x2DE790 };
		inline constexpr REL::Offset IsValidLocation{ 0x2DED70 };
		inline constexpr REL::Offset IsCloseTo{ 0x2DEEB0 };
		inline constexpr REL::Offset GetTriangle{ 0x2DF760 };
		inline constexpr REL::Offset SetLocationSimple{ 0x2F4ED0 };
	}

	namespace PathingMessage
	{
		inline constexpr REL::Offset ctor{ 0x2EA9D0 };
	}

	namespace PathingNode
	{
		inline constexpr REL::Offset SetTeleportDoor{ 0x2CC560 };
		inline constexpr REL::Offset ActivateNode{ 0x2E22F0 };
		inline constexpr REL::Offset IsTeleportDoorNode{ 0x2E2330 };
		inline constexpr REL::Offset LoadGame{ 0x2E23B0 };
	}

	namespace PathingRequest
	{
		inline constexpr REL::Offset GetFaceTargetAtGoal{ 0x105C00 };
		inline constexpr REL::Offset GetGoalAngleToFace{ 0x107E10 };
		inline constexpr REL::Offset GetAvoidNodeArray{ 0x29E390 };
		inline constexpr REL::Offset GetActorRadius{ 0x29EF80 };
		inline constexpr REL::Offset GetAllowIncompletePath{ 0x2A9560 };
		inline constexpr REL::Offset GetActorLockData{ 0x2C9900 };
		inline constexpr REL::Offset SetDestination{ 0x2D1BC0 };
		inline constexpr REL::Offset SetOrigin{ 0x2D3AC0 };
		inline constexpr REL::Offset SetActorRadius{ 0x2D3AE0 };
		inline constexpr REL::Offset SetAvoidNodeArray{ 0x2D61E0 };
		inline constexpr REL::Offset ctor{ 0x2E2420 };
		inline constexpr REL::Offset ctor_1{ 0x2E26A0 };
		inline constexpr REL::Offset SetOrigin_1{ 0x2E29F0 };
		inline constexpr REL::Offset SetActorLockData{ 0x2E2B20 };
		inline constexpr REL::Offset SetCantOpenDoors{ 0x2E2B50 };
		inline constexpr REL::Offset SetCanSwim{ 0x2E2B70 };
		inline constexpr REL::Offset SetCanFly{ 0x2E2B90 };
		inline constexpr REL::Offset SetInitialPathHeading{ 0x2E2BB0 };
		inline constexpr REL::Offset CreatePathingRequest{ 0x2E2F80 };
		inline constexpr REL::Offset GetCantOpenDoors{ 0x33CB80 };
		inline constexpr REL::Offset SetAllowIncompletePath{ 0x4AD8F0 };
		inline constexpr REL::Offset SetGoDirectIfPathingFails{ 0x4DF1C0 };
	}

	namespace PathingRequestClosePoint
	{
		inline constexpr REL::Offset ctor{ 0x2E3F30 };
		inline constexpr REL::Offset ctor_1{ 0x2E3FB0 };
	}

	namespace PathingRequestCover
	{
		inline constexpr REL::Offset ctor{ 0x2E4080 };
		inline constexpr REL::Offset SetMaxHeightChange{ 0x2E4320 };
		inline constexpr REL::Offset SetThreat{ 0x2E4340 };
	}

	namespace PathingRequestCoveredMove
	{
		inline constexpr REL::Offset ctor{ 0x2E4A50 };
		inline constexpr REL::Offset ctor_1{ 0x2E4D20 };
		inline constexpr REL::Offset GetUnreachableCoverLocations{ 0x2E4F90 };
	}

	namespace PathingRequestFlee
	{
		inline constexpr REL::Offset SetMinFleeDistance{ 0x107610 };
		inline constexpr REL::Offset ctor{ 0x2E5390 };
	}

	namespace PathingRequestHide
	{
		inline constexpr REL::Offset ctor{ 0x2E5510 };
		inline constexpr REL::Offset ctor_1{ 0x2E5640 };
	}

	namespace PathingRequestLOS
	{
		inline constexpr REL::Offset ctor{ 0x2E57E0 };
		inline constexpr REL::Offset ctor_1{ 0x2E5940 };
	}

	namespace PathingRequestOptimalLocation
	{
		inline constexpr REL::Offset ctor{ 0x2E5D10 };
	}

	namespace PathingRequestSafeStraightLine
	{
		inline constexpr REL::Offset ctor{ 0x2E6010 };
	}

	namespace PathingSearchRayCast
	{
		inline constexpr REL::Offset ctor{ 0x2E61A0 };
		inline constexpr REL::Offset BuildPath{ 0x2E6320 };
		inline constexpr REL::Offset CreateCache{ 0x2E6AE0 };
		inline constexpr REL::Offset InitRayCasts{ 0x2E6C00 };
		inline constexpr REL::Offset CleanUpRayCasts{ 0x2E6DB0 };
		inline constexpr REL::Offset RayCastRecurse{ 0x2E6E40 };
		inline constexpr REL::Offset RayCast{ 0x2E6F90 };
		inline constexpr REL::Offset UnderWaterRayCast{ 0x2E7190 };
		inline constexpr REL::Offset ComputeBounds{ 0x2E7230 };
	}

	namespace PathingSolution
	{
		inline constexpr REL::Offset GetVirtualNodeCount{ 0x1A4320 };
		inline constexpr REL::Offset AddPathingNode{ 0x29F920 };
		inline constexpr REL::Offset GetLastNode{ 0x2B05A0 };
		inline constexpr REL::Offset IsIncomplete{ 0x2B05D0 };
		inline constexpr REL::Offset AddVirtualPathingNode{ 0x2C90D0 };
		inline constexpr REL::Offset ClearCurrentDetailedPath{ 0x2C93A0 };
		inline constexpr REL::Offset AddVirtualPathingNode_1{ 0x2C9920 };
		inline constexpr REL::Offset AddVirtualPathingNode_2{ 0x2C99C0 };
		inline constexpr REL::Offset AddVirtualPathingNode_3{ 0x2C9A70 };
		inline constexpr REL::Offset SetIncomplete{ 0x2C9FA0 };
		inline constexpr REL::Offset AddVirtualPathingNode_4{ 0x2CE7E0 };
		inline constexpr REL::Offset AddVirtualPathingNode_5{ 0x2D1520 };
		inline constexpr REL::Offset ctor{ 0x2E7650 };
		inline constexpr REL::Offset Clear{ 0x2E77B0 };
		inline constexpr REL::Offset ComputeVirtualPathLength{ 0x2E7800 };
		inline constexpr REL::Offset GetVirtualNode{ 0x2E78B0 };
		inline constexpr REL::Offset ComputeDetailedPathLength{ 0x2E78D0 };
		inline constexpr REL::Offset GetNode{ 0x2E7970 };
		inline constexpr REL::Offset ComputeSplineLength{ 0x2E7990 };
		inline constexpr REL::Offset ComputeLocationFromParameter{ 0x2E7A10 };
		inline constexpr REL::Offset FindPointOnPath{ 0x2E7E70 };
		inline constexpr REL::Offset ComputeDistanceToParameter{ 0x2E84B0 };
		inline constexpr REL::Offset GetSplineParametersFromPercentage{ 0x2E8680 };
		inline constexpr REL::Offset SaveGame{ 0x2E8B10 };
		inline constexpr REL::Offset LoadGame{ 0x2E8D50 };
		inline constexpr REL::Offset GetNodeCount{ 0x4B6800 };
		inline constexpr REL::Offset IsValid{ 0x5DC530 };
		inline constexpr REL::Offset GetLastVirtualNode{ 0x5DDB30 };
	}

	namespace PathingSpline
	{
		inline constexpr REL::Offset dtor{ 0x12D240 };
		inline constexpr REL::Offset Interpolate{ 0x2E7CC0 };
		inline constexpr REL::Offset InterpolateNoZ{ 0x2E7D60 };
		inline constexpr REL::Offset SetKeys{ 0x2E8450 };
		inline constexpr REL::Offset FindPointOnSpline{ 0x2E9830 };
		inline constexpr REL::Offset Interpolate_1{ 0x2E9AB0 };
		inline constexpr REL::Offset ApproxLength{ 0x2E9AF0 };
	}

	namespace PathingSplineKey
	{
		inline constexpr REL::Offset operator_call{ 0x2E7D10 };
	}

	namespace PathingTaskData
	{
		inline constexpr REL::Offset ctor{ 0x2E9CC0 };
		inline constexpr REL::Offset ComputeRayCasts{ 0x2EA350 };
		inline constexpr REL::Offset AllRayCastPathComputed{ 0x2EA490 };
		inline constexpr REL::Offset GetRayCastPath{ 0x2EA510 };
		inline constexpr REL::Offset GetRayCastPathToNavmesh{ 0x2EA780 };
	}

	namespace PatrolActorPackageData
	{
		inline constexpr REL::Offset ctor{ 0x5F29A0 };
		inline constexpr REL::Offset ClearReservedPatrolRef{ 0x5F2B30 };
		inline constexpr REL::Offset Init{ 0x5F2BA0 };
		inline constexpr REL::Offset GetInitialReferenceForSetup{ 0x5F2D40 };
		inline constexpr REL::Offset BuildReferenceArray{ 0x5F2DA0 };
		inline constexpr REL::Offset SetNextReferenceForPatrol{ 0x5F2EA0 };
		inline constexpr REL::Offset SetCurrentReference{ 0x5F30D0 };
		inline constexpr REL::Offset ResumeRepeatablePatrol{ 0x5F31C0 };
		inline constexpr REL::Offset GetCurrentReference{ 0x5F3390 };
	}

	namespace PlayerCharacter
	{
		inline constexpr REL::Offset GetCharacterProgressionInfo{ 0x64E10 };
		inline constexpr REL::Offset GetTopicList{ 0x64E30 };
		inline constexpr REL::Offset GetInventory3D{ 0x90F80 };
		inline constexpr REL::Offset IsHardcore{ 0xD1360 };
		inline constexpr REL::Offset Is3rdPerson{ 0xEAF60 };
		inline constexpr REL::Offset SetForceActivateRef{ 0x119020 };
		inline constexpr REL::Offset IsActually3rdPerson{ 0x124D10 };
		inline constexpr REL::Offset ClearAutoAim{ 0x124D70 };
		inline constexpr REL::Offset GetOccupiedRegion{ 0x1454D0 };
		inline constexpr REL::Offset GetTempPerson{ 0x1721E0 };
		inline constexpr REL::Offset GetWant3rdPerson{ 0x1737E0 };
		inline constexpr REL::Offset GetListofPerceivedActors{ 0x195D10 };
		inline constexpr REL::Offset GetControlsDisabled{ 0x1A03F0 };
		inline constexpr REL::Offset IsSleeping{ 0x1A1E50 };
		inline constexpr REL::Offset SetSleeping{ 0x1C1A00 };
		inline constexpr REL::Offset Force3rdPerson{ 0x1C4210 };
		inline constexpr REL::Offset GetInChargen{ 0x1C7870 };
		inline constexpr REL::Offset GetActiveQuest{ 0x1CBB50 };
		inline constexpr REL::Offset SetAIControlledPackage{ 0x1CC7A0 };
		inline constexpr REL::Offset DisableHardcoreTracking{ 0x1DE9B0 };
		inline constexpr REL::Offset GetCachedWorldCameraPos{ 0x1DF5B0 };
		inline constexpr REL::Offset SetReputationUpdate{ 0x2159E0 };
		inline constexpr REL::Offset QCameraRigidBody{ 0x21F6C0 };
		inline constexpr REL::Offset GetEyeHeight{ 0x30C3B0 };
		inline constexpr REL::Offset GetWorldFOV{ 0x310AB0 };
		inline constexpr REL::Offset GetInactiveCaravanCardList{ 0x33CBA0 };
		inline constexpr REL::Offset GetActiveCaravanCardList{ 0x33CBC0 };
		inline constexpr REL::Offset GetWeaponSightingNode{ 0x3721A0 };
		inline constexpr REL::Offset QPlayerMapMarker{ 0x398400 };
		inline constexpr REL::Offset SetKillCamModeCallback{ 0x3D12D0 };
		inline constexpr REL::Offset SetHardcoreCallback{ 0x3D1400 };
		inline constexpr REL::Offset GetInventoryWeaponEffect{ 0x420BF0 };
		inline constexpr REL::Offset GetGrabSpring{ 0x42AA90 };
		inline constexpr REL::Offset IsPCToddler{ 0x4397D0 };
		inline constexpr REL::Offset GetTotalPlayingTime{ 0x451CB0 };
		inline constexpr REL::Offset UpdateTotalPlayingTime{ 0x451CD0 };
		inline constexpr REL::Offset ResetLastPlayingTimeUpdate{ 0x451D10 };
		inline constexpr REL::Offset Get1stPersonFOV{ 0x474900 };
		inline constexpr REL::Offset GetGrabObject{ 0x49F4E0 };
		inline constexpr REL::Offset SetWeaponSightingNode{ 0x4BBBF0 };
		inline constexpr REL::Offset IncNumCrimes{ 0x4BFF70 };
		inline constexpr REL::Offset GetPlayerGreetFlag{ 0x4DEFE0 };
		inline constexpr REL::Offset ctor{ 0x538180 };
		inline constexpr REL::Offset SetAIControlledToPosition{ 0x53A5F0 };
		inline constexpr REL::Offset RemoveActorFromPlayercombatList{ 0x53A660 };
		inline constexpr REL::Offset AddActorToPlayerCombatList{ 0x53A690 };
		inline constexpr REL::Offset SetAIControlledFromPosition{ 0x53A6F0 };
		inline constexpr REL::Offset GetUnderAIControl{ 0x53A740 };
		inline constexpr REL::Offset SetOccupiedRegion{ 0x53A7A0 };
		inline constexpr REL::Offset SetActorBaseValue{ 0x53A7C0 };
		inline constexpr REL::Offset SetActorBaseValue_1{ 0x53A850 };
		inline constexpr REL::Offset GetInventoryEncumbrance{ 0x53ABE0 };
		inline constexpr REL::Offset GetWaterCell{ 0x53BBA0 };
		inline constexpr REL::Offset RequestPositionPlayer{ 0x53BE30 };
		inline constexpr REL::Offset HandlePositionPlayerRequest{ 0x53BEA0 };
		inline constexpr REL::Offset PositionPlayer{ 0x53C200 };
		inline constexpr REL::Offset PositionPlayerExterior{ 0x53CCE0 };
		inline constexpr REL::Offset FastTravel{ 0x53CDF0 };
		inline constexpr REL::Offset ClearCellsIfTargetNotLoaded{ 0x53D500 };
		inline constexpr REL::Offset CanFastTravel{ 0x53D660 };
		inline constexpr REL::Offset CenterOnCell{ 0x53DB60 };
		inline constexpr REL::Offset ShaderNearbyItems{ 0x53DF50 };
		inline constexpr REL::Offset SetSlowMoCamera{ 0x53E530 };
		inline constexpr REL::Offset ResetKillCam{ 0x53E770 };
		inline constexpr REL::Offset UpdatePlayerCombat{ 0x5444D0 };
		inline constexpr REL::Offset UpdateHeadingAndLooking{ 0x5445B0 };
		inline constexpr REL::Offset AmmoSwapHelper{ 0x5462C0 };
		inline constexpr REL::Offset UpdateFlyCamera{ 0x5466D0 };
		inline constexpr REL::Offset CheckBorderRegion{ 0x547B10 };
		inline constexpr REL::Offset ResetAudioMarkerList{ 0x547D80 };
		inline constexpr REL::Offset ResetMapMarkerStructList{ 0x5480C0 };
		inline constexpr REL::Offset ForceGrenadeHold{ 0x5481D0 };
		inline constexpr REL::Offset CheckUserInputAttacks{ 0x548310 };
		inline constexpr REL::Offset UpdateChaseCamera{ 0x54A0C0 };
		inline constexpr REL::Offset UpdateUFOCamera{ 0x54A8C0 };
		inline constexpr REL::Offset UpdateCamera{ 0x54AE40 };
		inline constexpr REL::Offset GetModifier{ 0x54C3D0 };
		inline constexpr REL::Offset AlterModifier{ 0x54C4F0 };
		inline constexpr REL::Offset SetSelectedSpell{ 0x54C8E0 };
		inline constexpr REL::Offset SetSelectedScroll{ 0x54C950 };
		inline constexpr REL::Offset ReturnToLastKnownGoodPosition{ 0x54DBE0 };
		inline constexpr REL::Offset IsSleepingorResting{ 0x54DF60 };
		inline constexpr REL::Offset PlayerSleep{ 0x54DF80 };
		inline constexpr REL::Offset ExportProgressData{ 0x54ED40 };
		inline constexpr REL::Offset RewardKarma{ 0x54FD30 };
		inline constexpr REL::Offset SetInChargen{ 0x550010 };
		inline constexpr REL::Offset UpdatePlayer3d{ 0x550030 };
		inline constexpr REL::Offset IsVanityMode{ 0x550090 };
		inline constexpr REL::Offset StopVanityMode{ 0x5500A0 };
		inline constexpr REL::Offset SetFirstPerson{ 0x550110 };
		inline constexpr REL::Offset UpdateFirstPersonZoom{ 0x550290 };
		inline constexpr REL::Offset ForceTemp3rdPerson{ 0x550340 };
		inline constexpr REL::Offset UpdateTemp3rdPerson{ 0x5503D0 };
		inline constexpr REL::Offset ForceTemp1stPerson{ 0x550460 };
		inline constexpr REL::Offset UpdateTemp1stPerson{ 0x550530 };
		inline constexpr REL::Offset SetFOV{ 0x550610 };
		inline constexpr REL::Offset GetAnimation{ 0x550A60 };
		inline constexpr REL::Offset GetBiped{ 0x550B00 };
		inline constexpr REL::Offset Get3D{ 0x550BB0 };
		inline constexpr REL::Offset GetCurrent3D{ 0x550BE0 };
		inline constexpr REL::Offset CloneInventory3D{ 0x550C20 };
		inline constexpr REL::Offset RecursiveReadyInventoryNode{ 0x551940 };
		inline constexpr REL::Offset Show1stPerson{ 0x551A10 };
		inline constexpr REL::Offset UpdateArmRotation{ 0x552290 };
		inline constexpr REL::Offset SetGodMode{ 0x5526A0 };
		inline constexpr REL::Offset IsGodMode{ 0x5526B0 };
		inline constexpr REL::Offset IsDemigodMode{ 0x5526F0 };
		inline constexpr REL::Offset CheckInvulnerable{ 0x552730 };
		inline constexpr REL::Offset AddQuestStageItem{ 0x5528C0 };
		inline constexpr REL::Offset SetActiveQuest{ 0x5529D0 };
		inline constexpr REL::Offset GetCurrentTargetList{ 0x552BA0 };
		inline constexpr REL::Offset CheckForQuestTargetUpdate{ 0x552C30 };
		inline constexpr REL::Offset BuildPathToTarget{ 0x552D60 };
		inline constexpr REL::Offset SetPlayerMapMarker{ 0x552E60 };
		inline constexpr REL::Offset RemovePlayerMapMarker{ 0x552F90 };
		inline constexpr REL::Offset FocusOnActor{ 0x553060 };
		inline constexpr REL::Offset GetNumberActorsInCombat{ 0x553C20 };
		inline constexpr REL::Offset IsPlayerCharacterInCombat{ 0x553C50 };
		inline constexpr REL::Offset ResetPlayerGreetFlag{ 0x553CE0 };
		inline constexpr REL::Offset InitiateSitSleepPackage{ 0x553D80 };
		inline constexpr REL::Offset IsActorFollowingPlayer{ 0x5549A0 };
		inline constexpr REL::Offset IsActorFollowingEscortingPlayer{ 0x554A70 };
		inline constexpr REL::Offset SetNeedResetHardcoreTimer{ 0x5590D0 };
		inline constexpr REL::Offset AddEatDrinkItem{ 0x55D0B0 };
		inline constexpr REL::Offset DoIronSightsZoom{ 0x55DE30 };
		inline constexpr REL::Offset CheckPoisonWeapon{ 0x55E6F0 };
		inline constexpr REL::Offset PoisonWeapon{ 0x55E900 };
		inline constexpr REL::Offset AddQueuedEnchantment{ 0x55EA30 };
		inline constexpr REL::Offset RemoveQueuedEnchantment{ 0x55EB10 };
		inline constexpr REL::Offset Setup3rdPersonCameraCaster{ 0x55EDF0 };
		inline constexpr REL::Offset Preload1stPersonAnimsFileList{ 0x55EE80 };
		inline constexpr REL::Offset QueuePlayerAnims{ 0x55F210 };
		inline constexpr REL::Offset SetControlsDisabled{ 0x55F530 };
		inline constexpr REL::Offset SetControlsDisabled_1{ 0x55F590 };
		inline constexpr REL::Offset ForcePhysicsGrabDrop{ 0x55F6A0 };
		inline constexpr REL::Offset HandlePhysicsGrab{ 0x55F6C0 };
		inline constexpr REL::Offset CreateMouseSpring{ 0x55F930 };
		inline constexpr REL::Offset UpdateMouseSpring{ 0x560520 };
		inline constexpr REL::Offset DestroyMouseSpring{ 0x561280 };
		inline constexpr REL::Offset UpdateDropSpring{ 0x5613C0 };
		inline constexpr REL::Offset GetDropPoint{ 0x5614B0 };
		inline constexpr REL::Offset DeathMenu{ 0x561D50 };
		inline constexpr REL::Offset ToggleFlyCam{ 0x561E30 };
		inline constexpr REL::Offset ResetMagicCastSound{ 0x561F90 };
		inline constexpr REL::Offset PlayImpactBasedHitShader{ 0x562290 };
		inline constexpr REL::Offset HavokActivateDroppedReference{ 0x562350 };
		inline constexpr REL::Offset ResetShapeCasterInfo{ 0x562450 };
		inline constexpr REL::Offset EnteringMenuMode{ 0x562590 };
		inline constexpr REL::Offset GetNumberOfFollowers{ 0x562620 };
		inline constexpr REL::Offset IsPlayerFollower{ 0x562720 };
		inline constexpr REL::Offset ShowInsufficientChargeMessage{ 0x5627A0 };
		inline constexpr REL::Offset IsConflictingObject{ 0x562950 };
		inline constexpr REL::Offset UpdateConflictingObjects{ 0x562D00 };
		inline constexpr REL::Offset AddPlayerAction{ 0x563EB0 };
		inline constexpr REL::Offset UpdateAutoAimActor{ 0x564260 };
		inline constexpr REL::Offset UpdateImageSpaceIronsights{ 0x5650A0 };
		inline constexpr REL::Offset UpdateImageSpaceVATS{ 0x565270 };
		inline constexpr REL::Offset StopIronSightsImageSpace{ 0x5655A0 };
		inline constexpr REL::Offset ApplyAutoAimActor{ 0x565620 };
		inline constexpr REL::Offset AddNote{ 0x566A70 };
		inline constexpr REL::Offset GetTerminalAccess{ 0x566C60 };
		inline constexpr REL::Offset SetMoveMode{ 0x566EA0 };
		inline constexpr REL::Offset IsActorPerceived{ 0x567090 };
		inline constexpr REL::Offset RemovePerceivedActor{ 0x567350 };
		inline constexpr REL::Offset UpdateMenuModeButton{ 0x5673D0 };
		inline constexpr REL::Offset CheckForClosesConversation{ 0x567730 };
		inline constexpr REL::Offset IsStandingOnFurniture{ 0x5678A0 };
		inline constexpr REL::Offset GetBumpedRef{ 0x567950 };
		inline constexpr REL::Offset GetBumpedActor{ 0x567A00 };
		inline constexpr REL::Offset IsPipboyActive{ 0x567AE0 };
		inline constexpr REL::Offset CanEquipOrUseObject{ 0x567B70 };
		inline constexpr REL::Offset AttemptYield{ 0x567DA0 };
		inline constexpr REL::Offset ReportRadiationChange{ 0x568730 };
		inline constexpr REL::Offset AddRockItAmmo{ 0x5687B0 };
		inline constexpr REL::Offset RemoveRockItAmmo{ 0x568BE0 };
		inline constexpr REL::Offset GetRandomRockItAmmoItem{ 0x568F90 };
		inline constexpr REL::Offset ClearRockItAmmo{ 0x5690A0 };
		inline constexpr REL::Offset ResetRockItAmmoWeight{ 0x569110 };
		inline constexpr REL::Offset SetPCToddler{ 0x5697C0 };
		inline constexpr REL::Offset SetPCYoung{ 0x569820 };
		inline constexpr REL::Offset IsImportantConversationRunning{ 0x569860 };
		inline constexpr REL::Offset GetMediaLocationController{ 0x5698A0 };
		inline constexpr REL::Offset GetClosestAudioMarkerInfo{ 0x569930 };
		inline constexpr REL::Offset UpdateHardcoreMode{ 0x569C30 };
		inline constexpr REL::Offset SetHardcore{ 0x569E90 };
		inline constexpr REL::Offset pSingleton{ 0xDDEA3C };
	}

	namespace PlayerMover
	{
		inline constexpr REL::Offset SetMoveMode{ 0x5EA360 };
	}

	namespace PlayerNameEntryMenu
	{
		inline constexpr REL::Offset ctor{ 0x3AB690 };
		inline constexpr REL::Offset IsValidName{ 0x3AB820 };
		inline constexpr REL::Offset Finish{ 0x3AB9A0 };
	}

	namespace PosGen
	{
		inline constexpr REL::Offset Build{ 0x743710 };
	}

	namespace PoseMatching_DATA_PoseMatching_System_DATA
	{
		inline constexpr REL::Offset Endian{ 0x1EE580 };
	}

	namespace Precipitation
	{
		inline constexpr REL::Offset Load{ 0x236C40 };
		inline constexpr REL::Offset Update{ 0x236ED0 };
		inline constexpr REL::Offset FlushAll{ 0x237800 };
		inline constexpr REL::Offset CreateShaderGeometry{ 0x237890 };
	}

	namespace ProcessArray
	{
		inline constexpr REL::Offset GetProcessLevelTail{ 0x1BE5C0 };
		inline constexpr REL::Offset GetProcessLevelHead{ 0x1DE0F0 };
		inline constexpr REL::Offset GetItem{ 0x568670 };
		inline constexpr REL::Offset RemoveActor{ 0x56AAF0 };
	}

	namespace ProcessLists
	{
		inline constexpr REL::Offset GetProjectilePostProcessList{ 0x610F0 };
		inline constexpr REL::Offset IsPlayerInRadiationArea{ 0x1098E0 };
		inline constexpr REL::Offset UpdateLowList{ 0x56B050 };
		inline constexpr REL::Offset UpdateMiddleLowList{ 0x56B470 };
		inline constexpr REL::Offset UpdateMiddleHighList{ 0x56B810 };
		inline constexpr REL::Offset IterateMobs{ 0x56BBC0 };
		inline constexpr REL::Offset CountHighActors{ 0x56BC50 };
		inline constexpr REL::Offset UpdateHighListPackages{ 0x56BCD0 };
		inline constexpr REL::Offset UpdateHighListImpacts{ 0x56C240 };
		inline constexpr REL::Offset RunDetectionForAllActors{ 0x56C330 };
		inline constexpr REL::Offset ReconcileDetectionDataForActor{ 0x56C710 };
		inline constexpr REL::Offset RunActorUpdates{ 0x56C7C0 };
		inline constexpr REL::Offset UpdateAnimationScenegraph{ 0x56C860 };
		inline constexpr REL::Offset ParallelUpdateAnimationScenegraph{ 0x56C970 };
		inline constexpr REL::Offset RunActorRagdollAnimationUpdates{ 0x56CB50 };
		inline constexpr REL::Offset RunActorAnimationUpdates{ 0x56CCA0 };
		inline constexpr REL::Offset ParallelActorAnimationMovementUpdates{ 0x56CDA0 };
		inline constexpr REL::Offset SkipHighListFadeIn{ 0x56CFA0 };
		inline constexpr REL::Offset ctor{ 0x56D020 };
		inline constexpr REL::Offset dtor{ 0x56D290 };
		inline constexpr REL::Offset AddReference{ 0x56D450 };
		inline constexpr REL::Offset RemoveReference{ 0x56D470 };
		inline constexpr REL::Offset GetSystemTimeClock{ 0x56D490 };
		inline constexpr REL::Offset SetSystemTimeClock{ 0x56D4B0 };
		inline constexpr REL::Offset UpdateProcessLists{ 0x56D810 };
		inline constexpr REL::Offset UpdateActorsMovement{ 0x56DB30 };
		inline constexpr REL::Offset ProcessHighActorsForFastTravel{ 0x56DF40 };
		inline constexpr REL::Offset ChangeProcessLevel{ 0x56E150 };
		inline constexpr REL::Offset CalculateAliveActorList{ 0x56E310 };
		inline constexpr REL::Offset InsertActorCloseToPlayer{ 0x56E3C0 };
		inline constexpr REL::Offset SortActorsCloseToPlayer{ 0x56E570 };
		inline constexpr REL::Offset RemoveActorCloseToPlayer{ 0x56E6F0 };
		inline constexpr REL::Offset IsActorNCloseToPlayer{ 0x56E7D0 };
		inline constexpr REL::Offset AddActorToTempChangeList{ 0x56E870 };
		inline constexpr REL::Offset ChangeProcessLevelTempList{ 0x56EB40 };
		inline constexpr REL::Offset RemoveActorFromTempChangeList{ 0x56F400 };
		inline constexpr REL::Offset NullOutTargetRef{ 0x56F600 };
		inline constexpr REL::Offset GetActorRefInHigh{ 0x570A20 };
		inline constexpr REL::Offset GetActorRefInHigh_1{ 0x570B30 };
		inline constexpr REL::Offset InitPackageLocations{ 0x570D50 };
		inline constexpr REL::Offset DistanceListCompareFn{ 0x570EE0 };
		inline constexpr REL::Offset SendCrimetoHighList{ 0x570F60 };
		inline constexpr REL::Offset SendActorsYellAlarm{ 0x5711E0 };
		inline constexpr REL::Offset SendResistArresttoGuards{ 0x5715C0 };
		inline constexpr REL::Offset GetActorsProcessCrimeAlarm{ 0x5719E0 };
		inline constexpr REL::Offset TurnOffMovementinHigh{ 0x571BA0 };
		inline constexpr REL::Offset IsActorTargetingREFinPackage{ 0x571C30 };
		inline constexpr REL::Offset GetCrimeIndex{ 0x572740 };
		inline constexpr REL::Offset GetCrimeByIndex{ 0x5727C0 };
		inline constexpr REL::Offset StopCombatandAlarmonActor{ 0x572840 };
		inline constexpr REL::Offset AnimateDeadActors{ 0x572BB0 };
		inline constexpr REL::Offset PlaceActorsinBedsOrChairs{ 0x572D30 };
		inline constexpr REL::Offset IsActorDetected{ 0x573460 };
		inline constexpr REL::Offset BuildFollowerListRecursive{ 0x573590 };
		inline constexpr REL::Offset GetHighestDetectionLevelForActor{ 0x573710 };
		inline constexpr REL::Offset RemoveActorInDetectionLists{ 0x573CB0 };
		inline constexpr REL::Offset IsActorTalkingThroughActivator{ 0x573D50 };
		inline constexpr REL::Offset MoveFollowersOnToPlayer{ 0x573DE0 };
		inline constexpr REL::Offset MoveActorsToReference{ 0x573EE0 };
		inline constexpr REL::Offset AddTempEffect{ 0x573FD0 };
		inline constexpr REL::Offset RemoveTempEffectsForCell{ 0x5740A0 };
		inline constexpr REL::Offset RemoveParticleTempEffectsFor3D{ 0x574290 };
		inline constexpr REL::Offset UpdateTempEffects{ 0x574420 };
		inline constexpr REL::Offset FinishMagicShaderHitEffect{ 0x574A50 };
		inline constexpr REL::Offset FlareHitEffect{ 0x574E90 };
		inline constexpr REL::Offset StopAllActorsInDialog{ 0x574FC0 };
		inline constexpr REL::Offset KillAllProjectiles{ 0x575160 };
		inline constexpr REL::Offset SaveTempEffectsList{ 0x5756C0 };
		inline constexpr REL::Offset RevertTempEffects{ 0x575C50 };
		inline constexpr REL::Offset Update3DAfterResting{ 0x575D10 };
		inline constexpr REL::Offset InitActorLeveledItems{ 0x575EA0 };
		inline constexpr REL::Offset HandleInvalidPositions{ 0x575F90 };
		inline constexpr REL::Offset AreHostilActorsNear{ 0x5764A0 };
		inline constexpr REL::Offset ReferDestructorNullOut{ 0x576680 };
		inline constexpr REL::Offset DisableExcessDeadActors{ 0x577130 };
		inline constexpr REL::Offset UnloadAllActorPermanentMagic{ 0x577540 };
		inline constexpr REL::Offset RebuildActorsCloseToPlayer{ 0x577660 };
		inline constexpr REL::Offset UpdateRadiationList{ 0x5777A0 };
		inline constexpr REL::Offset CommentOnPlayerAction{ 0x577CB0 };
		inline constexpr REL::Offset UpdateNonRenderSafeStuff{ 0x5781D0 };
		inline constexpr REL::Offset UpdateHighListAnimation{ 0x578420 };
		inline constexpr REL::Offset RunActorMagicUpdates{ 0x5784C0 };
		inline constexpr REL::Offset RunActorScripts{ 0x578550 };
		inline constexpr REL::Offset RemoveDetectionEventsOnActors{ 0x5785D0 };
		inline constexpr REL::Offset Singleton{ 0xDE0E80 };
	}

	namespace Projectile
	{
		inline constexpr REL::Offset IsFlagSet{ 0x44D00 };
		inline constexpr REL::Offset SetFlag{ 0x1DE0A0 };
		inline constexpr REL::Offset IsEditorCreated{ 0x37EAC0 };
		inline constexpr REL::Offset SetProjectileTarget{ 0x4126E0 };
		inline constexpr REL::Offset GetShooter{ 0x474480 };
		inline constexpr REL::Offset GetProjectileTarget{ 0x4D8B80 };
		inline constexpr REL::Offset GetSpeed{ 0x5669C0 };
		inline constexpr REL::Offset SetRange{ 0x5795C0 };
		inline constexpr REL::Offset GetDesiredTarget{ 0x5B4440 };
		inline constexpr REL::Offset GetMovementDirection{ 0x5B7010 };
		inline constexpr REL::Offset ctor{ 0x5BBC70 };
		inline constexpr REL::Offset ctor_1{ 0x5BBEF0 };
		inline constexpr REL::Offset Kill{ 0x5BC8F0 };
		inline constexpr REL::Offset Launch{ 0x5BCA60 };
		inline constexpr REL::Offset SpawnProjectileInInventory{ 0x5BD5C0 };
		inline constexpr REL::Offset AimProjectile{ 0x5BD860 };
		inline constexpr REL::Offset Init3D{ 0x5BDFF0 };
		inline constexpr REL::Offset AddInitialVelocity{ 0x5BEB00 };
		inline constexpr REL::Offset ProcessMovement{ 0x5BEC10 };
		inline constexpr REL::Offset UpdateInInventory{ 0x5BF190 };
		inline constexpr REL::Offset Move{ 0x5BF300 };
		inline constexpr REL::Offset Move_1{ 0x5BF370 };
		inline constexpr REL::Offset Sync3DWithReference{ 0x5BF470 };
		inline constexpr REL::Offset TestProjectileInTriggerZone{ 0x5C0090 };
		inline constexpr REL::Offset ProcessTargetPick{ 0x5C0D80 };
		inline constexpr REL::Offset SpawnCollisionEffects{ 0x5C20E0 };
		inline constexpr REL::Offset IsValidImpact{ 0x5C2C80 };
		inline constexpr REL::Offset ApplyImpactForce{ 0x5C2E80 };
		inline constexpr REL::Offset CombatHit{ 0x5C30D0 };
		inline constexpr REL::Offset CheckExplosion{ 0x5C3190 };
		inline constexpr REL::Offset GetMineReactsToTarget{ 0x5C3930 };
		inline constexpr REL::Offset CheckExplosionProximity{ 0x5C39E0 };
		inline constexpr REL::Offset UpdateLight{ 0x5C3E60 };
		inline constexpr REL::Offset GetConeEndpoints{ 0x5C3F90 };
		inline constexpr REL::Offset CheckShotBehindWall{ 0x5C40C0 };
		inline constexpr REL::Offset CheckRefDeleted{ 0x5C4C80 };
		inline constexpr REL::Offset SetMovementDelta{ 0x5C4E60 };
		inline constexpr REL::Offset StartCountdownSound{ 0x5C4EC0 };
		inline constexpr REL::Offset StopCountdownSound{ 0x5C4F90 };
		inline constexpr REL::Offset PickAutoWater{ 0x5C5AF0 };
		inline constexpr REL::Offset PickSceneGraph{ 0x5C5BA0 };
		inline constexpr REL::Offset AimAtPoint{ 0x5C6030 };
		inline constexpr REL::Offset FindBlastNodes{ 0x5C6380 };
		inline constexpr REL::Offset GetSecondaryItemChange{ 0x5D9F00 };
	}

	namespace Projectile_ImpactData
	{
		inline constexpr REL::Offset SaveGame{ 0x5BB970 };
		inline constexpr REL::Offset LoadGame{ 0x5BBA90 };
		inline constexpr REL::Offset FinishLoadGame{ 0x5BBB40 };
	}

	namespace ProjectileListener
	{
		inline constexpr REL::Offset ctor{ 0x5C6440 };
		inline constexpr REL::Offset GetObjectREFR{ 0x5C69E0 };
	}

	namespace QUEST_DATA
	{
		inline constexpr REL::Offset Endian{ 0x20CE80 };
	}

	namespace QUEST_INFO
	{
		inline constexpr REL::Offset dtor{ 0x2188C0 };
	}

	namespace QuantityMenu
	{
		inline constexpr REL::Offset Create{ 0x3ABA00 };
		inline constexpr REL::Offset Close{ 0x3ABDF0 };
	}

	namespace QueuedActor
	{
		inline constexpr REL::Offset ctor{ 0x411D0 };
	}

	namespace QueuedCharacter
	{
		inline constexpr REL::Offset AttachHeadParts{ 0x418B0 };
	}

	namespace QueuedFaceGenFile
	{
		inline constexpr REL::Offset ctor{ 0x42130 };
	}

	namespace QueuedFile
	{
		inline constexpr REL::Offset GetAllChildrenFinished{ 0x3CAA0 };
		inline constexpr REL::Offset SetParent{ 0x43AA0 };
		inline constexpr REL::Offset ctor{ 0x83C590 };
	}

	namespace QueuedFileEntry
	{
		inline constexpr REL::Offset ctor{ 0x83CE60 };
		inline constexpr REL::Offset SetFileName{ 0x83CEE0 };
		inline constexpr REL::Offset LookupFileEntry{ 0x83CF60 };
		inline constexpr REL::Offset GetFile{ 0x83CFF0 };
		inline constexpr REL::Offset GetLookupFileName{ 0x83D090 };
		inline constexpr REL::Offset GetDescription{ 0x83D0E0 };
	}

	namespace QueuedFileLoad
	{
		inline constexpr REL::Offset ctor{ 0x41C50 };
		inline constexpr REL::Offset ctor_1{ 0x41D80 };
	}

	namespace QueuedHead
	{
		inline constexpr REL::Offset Attach{ 0x3ED90 };
	}

	namespace QueuedHelmet
	{
		inline constexpr REL::Offset ctor{ 0x3EF10 };
		inline constexpr REL::Offset Attach{ 0x3FB80 };
	}

	namespace QueuedItem
	{
		inline constexpr REL::Offset QueueFiles{ 0x513A20 };
		inline constexpr REL::Offset SaveGame{ 0x513D60 };
		inline constexpr REL::Offset LoadGame{ 0x513E80 };
	}

	namespace QueuedKF
	{
		inline constexpr REL::Offset ctor{ 0x3E0F0 };
		inline constexpr REL::Offset ctor_1{ 0x3E210 };
	}

	namespace QueuedMagicItem
	{
		inline constexpr REL::Offset ctor{ 0x3DB30 };
	}

	namespace QueuedModel
	{
		inline constexpr REL::Offset ctor{ 0x3C6E0 };
		inline constexpr REL::Offset SetPrepareAfterLoad{ 0x3C7A0 };
		inline constexpr REL::Offset SetAddRefCount{ 0x3C7D0 };
		inline constexpr REL::Offset ctor_1{ 0x3C890 };
		inline constexpr REL::Offset ctor_2{ 0x3C960 };
		inline constexpr REL::Offset SetFaceGenModel{ 0x43FF0 };
	}

	namespace QueuedReference
	{
		inline constexpr REL::Offset ctor{ 0x3FD40 };
	}

	namespace QueuedReplacementKFList
	{
		inline constexpr REL::Offset NotifyChildFinishedPostProcessing{ 0x3EA30 };
	}

	namespace QueuedTexture
	{
		inline constexpr REL::Offset ctor{ 0x3BD10 };
		inline constexpr REL::Offset ctor_1{ 0x3BE60 };
		inline constexpr REL::Offset SetLoadDegraded{ 0x3C0D0 };
		inline constexpr REL::Offset SetInQueuedTextureMap{ 0x3C100 };
		inline constexpr REL::Offset GetLoadDegraded{ 0x3C3D0 };
	}

	namespace QueuedTreeBillboard
	{
		inline constexpr REL::Offset ctor{ 0x3D540 };
	}

	namespace RACE_DATA
	{
		inline constexpr REL::Offset Endian{ 0x211DB0 };
	}

	namespace RANK_DATA
	{
		inline constexpr REL::Offset dtor{ 0x1FC900 };
		inline constexpr REL::Offset ctor{ 0x1FCF10 };
	}

	namespace REFR_LOCK
	{
		inline constexpr REL::Offset ctor{ 0x11B00 };
		inline constexpr REL::Offset GetLockLevel{ 0x309E0 };
		inline constexpr REL::Offset GetLevel{ 0x30A10 };
		inline constexpr REL::Offset SetLocked{ 0x30A90 };
		inline constexpr REL::Offset IsBroken{ 0x30AE0 };
		inline constexpr REL::Offset NumericValueToEnum{ 0x30B40 };
		inline constexpr REL::Offset EnumToNumericValue{ 0x30BC0 };
		inline constexpr REL::Offset IsLocked{ 0x1021A0 };
	}

	namespace REF_DECAL_DATA
	{
		inline constexpr REL::Offset Endian{ 0x14030 };
	}

	namespace RESPONSE_DATA
	{
		inline constexpr REL::Offset Endian{ 0x216C70 };
	}

	namespace RaceSexMenu
	{
		inline constexpr REL::Offset ctor{ 0x3AC1F0 };
		inline constexpr REL::Offset _Create{ 0x3ACB60 };
		inline constexpr REL::Offset Close{ 0x3ADA40 };
		inline constexpr REL::Offset IsFlagged{ 0x3ADC30 };
		inline constexpr REL::Offset SetFlag{ 0x3ADC60 };
		inline constexpr REL::Offset SetActiveList{ 0x3AF180 };
		inline constexpr REL::Offset MakeHairStyleList{ 0x3AF300 };
		inline constexpr REL::Offset ValidateHairOptionList{ 0x3AF520 };
		inline constexpr REL::Offset MakePresetHeadList{ 0x3AF610 };
		inline constexpr REL::Offset UpdateScrollArrows{ 0x3AF6B0 };
		inline constexpr REL::Offset OnFaceSliderChange{ 0x3AF770 };
		inline constexpr REL::Offset OnHairColorSliderChange{ 0x3AF900 };
		inline constexpr REL::Offset SetHairColorSliders{ 0x3AFA40 };
		inline constexpr REL::Offset AddFaceSliders{ 0x3AFAF0 };
		inline constexpr REL::Offset SynchronizeFaceSliders{ 0x3B16D0 };
		inline constexpr REL::Offset SynchronizeFaceSliders_1{ 0x3B18F0 };
		inline constexpr REL::Offset RotatePlayer{ 0x3B1970 };
		inline constexpr REL::Offset NiUpdatePlayer3D{ 0x3B1AE0 };
		inline constexpr REL::Offset ZoomPlayer{ 0x3B1B60 };
		inline constexpr REL::Offset ValidateHairAndEyes{ 0x3B1CA0 };
		inline constexpr REL::Offset UpdatePlayerHead{ 0x3B1E70 };
		inline constexpr REL::Offset UpdatePlayerBody{ 0x3B25A0 };
		inline constexpr REL::Offset UpdatePlayerEyes{ 0x3B27C0 };
		inline constexpr REL::Offset UpdatePlayerHair{ 0x3B2B50 };
		inline constexpr REL::Offset ChangeHairColor{ 0x3B3660 };
		inline constexpr REL::Offset SliderUpdate{ 0x3B4930 };
		inline constexpr REL::Offset SliderRelease{ 0x3B4B50 };
		inline constexpr REL::Offset ChooseDefaultPreset{ 0x3B5180 };
		inline constexpr REL::Offset Randomize{ 0x3B51F0 };
	}

	namespace RaceSexMenu_MenuOption
	{
		inline constexpr REL::Offset IsSelected{ 0x3AE160 };
		inline constexpr REL::Offset GetValue{ 0x3B3740 };
		inline constexpr REL::Offset SetValue{ 0x3B3760 };
		inline constexpr REL::Offset SetDisplay{ 0x3B3810 };
		inline constexpr REL::Offset GetRange{ 0x3B3840 };
		inline constexpr REL::Offset SetRange{ 0x3B3890 };
		inline constexpr REL::Offset SetEnabled{ 0x3B3970 };
		inline constexpr REL::Offset GetVisibility{ 0x3B39B0 };
		inline constexpr REL::Offset Select{ 0x3B4140 };
		inline constexpr REL::Offset Deselect{ 0x3B4180 };
	}

	namespace RaceSexMenu_MenuOptionList
	{
		inline constexpr REL::Offset ctor{ 0x3B39E0 };
		inline constexpr REL::Offset AddBasicOption{ 0x3B3B80 };
		inline constexpr REL::Offset AddSubmenuOption{ 0x3B3BB0 };
		inline constexpr REL::Offset AddSliderOption{ 0x3B3CA0 };
		inline constexpr REL::Offset RemoveMenuOption{ 0x3B3DD0 };
		inline constexpr REL::Offset Focus{ 0x3B3FD0 };
		inline constexpr REL::Offset LinkForwardTo{ 0x3B4050 };
		inline constexpr REL::Offset UpdateCurrentSelection{ 0x3B40D0 };
		inline constexpr REL::Offset Find{ 0x3B4210 };
		inline constexpr REL::Offset SetActive{ 0x3B4410 };
		inline constexpr REL::Offset ScrollBy{ 0x3B4530 };
		inline constexpr REL::Offset AddMenuOption{ 0x3B4650 };
	}

	namespace RadialTile
	{
		inline constexpr REL::Offset ctor{ 0x621660 };
	}

	namespace RagDollBone
	{
		inline constexpr REL::Offset Endian{ 0xD9280 };
	}

	namespace RagDollData
	{
		inline constexpr REL::Offset Save{ 0xD93C0 };
		inline constexpr REL::Offset Load{ 0xD94A0 };
		inline constexpr REL::Offset Compare{ 0xD9780 };
		inline constexpr REL::Offset UpdateDataFromReference{ 0xD9800 };
		inline constexpr REL::Offset UpdateReferenceFromData{ 0xD9910 };
		inline constexpr REL::Offset UpdateRagDollDataFromNode{ 0xD9BD0 };
		inline constexpr REL::Offset UpdateNodeFromRagDollData{ 0xD9DC0 };
		inline constexpr REL::Offset CreateRagDollBoneArray{ 0xDA010 };
		inline constexpr REL::Offset CountRagDollBones{ 0xDA180 };
		inline constexpr REL::Offset UpdateBip01NodeFromRagdollData{ 0xDA230 };
	}

	namespace RagdollFeedbackData_RagdollFeedbackSystemData
	{
		inline constexpr REL::Offset Endian{ 0x1EE380 };
	}

	namespace RagdollSaveStruct
	{
		inline constexpr REL::Offset Endian{ 0x1EE510 };
	}

	namespace Random
	{
		inline constexpr REL::Offset Set{ 0x743510 };
	}

	namespace RayCastPath
	{
		inline constexpr REL::Offset ctor{ 0x2CB480 };
		inline constexpr REL::Offset dtor{ 0x2CB4A0 };
	}

	namespace RayCastPathRequest
	{
		inline constexpr REL::Offset ctor{ 0x2CB3A0 };
		inline constexpr REL::Offset dtor{ 0x2CB410 };
	}

	namespace Reader
	{
		inline constexpr REL::Offset readInt_int_{ 0x9C5BD0 };
		inline constexpr REL::Offset readString{ 0x9C5D90 };
		inline constexpr REL::Offset readBitfield{ 0x9C5E10 };
		inline constexpr REL::Offset _readArrayItems{ 0x9C6100 };
		inline constexpr REL::Offset readBinaryValue{ 0x9C6720 };
		inline constexpr REL::Offset readObject{ 0x9C6970 };
		inline constexpr REL::Offset readObjectTree{ 0x9C6E50 };
	}

	namespace RecipeMenu
	{
		inline constexpr REL::Offset ctor{ 0x326DF0 };
		inline constexpr REL::Offset GetFilterList{ 0x326F10 };
		inline constexpr REL::Offset Create{ 0x326FF0 };
		inline constexpr REL::Offset Close{ 0x327430 };
		inline constexpr REL::Offset UpdateLists{ 0x327680 };
		inline constexpr REL::Offset CanMakeRecipe{ 0x327920 };
		inline constexpr REL::Offset ItemSelectCallback{ 0x3284F0 };
		inline constexpr REL::Offset ForceRecipeUpdate{ 0x328A30 };
		inline constexpr REL::Offset PopulateItemStatsDisplay{ 0x328DA0 };
	}

	namespace ReferenceInitialData
	{
		inline constexpr REL::Offset ctor{ 0x449280 };
		inline constexpr REL::Offset Initialize{ 0x44E4F0 };
		inline constexpr REL::Offset Initialize_1{ 0x44E580 };
		inline constexpr REL::Offset GetLocationCellAndWorld{ 0x44E610 };
		inline constexpr REL::Offset GetOriginalLocationCellAndWorld{ 0x44E6A0 };
	}

	namespace ReferenceLocationInitialData
	{
		inline constexpr REL::Offset ctor{ 0x44EAC0 };
	}

	namespace ReferenceObstacleArray
	{
		inline constexpr REL::Offset ctor{ 0x2C1480 };
	}

	namespace RegSettingCollection
	{
		inline constexpr REL::Offset ctor{ 0x4779F0 };
	}

	namespace RepairMenu
	{
		inline constexpr REL::Offset ctor{ 0x3B5400 };
		inline constexpr REL::Offset Create{ 0x3B5520 };
		inline constexpr REL::Offset InitFunc{ 0x3B57F0 };
		inline constexpr REL::Offset SortFunc{ 0x3B5950 };
		inline constexpr REL::Offset RepairItem{ 0x3B5D80 };
		inline constexpr REL::Offset ShowErrorMessage{ 0x3B6970 };
		inline constexpr REL::Offset Update{ 0x3B6AA0 };
		inline constexpr REL::Offset ResetMenu{ 0x3B6FB0 };
		inline constexpr REL::Offset InitRepairMenu{ 0x3B7020 };
	}

	namespace RepairServicesMenu
	{
		inline constexpr REL::Offset ctor{ 0x3B7400 };
		inline constexpr REL::Offset Create{ 0x3B7570 };
		inline constexpr REL::Offset Close{ 0x3B78E0 };
		inline constexpr REL::Offset InitFunc{ 0x3B7920 };
		inline constexpr REL::Offset FilterFunc{ 0x3B7B40 };
		inline constexpr REL::Offset SortFunc{ 0x3B7C40 };
		inline constexpr REL::Offset RepairItem{ 0x3B7F70 };
		inline constexpr REL::Offset Update{ 0x3B8B30 };
	}

	namespace ReservedCoverLocation
	{
		inline constexpr REL::Offset CanReserveCoverLocation{ 0x582DF0 };
	}

	namespace Reset3DMobIterator
	{
		inline constexpr REL::Offset ctor{ 0x1F2150 };
	}

	namespace ResponseListWrapper
	{
		inline constexpr REL::Offset ClearResponseList{ 0x21CAD0 };
		inline constexpr REL::Offset CopyResponseList{ 0x21CB60 };
		inline constexpr REL::Offset AddTail{ 0x21CC60 };
		inline constexpr REL::Offset dtor{ 0x21F440 };
	}

	namespace RoomLinkedRefData
	{
		inline constexpr REL::Offset dtor{ 0x20710 };
	}

	namespace RouletteMenu
	{
		inline constexpr REL::Offset ctor{ 0x3B8D30 };
		inline constexpr REL::Offset Close{ 0x3B9480 };
		inline constexpr REL::Offset Prepare3DElements{ 0x3B94C0 };
		inline constexpr REL::Offset PrepareBetTiles{ 0x3B9C40 };
		inline constexpr REL::Offset Draw3DElements{ 0x3BBCF0 };
		inline constexpr REL::Offset Create{ 0x3BBE20 };
		inline constexpr REL::Offset SetBet{ 0x3BED70 };
		inline constexpr REL::Offset RemoveBet{ 0x3BF150 };
		inline constexpr REL::Offset GetBetIndex{ 0x3BF390 };
		inline constexpr REL::Offset HideBetChip{ 0x3BF480 };
		inline constexpr REL::Offset ShiftWheelTexture{ 0x3BF570 };
		inline constexpr REL::Offset SpinWheel{ 0x3BF670 };
		inline constexpr REL::Offset SetTileTextAlpha{ 0x3BF710 };
		inline constexpr REL::Offset ResetBetChips{ 0x3BF7A0 };
		inline constexpr REL::Offset SetBetChip{ 0x3BF840 };
		inline constexpr REL::Offset UpdateEarningsString{ 0x3BF9E0 };
	}

	namespace SAVE_DESTRUCTIBLE_OBJECT_STAGE
	{
		inline constexpr REL::Offset Endian{ 0x78130 };
	}

	namespace SCENE_INFO_DATA_STRUCT
	{
		inline constexpr REL::Offset ctor{ 0xA7C80 };
	}

	namespace SCRIPT_HEADER
	{
		inline constexpr REL::Offset Endian{ 0x14220 };
	}

	namespace SCRIPT_LINE
	{
		inline constexpr REL::Offset ctor{ 0x1AF370 };
	}

	namespace SCRIPT_LOCAL
	{
		inline constexpr REL::Offset Endian{ 0x1E2870 };
	}

	namespace SCRIPT_REFERENCED_OBJECT
	{
		inline constexpr REL::Offset ctor{ 0x100910 };
		inline constexpr REL::Offset ctor_1{ 0x1AB8B0 };
	}

	namespace SCRIPT_WORD
	{
		inline constexpr REL::Offset ctor{ 0x1AF310 };
	}

	namespace SIdvLeafInfo
	{
		inline constexpr REL::Offset InitTables{ 0x73CF40 };
		inline constexpr REL::Offset Parse{ 0x73D1B0 };
	}

	namespace SIdvWindInfo
	{
		inline constexpr REL::Offset Parse{ 0x7408B0 };
	}

	namespace SKILL_DATA
	{
		inline constexpr REL::Offset Endian{ 0x2180A0 };
	}

	namespace SPECIALBookMenu
	{
		inline constexpr REL::Offset ctor{ 0x320170 };
		inline constexpr REL::Offset Create{ 0x3C5FC0 };
		inline constexpr REL::Offset Close{ 0x3C6120 };
		inline constexpr REL::Offset InitBook{ 0x3C6CE0 };
		inline constexpr REL::Offset InitCamera{ 0x3C99C0 };
		inline constexpr REL::Offset Draw3DElements{ 0x3C9CA0 };
		inline constexpr REL::Offset TurnPage{ 0x3C9DC0 };
		inline constexpr REL::Offset GetCurrentStatesActorValue{ 0x3CA030 };
		inline constexpr REL::Offset RefreshTotalPointsValue{ 0x3CA5F0 };
		inline constexpr REL::Offset RefreshLeftAVButton{ 0x3CA700 };
		inline constexpr REL::Offset RefreshRightAVButton{ 0x3CA7A0 };
		inline constexpr REL::Offset DecreaseActorValue{ 0x3CA960 };
		inline constexpr REL::Offset IncreaseActorValue{ 0x3CAA80 };
		inline constexpr REL::Offset CloseCallback{ 0x3CAC30 };
		inline constexpr REL::Offset LoadButtonAndTextImages{ 0x3CADD0 };
	}

	namespace SPECIALBookMenu_ActorValueButton
	{
		inline constexpr REL::Offset ctor{ 0x3CA200 };
	}

	namespace SPECIALBookMenu_SpecialBookButton
	{
		inline constexpr REL::Offset ctor{ 0x3CA080 };
	}

	namespace SPECIALBookMenu_SpecialBookTextItem
	{
		inline constexpr REL::Offset ctor{ 0x3CA2C0 };
	}

	namespace SandBoxActorPackageData
	{
		inline constexpr REL::Offset ctor{ 0x5F3900 };
		inline constexpr REL::Offset InitLocation{ 0x5F3AF0 };
		inline constexpr REL::Offset SetUpNextActivity{ 0x5F3E80 };
		inline constexpr REL::Offset ReleaseTargetObject{ 0x5F4060 };
		inline constexpr REL::Offset IsDoneWithIdleAnims{ 0x5F4300 };
		inline constexpr REL::Offset ShouldPickNewProcedure{ 0x5F43C0 };
		inline constexpr REL::Offset PickProcedure{ 0x5F4700 };
		inline constexpr REL::Offset EvaluateReferenceforUse{ 0x5F5070 };
		inline constexpr REL::Offset ScanWorld{ 0x5F54D0 };
		inline constexpr REL::Offset UpdateIsActorAtLocation{ 0x5F56B0 };
	}

	namespace SandBoxChoiceListItem
	{
		inline constexpr REL::Offset ctor{ 0x5F3800 };
	}

	namespace SaveGameFile
	{
		inline constexpr REL::Offset ctor{ 0x45FB40 };
	}

	namespace SaveGameFormInfo
	{
		inline constexpr REL::Offset ctor{ 0x447D50 };
	}

	namespace SaveStats
	{
		inline constexpr REL::Offset AddExtraStat{ 0x4558A0 };
		inline constexpr REL::Offset AddStats{ 0x455970 };
		inline constexpr REL::Offset AddStats_1{ 0x455A20 };
		inline constexpr REL::Offset PrintStats{ 0x455BA0 };
		inline constexpr REL::Offset WriteFile{ 0x456300 };
	}

	namespace SavedFormData
	{
		inline constexpr REL::Offset GetFormName{ 0x4536D0 };
	}

	namespace SceneGraph
	{
		inline constexpr REL::Offset ctor{ 0x478610 };
	}

	namespace ScrapHeap
	{
		inline constexpr REL::Offset ctor{ 0x6A53F0 };
	}

	namespace ScrapHeapManager
	{
		inline constexpr REL::Offset RequestBuffer{ 0x6A59B0 };
		inline constexpr REL::Offset ReleaseBuffer{ 0x6A5B70 };
		inline constexpr REL::Offset FreeAllBuffers{ 0x6A5C80 };
	}

	namespace Script
	{
		inline constexpr REL::Offset GetDistanceConditionFunction{ 0x19BFA0 };
		inline constexpr REL::Offset GetInZoneConditionFunction{ 0x19C010 };
		inline constexpr REL::Offset GetPosConditionFunction{ 0x19C0C0 };
		inline constexpr REL::Offset GetAngleConditionFunction{ 0x19C170 };
		inline constexpr REL::Offset GetStartingPosConditionFunction{ 0x19C230 };
		inline constexpr REL::Offset GetStartingAngleConditionFunction{ 0x19C2D0 };
		inline constexpr REL::Offset GetMenuModeConditionFunction{ 0x19C380 };
		inline constexpr REL::Offset GetSecondsPassedConditionFunction{ 0x19C430 };
		inline constexpr REL::Offset GetActorValueConditionFunction{ 0x19C4F0 };
		inline constexpr REL::Offset GetBaseActorValueConditionFunction{ 0x19C5D0 };
		inline constexpr REL::Offset GetPermanentActorValueConditionFunction{ 0x19C680 };
		inline constexpr REL::Offset GetFatiguePercentageConditionFunction{ 0x19C760 };
		inline constexpr REL::Offset GetHealthPercentageConditionFunction{ 0x19C7E0 };
		inline constexpr REL::Offset GetWalkSpeedConditionFunction{ 0x19C860 };
		inline constexpr REL::Offset GetCurrentTimeConditionFunction{ 0x19C8E0 };
		inline constexpr REL::Offset GetScaleConditionFunction{ 0x19C930 };
		inline constexpr REL::Offset GetLOSConditionFunction{ 0x19C990 };
		inline constexpr REL::Offset GetDisabledConditionFunction{ 0x19CF50 };
		inline constexpr REL::Offset GetLockedConditionFunction{ 0x19D010 };
		inline constexpr REL::Offset GetLockLevelConditionFunction{ 0x19D100 };
		inline constexpr REL::Offset GetIsLockBrokenConditionFunction{ 0x19D1D0 };
		inline constexpr REL::Offset GetDiseaseConditionFunction{ 0x19D250 };
		inline constexpr REL::Offset GetVampireConditionFunction{ 0x19D2A0 };
		inline constexpr REL::Offset GetClothingValueConditionFunction{ 0x19D320 };
		inline constexpr REL::Offset SameFactionConditionFunction{ 0x19D400 };
		inline constexpr REL::Offset SameRaceConditionFunction{ 0x19D540 };
		inline constexpr REL::Offset SameSexConditionFunction{ 0x19D610 };
		inline constexpr REL::Offset GetDetectedConditionFunction{ 0x19D6E0 };
		inline constexpr REL::Offset GetDeadConditionFunction{ 0x19D840 };
		inline constexpr REL::Offset GetItemCountConditionFunction{ 0x19D8E0 };
		inline constexpr REL::Offset GetEquippedConditionFunction{ 0x19DA90 };
		inline constexpr REL::Offset GetGoldConditionFunction{ 0x19DBE0 };
		inline constexpr REL::Offset GetSleepingConditionFunction{ 0x19DC90 };
		inline constexpr REL::Offset GetSittingConditionFunction{ 0x19DD90 };
		inline constexpr REL::Offset GetFurnitureMarkerIDConditionFunction{ 0x19DE90 };
		inline constexpr REL::Offset IsCurrentFurnitureRefConditionFunction{ 0x19DF40 };
		inline constexpr REL::Offset IsCurrentFurnitureObjConditionFunction{ 0x19DFE0 };
		inline constexpr REL::Offset GetTalkedToPCConditionFunction{ 0x19E0F0 };
		inline constexpr REL::Offset GetScriptVariableConditionFunction{ 0x19E1A0 };
		inline constexpr REL::Offset GetQuestRunningConditionFunction{ 0x19E320 };
		inline constexpr REL::Offset GetQuestCompletedConditionFunction{ 0x19E390 };
		inline constexpr REL::Offset GetStageConditionFunction{ 0x19E420 };
		inline constexpr REL::Offset GetStageDoneConditionFunction{ 0x19E490 };
		inline constexpr REL::Offset GetFactionRankDifferenceConditionFunction{ 0x19E510 };
		inline constexpr REL::Offset GetAlarmedConditionFunction{ 0x19E650 };
		inline constexpr REL::Offset GetIsPleasantConditionFunction{ 0x19E700 };
		inline constexpr REL::Offset GetIsCloudyConditionFunction{ 0x19E7F0 };
		inline constexpr REL::Offset GetIsRainingConditionFunction{ 0x19E8E0 };
		inline constexpr REL::Offset GetIsSnowingConditionFunction{ 0x19EA10 };
		inline constexpr REL::Offset GetWeatherPercentConditionFunction{ 0x19EB60 };
		inline constexpr REL::Offset GetIsCurrentWeatherConditionFunction{ 0x19EBB0 };
		inline constexpr REL::Offset GetAttackedConditionFunction{ 0x19EC30 };
		inline constexpr REL::Offset GetIsCreatureConditionFunction{ 0x19ECC0 };
		inline constexpr REL::Offset GetShouldAttackConditionFunction{ 0x19ED30 };
		inline constexpr REL::Offset GetInSameCellConditionFunction{ 0x19EE80 };
		inline constexpr REL::Offset GetInCellConditionFunction{ 0x19EF60 };
		inline constexpr REL::Offset GetInWorldspaceConditionFunction{ 0x19F0C0 };
		inline constexpr REL::Offset GetIsClassConditionFunction{ 0x19F180 };
		inline constexpr REL::Offset GetIsRaceConditionFunction{ 0x19F240 };
		inline constexpr REL::Offset GetIsCreatureTypeConditionFunction{ 0x19F300 };
		inline constexpr REL::Offset GetIsSexConditionFunction{ 0x19F3C0 };
		inline constexpr REL::Offset GetIsVoiceTypeConditionFunction{ 0x19F450 };
		inline constexpr REL::Offset GetIsPlayableRaceConditionFunction{ 0x19F540 };
		inline constexpr REL::Offset GetInFactionConditionFunction{ 0x19F630 };
		inline constexpr REL::Offset GetIsIDConditionFunction{ 0x19F7B0 };
		inline constexpr REL::Offset IsInListConditionFunction{ 0x19F890 };
		inline constexpr REL::Offset GetIsChildConditionFunction{ 0x19F940 };
		inline constexpr REL::Offset GetIsUsedItemConditionFunction{ 0x19F9B0 };
		inline constexpr REL::Offset GetIsUsedItemTypeConditionFunction{ 0x19FA90 };
		inline constexpr REL::Offset GetUsedItemLevelConditionFunction{ 0x19FB00 };
		inline constexpr REL::Offset GetUsedItemActivateConditionFunction{ 0x19FB50 };
		inline constexpr REL::Offset GetIsRefConditionFunction{ 0x19FBB0 };
		inline constexpr REL::Offset GetFactionRankConditionFunction{ 0x19FC50 };
		inline constexpr REL::Offset GetGlobalValueConditionFunction{ 0x19FD30 };
		inline constexpr REL::Offset GetDispositionConditionFunction{ 0x19FDB0 };
		inline constexpr REL::Offset GetUnconsciousConditionFunction{ 0x19FEE0 };
		inline constexpr REL::Offset GetRestrainedConditionFunction{ 0x19FF90 };
		inline constexpr REL::Offset GetRandomPercentConditionFunction{ 0x1A0040 };
		inline constexpr REL::Offset GetLevelConditionFunction{ 0x1A00C0 };
		inline constexpr REL::Offset GetArmorRatingConditionFunction{ 0x1A0150 };
		inline constexpr REL::Offset GetDeadCountConditionFunction{ 0x1A01F0 };
		inline constexpr REL::Offset GetAlertConditionFunction{ 0x1A0260 };
		inline constexpr REL::Offset GetPlayerControlsDisabledConditionFunction{ 0x1A02F0 };
		inline constexpr REL::Offset GetHeadingAngleConditionFunction{ 0x1A0410 };
		inline constexpr REL::Offset IsWeaponOutConditionFunction{ 0x1A0550 };
		inline constexpr REL::Offset IsWeaponInListConditionFunction{ 0x1A05E0 };
		inline constexpr REL::Offset IsFacingUpConditionFunction{ 0x1A0710 };
		inline constexpr REL::Offset IsLeftUpConditionFunction{ 0x1A0800 };
		inline constexpr REL::Offset GetKnockedStateConditionFunction{ 0x1A08C0 };
		inline constexpr REL::Offset GetWeaponAnimTypeConditionFunction{ 0x1A09B0 };
		inline constexpr REL::Offset IsWeaponSkillTypeConditionFunction{ 0x1A0AB0 };
		inline constexpr REL::Offset GetCurrentAIPackageConditionFunction{ 0x1A0B60 };
		inline constexpr REL::Offset IsWaitingConditionFunction{ 0x1A0E80 };
		inline constexpr REL::Offset IsIdlePlayingConditionFunction{ 0x1A0F10 };
		inline constexpr REL::Offset GetCrimeConditionFunction{ 0x1A0F90 };
		inline constexpr REL::Offset IsGuardConditionFunction{ 0x1A10B0 };
		inline constexpr REL::Offset IsTalkingConditionFunction{ 0x1A1150 };
		inline constexpr REL::Offset GetCurrentAIProcedureConditionFunction{ 0x1A1210 };
		inline constexpr REL::Offset GetTrespassWarningLevelConditionFunction{ 0x1A1770 };
		inline constexpr REL::Offset GetWindSpeedConditionFunction{ 0x1A1880 };
		inline constexpr REL::Offset IsTrespassingConditionFunction{ 0x1A1900 };
		inline constexpr REL::Offset IsInMyOwnedCellConditionFunction{ 0x1A19A0 };
		inline constexpr REL::Offset IsContinuingPackagePCNearConditionFunction{ 0x1A1A40 };
		inline constexpr REL::Offset CanHaveFlamesConditionFunction{ 0x1A1AD0 };
		inline constexpr REL::Offset HasFlamesConditionFunction{ 0x1A1B80 };
		inline constexpr REL::Offset GetOpenStateConditionFunction{ 0x1A1C30 };
		inline constexpr REL::Offset GetIsCurrentPackageConditionFunction{ 0x1A1C90 };
		inline constexpr REL::Offset GetDayOfWeekConditionFunction{ 0x1A1D80 };
		inline constexpr REL::Offset IsPCSleepingConditionFunction{ 0x1A1DE0 };
		inline constexpr REL::Offset IsPCAMurdererConditionFunction{ 0x1A1E70 };
		inline constexpr REL::Offset GetDetectionLevelConditionFunction{ 0x1A1EE0 };
		inline constexpr REL::Offset IsSwimmingConditionFunction{ 0x1A1FA0 };
		inline constexpr REL::Offset GetAmountStolenSoldConditionFunction{ 0x1A2050 };
		inline constexpr REL::Offset GetPCExpelledConditionFunction{ 0x1A20D0 };
		inline constexpr REL::Offset GetPCFactionMurderConditionFunction{ 0x1A2150 };
		inline constexpr REL::Offset GetPlayerEnemyofFactionConditionFunction{ 0x1A21F0 };
		inline constexpr REL::Offset GetPCFactionAttackConditionFunction{ 0x1A2290 };
		inline constexpr REL::Offset GetDestroyedConditionFunction{ 0x1A2330 };
		inline constexpr REL::Offset HasMagicEffectConditionFunction{ 0x1A2390 };
		inline constexpr REL::Offset IsSpellTargetConditionFunction{ 0x1A2440 };
		inline constexpr REL::Offset GetSpellUsageNumberConditionFunction{ 0x1A24F0 };
		inline constexpr REL::Offset GetVATSModeConditionFunction{ 0x1A2590 };
		inline constexpr REL::Offset GetVATSTargetHeightConditionFunction{ 0x1A25F0 };
		inline constexpr REL::Offset GetSandmanConditionFunction{ 0x1A2810 };
		inline constexpr REL::Offset GetCannibalConditionFunction{ 0x1A2890 };
		inline constexpr REL::Offset IsInCritStageConditionFunction{ 0x1A2910 };
		inline constexpr REL::Offset HasBeenEatenConditionFunction{ 0x1A29D0 };
		inline constexpr REL::Offset GetGhostConditionFunction{ 0x1A2A60 };
		inline constexpr REL::Offset GetOffersServiceConditionFunction{ 0x1A2AF0 };
		inline constexpr REL::Offset GetBarterGoldConditionFunction{ 0x1A2BA0 };
		inline constexpr REL::Offset IsTimePassingConditionFunction{ 0x1A2C70 };
		inline constexpr REL::Offset GetArmorRatingUpperConditionFunction{ 0x1A2CE0 };
		inline constexpr REL::Offset GetOwnershipConditionFunction{ 0x1A2E20 };
		inline constexpr REL::Offset GetCellOwnershipConditionFunction{ 0x1A2ED0 };
		inline constexpr REL::Offset IsSneakingConditionFunction{ 0x1A2F60 };
		inline constexpr REL::Offset IsRunningConditionFunction{ 0x1A3010 };
		inline constexpr REL::Offset GetFriendHitConditionFunction{ 0x1A30C0 };
		inline constexpr REL::Offset IsInCombatConditionFunction{ 0x1A3180 };
		inline constexpr REL::Offset IsInInteriorConditionFunction{ 0x1A3270 };
		inline constexpr REL::Offset GetPCMiscStatConditionFunction{ 0x1A3310 };
		inline constexpr REL::Offset IsActorEvilConditionFunction{ 0x1A3390 };
		inline constexpr REL::Offset IsActorVictimConditionFunction{ 0x1A3460 };
		inline constexpr REL::Offset IsInDangerousWaterConditionFunction{ 0x1A36B0 };
		inline constexpr REL::Offset IsXboxConditionFunction{ 0x1A37B0 };
		inline constexpr REL::Offset IsPS3ConditionFunction{ 0x1A3820 };
		inline constexpr REL::Offset IsPCConditionFunction{ 0x1A3870 };
		inline constexpr REL::Offset IsPlayerActionActiveConditionFunction{ 0x1A3B20 };
		inline constexpr REL::Offset GetTalkingActivatorActorConditionFunction{ 0x1A3B90 };
		inline constexpr REL::Offset GetHitLocationConditionFunction{ 0x1A3C30 };
		inline constexpr REL::Offset GetLastHitCriticalConditionFunction{ 0x1A3C90 };
		inline constexpr REL::Offset GetCauseofDeathConditionFunction{ 0x1A3D30 };
		inline constexpr REL::Offset GetKillingBlowLimbConditionFunction{ 0x1A3E10 };
		inline constexpr REL::Offset GetKillerConditionFunction{ 0x1A3F00 };
		inline constexpr REL::Offset GetKillerObjectConditionFunction{ 0x1A3FA0 };
		inline constexpr REL::Offset GetIsObjectTypeConditionFunction{ 0x1A4410 };
		inline constexpr REL::Offset GetDialogueEmotionConditionFunction{ 0x1A4480 };
		inline constexpr REL::Offset GetDialogueEmotionValueConditionFunction{ 0x1A4540 };
		inline constexpr REL::Offset IsWaterObjectConditionFunction{ 0x1A45C0 };
		inline constexpr REL::Offset HasPerkConditionFunction{ 0x1A4630 };
		inline constexpr REL::Offset GetFactionRelationConditionFunction{ 0x1A46D0 };
		inline constexpr REL::Offset IsLastPlayedIdleConditionFunction{ 0x1A4780 };
		inline constexpr REL::Offset GetPlayerTeammateConditionFunction{ 0x1A4820 };
		inline constexpr REL::Offset GetPlayerTeammateCountConditionFunction{ 0x1A48A0 };
		inline constexpr REL::Offset GetActorCrimePlayerEnemyConditionFunction{ 0x1A4930 };
		inline constexpr REL::Offset GetActorFactionPlayerEnemyConditionFunction{ 0x1A49F0 };
		inline constexpr REL::Offset GetMinorCrimeCountConditionFunction{ 0x1A4AA0 };
		inline constexpr REL::Offset GetMajorCrimeCountConditionFunction{ 0x1A4B60 };
		inline constexpr REL::Offset GetDestructionStageConditionFunction{ 0x1A4C60 };
		inline constexpr REL::Offset GetThreatRatioConditionFunction{ 0x1A4CD0 };
		inline constexpr REL::Offset GetIsAlignmentConditionFunction{ 0x1A4DD0 };
		inline constexpr REL::Offset GetIsUsedItemEquipTypeConditionFunction{ 0x1A4EA0 };
		inline constexpr REL::Offset GetAggroRadiusViolatedConditionFunction{ 0x1A4F30 };
		inline constexpr REL::Offset GetConcussedConditionFunction{ 0x1A5020 };
		inline constexpr REL::Offset GetMapMarkerVisibleConditionFunction{ 0x1A51E0 };
		inline constexpr REL::Offset GetWeaponHealthPercConditionFunction{ 0x1A5270 };
		inline constexpr REL::Offset IsGreetingPlayerConditionFunction{ 0x1A5330 };
		inline constexpr REL::Offset IsCombatTargetConditionFunction{ 0x1A53E0 };
		inline constexpr REL::Offset GetVATSRightAreaFreeConditionFunction{ 0x1A5460 };
		inline constexpr REL::Offset GetVATSLeftAreaFreeConditionFunction{ 0x1A54F0 };
		inline constexpr REL::Offset GetVATSBackAreaFreeConditionFunction{ 0x1A5580 };
		inline constexpr REL::Offset GetVATSFrontAreaFreeConditionFunction{ 0x1A5610 };
		inline constexpr REL::Offset GetVATSRightTargetVisibleConditionFunction{ 0x1A5690 };
		inline constexpr REL::Offset GetVATSLeftTargetVisibleConditionFunction{ 0x1A5720 };
		inline constexpr REL::Offset GetVATSBackTargetVisibleConditionFunction{ 0x1A57B0 };
		inline constexpr REL::Offset GetVATSFrontTargetVisibleConditionFunction{ 0x1A5840 };
		inline constexpr REL::Offset GetXPForNextLevelConditionFunction{ 0x1A58C0 };
		inline constexpr REL::Offset GetIgnoreCrimeConditionFunction{ 0x1A59A0 };
		inline constexpr REL::Offset IsGoreDisabledConditionFunction{ 0x1A5A50 };
		inline constexpr REL::Offset GetActorsInHighConditionFunction{ 0x1A5AB0 };
		inline constexpr REL::Offset GetForceHitReactionConditionFunction{ 0x1A5B30 };
		inline constexpr REL::Offset GetReputationConditionFunction{ 0x1A5BD0 };
		inline constexpr REL::Offset GetReputationPctConditionFunction{ 0x1A5C40 };
		inline constexpr REL::Offset GetReputationThresholdConditionFunction{ 0x1A5CB0 };
		inline constexpr REL::Offset GetObjectiveCompletedConditionFunction{ 0x1A5D30 };
		inline constexpr REL::Offset GetObjectiveDisplayedConditionFunction{ 0x1A5DE0 };
		inline constexpr REL::Offset IsPlayerTagSkillConditionFunction{ 0x1A5E90 };
		inline constexpr REL::Offset IsHardcoreConditionalFunction{ 0x1A5F90 };
		inline constexpr REL::Offset IsAlwaysHardcoreConditionalFunction{ 0x1A5FF0 };
		inline constexpr REL::Offset ChallengeLockedConditionFunction{ 0x1A6070 };
		inline constexpr REL::Offset GetChallengeCompletedConditionFunction{ 0x1A60F0 };
		inline constexpr REL::Offset ctor{ 0x1AA0F0 };
		inline constexpr REL::Offset CopyResultScript{ 0x1AA420 };
		inline constexpr REL::Offset AddPendingDisabledReference{ 0x1AA500 };
		inline constexpr REL::Offset AddPendingEnabledReference{ 0x1AA580 };
		inline constexpr REL::Offset RemoveDelayedScriptActionReference{ 0x1AA5D0 };
		inline constexpr REL::Offset IsPendingDisabledReference{ 0x1AA630 };
		inline constexpr REL::Offset IsPendingEnabledReference{ 0x1AA680 };
		inline constexpr REL::Offset RunDelayedScriptActionsOnReferences{ 0x1AA720 };
		inline constexpr REL::Offset SavePendingReferences{ 0x1AA930 };
		inline constexpr REL::Offset LoadPendingReferences{ 0x1AAAF0 };
		inline constexpr REL::Offset SetCompileData{ 0x1AAE70 };
		inline constexpr REL::Offset Init{ 0x1AAF20 };
		inline constexpr REL::Offset InitItem{ 0x1AB400 };
		inline constexpr REL::Offset SaveResultScript{ 0x1ABE00 };
		inline constexpr REL::Offset SetText{ 0x1ABE50 };
		inline constexpr REL::Offset GetVariableName{ 0x1ABED0 };
		inline constexpr REL::Offset CloneLocals{ 0x1ABF60 };
		inline constexpr REL::Offset CreateLocalList{ 0x1AC020 };
		inline constexpr REL::Offset InitActionList{ 0x1AC190 };
		inline constexpr REL::Offset Run{ 0x1AC1E0 };
		inline constexpr REL::Offset RunScriptEffectStart{ 0x1AC340 };
		inline constexpr REL::Offset RunScriptEffectFinish{ 0x1AC380 };
		inline constexpr REL::Offset RunScriptEffectUpdate{ 0x1AC3C0 };
		inline constexpr REL::Offset CompileAndRun{ 0x1AC400 };
		inline constexpr REL::Offset GetReferencedObject{ 0x1AC4F0 };
		inline constexpr REL::Offset FindVariable{ 0x1AC6A0 };
		inline constexpr REL::Offset GetProcessScripts{ 0x1AC740 };
		inline constexpr REL::Offset SetActionFlag{ 0x1AC750 };
		inline constexpr REL::Offset GetValue{ 0x1AC7A0 };
		inline constexpr REL::Offset PutNumericIDInDouble{ 0x1ACC70 };
		inline constexpr REL::Offset GetNumericIDFromDouble{ 0x1ACC90 };
		inline constexpr REL::Offset ParseParameters{ 0x1ACCB0 };
		inline constexpr REL::Offset ClearOptimizations{ 0x1AE270 };
		inline constexpr REL::Offset EssentailDeathReloadFunction{ 0x1B4550 };
		inline constexpr REL::Offset MessageFunction{ 0x1B4630 };
		inline constexpr REL::Offset BuildMessageBoxStringFromParameters{ 0x1B4960 };
		inline constexpr REL::Offset GetButtonPressedFunction{ 0x1B4A80 };
		inline constexpr REL::Offset AddItemFunction{ 0x1B4BE0 };
		inline constexpr REL::Offset RemoveItemFunction{ 0x1B4E90 };
		inline constexpr REL::Offset RemoveMeFunction{ 0x1B53D0 };
		inline constexpr REL::Offset RemoveAllTypedItemsFunction{ 0x1B55A0 };
		inline constexpr REL::Offset RemoveAllItemsFunction{ 0x1B5690 };
		inline constexpr REL::Offset GetOwnershipFunction{ 0x1B5760 };
		inline constexpr REL::Offset DropMeFunction{ 0x1B5860 };
		inline constexpr REL::Offset IsActionRefFunction{ 0x1B5950 };
		inline constexpr REL::Offset ActivateFunction{ 0x1B59F0 };
		inline constexpr REL::Offset ToggleCombatStatsFunction{ 0x1B5B90 };
		inline constexpr REL::Offset ShowWhoDetectsPlayer{ 0x1B5CC0 };
		inline constexpr REL::Offset PrintAILists{ 0x1B5CF0 };
		inline constexpr REL::Offset FreezeRendererAccumulation{ 0x1B5DB0 };
		inline constexpr REL::Offset ToggleOcclusion{ 0x1B5DD0 };
		inline constexpr REL::Offset OutputMemContexts{ 0x1B5E20 };
		inline constexpr REL::Offset OutputMemStats{ 0x1B5E60 };
		inline constexpr REL::Offset OutputTextureUseMap{ 0x1B6800 };
		inline constexpr REL::Offset OutputArchiveProfile{ 0x1B6B50 };
		inline constexpr REL::Offset QuitGame{ 0x1B6C90 };
		inline constexpr REL::Offset PurgeCellBuffers{ 0x1B6CD0 };
		inline constexpr REL::Offset ToggleMapMarkersFunction{ 0x1B6D40 };
		inline constexpr REL::Offset ToggleVerboseFunction{ 0x1B6F10 };
		inline constexpr REL::Offset ToggleGodModeFunction{ 0x1B6F80 };
		inline constexpr REL::Offset ToggleDemigodModeFunction{ 0x1B7000 };
		inline constexpr REL::Offset ToggleScriptsFunction{ 0x1B7070 };
		inline constexpr REL::Offset ToggleGrassFunction{ 0x1B70C0 };
		inline constexpr REL::Offset TestAllCellsFunction{ 0x1B71B0 };
		inline constexpr REL::Offset RenderTestCellFunction{ 0x1B7250 };
		inline constexpr REL::Offset RenderTestHereFunction{ 0x1B72A0 };
		inline constexpr REL::Offset ToggleEmotionsFunction{ 0x1B7420 };
		inline constexpr REL::Offset ReloadCurrentClimate{ 0x1B7490 };
		inline constexpr REL::Offset ReloadCurrentWeather{ 0x1B7520 };
		inline constexpr REL::Offset SetActiveWeather{ 0x1B7590 };
		inline constexpr REL::Offset ForceWeather{ 0x1B7660 };
		inline constexpr REL::Offset SetImageSpace{ 0x1B7820 };
		inline constexpr REL::Offset TestSeenData{ 0x1B78A0 };
		inline constexpr REL::Offset TestLocalMap{ 0x1B7B40 };
		inline constexpr REL::Offset TestCode{ 0x1B9070 };
		inline constexpr REL::Offset ToggleConversationStatsFunction{ 0x1B9100 };
		inline constexpr REL::Offset ToggleFullHelp{ 0x1B9170 };
		inline constexpr REL::Offset ToggleMagicStatsFunction{ 0x1B91B0 };
		inline constexpr REL::Offset ToggleBordersFunction{ 0x1B9370 };
		inline constexpr REL::Offset ToggleMenusFunction{ 0x1B9490 };
		inline constexpr REL::Offset ToggleSkyFunction{ 0x1B9540 };
		inline constexpr REL::Offset ToggleCollisionFunction{ 0x1B9640 };
		inline constexpr REL::Offset ToggleLeavesFunction{ 0x1B9720 };
		inline constexpr REL::Offset ToggleWireframeFunction{ 0x1B97F0 };
		inline constexpr REL::Offset ToggleDetectionStats{ 0x1B98A0 };
		inline constexpr REL::Offset SetTargetRefraction{ 0x1B9950 };
		inline constexpr REL::Offset SetTargetRefractionFire{ 0x1B9B40 };
		inline constexpr REL::Offset SetTargetFalloff{ 0x1B9C90 };
		inline constexpr REL::Offset SetTargetDOF{ 0x1B9EA0 };
		inline constexpr REL::Offset SetMotionBlur{ 0x1B9EF0 };
		inline constexpr REL::Offset ToggleFootIK{ 0x1B9FE0 };
		inline constexpr REL::Offset ToggleGrabIK{ 0x1BA1A0 };
		inline constexpr REL::Offset ToggleLookIK{ 0x1BA380 };
		inline constexpr REL::Offset ToggleRagdollAnim{ 0x1BA560 };
		inline constexpr REL::Offset SetVelFunction{ 0x1BA5D0 };
		inline constexpr REL::Offset ToggleLiteBriteFunction{ 0x1BA6D0 };
		inline constexpr REL::Offset ToggleDebugTextFunction{ 0x1BA760 };
		inline constexpr REL::Offset SetDebugTextFunction{ 0x1BA7C0 };
		inline constexpr REL::Offset ToggleLODLandFunction{ 0x1BB030 };
		inline constexpr REL::Offset SetLODObjectDistanceFunction{ 0x1BB390 };
		inline constexpr REL::Offset HighlightBodyPartFunction{ 0x1BB570 };
		inline constexpr REL::Offset HighlightAdditionalReferenceFunction{ 0x1BB610 };
		inline constexpr REL::Offset DeactivateAllHighlightsFunction{ 0x1BB6C0 };
		inline constexpr REL::Offset MovePipboyKnobFunction{ 0x1BB800 };
		inline constexpr REL::Offset ToggleTestLight{ 0x1BB8C0 };
		inline constexpr REL::Offset AddOcclusionPlane{ 0x1BB9E0 };
		inline constexpr REL::Offset SetGlobalRadialBlur{ 0x1BBC50 };
		inline constexpr REL::Offset ToggleAiDetection{ 0x1BBDA0 };
		inline constexpr REL::Offset ToggleActorAI{ 0x1BBE10 };
		inline constexpr REL::Offset IsActorsAIOff{ 0x1BBEC0 };
		inline constexpr REL::Offset ToggleAI{ 0x1BBF70 };
		inline constexpr REL::Offset ToggleCombatAI{ 0x1BC0D0 };
		inline constexpr REL::Offset ShowHeadTrackTarget{ 0x1BC310 };
		inline constexpr REL::Offset ToggleHighProcess{ 0x1BC3B0 };
		inline constexpr REL::Offset ToggleLowProcess{ 0x1BC430 };
		inline constexpr REL::Offset ToggleMiddleLowProcess{ 0x1BC4A0 };
		inline constexpr REL::Offset ToggleMiddleHighProcess{ 0x1BC510 };
		inline constexpr REL::Offset ToggleAISchedules{ 0x1BC580 };
		inline constexpr REL::Offset SpeakSoundFunction{ 0x1BC5F0 };
		inline constexpr REL::Offset HelpFunction{ 0x1BC950 };
		inline constexpr REL::Offset ToggleNavMeshFunction{ 0x1BCFE0 };
		inline constexpr REL::Offset DisableNavMesh{ 0x1BD240 };
		inline constexpr REL::Offset EnableNavMesh{ 0x1BD300 };
		inline constexpr REL::Offset TogglePathingInfoFunction{ 0x1BD3C0 };
		inline constexpr REL::Offset CenterOnCellFunction{ 0x1BD5E0 };
		inline constexpr REL::Offset CenterOnExteriorFunction{ 0x1BD660 };
		inline constexpr REL::Offset CenterOnWorldFunction{ 0x1BD780 };
		inline constexpr REL::Offset GetActorValueInfoFunction{ 0x1BD960 };
		inline constexpr REL::Offset SetActorValueFunction{ 0x1BDCD0 };
		inline constexpr REL::Offset SetSizeFunction{ 0x1BDDB0 };
		inline constexpr REL::Offset ModActorValueFunction{ 0x1BDE40 };
		inline constexpr REL::Offset DamageActorValueFunction{ 0x1BDF20 };
		inline constexpr REL::Offset RestoreActorValueFunction{ 0x1BE080 };
		inline constexpr REL::Offset ForceActorValueFunction{ 0x1BE190 };
		inline constexpr REL::Offset KillActorFunction{ 0x1BE2A0 };
		inline constexpr REL::Offset KillAllActorsFunction{ 0x1BE4F0 };
		inline constexpr REL::Offset GetGameSettingFunction{ 0x1BE900 };
		inline constexpr REL::Offset SetGameSettingFunction{ 0x1BEB00 };
		inline constexpr REL::Offset GetINISettingFunction{ 0x1BECF0 };
		inline constexpr REL::Offset SetINISettingFunction{ 0x1BEE90 };
		inline constexpr REL::Offset SetLightingPassesFunction{ 0x1BF130 };
		inline constexpr REL::Offset SetClipDistFunction{ 0x1BF9E0 };
		inline constexpr REL::Offset SetHUDGlowConstants{ 0x1BFAF0 };
		inline constexpr REL::Offset SetTreeMipmapBias{ 0x1BFBF0 };
		inline constexpr REL::Offset ForceCloseFile{ 0x1BFD50 };
		inline constexpr REL::Offset AddDecal{ 0x1BFE90 };
		inline constexpr REL::Offset RotateFunction{ 0x1C03D0 };
		inline constexpr REL::Offset SetPosFunction{ 0x1C05F0 };
		inline constexpr REL::Offset SetPosBase{ 0x1C0740 };
		inline constexpr REL::Offset SetAngleFunction{ 0x1C09C0 };
		inline constexpr REL::Offset SetAngleBase{ 0x1C0B10 };
		inline constexpr REL::Offset SetAtStartFunction{ 0x1C0BF0 };
		inline constexpr REL::Offset PlayGroupFunction{ 0x1C0DF0 };
		inline constexpr REL::Offset PlayExplosionFunction{ 0x1C12A0 };
		inline constexpr REL::Offset IsAnimPlayingFunction{ 0x1C14A0 };
		inline constexpr REL::Offset StartCombatFunction{ 0x1C1750 };
		inline constexpr REL::Offset SetScaleFunction{ 0x1C1B80 };
		inline constexpr REL::Offset SetScaleBase{ 0x1C1C10 };
		inline constexpr REL::Offset ModScaleFunction{ 0x1C1C40 };
		inline constexpr REL::Offset AddSpellFunction{ 0x1C1D40 };
		inline constexpr REL::Offset RemoveSpellFunction{ 0x1C1F00 };
		inline constexpr REL::Offset CastImmediateOnSelfFunction{ 0x1C1FE0 };
		inline constexpr REL::Offset DispelFunction{ 0x1C20E0 };
		inline constexpr REL::Offset PlaySoundFunction{ 0x1C21E0 };
		inline constexpr REL::Offset PlaySound3DFunction{ 0x1C22F0 };
		inline constexpr REL::Offset PlayMusicFunction{ 0x1C24B0 };
		inline constexpr REL::Offset FadeSFXFunction{ 0x1C2500 };
		inline constexpr REL::Offset SetLocationSpecificLoadScreensOnlyFunction{ 0x1C2580 };
		inline constexpr REL::Offset CalcLowPathToPointFunction{ 0x1C25F0 };
		inline constexpr REL::Offset ShowVarsFunction{ 0x1C3450 };
		inline constexpr REL::Offset ShowQuestVarsFunction{ 0x1C3960 };
		inline constexpr REL::Offset ShowQuestsFunction{ 0x1C3BF0 };
		inline constexpr REL::Offset ShowFunction{ 0x1C3C90 };
		inline constexpr REL::Offset ShowAnimFunction{ 0x1C3CF0 };
		inline constexpr REL::Offset Show1stPersonFunction{ 0x1C40D0 };
		inline constexpr REL::Offset EnableFunction{ 0x1C43D0 };
		inline constexpr REL::Offset DisableFunction{ 0x1C45E0 };
		inline constexpr REL::Offset DisableAllActors{ 0x1C47E0 };
		inline constexpr REL::Offset GetIsFormTypeFunction{ 0x1C4940 };
		inline constexpr REL::Offset PlaceAtMeFunction{ 0x1C4A70 };
		inline constexpr REL::Offset PlaceAtMeFunctionBase{ 0x1C4B30 };
		inline constexpr REL::Offset CopySaveGames{ 0x1C55D0 };
		inline constexpr REL::Offset ToggleCellNode{ 0x1C5680 };
		inline constexpr REL::Offset ToggleTrees{ 0x1C57F0 };
		inline constexpr REL::Offset SetCameraFOV{ 0x1C5840 };
		inline constexpr REL::Offset DumpTexturePalette{ 0x1C5A70 };
		inline constexpr REL::Offset DumpModelMap{ 0x1C6430 };
		inline constexpr REL::Offset ResetHealthFunction{ 0x1C6B60 };
		inline constexpr REL::Offset DuplicateNPCStatsFunction{ 0x1C6C80 };
		inline constexpr REL::Offset SetChargenValue{ 0x1C7790 };
		inline constexpr REL::Offset SetFactionRank{ 0x1C7E60 };
		inline constexpr REL::Offset ModFactionRank{ 0x1C7F10 };
		inline constexpr REL::Offset GetFactionReaction{ 0x1C7FD0 };
		inline constexpr REL::Offset SetAllyFunction{ 0x1C8120 };
		inline constexpr REL::Offset SetEnemyFunction{ 0x1C81F0 };
		inline constexpr REL::Offset ModDisposition{ 0x1C8510 };
		inline constexpr REL::Offset ShowMap{ 0x1C8620 };
		inline constexpr REL::Offset StartConversation{ 0x1C8740 };
		inline constexpr REL::Offset SayFunction{ 0x1C8A50 };
		inline constexpr REL::Offset SayToFunction{ 0x1C9100 };
		inline constexpr REL::Offset ResetAIFunction{ 0x1C9530 };
		inline constexpr REL::Offset EvaluatePackageFunction{ 0x1C95A0 };
		inline constexpr REL::Offset SetAlertFunction{ 0x1C9670 };
		inline constexpr REL::Offset LookFunction{ 0x1C9790 };
		inline constexpr REL::Offset SetSkyParamFunction{ 0x1C9980 };
		inline constexpr REL::Offset PrintHDRParamFunction{ 0x1C9A00 };
		inline constexpr REL::Offset ShowPivotFunction{ 0x1C9CF0 };
		inline constexpr REL::Offset CheckFlagFunction{ 0x1CA1C0 };
		inline constexpr REL::Offset OnActivateFunction{ 0x1CA3F0 };
		inline constexpr REL::Offset OnHitWithFunction{ 0x1CA6E0 };
		inline constexpr REL::Offset PickIdleFunction{ 0x1CB0C0 };
		inline constexpr REL::Offset PlayIdleFunction{ 0x1CB2D0 };
		inline constexpr REL::Offset PlayVATSCamerasFunction{ 0x1CB580 };
		inline constexpr REL::Offset ShowQuestTargetsFunction{ 0x1CB8E0 };
		inline constexpr REL::Offset ShowQuestLogFunction{ 0x1CBBB0 };
		inline constexpr REL::Offset ShowFullQuestLogFunction{ 0x1CBDB0 };
		inline constexpr REL::Offset LockFunction{ 0x1CBF80 };
		inline constexpr REL::Offset UnlockFunction{ 0x1CC120 };
		inline constexpr REL::Offset AddScriptPackageFunction{ 0x1CC4F0 };
		inline constexpr REL::Offset RemoveScriptPackageFunction{ 0x1CC7C0 };
		inline constexpr REL::Offset AddFlamesFunction{ 0x1CC970 };
		inline constexpr REL::Offset RemoveFlamesFunction{ 0x1CCA50 };
		inline constexpr REL::Offset MoveToFunctionBase{ 0x1CCB20 };
		inline constexpr REL::Offset MoveToFunction{ 0x1CCF50 };
		inline constexpr REL::Offset MoveToFadeFunction{ 0x1CD0E0 };
		inline constexpr REL::Offset MoveToQuestTargetFunction{ 0x1CD330 };
		inline constexpr REL::Offset WakeUpPCFunction{ 0x1CD5B0 };
		inline constexpr REL::Offset SetCombatStyleFunction{ 0x1CD650 };
		inline constexpr REL::Offset SelectPlayerSpellFunction{ 0x1CD750 };
		inline constexpr REL::Offset IsActorDetected{ 0x1CDA20 };
		inline constexpr REL::Offset WaitFunction{ 0x1CDAD0 };
		inline constexpr REL::Offset StopWaitingFunction{ 0x1CDC10 };
		inline constexpr REL::Offset SetPCExpelledFunction{ 0x1CDFB0 };
		inline constexpr REL::Offset SetPCFactionMurderFunction{ 0x1CE0C0 };
		inline constexpr REL::Offset SetPlayerEnemyofFactionFunction{ 0x1CE190 };
		inline constexpr REL::Offset SetPCFactionAttackFunction{ 0x1CE260 };
		inline constexpr REL::Offset SetDestroyedFunction{ 0x1CE2F0 };
		inline constexpr REL::Offset GetActionRefFunction{ 0x1CE360 };
		inline constexpr REL::Offset GetSelfFunction{ 0x1CE3E0 };
		inline constexpr REL::Offset GetCombatTargetFunction{ 0x1CE480 };
		inline constexpr REL::Offset GetPackageTargetFunction{ 0x1CE520 };
		inline constexpr REL::Offset GetContainerFunction{ 0x1CE5C0 };
		inline constexpr REL::Offset GetParentRefFunction{ 0x1CE630 };
		inline constexpr REL::Offset GetLinkedRefFunction{ 0x1CE6B0 };
		inline constexpr REL::Offset GetForceRun{ 0x1CE730 };
		inline constexpr REL::Offset SetForceRun{ 0x1CE7B0 };
		inline constexpr REL::Offset GetForceSneak{ 0x1CE870 };
		inline constexpr REL::Offset SetForceSneak{ 0x1CE910 };
		inline constexpr REL::Offset AdvanceLevelFunction{ 0x1CE9F0 };
		inline constexpr REL::Offset GetDefaultOpenFunction{ 0x1CEB90 };
		inline constexpr REL::Offset SetDefaultOpenFunction{ 0x1CEBF0 };
		inline constexpr REL::Offset SetOpenStateFunction{ 0x1CED30 };
		inline constexpr REL::Offset ShowBarterMenu{ 0x1CEEB0 };
		inline constexpr REL::Offset ShowSPECIALBookMenu{ 0x1CEFE0 };
		inline constexpr REL::Offset ShowSlotMachineMenu{ 0x1CF040 };
		inline constexpr REL::Offset ShowBlackJackMenu{ 0x1CF0F0 };
		inline constexpr REL::Offset ShowRouletteMenu{ 0x1CF1A0 };
		inline constexpr REL::Offset ShowCaravanMenu{ 0x1CF250 };
		inline constexpr REL::Offset AddCardToPlayer{ 0x1CF3D0 };
		inline constexpr REL::Offset IsPlayerInRegion{ 0x1CF490 };
		inline constexpr REL::Offset ShowLoveTesterMenu{ 0x1CF5E0 };
		inline constexpr REL::Offset SetSecuritronExpression{ 0x1CF680 };
		inline constexpr REL::Offset SwapTextureOnRef{ 0x1CF860 };
		inline constexpr REL::Offset ShowHackingMiniGame{ 0x1CFCD0 };
		inline constexpr REL::Offset ShowComputersInterface{ 0x1CFD20 };
		inline constexpr REL::Offset SetGhostFunction{ 0x1CFFB0 };
		inline constexpr REL::Offset EquipItemFunction{ 0x1D0060 };
		inline constexpr REL::Offset UnEquipItemFunction{ 0x1D0300 };
		inline constexpr REL::Offset SetClassFunction{ 0x1D06A0 };
		inline constexpr REL::Offset SetUnconsciousFunction{ 0x1D0760 };
		inline constexpr REL::Offset SetRestrainedFunction{ 0x1D0920 };
		inline constexpr REL::Offset ForceFleeFunction{ 0x1D09E0 };
		inline constexpr REL::Offset ModBarterGoldFunction{ 0x1D0C90 };
		inline constexpr REL::Offset SetBarterGoldFunction{ 0x1D0D30 };
		inline constexpr REL::Offset SetLevelFunction{ 0x1D0E30 };
		inline constexpr REL::Offset ResetFallDamageTimerFunction{ 0x1D10A0 };
		inline constexpr REL::Offset ModPCAttributeFunction{ 0x1D11B0 };
		inline constexpr REL::Offset GetWeaponHealthFunction{ 0x1D1340 };
		inline constexpr REL::Offset PlayBinkFunction{ 0x1D15D0 };
		inline constexpr REL::Offset GetCellOwnershipFunction{ 0x1D1760 };
		inline constexpr REL::Offset SetCellOwnershipFunction{ 0x1D17F0 };
		inline constexpr REL::Offset SetActorFullNameFunction{ 0x1D1920 };
		inline constexpr REL::Offset SetPackageDurationFunction{ 0x1D1AB0 };
		inline constexpr REL::Offset PlayMagicShader{ 0x1D1B80 };
		inline constexpr REL::Offset PlayMagicEffect{ 0x1D1DC0 };
		inline constexpr REL::Offset StopMagicShader{ 0x1D2130 };
		inline constexpr REL::Offset StopMagicEffect{ 0x1D21E0 };
		inline constexpr REL::Offset PreloadMagicEffect{ 0x1D22D0 };
		inline constexpr REL::Offset GetNoRumorsFunction{ 0x1D2650 };
		inline constexpr REL::Offset SetNoRumorsFunction{ 0x1D26B0 };
		inline constexpr REL::Offset GetWhichServiceFunction{ 0x1D27A0 };
		inline constexpr REL::Offset TriggerHitShaderFunction{ 0x1D2800 };
		inline constexpr REL::Offset IsActorRidingHorseFunction{ 0x1D28B0 };
		inline constexpr REL::Offset IsPlayersLastRiddenHorseFunction{ 0x1D2910 };
		inline constexpr REL::Offset IsInDangerousWaterFunction{ 0x1D2970 };
		inline constexpr REL::Offset ToggleWaterSystem{ 0x1D29D0 };
		inline constexpr REL::Offset ModifyWaterShader{ 0x1D2A80 };
		inline constexpr REL::Offset ModifyWaterShaderShallowColor{ 0x1D35D0 };
		inline constexpr REL::Offset ModifyWaterShaderDeepColor{ 0x1D3780 };
		inline constexpr REL::Offset ModifyWaterShaderReflectionColor{ 0x1D3930 };
		inline constexpr REL::Offset SetRigidBodyMass{ 0x1D3B90 };
		inline constexpr REL::Offset GetIgnoreFriendlyHitsFunction{ 0x1D3DC0 };
		inline constexpr REL::Offset SetItemValueFunction{ 0x1D3E30 };
		inline constexpr REL::Offset SetActorRefractionFunction{ 0x1D3F10 };
		inline constexpr REL::Offset StartAllQuests{ 0x1D41F0 };
		inline constexpr REL::Offset CompleteAllQuestStages{ 0x1D4280 };
		inline constexpr REL::Offset FlushPersistantActors{ 0x1D4400 };
		inline constexpr REL::Offset DeleteReference{ 0x1D4480 };
		inline constexpr REL::Offset ToggleFogOfWar{ 0x1D4510 };
		inline constexpr REL::Offset SetDepthOfField{ 0x1D4660 };
		inline constexpr REL::Offset SendCrimeAlarmFunction{ 0x1D47E0 };
		inline constexpr REL::Offset ToggleCastShadows{ 0x1D4870 };
		inline constexpr REL::Offset SetSceneIsComplex{ 0x1D49C0 };
		inline constexpr REL::Offset IsEssentialFunction{ 0x1D4A50 };
		inline constexpr REL::Offset IsActorFunction{ 0x1D4AA0 };
		inline constexpr REL::Offset IsPlayerMovingIntoNewSpaceFunction{ 0x1D4AF0 };
		inline constexpr REL::Offset GetTimeDeadFunction{ 0x1D4B40 };
		inline constexpr REL::Offset DamageObjectFunction{ 0x1D4B90 };
		inline constexpr REL::Offset SetTalkingActivatorActorFunction{ 0x1D4CC0 };
		inline constexpr REL::Offset AddPerkFunction{ 0x1D4D90 };
		inline constexpr REL::Offset SendSherlockDebugPage{ 0x1D5020 };
		inline constexpr REL::Offset RemoveNoteFunction{ 0x1D52A0 };
		inline constexpr REL::Offset SetGlobalTimeMultiplierFunction{ 0x1D5560 };
		inline constexpr REL::Offset GetHitLocationFunction{ 0x1D5630 };
		inline constexpr REL::Offset GetLastHitCriticalFunction{ 0x1D5680 };
		inline constexpr REL::Offset IsPC1stPersonFunction{ 0x1D56D0 };
		inline constexpr REL::Offset SetCombatActionCostFunction{ 0x1D5780 };
		inline constexpr REL::Offset ToggleCombatDebugFunction{ 0x1D5850 };
		inline constexpr REL::Offset ForceCombatGroupStrategyFunction{ 0x1D67F0 };
		inline constexpr REL::Offset SetActorsAIFunction{ 0x1D6A60 };
		inline constexpr REL::Offset PushActorAwayFunction{ 0x1D6B60 };
		inline constexpr REL::Offset ShowInventoryFunction{ 0x1D6D40 };
		inline constexpr REL::Offset ShowCharGenMenu{ 0x1D7150 };
		inline constexpr REL::Offset ShowCharGenMenuModValues{ 0x1D71F0 };
		inline constexpr REL::Offset ToggleDecalRendering{ 0x1D7850 };
		inline constexpr REL::Offset GetIsMovingFunction{ 0x1D7940 };
		inline constexpr REL::Offset GetIsTurningFunction{ 0x1D7990 };
		inline constexpr REL::Offset GetAnimActionFunction{ 0x1D79E0 };
		inline constexpr REL::Offset SetObjectiveCompletedFunction{ 0x1D7C20 };
		inline constexpr REL::Offset SetObjectiveDisplayedFunction{ 0x1D7D30 };
		inline constexpr REL::Offset GetObjectiveCompletedFunction{ 0x1D7E30 };
		inline constexpr REL::Offset GetObjectiveDisplayedFunction{ 0x1D7EF0 };
		inline constexpr REL::Offset PipboyRadio{ 0x1D7FB0 };
		inline constexpr REL::Offset SetNPCRadio{ 0x1D8100 };
		inline constexpr REL::Offset GetBroadcastState{ 0x1D81B0 };
		inline constexpr REL::Offset SetAudioMultiThreading{ 0x1D8320 };
		inline constexpr REL::Offset ToggleVATSLight{ 0x1D8660 };
		inline constexpr REL::Offset ResetDialogueFlags{ 0x1D8930 };
		inline constexpr REL::Offset ShowWarningFunction{ 0x1D8BF0 };
		inline constexpr REL::Offset TriggerEnterFunction{ 0x1D8CF0 };
		inline constexpr REL::Offset AddItemHealthPercentFunction{ 0x1D8E80 };
		inline constexpr REL::Offset PlaceAtMeHealthPercentFunction{ 0x1D90A0 };
		inline constexpr REL::Offset SetConsoleOutputFileFunction{ 0x1D9170 };
		inline constexpr REL::Offset OpenTeammateContainerFunction{ 0x1D9430 };
		inline constexpr REL::Offset SetPlayerTagSkillFunction{ 0x1D95D0 };
		inline constexpr REL::Offset IsPlayerTagSkillFunction{ 0x1D9670 };
		inline constexpr REL::Offset GetPlayerGrabbedRefFunction{ 0x1D9730 };
		inline constexpr REL::Offset PlaceLeveledActorAtMeFunction{ 0x1D9810 };
		inline constexpr REL::Offset MatchFaceGeometryFunction{ 0x1D9B20 };
		inline constexpr REL::Offset MatchFaceGeometryBase{ 0x1D9BC0 };
		inline constexpr REL::Offset SendAssaultAlarmFunction{ 0x1DA2A0 };
		inline constexpr REL::Offset FireWeaponFunction{ 0x1DA570 };
		inline constexpr REL::Offset ShowTutorialMenu{ 0x1DA630 };
		inline constexpr REL::Offset AgeRaceFunction{ 0x1DA690 };
		inline constexpr REL::Offset MatchRaceFunction{ 0x1DA810 };
		inline constexpr REL::Offset SetVATSTargetFunction{ 0x1DAAE0 };
		inline constexpr REL::Offset ModWeaponHealthPercFunction{ 0x1DAF90 };
		inline constexpr REL::Offset SetNoActivationSound{ 0x1DB1B0 };
		inline constexpr REL::Offset DrawSkeleton{ 0x1DB290 };
		inline constexpr REL::Offset AttachAshPileFunction{ 0x1DB870 };
		inline constexpr REL::Offset SinFunction{ 0x1DC0F0 };
		inline constexpr REL::Offset CosFunction{ 0x1DC1B0 };
		inline constexpr REL::Offset TanFunction{ 0x1DC290 };
		inline constexpr REL::Offset LogFunction{ 0x1DC3B0 };
		inline constexpr REL::Offset ForceTerminalBackFunction{ 0x1DC4E0 };
		inline constexpr REL::Offset ToggleDepthBiasFunction{ 0x1DC530 };
		inline constexpr REL::Offset SetMinimalUseFunction{ 0x1DC5E0 };
		inline constexpr REL::Offset ShowQuestStagesFunction{ 0x1DC730 };
		inline constexpr REL::Offset ModifyFaceGen{ 0x1DC9A0 };
		inline constexpr REL::Offset IsCodeRedeemedFunction{ 0x1DD870 };
		inline constexpr REL::Offset DetonatePlacedExplosivesFunction{ 0x1DDF90 };
		inline constexpr REL::Offset SetLastExtDoorActivated{ 0x1DE2D0 };
		inline constexpr REL::Offset SetTaskThreadSleepFunction{ 0x1DE3A0 };
		inline constexpr REL::Offset SetTaskThreadUpdateSleepFunction{ 0x1DE420 };
		inline constexpr REL::Offset AddItemToLeveledListFunction{ 0x1DE700 };
		inline constexpr REL::Offset RemapWaterTypeFunction{ 0x1DE840 };
		inline constexpr REL::Offset SetHardcoreFunction{ 0x1DE920 };
		inline constexpr REL::Offset ResetXPFunction{ 0x1DE9F0 };
		inline constexpr REL::Offset ShowRecipeMenu{ 0x1DEB10 };
		inline constexpr REL::Offset PlaceAtReticleFunction{ 0x1DF040 };
		inline constexpr REL::Offset ObjectUnderReticleFunction{ 0x1DF5D0 };
		inline constexpr REL::Offset GetDLCCountFunction{ 0x1DF930 };
		inline constexpr REL::Offset IsDLCInstalledFunction{ 0x1DFA20 };
		inline constexpr REL::Offset EnableLoadingMenu{ 0x1DFBA0 };
		inline constexpr REL::Offset IsLoadingMenuEnabled{ 0x1DFC10 };
		inline constexpr REL::Offset IsActorRefEssential{ 0x1DFC70 };
		inline constexpr REL::Offset SetCrimeVictim{ 0x4BFF30 };
	}

	namespace ScriptCompileData
	{
		inline constexpr REL::Offset ctor{ 0x1AE490 };
		inline constexpr REL::Offset GetVariable{ 0x1AE7A0 };
		inline constexpr REL::Offset VerifyReferencedObjectList{ 0x1AFA50 };
		inline constexpr REL::Offset GetReferencedObject{ 0x1AFAD0 };
		inline constexpr REL::Offset GetScriptLineList{ 0x213790 };
	}

	namespace ScriptCompiler
	{
		inline constexpr REL::Offset ctor{ 0x1AEA50 };
		inline constexpr REL::Offset ScriptError{ 0x1AEA90 };
		inline constexpr REL::Offset Compile{ 0x1AEB90 };
		inline constexpr REL::Offset CompilePartialScript{ 0x1AEDB0 };
		inline constexpr REL::Offset GetNextExpression{ 0x1AEED0 };
		inline constexpr REL::Offset GetNextLine{ 0x1AF3F0 };
		inline constexpr REL::Offset GetNextWord{ 0x1AF5F0 };
		inline constexpr REL::Offset IsValidVariableName{ 0x1AFEB0 };
		inline constexpr REL::Offset CompileLine{ 0x1AFF40 };
		inline constexpr REL::Offset GetFunctionDef{ 0x1B1120 };
		inline constexpr REL::Offset VerifyBlocks{ 0x1B1180 };
		inline constexpr REL::Offset CountBlockLines{ 0x1B12C0 };
		inline constexpr REL::Offset CountIfLines{ 0x1B13E0 };
		inline constexpr REL::Offset ReplaceVariablesAndFunctions{ 0x1B1570 };
		inline constexpr REL::Offset GetFunction{ 0x1B1910 };
		inline constexpr REL::Offset StandardCompile{ 0x1B1BA0 };
		inline constexpr REL::Offset MessageBoxCompile{ 0x1B3CD0 };
	}

	namespace ScriptEffect
	{
		inline constexpr REL::Offset ctor{ 0x427740 };
	}

	namespace ScriptLocals
	{
		inline constexpr REL::Offset ctor{ 0x1A8B80 };
		inline constexpr REL::Offset dtor{ 0x1A8BC0 };
		inline constexpr REL::Offset AddActionObject{ 0x1A8D20 };
		inline constexpr REL::Offset SetActionFlag{ 0x1A8E20 };
		inline constexpr REL::Offset CheckActionFlag{ 0x1A8EF0 };
		inline constexpr REL::Offset GetVariable{ 0x1A9140 };
		inline constexpr REL::Offset SetVariable{ 0x1A9290 };
		inline constexpr REL::Offset IsReferenceVariable{ 0x1A9480 };
		inline constexpr REL::Offset GetSaveSize{ 0x1A94F0 };
		inline constexpr REL::Offset SaveGame{ 0x1A9670 };
		inline constexpr REL::Offset LoadGame{ 0x1A9950 };
		inline constexpr REL::Offset Revert{ 0x1A9D00 };
		inline constexpr REL::Offset ClearOptimizations{ 0x1A9D60 };
		inline constexpr REL::Offset SaveGame_1{ 0x1A9DB0 };
		inline constexpr REL::Offset LoadGame_1{ 0x1A9F20 };
		inline constexpr REL::Offset Revert_1{ 0x1AA090 };
	}

	namespace ScriptRunManager
	{
		inline constexpr REL::Offset Instance{ 0x1E24D0 };
		inline constexpr REL::Offset Run{ 0x1E2590 };
		inline constexpr REL::Offset InitActionList{ 0x1E2730 };
	}

	namespace ScriptRunner
	{
		inline constexpr REL::Offset ctor{ 0x1E0C60 };
		inline constexpr REL::Offset Run{ 0x1E0D20 };
		inline constexpr REL::Offset InitActionList{ 0x1E1160 };
		inline constexpr REL::Offset GetNextLine{ 0x1E13A0 };
		inline constexpr REL::Offset EvaluateLine{ 0x1E1550 };
		inline constexpr REL::Offset ScriptError{ 0x1E2410 };
	}

	namespace ScriptVariable
	{
		inline constexpr REL::Offset ctor{ 0x1E28B0 };
		inline constexpr REL::Offset ctor_1{ 0x1E2910 };
		inline constexpr REL::Offset Load{ 0x1E2A20 };
	}

	namespace SearchPackage
	{
		inline constexpr REL::Offset FindCoverToSearch{ 0x5F6830 };
		inline constexpr REL::Offset CalculateLocationToExamine{ 0x5F6900 };
	}

	namespace SeenData
	{
		inline constexpr REL::Offset ctor{ 0x479940 };
		inline constexpr REL::Offset IsSeenBitTrue{ 0x4799F0 };
		inline constexpr REL::Offset UpdateSeenData{ 0x479AD0 };
		inline constexpr REL::Offset GetPosOffset{ 0x479BD0 };
		inline constexpr REL::Offset ShiftCoordToSeenPos{ 0x479CA0 };
		inline constexpr REL::Offset GetPosForCoord{ 0x479DA0 };
	}

	namespace Segment
	{
		inline constexpr REL::Offset Offset{ 0x2BB510 };
	}

	namespace Setting
	{
		inline constexpr REL::Offset String{ 0x3DF0 };
		inline constexpr REL::Offset Float{ 0x3E20 };
		inline constexpr REL::Offset Bool{ 0x8D60 };
		inline constexpr REL::Offset Int{ 0x3D4D0 };
		inline constexpr REL::Offset operator_unsigned_int{ 0x503F0 };
		inline constexpr REL::Offset operator_float{ 0x50410 };
		inline constexpr REL::Offset operator_bool{ 0x54AF0 };
		inline constexpr REL::Offset operator_char_const{ 0xC69F0 };
		inline constexpr REL::Offset DataType{ 0xF8940 };
	}

	namespace ShadowSceneLight
	{
		inline constexpr REL::Offset GetLight{ 0xE6540 };
		inline constexpr REL::Offset InsertUnusedFence{ 0x79FBA0 };
	}

	namespace ShadowSceneNode
	{
		inline constexpr REL::Offset QPortalGraph{ 0x54B30 };
		inline constexpr REL::Offset SetSceneGraphIndex{ 0x30B760 };
		inline constexpr REL::Offset SetEyePosition{ 0x470790 };
		inline constexpr REL::Offset SetLightingOffset{ 0x4750E0 };
		inline constexpr REL::Offset RemoveObject{ 0x75B1C0 };
		inline constexpr REL::Offset RemoveAllLights{ 0x75D180 };
		inline constexpr REL::Offset ctor{ 0x75E0F0 };
		inline constexpr REL::Offset AddObject{ 0x75EEB0 };
	}

	namespace SimpleCombatStyleData
	{
		inline constexpr REL::Offset Endian{ 0x105610 };
	}

	namespace Sky
	{
		inline constexpr REL::Offset GetWindSpeed{ 0x536E0 };
		inline constexpr REL::Offset GetMode{ 0x76C90 };
		inline constexpr REL::Offset GetSunriseBegin{ 0x195EA0 };
		inline constexpr REL::Offset GetSunriseEnd{ 0x195F50 };
		inline constexpr REL::Offset GetSunsetBegin{ 0x195FC0 };
		inline constexpr REL::Offset GetSunsetEnd{ 0x196030 };
		inline constexpr REL::Offset IsRaining{ 0x19E950 };
		inline constexpr REL::Offset IsSnowing{ 0x19EA80 };
		inline constexpr REL::Offset GetWeatherUpdateFlag{ 0x234870 };
		inline constexpr REL::Offset SetMode{ 0x23A3F0 };
		inline constexpr REL::Offset Initialize{ 0x23A630 };
		inline constexpr REL::Offset Update{ 0x23AC70 };
		inline constexpr REL::Offset UpdateInterior{ 0x23B0A0 };
		inline constexpr REL::Offset UpdateColors{ 0x23B120 };
		inline constexpr REL::Offset FillColorBlend{ 0x23B630 };
		inline constexpr REL::Offset GetBeginSunriseColors{ 0x23B9B0 };
		inline constexpr REL::Offset GetEndSunsetColors{ 0x23BA30 };
		inline constexpr REL::Offset FillColorBlendColors{ 0x23BAB0 };
		inline constexpr REL::Offset UpdateFog{ 0x23BCE0 };
		inline constexpr REL::Offset UpdateWind{ 0x23C490 };
		inline constexpr REL::Offset SetColor{ 0x23C690 };
		inline constexpr REL::Offset SetCurrentClimate{ 0x23C8F0 };
		inline constexpr REL::Offset HandleClimateChange{ 0x23CA20 };
		inline constexpr REL::Offset ResetWeather{ 0x23D060 };
		inline constexpr REL::Offset ForceWeather{ 0x23D0E0 };
		inline constexpr REL::Offset UpdateWeather{ 0x23D1D0 };
		inline constexpr REL::Offset UpdateSound{ 0x23D5E0 };
		inline constexpr REL::Offset ActivateWeatherSounds{ 0x23DDB0 };
		inline constexpr REL::Offset UnloadAllTextures{ 0x23E210 };
		inline constexpr REL::Offset ReloadAllTextures{ 0x23E2F0 };
		inline constexpr REL::Offset SetAcceleration{ 0x23E860 };
		inline constexpr REL::Offset GetSaveSize{ 0x23E940 };
		inline constexpr REL::Offset SaveGame{ 0x23E9F0 };
		inline constexpr REL::Offset LoadGame{ 0x23ECB0 };
		inline constexpr REL::Offset UpdateHDRValues{ 0x23EF20 };
		inline constexpr REL::Offset GetCurrentWeatherPct{ 0x2447D0 };
		inline constexpr REL::Offset GetCurrentGameHour{ 0x566A20 };
	}

	namespace SkyObject
	{
		inline constexpr REL::Offset ctor{ 0x23F830 };
	}

	namespace SkyShader
	{
		inline constexpr REL::Offset LoadShaders{ 0x7874F0 };
	}

	namespace SkyShaderProperty
	{
		inline constexpr REL::Offset SetBaseMap{ 0x2348E0 };
		inline constexpr REL::Offset SetTextureFile{ 0x234900 };
	}

	namespace SkySound
	{
		inline constexpr REL::Offset ctor{ 0x239BF0 };
		inline constexpr REL::Offset HandleCheckTime{ 0x239C90 };
		inline constexpr REL::Offset Play{ 0x23E0D0 };
	}

	namespace SkyTask
	{
		inline constexpr REL::Offset ctor{ 0x23FA10 };
	}

	namespace SleepWaitMenu
	{
		inline constexpr REL::Offset ctor{ 0x3BFB30 };
		inline constexpr REL::Offset Create{ 0x3BFC30 };
		inline constexpr REL::Offset SetTimeText{ 0x3C0000 };
		inline constexpr REL::Offset Close{ 0x3C01B0 };
		inline constexpr REL::Offset UpdateSleeping{ 0x3C0580 };
	}

	namespace SlotMachineMenu
	{
		inline constexpr REL::Offset ctor{ 0x3C06F0 };
		inline constexpr REL::Offset Create{ 0x3C0A40 };
		inline constexpr REL::Offset InitializeCasinoData{ 0x3C1490 };
		inline constexpr REL::Offset SetupActiveReels{ 0x3C16B0 };
		inline constexpr REL::Offset Draw3DElements{ 0x3C19C0 };
		inline constexpr REL::Offset Prepare3DElements{ 0x3C1AF0 };
		inline constexpr REL::Offset Create3DCamera{ 0x3C2180 };
		inline constexpr REL::Offset Close{ 0x3C2420 };
		inline constexpr REL::Offset SwapBackfacingTextures{ 0x3C40B0 };
		inline constexpr REL::Offset SwapFrontfacingTextures{ 0x3C4D70 };
		inline constexpr REL::Offset SpinReels{ 0x3C56E0 };
		inline constexpr REL::Offset InterpretSpin{ 0x3C5760 };
		inline constexpr REL::Offset ApplyLuck{ 0x3C58F0 };
		inline constexpr REL::Offset UpdateEarningsString{ 0x3C5E60 };
	}

	namespace SpecificItemCollector
	{
		inline constexpr REL::Offset ctor{ 0x22A190 };
		inline constexpr REL::Offset Init{ 0x22A3B0 };
		inline constexpr REL::Offset ctor_1{ 0x5A7BC0 };
	}

	namespace SpectatorPackage
	{
		inline constexpr REL::Offset ctor{ 0x5F72F0 };
		inline constexpr REL::Offset ComputeCenterPoint{ 0x5F76E0 };
		inline constexpr REL::Offset MakeCombatComment{ 0x5F7D70 };
		inline constexpr REL::Offset Update{ 0x5F8020 };
		inline constexpr REL::Offset AddThreatFromActorToCombatTarget{ 0x5F8330 };
	}

	namespace SpectatorThreatInfo
	{
		inline constexpr REL::Offset SetupThreatFromActorToCombatTarget{ 0x5F6C20 };
		inline constexpr REL::Offset Update{ 0x5F6D50 };
		inline constexpr REL::Offset GetAvoidNode{ 0x5F6F30 };
		inline constexpr REL::Offset SaveGame{ 0x5F70B0 };
		inline constexpr REL::Offset LoadGame{ 0x5F7170 };
		inline constexpr REL::Offset InitLoadGame{ 0x5F7230 };
	}

	namespace SpellItem
	{
		inline constexpr REL::Offset ctor{ 0xE160 };
		inline constexpr REL::Offset IsFlagSet{ 0xE210 };
	}

	namespace Sphere
	{
		inline constexpr REL::Offset ctor{ 0x2A04B0 };
	}

	namespace Stars
	{
		inline constexpr REL::Offset ctor{ 0x23FC70 };
		inline constexpr REL::Offset LoadGeometry{ 0x23FDB0 };
	}

	namespace StartCombatStates
	{
		inline constexpr REL::Offset ctor{ 0x4F6120 };
	}

	namespace StartMenu
	{
		inline constexpr REL::Offset PauseMenuIsActive{ 0xA4040 };
		inline constexpr REL::Offset IsFlagSet{ 0xA4080 };
		inline constexpr REL::Offset GetClassStatic{ 0x30EDE0 };
		inline constexpr REL::Offset MainMenuIsActive{ 0x30EDF0 };
		inline constexpr REL::Offset IsStartMenuSaving{ 0x30EE30 };
		inline constexpr REL::Offset IsInPreIIS{ 0x315770 };
		inline constexpr REL::Offset SetFlag{ 0x35F6F0 };
		inline constexpr REL::Offset ctor{ 0x3CB330 };
		inline constexpr REL::Offset Create{ 0x3CB7D0 };
		inline constexpr REL::Offset _Create{ 0x3CBAF0 };
		inline constexpr REL::Offset CreateMenuElements{ 0x3CC6E0 };
		inline constexpr REL::Offset Close{ 0x3CE7A0 };
		inline constexpr REL::Offset WaitingForControlRemapButtonPress{ 0x3CE8F0 };
		inline constexpr REL::Offset UpdateCanLoadStatus{ 0x3CFD20 };
		inline constexpr REL::Offset ResetToDefaults{ 0x3CFDC0 };
		inline constexpr REL::Offset SetActionForDevice{ 0x3CFE40 };
		inline constexpr REL::Offset PopulateControlsListBox{ 0x3D01B0 };
		inline constexpr REL::Offset ChooseCrew{ 0x3D04D0 };
		inline constexpr REL::Offset ChooseLoad{ 0x3D0680 };
		inline constexpr REL::Offset ChooseSave{ 0x3D06C0 };
		inline constexpr REL::Offset ChooseSettings{ 0x3D0700 };
		inline constexpr REL::Offset ChooseHelp{ 0x3D0770 };
		inline constexpr REL::Offset ChooseQuit{ 0x3D0A10 };
		inline constexpr REL::Offset ChooseMainMenu{ 0x3D0A70 };
		inline constexpr REL::Offset ChooseExitGame{ 0x3D0BF0 };
		inline constexpr REL::Offset ChooseUserAction{ 0x3D0CB0 };
		inline constexpr REL::Offset ChooseDisplay{ 0x3D0D70 };
		inline constexpr REL::Offset ChooseControls{ 0x3D0DF0 };
		inline constexpr REL::Offset ChooseBack{ 0x3D0E40 };
		inline constexpr REL::Offset SetKillCam{ 0x3D1260 };
		inline constexpr REL::Offset SetHardcore{ 0x3D13A0 };
		inline constexpr REL::Offset SetHUDOpacity{ 0x3D1750 };
		inline constexpr REL::Offset SetHUDColor{ 0x3D1840 };
		inline constexpr REL::Offset SetPipboyColor{ 0x3D1900 };
		inline constexpr REL::Offset SetBrightness{ 0x3D19C0 };
		inline constexpr REL::Offset SetMasterVol{ 0x3D2790 };
		inline constexpr REL::Offset SetFootstepVol{ 0x3D28B0 };
		inline constexpr REL::Offset SetMusicVol{ 0x3D29D0 };
		inline constexpr REL::Offset SetVoiceVol{ 0x3D2AF0 };
		inline constexpr REL::Offset SetFXVol{ 0x3D2C10 };
		inline constexpr REL::Offset SetRadioVol{ 0x3D2D30 };
		inline constexpr REL::Offset SetXSensitivity{ 0x3D2EB0 };
		inline constexpr REL::Offset SetRumble{ 0x3D30E0 };
		inline constexpr REL::Offset ConfirmContinue{ 0x3D3190 };
		inline constexpr REL::Offset ConfirmNewGame{ 0x3D32B0 };
		inline constexpr REL::Offset ConfirmLoadGame{ 0x3D3470 };
		inline constexpr REL::Offset ConfirmDeleteGm{ 0x3D3620 };
		inline constexpr REL::Offset InitializeUserOptions{ 0x3D3AA0 };
		inline constexpr REL::Offset PrepSaveLoad{ 0x3D3B60 };
		inline constexpr REL::Offset FinishPrepSaveLoad{ 0x3D3C70 };
		inline constexpr REL::Offset ConfirmSaveLoad{ 0x3D40A0 };
		inline constexpr REL::Offset PopulateOptionsListBox{ 0x3D42B0 };
		inline constexpr REL::Offset PopulateConfirmationListBox{ 0x3D48A0 };
		inline constexpr REL::Offset PopulateConfirmationListBox_1{ 0x3D49A0 };
		inline constexpr REL::Offset ShowDLCList{ 0x3D4BC0 };
		inline constexpr REL::Offset MountDLCCallback{ 0x3D4C50 };
		inline constexpr REL::Offset DisplayOption{ 0x3D4CE0 };
		inline constexpr REL::Offset UpdateHighlightedSaveGameInfo{ 0x3D4DF0 };
		inline constexpr REL::Offset SetSaveGameScreenshot{ 0x3D51A0 };
		inline constexpr REL::Offset ActionMappingIdle{ 0x3D52A0 };
		inline constexpr REL::Offset MainMenuIdle{ 0x3D5830 };
		inline constexpr REL::Offset SaveLoadIdle{ 0x3D5AF0 };
		inline constexpr REL::Offset FailedSaveCallbackFunction{ 0x3D5F50 };
		inline constexpr REL::Offset HideOptionsContainer{ 0x3D5F80 };
		inline constexpr REL::Offset Fade{ 0x3D61E0 };
		inline constexpr REL::Offset ReturnToSaveLoad{ 0x3D62E0 };
		inline constexpr REL::Offset _UpdateProfileSpecificData{ 0x3D6550 };
		inline constexpr REL::Offset _BackOutToMainListbox{ 0x3D6730 };
		inline constexpr REL::Offset InitializeSaveLoadListItem{ 0x3D67B0 };
		inline constexpr REL::Offset LoadDownloadedContent{ 0x3D69F0 };
		inline constexpr REL::Offset _EndCredits{ 0x3D6C90 };
		inline constexpr REL::Offset SaveSettings{ 0x3D6D70 };
	}

	namespace StartMenu_IdleTimer
	{
		inline constexpr REL::Offset Instance{ 0x3CB710 };
	}

	namespace StartMenu_Option
	{
		inline constexpr REL::Offset ctor{ 0x3CE620 };
	}

	namespace StartMenu_UserOption
	{
		inline constexpr REL::Offset ctor{ 0x3D6350 };
	}

	namespace StatsMenu
	{
		inline constexpr REL::Offset ResetHealingMode{ 0x304390 };
		inline constexpr REL::Offset ctor{ 0x31F340 };
		inline constexpr REL::Offset Create{ 0x3DA2C0 };
		inline constexpr REL::Offset FadeControlCallback{ 0x3DC040 };
		inline constexpr REL::Offset SetIconAndDescription{ 0x3DC7E0 };
		inline constexpr REL::Offset SetIconAndDescription_1{ 0x3DC9B0 };
		inline constexpr REL::Offset SetReputation{ 0x3DCB40 };
		inline constexpr REL::Offset GetCurrentPage{ 0x3DCC00 };
		inline constexpr REL::Offset GetStatusPage{ 0x3DCC40 };
		inline constexpr REL::Offset UpdateAll{ 0x3DCC80 };
		inline constexpr REL::Offset UpdateAllActorValues{ 0x3DCFC0 };
		inline constexpr REL::Offset UpdateActorValue{ 0x3DD090 };
		inline constexpr REL::Offset UpdatePerks{ 0x3DD710 };
		inline constexpr REL::Offset UpdateReputations{ 0x3DD8C0 };
		inline constexpr REL::Offset UpdateRadLevel{ 0x3DDB00 };
		inline constexpr REL::Offset UpdateH20Level{ 0x3DDC20 };
		inline constexpr REL::Offset UpdateFODLevel{ 0x3DDD10 };
		inline constexpr REL::Offset UpdateSLPLevel{ 0x3DDE00 };
		inline constexpr REL::Offset UpdateActiveEffects{ 0x3DDF00 };
		inline constexpr REL::Offset UpdateHealingOptions{ 0x3DF230 };
		inline constexpr REL::Offset UpdatePlayerName{ 0x3DF4E0 };
		inline constexpr REL::Offset UpdatePlayerTitle{ 0x3DF5D0 };
		inline constexpr REL::Offset UpdateHealingMode{ 0x3DF620 };
		inline constexpr REL::Offset TargetMostDamagedBodyPart{ 0x3DF920 };
		inline constexpr REL::Offset SPECIALUpdateFn{ 0x3DFA30 };
		inline constexpr REL::Offset SkillsUpdateFn{ 0x3DFB00 };
		inline constexpr REL::Offset SetKnobPosition{ 0x3DFC90 };
		inline constexpr REL::Offset MoveKnob{ 0x3DFD20 };
		inline constexpr REL::Offset SetCurrentPage{ 0x3DFF40 };
		inline constexpr REL::Offset SetStatusPage{ 0x3E0060 };
		inline constexpr REL::Offset ToggleHealingMode{ 0x3E0230 };
		inline constexpr REL::Offset ToggleGenRepMode{ 0x3E02B0 };
		inline constexpr REL::Offset NamedEffectSortFn{ 0x3E0540 };
		inline constexpr REL::Offset StimpakTargetConditionCallback{ 0x3E05F0 };
		inline constexpr REL::Offset DrBagTargetConditionCallback{ 0x3E06F0 };
	}

	namespace StatsMenu_BodyPartController
	{
		inline constexpr REL::Offset GetInstance{ 0x3DB1C0 };
		inline constexpr REL::Offset SetCurrentBodyPart{ 0x3DBFA0 };
	}

	namespace StatsMenu_NamedEffectsList
	{
		inline constexpr REL::Offset ctor{ 0x31F540 };
	}

	namespace StatsMenu_StatusDataList
	{
		inline constexpr REL::Offset ctor{ 0x6DB0 };
		inline constexpr REL::Offset Register{ 0x3E0A20 };
		inline constexpr REL::Offset Register_1{ 0x3E0B20 };
	}

	namespace StatsMenu_StatusEffect
	{
		inline constexpr REL::Offset dtor{ 0x31F9F0 };
		inline constexpr REL::Offset ctor{ 0x3DF140 };
	}

	namespace StatsMenu_StatusEffectList
	{
		inline constexpr REL::Offset ctor{ 0x31F5D0 };
		inline constexpr REL::Offset Register{ 0x3E08A0 };
	}

	namespace StructArrayImplementation
	{
		inline constexpr REL::Offset _addMember{ 0x9C9C20 };
	}

	namespace SummonCreatureEffect
	{
		inline constexpr REL::Offset ctor{ 0x428470 };
		inline constexpr REL::Offset computeDesirability{ 0x428DC0 };
		inline constexpr REL::Offset CheckSummonLocation{ 0x428F00 };
		inline constexpr REL::Offset DoSummon{ 0x4294E0 };
		inline constexpr REL::Offset LimitPlayerSummonedCreatures{ 0x429970 };
	}

	namespace Sun
	{
		inline constexpr REL::Offset CalculateSunGlare{ 0x2426A0 };
		inline constexpr REL::Offset GetSunOcclusionPercent{ 0x2427C0 };
		inline constexpr REL::Offset GetIntensity{ 0x2428B0 };
		inline constexpr REL::Offset RemoveTextures{ 0x242940 };
	}

	namespace SunDamageEffect
	{
		inline constexpr REL::Offset UpdateHitEffect{ 0x429E00 };
		inline constexpr REL::Offset GetDamageAmount{ 0x42A1B0 };
	}

	namespace SurgeryMenu
	{
		inline constexpr REL::Offset Close{ 0x3E1980 };
		inline constexpr REL::Offset BurnFlesh{ 0x3E28B0 };
		inline constexpr REL::Offset UpdateFlesh{ 0x3E2DE0 };
		inline constexpr REL::Offset UpdateFace{ 0x3E3750 };
		inline constexpr REL::Offset UpdateToolLocation{ 0x3E3890 };
		inline constexpr REL::Offset PlaceToolInWindow{ 0x3E42C0 };
		inline constexpr REL::Offset IsCursorInFlesh{ 0x3E4540 };
		inline constexpr REL::Offset Draw3DElements{ 0x3E47A0 };
		inline constexpr REL::Offset PrepareSequences{ 0x3E4920 };
		inline constexpr REL::Offset SetSurgeryPlayer3DPosition{ 0x3E4FE0 };
		inline constexpr REL::Offset Shutdown3DElements{ 0x3E5170 };
		inline constexpr REL::Offset SortSequenceByCursorDistance{ 0x3E5250 };
		inline constexpr REL::Offset ShowLimbCondition{ 0x3E5590 };
		inline constexpr REL::Offset GetCurrentLimbWound{ 0x3E5720 };
		inline constexpr REL::Offset GetLimbPercentFromSequences{ 0x3E58E0 };
		inline constexpr REL::Offset SetLimbSequences{ 0x3E59F0 };
		inline constexpr REL::Offset UpdateAnimations{ 0x3E5A90 };
		inline constexpr REL::Offset SetAnimation{ 0x3E5C80 };
		inline constexpr REL::Offset GetIndexFromActorValue{ 0x3E5E30 };
		inline constexpr REL::Offset SwitchSkinGeometry{ 0x3E5EE0 };
		inline constexpr REL::Offset PlaceDecal{ 0x3E5FF0 };
	}

	namespace SystemColorManager
	{
		inline constexpr REL::Offset GetInstance{ 0x318B60 };
		inline constexpr REL::Offset ctor{ 0x318C90 };
		inline constexpr REL::Offset Find{ 0x318FB0 };
		inline constexpr REL::Offset GetColor{ 0x319060 };
		inline constexpr REL::Offset GetColor_1{ 0x3190A0 };
		inline constexpr REL::Offset SetColor{ 0x3190E0 };
		inline constexpr REL::Offset SetColor_1{ 0x319120 };
		inline constexpr REL::Offset pInstance{ 0xDD8A88 };
	}

	namespace SystemColorManager_HardSystemColor
	{
		inline constexpr REL::Offset ctor{ 0x319250 };
	}

	namespace SystemColorManager_SoftSystemColor
	{
		inline constexpr REL::Offset ctor{ 0x3192E0 };
	}

	namespace SystemColorManager_SystemColor
	{
		inline constexpr REL::Offset ctor{ 0x319160 };
		inline constexpr REL::Offset SetColor{ 0x319490 };
	}

	namespace TERMINAL_MENU_ITEM
	{
		inline constexpr REL::Offset ctor{ 0x100960 };
		inline constexpr REL::Offset dtor{ 0x1010F0 };
		inline constexpr REL::Offset SetSelected{ 0x3583B0 };
	}

	namespace TES
	{
		inline constexpr REL::Offset ctor{ 0x4FB20 };
		inline constexpr REL::Offset InitFadeOutMultipliers{ 0x506B0 };
		inline constexpr REL::Offset dtor{ 0x50770 };
		inline constexpr REL::Offset InitializeWater{ 0x50C50 };
		inline constexpr REL::Offset CullGridCells{ 0x50DD0 };
		inline constexpr REL::Offset IsCoordInLoadedArea{ 0x51110 };
		inline constexpr REL::Offset IsCellLoaded{ 0x511E0 };
		inline constexpr REL::Offset ReloadGridCells{ 0x512C0 };
		inline constexpr REL::Offset CellTestRunning{ 0x51530 };
		inline constexpr REL::Offset InitGridCells{ 0x515A0 };
		inline constexpr REL::Offset FindFirstGridCellWithWater{ 0x516D0 };
		inline constexpr REL::Offset GetGridCellCell{ 0x51900 };
		inline constexpr REL::Offset GetCellForPoint{ 0x519D0 };
		inline constexpr REL::Offset LoadGridCell{ 0x51A50 };
		inline constexpr REL::Offset UpdateGridLights{ 0x51CF0 };
		inline constexpr REL::Offset CleanTemp3D{ 0x51DA0 };
		inline constexpr REL::Offset CanAttach3D{ 0x51E40 };
		inline constexpr REL::Offset AttachModel{ 0x51EF0 };
		inline constexpr REL::Offset CleanUpUnusedTextures{ 0x52490 };
		inline constexpr REL::Offset UpdateCurrentGridCell{ 0x52580 };
		inline constexpr REL::Offset SetUpdateGridString{ 0x52E50 };
		inline constexpr REL::Offset GridArrayLoad{ 0x52FF0 };
		inline constexpr REL::Offset IsBuffered{ 0x53490 };
		inline constexpr REL::Offset UpdateCellAnimations{ 0x53550 };
		inline constexpr REL::Offset UpdateCellMainThread{ 0x537C0 };
		inline constexpr REL::Offset LockHavokUpdateMT{ 0x53860 };
		inline constexpr REL::Offset UpdateDeferredCellAnimationTransforms{ 0x53900 };
		inline constexpr REL::Offset DetachGridCells{ 0x53940 };
		inline constexpr REL::Offset ClearAllCells{ 0x539A0 };
		inline constexpr REL::Offset ClearOldestBufferedCell{ 0x53A80 };
		inline constexpr REL::Offset LoadInterior{ 0x53DC0 };
		inline constexpr REL::Offset LeaveInterior{ 0x54450 };
		inline constexpr REL::Offset AddToBuffer{ 0x54B90 };
		inline constexpr REL::Offset IsInteriorBuffered{ 0x54BD0 };
		inline constexpr REL::Offset AddToInteriorBuffer{ 0x54C20 };
		inline constexpr REL::Offset FreeInteriorBuffer{ 0x54D50 };
		inline constexpr REL::Offset AddToExteriorBuffer{ 0x54E70 };
		inline constexpr REL::Offset FreeExteriorBuffer{ 0x55200 };
		inline constexpr REL::Offset SetAtmosphere{ 0x55400 };
		inline constexpr REL::Offset RunScripts{ 0x55490 };
		inline constexpr REL::Offset RunAnimations{ 0x55640 };
		inline constexpr REL::Offset UpdateRefSounds{ 0x55690 };
		inline constexpr REL::Offset TestAllCells{ 0x556D0 };
		inline constexpr REL::Offset GetFaceCount{ 0x56670 };
		inline constexpr REL::Offset CreateTextureImage{ 0x568C0 };
		inline constexpr REL::Offset ToggleCollisionGeometry{ 0x56A60 };
		inline constexpr REL::Offset TogglePrimitives{ 0x56AA0 };
		inline constexpr REL::Offset SaveWorld{ 0x56B10 };
		inline constexpr REL::Offset ToggleCollision{ 0x56BE0 };
		inline constexpr REL::Offset QCollisionDisableFlag{ 0x56C70 };
		inline constexpr REL::Offset ShowLandBorders{ 0x56CB0 };
		inline constexpr REL::Offset ShowCellNode{ 0x56D00 };
		inline constexpr REL::Offset GetGridCell{ 0x57050 };
		inline constexpr REL::Offset GetCurrentCell{ 0x57070 };
		inline constexpr REL::Offset PickWaterDistance{ 0x570D0 };
		inline constexpr REL::Offset PickWorldDistance{ 0x571C0 };
		inline constexpr REL::Offset GetLandHeight{ 0x572E0 };
		inline constexpr REL::Offset GetLandNormal{ 0x573F0 };
		inline constexpr REL::Offset GetLandColor{ 0x57520 };
		inline constexpr REL::Offset GetLandGeometry{ 0x57620 };
		inline constexpr REL::Offset GetLandTexture{ 0x57720 };
		inline constexpr REL::Offset GetLandMaterialType{ 0x57880 };
		inline constexpr REL::Offset CreateDeepCopySameTextures{ 0x57BA0 };
		inline constexpr REL::Offset InitModelsToLoad{ 0x57BE0 };
		inline constexpr REL::Offset ShowLoadingMenu{ 0x57D70 };
		inline constexpr REL::Offset SetWorldSpace{ 0x58200 };
		inline constexpr REL::Offset Pick{ 0x58420 };
		inline constexpr REL::Offset Pick_1{ 0x58440 };
		inline constexpr REL::Offset PickNI{ 0x584D0 };
		inline constexpr REL::Offset GetCellPriority{ 0x58BE0 };
		inline constexpr REL::Offset AddTempDebugObject{ 0x58E20 };
		inline constexpr REL::Offset GetSaveSize{ 0x59100 };
		inline constexpr REL::Offset SaveGame{ 0x59230 };
		inline constexpr REL::Offset SaveGame_1{ 0x59490 };
		inline constexpr REL::Offset LoadGame{ 0x595E0 };
		inline constexpr REL::Offset FinishLoadGame{ 0x59750 };
		inline constexpr REL::Offset CreateFurnitureList{ 0x59870 };
		inline constexpr REL::Offset QueueReferencesForAttachedCells{ 0x59920 };
		inline constexpr REL::Offset UpdateFadeNodesForAttachedCells{ 0x59A00 };
		inline constexpr REL::Offset RunCellTest{ 0x59AE0 };
		inline constexpr REL::Offset TestCell{ 0x59D20 };
		inline constexpr REL::Offset PreloadAddonNodes{ 0x59F10 };
		inline constexpr REL::Offset PreloadForms{ 0x5A1E0 };
		inline constexpr REL::Offset PreloadDefaultModels{ 0x5A370 };
		inline constexpr REL::Offset UnloadDefaultModels{ 0x5A520 };
		inline constexpr REL::Offset PreloadPlaceableWaterNoiseTextures{ 0x5A600 };
		inline constexpr REL::Offset SetupTemporaryParticleCache{ 0x5A750 };
		inline constexpr REL::Offset CleanupTemporaryParticleCache{ 0x5AC80 };
		inline constexpr REL::Offset GetNavMeshInfoMap{ 0x5AF00 };
		inline constexpr REL::Offset SetNavMeshInfoMap{ 0x5AFB0 };
		inline constexpr REL::Offset KillSDM{ 0x5B050 };
		inline constexpr REL::Offset UpdateMultiBoundVisibility{ 0x5B070 };
		inline constexpr REL::Offset ResetAllMultiBoundNodes{ 0x5BC80 };
		inline constexpr REL::Offset GetLODMult{ 0x5C6B0 };
		inline constexpr REL::Offset HideUnneededLandPasses{ 0x5C780 };
		inline constexpr REL::Offset HideFarLandNormalMaps{ 0x5C840 };
		inline constexpr REL::Offset SetHideLandBlendPassForGridCell{ 0x5C8D0 };
		inline constexpr REL::Offset SetHideLandNormalMapForGridCell{ 0x5C9E0 };
		inline constexpr REL::Offset InitDistantTextureBlending{ 0x5CAC0 };
		inline constexpr REL::Offset GetWaterHeight{ 0x5CBC0 };
		inline constexpr REL::Offset ActivateAllSubmergedReferencesIslands{ 0x5CDA0 };
		inline constexpr REL::Offset GetInterior{ 0x1F36F0 };
	}

	namespace TESAIForm
	{
		inline constexpr REL::Offset dtor{ 0x7ECB0 };
		inline constexpr REL::Offset SetAggression{ 0x7EE00 };
		inline constexpr REL::Offset GetAssistance{ 0x7EE30 };
		inline constexpr REL::Offset SetAssistance{ 0x7EE50 };
		inline constexpr REL::Offset SetHasAggroRadius{ 0x7EE70 };
		inline constexpr REL::Offset SetAggroRadius{ 0x7EE90 };
		inline constexpr REL::Offset GetConfidenceLevel{ 0x7EEB0 };
		inline constexpr REL::Offset SetConfidence{ 0x7EED0 };
		inline constexpr REL::Offset SetEnergy{ 0x7EF00 };
		inline constexpr REL::Offset GetResponsibility{ 0x7EF30 };
		inline constexpr REL::Offset SetResponsibility{ 0x7EF50 };
		inline constexpr REL::Offset SetMood{ 0x7EF80 };
		inline constexpr REL::Offset SetServiceFlags{ 0x7EFB0 };
		inline constexpr REL::Offset SetAIData{ 0x7F0B0 };
		inline constexpr REL::Offset CopyAIData{ 0x7F1E0 };
		inline constexpr REL::Offset InitItem{ 0x7F4C0 };
		inline constexpr REL::Offset SellBuysItem{ 0x7F600 };
		inline constexpr REL::Offset AddFormChange{ 0x7F790 };
		inline constexpr REL::Offset SaveGame{ 0x7F940 };
		inline constexpr REL::Offset LoadGame{ 0x7F980 };
		inline constexpr REL::Offset GetConfidence{ 0xF6DE0 };
		inline constexpr REL::Offset GetMood{ 0x22F2F0 };
	}

	namespace TESActorBase
	{
		inline constexpr REL::Offset GetHealth{ 0x1F0B00 };
		inline constexpr REL::Offset DoesSwim{ 0x1F0B50 };
		inline constexpr REL::Offset FightsInWater{ 0x1F0BA0 };
		inline constexpr REL::Offset DoesWalk{ 0x1F0BF0 };
		inline constexpr REL::Offset GetSex{ 0x1F0CC0 };
		inline constexpr REL::Offset GetDesirability{ 0x1F0D60 };
		inline constexpr REL::Offset ShouldRunInitDefaultWorn{ 0x1F1590 };
		inline constexpr REL::Offset Reset3DForLoadedActors{ 0x1F20A0 };
		inline constexpr REL::Offset ctor{ 0x1F75E0 };
	}

	namespace TESActorBaseData
	{
		inline constexpr REL::Offset GetMatchesPCLevel{ 0x61560 };
		inline constexpr REL::Offset GetFlagBit{ 0x61580 };
		inline constexpr REL::Offset ctor{ 0x7C700 };
		inline constexpr REL::Offset Save{ 0x7CAC0 };
		inline constexpr REL::Offset QCopiedTemplate{ 0x7CCA0 };
		inline constexpr REL::Offset GetTemplateUseFlag{ 0x7CD40 };
		inline constexpr REL::Offset GetUsesLeveledTemplate{ 0x7CDB0 };
		inline constexpr REL::Offset IsTemplateLeveled{ 0x7CDD0 };
		inline constexpr REL::Offset CalcTemplateForRef{ 0x7CE10 };
		inline constexpr REL::Offset CreateTemplateActorBase{ 0x7D130 };
		inline constexpr REL::Offset GetLevelExact{ 0x7D370 };
		inline constexpr REL::Offset GetCalcLevelMin{ 0x7D390 };
		inline constexpr REL::Offset GetCalcLevelMax{ 0x7D3B0 };
		inline constexpr REL::Offset GetBaseDisposition{ 0x7D3D0 };
		inline constexpr REL::Offset GetBarterGold{ 0x7D3F0 };
		inline constexpr REL::Offset GetFactionRank{ 0x7D680 };
		inline constexpr REL::Offset IsInEvilFactionsOnly{ 0x7D740 };
		inline constexpr REL::Offset InitItem{ 0x7D8B0 };
		inline constexpr REL::Offset SetFlags{ 0x7DD30 };
		inline constexpr REL::Offset SetFlagBit{ 0x7DD50 };
		inline constexpr REL::Offset SetCalcLevelMin{ 0x7DE40 };
		inline constexpr REL::Offset SetCalcLevelMax{ 0x7DE70 };
		inline constexpr REL::Offset SetBaseDisposition{ 0x7DEA0 };
		inline constexpr REL::Offset GetLevel{ 0x7DED0 };
		inline constexpr REL::Offset SetLevel{ 0x7DFE0 };
		inline constexpr REL::Offset SetFatigue{ 0x7E010 };
		inline constexpr REL::Offset GetAlignmentForKarma{ 0x7E040 };
		inline constexpr REL::Offset GetKarmicTitle{ 0x7E0E0 };
		inline constexpr REL::Offset SetKarma{ 0x7E1C0 };
		inline constexpr REL::Offset SetBarterGold{ 0x7E240 };
		inline constexpr REL::Offset SetSpeedMult{ 0x7E270 };
		inline constexpr REL::Offset AddFormChange{ 0x7E2A0 };
		inline constexpr REL::Offset GetSaveSize{ 0x7E380 };
		inline constexpr REL::Offset SaveGame{ 0x7E4A0 };
		inline constexpr REL::Offset LoadGame{ 0x7E6F0 };
		inline constexpr REL::Offset SaveGame_1{ 0x7EA30 };
		inline constexpr REL::Offset LoadGame_1{ 0x7EA70 };
		inline constexpr REL::Offset SetPCFactionFlags{ 0x7EAD0 };
		inline constexpr REL::Offset SetDeathItem{ 0x10F9A0 };
		inline constexpr REL::Offset SetVoiceType{ 0x10F9C0 };
		inline constexpr REL::Offset GetRunsInLow{ 0x15E200 };
		inline constexpr REL::Offset GetRespawn{ 0x16AF00 };
		inline constexpr REL::Offset SetMatchesPCLevel{ 0x1D1070 };
		inline constexpr REL::Offset GetNoRumors{ 0x1D2780 };
		inline constexpr REL::Offset SetRunsInLow{ 0x1F7B50 };
		inline constexpr REL::Offset GetSpeedMult{ 0x4F21D0 };
	}

	namespace TESAmbushPackageData
	{
		inline constexpr REL::Offset ctor{ 0x27ACF0 };
	}

	namespace TESAmmo
	{
		inline constexpr REL::Offset GetIsPlayable{ 0xC94D0 };
		inline constexpr REL::Offset ctor{ 0x1026B0 };
		inline constexpr REL::Offset BuildMenuString{ 0x103A70 };
		inline constexpr REL::Offset GetAmmoEffectList{ 0x523000 };
	}

	namespace TESAmmoEffect
	{
		inline constexpr REL::Offset ctor{ 0x199C40 };
		inline constexpr REL::Offset BuildMenuString{ 0x19A1E0 };
	}

	namespace TESAnimGroup
	{
		inline constexpr REL::Offset IsAimAction{ 0x937C0 };
		inline constexpr REL::Offset IsAttackAction{ 0x937E0 };
		inline constexpr REL::Offset AnimGroup{ 0x1F2370 };
		inline constexpr REL::Offset GetWeapon{ 0x1F2400 };
		inline constexpr REL::Offset GetType{ 0x1F2420 };
		inline constexpr REL::Offset GetType_1{ 0x1F2440 };
		inline constexpr REL::Offset SetType{ 0x1F2450 };
		inline constexpr REL::Offset IsAttackAction_1{ 0x1F2540 };
		inline constexpr REL::Offset IsAttackSpinAction{ 0x1F25D0 };
		inline constexpr REL::Offset IsAimAction_1{ 0x1F2630 };
		inline constexpr REL::Offset IsPowerAttackAction{ 0x1F2670 };
		inline constexpr REL::Offset IsIronSightsAction{ 0x1F2720 };
		inline constexpr REL::Offset IsIronSightsAction_1{ 0x1F2750 };
		inline constexpr REL::Offset PlaySounds{ 0x1F2B60 };
		inline constexpr REL::Offset GetTime{ 0x1F3780 };
		inline constexpr REL::Offset ParseAnimGroupFilename{ 0x1F38D0 };
		inline constexpr REL::Offset LoadAnimGroup{ 0x1F3A20 };
		inline constexpr REL::Offset GetSpeed{ 0x1F4C70 };
		inline constexpr REL::Offset IsJumpingLoopAnim{ 0x1F4D60 };
	}

	namespace TESAnimation
	{
		inline constexpr REL::Offset LoadAnimationChunk{ 0x7FAA0 };
		inline constexpr REL::Offset AddKFFile{ 0x7FD20 };
		inline constexpr REL::Offset HasKFFiles{ 0x7FD90 };
	}

	namespace TESArrowTargetListener
	{
		inline constexpr REL::Offset ctor{ 0x22A460 };
		inline constexpr REL::Offset AddArrowTarget{ 0x22A7E0 };
		inline constexpr REL::Offset RemoveArrowTarget{ 0x22AB60 };
	}

	namespace TESAttackDamageForm
	{
		inline constexpr REL::Offset ctor{ 0x7FDC0 };
		inline constexpr REL::Offset SetAttackDamage{ 0x7FF50 };
	}

	namespace TESAttributes
	{
		inline constexpr REL::Offset ctor{ 0x7FF70 };
		inline constexpr REL::Offset Save{ 0x80100 };
		inline constexpr REL::Offset Load{ 0x80130 };
		inline constexpr REL::Offset GetAttributeValue{ 0x80160 };
		inline constexpr REL::Offset SaveGame{ 0x80270 };
		inline constexpr REL::Offset LoadGame{ 0x802B0 };
		inline constexpr REL::Offset GetEndurance{ 0x1F1230 };
		inline constexpr REL::Offset GetAttributeDataSize{ 0x5D2510 };
	}

	namespace TESBipedModelForm
	{
		inline constexpr REL::Offset ctor{ 0x802F0 };
		inline constexpr REL::Offset dtor{ 0x80400 };
		inline constexpr REL::Offset Save{ 0x80610 };
		inline constexpr REL::Offset InitItem{ 0x80750 };
		inline constexpr REL::Offset FillsBipedSlot{ 0x80AF0 };
		inline constexpr REL::Offset AddToBiped{ 0x80BD0 };
		inline constexpr REL::Offset GetPlayable{ 0x80D90 };
		inline constexpr REL::Offset GetFormAsBipedModel{ 0x80DB0 };
		inline constexpr REL::Offset GetWorldModel{ 0x80E60 };
		inline constexpr REL::Offset GetIcon{ 0x80EF0 };
		inline constexpr REL::Offset GetMessageIcon{ 0x80F80 };
		inline constexpr REL::Offset GetWorldTESModel{ 0x81010 };
		inline constexpr REL::Offset GetBipedTESModel{ 0x81090 };
		inline constexpr REL::Offset GetWorldTESModel_1{ 0x81110 };
		inline constexpr REL::Offset GetBipedModel{ 0x811E0 };
		inline constexpr REL::Offset IsHeavy{ 0xC0BD0 };
		inline constexpr REL::Offset IsMedium{ 0x114450 };
	}

	namespace TESBoundAnimObject
	{
		inline constexpr REL::Offset ctor{ 0x10F6F0 };
	}

	namespace TESBoundObject
	{
		inline constexpr REL::Offset ctor{ 0x10E820 };
		inline constexpr REL::Offset CopyBoundData{ 0x10EAA0 };
		inline constexpr REL::Offset GetBoundMin{ 0x10EAD0 };
		inline constexpr REL::Offset GetBoundMax{ 0x10EB90 };
		inline constexpr REL::Offset GetBoundSize{ 0x10EBF0 };
	}

	namespace TESBoundObject_BOUND_DATA
	{
		inline constexpr REL::Offset Endian{ 0x10ED30 };
	}

	namespace TESCaravanCard
	{
		inline constexpr REL::Offset GetFaceTexture{ 0x10D100 };
		inline constexpr REL::Offset ctor{ 0x19A370 };
	}

	namespace TESCaravanDeck
	{
		inline constexpr REL::Offset ctor{ 0x19B880 };
	}

	namespace TESCaravanMoney
	{
		inline constexpr REL::Offset ctor{ 0x19AE60 };
		inline constexpr REL::Offset GetAnteModel{ 0x19B270 };
	}

	namespace TESCasino
	{
		inline constexpr REL::Offset ctor{ 0x104480 };
		inline constexpr REL::Offset GetModel{ 0x104E00 };
		inline constexpr REL::Offset GetTexture{ 0x104E20 };
		inline constexpr REL::Offset GetQuest{ 0x104E40 };
		inline constexpr REL::Offset GetData{ 0x104E60 };
		inline constexpr REL::Offset GetChipType{ 0x3316D0 };
		inline constexpr REL::Offset GetMaxTotalWinnings{ 0x337E30 };
	}

	namespace TESCasinoChips
	{
		inline constexpr REL::Offset ctor{ 0x103BD0 };
	}

	namespace TESChallenge
	{
		inline constexpr REL::Offset GetFormOne{ 0xFD3A0 };
		inline constexpr REL::Offset GetUnlocked{ 0x1A60D0 };
		inline constexpr REL::Offset GetCompleted{ 0x1A6150 };
		inline constexpr REL::Offset ctor{ 0x1F4E00 };
		inline constexpr REL::Offset GetStartsLocked{ 0x1F5930 };
	}

	namespace TESChildCell
	{
		inline constexpr REL::Offset ctor{ 0x133240 };
	}

	namespace TESClass
	{
		inline constexpr REL::Offset IsTagSkill{ 0x1A5F40 };
		inline constexpr REL::Offset ctor{ 0x1F6610 };
		inline constexpr REL::Offset IsGuard{ 0x1F6E60 };
		inline constexpr REL::Offset SetTagSkill{ 0x1F6E80 };
		inline constexpr REL::Offset SaveGame{ 0x1F6F70 };
		inline constexpr REL::Offset LoadGame{ 0x1F7050 };
	}

	namespace TESClimate
	{
		inline constexpr REL::Offset ctor{ 0x12AAA0 };
		inline constexpr REL::Offset SetMoonPhaseDays{ 0x12AC50 };
		inline constexpr REL::Offset MakeDefault{ 0x12B0F0 };
		inline constexpr REL::Offset GetTransTime{ 0x195F10 };
	}

	namespace TESCombatStyle
	{
		inline constexpr REL::Offset GetData{ 0x3C490 };
		inline constexpr REL::Offset GetDefaultCombatStyle{ 0x105000 };
		inline constexpr REL::Offset ctor{ 0x105010 };
		inline constexpr REL::Offset GetPowerAttackChance{ 0x1524B0 };
		inline constexpr REL::Offset GetAdvancedData{ 0x2AB360 };
		inline constexpr REL::Offset IsFlagSet{ 0x5928C0 };
		inline constexpr REL::Offset GetIgnoreThreats{ 0x5989D0 };
		inline constexpr REL::Offset GetRandomCoverWaitTimer{ 0x5D32E0 };
		inline constexpr REL::Offset GetRandomCoverFireTimer{ 0x5D3340 };
	}

	namespace TESCondition
	{
		inline constexpr REL::Offset ctor{ 0x280890 };
		inline constexpr REL::Offset dtor{ 0x2808B0 };
		inline constexpr REL::Offset Save{ 0x280910 };
		inline constexpr REL::Offset Load{ 0x280960 };
		inline constexpr REL::Offset InitItem{ 0x280A20 };
		inline constexpr REL::Offset Copy{ 0x280A70 };
		inline constexpr REL::Offset Compare{ 0x280B70 };
		inline constexpr REL::Offset IsTrue{ 0x280C30 };
		inline constexpr REL::Offset IsTrue_1{ 0x280C60 };
		inline constexpr REL::Offset ClearAllConditionItems{ 0x280FE0 };
	}

	namespace TESConditionItem
	{
		inline constexpr REL::Offset GetConditionFunction{ 0x1EB680 };
		inline constexpr REL::Offset ctor{ 0x2811E0 };
		inline constexpr REL::Offset SetDefaultDataForFunction{ 0x281220 };
		inline constexpr REL::Offset GetComparisonValue{ 0x281490 };
		inline constexpr REL::Offset GetValueIsGlobal{ 0x2814E0 };
		inline constexpr REL::Offset IsTrue{ 0x281600 };
		inline constexpr REL::Offset Save{ 0x281840 };
		inline constexpr REL::Offset InitItem{ 0x2819E0 };
	}

	namespace TESContainer
	{
		inline constexpr REL::Offset ctor{ 0x81610 };
		inline constexpr REL::Offset dtor{ 0x81680 };
		inline constexpr REL::Offset AddObject{ 0x818E0 };
		inline constexpr REL::Offset HasObject{ 0x81EB0 };
		inline constexpr REL::Offset IsGold{ 0x81F10 };
		inline constexpr REL::Offset ContainerCanHoldType{ 0x81F30 };
		inline constexpr REL::Offset ApplyHealthPercentToContainer{ 0x82090 };
		inline constexpr REL::Offset AddContainerToReference{ 0x821A0 };
		inline constexpr REL::Offset AddLevItemContainerToChanges{ 0x82770 };
		inline constexpr REL::Offset GetObjectCount{ 0x82A90 };
	}

	namespace TESConversationData
	{
		inline constexpr REL::Offset InitItem{ 0x21C360 };
	}

	namespace TESCreature
	{
		inline constexpr REL::Offset GetBaseScale{ 0x167470 };
		inline constexpr REL::Offset GetCreatureType{ 0x19F3A0 };
		inline constexpr REL::Offset ctor{ 0x1F7230 };
		inline constexpr REL::Offset SetImpactDataSet{ 0x1F8BB0 };
		inline constexpr REL::Offset GetCombatSkill{ 0x1F8F70 };
		inline constexpr REL::Offset GetSoundCreature{ 0x1F9100 };
		inline constexpr REL::Offset SetSoundCreature{ 0x1F9140 };
		inline constexpr REL::Offset GetCreatureSounds{ 0x1F91D0 };
		inline constexpr REL::Offset CreateCreatureSounds{ 0x1F9210 };
		inline constexpr REL::Offset PickCreatureSound{ 0x1F92D0 };
		inline constexpr REL::Offset GetHandReach{ 0x1F9AD0 };
		inline constexpr REL::Offset GetImpactDataSet{ 0x1F9B30 };
		inline constexpr REL::Offset InitDefaultWorn{ 0x1F9E00 };
		inline constexpr REL::Offset InitWorn{ 0x1FA0A0 };
		inline constexpr REL::Offset CanWearItem{ 0x1FA120 };
		inline constexpr REL::Offset CheckEmbeddedWeaponNodes{ 0x1FBDD0 };
		inline constexpr REL::Offset GetSoundLevelValue{ 0x1FBEB0 };
		inline constexpr REL::Offset IsHumanoidCreature{ 0x1FBF20 };
		inline constexpr REL::Offset GetFootWeight{ 0x421660 };
		inline constexpr REL::Offset GetSoundLevel{ 0x5C0070 };
	}

	namespace TESDataHandler
	{
		inline constexpr REL::Offset GetClearingData{ 0x226E0 };
		inline constexpr REL::Offset SetClearingData{ 0x50B40 };
		inline constexpr REL::Offset GetSaveLoad{ 0x516B0 };
		inline constexpr REL::Offset GetQuestList{ 0x55600 };
		inline constexpr REL::Offset GetWaterList{ 0x5A730 };
		inline constexpr REL::Offset GetFileList{ 0x5DFC0 };
		inline constexpr REL::Offset ClearData{ 0x5DFE0 };
		inline constexpr REL::Offset LoadForm{ 0x601D0 };
		inline constexpr REL::Offset SaveForm{ 0x60270 };
		inline constexpr REL::Offset CloseAllTES{ 0x60360 };
		inline constexpr REL::Offset AddFormToDataHandler{ 0x603B0 };
		inline constexpr REL::Offset GetPerkList{ 0x60FB0 };
		inline constexpr REL::Offset GetTopicList{ 0x612E0 };
		inline constexpr REL::Offset NewCell{ 0x61330 };
		inline constexpr REL::Offset UpdateAutoCalcNPCs{ 0x614E0 };
		inline constexpr REL::Offset GetClass{ 0x615A0 };
		inline constexpr REL::Offset GetFaction{ 0x61600 };
		inline constexpr REL::Offset GetReputation{ 0x61630 };
		inline constexpr REL::Offset GetSound{ 0x616C0 };
		inline constexpr REL::Offset GetAddonNode{ 0x617E0 };
		inline constexpr REL::Offset AddAddonNode{ 0x61820 };
		inline constexpr REL::Offset GetInteriorCellCount{ 0x61960 };
		inline constexpr REL::Offset GetInteriorCellByIndex{ 0x61980 };
		inline constexpr REL::Offset SortInteriorCells{ 0x619B0 };
		inline constexpr REL::Offset GetCellFromWorldCoord{ 0x61BC0 };
		inline constexpr REL::Offset GetCellFromCellCoord{ 0x61C20 };
		inline constexpr REL::Offset GetExtCellDataFromFileByEditorID{ 0x61CF0 };
		inline constexpr REL::Offset UnloadCell{ 0x62290 };
		inline constexpr REL::Offset BuildFileList{ 0x624B0 };
		inline constexpr REL::Offset CreateThreadSafeFiles{ 0x62EE0 };
		inline constexpr REL::Offset GetListFile{ 0x62F40 };
		inline constexpr REL::Offset CleanUpBadForms{ 0x64E50 };
		inline constexpr REL::Offset GetCompiledFile{ 0x65010 };
		inline constexpr REL::Offset CreateFormOfType{ 0x65110 };
		inline constexpr REL::Offset ConstructObject{ 0x67BD0 };
		inline constexpr REL::Offset IsFormIDInUse{ 0x69760 };
		inline constexpr REL::Offset GetNextID{ 0x69800 };
		inline constexpr REL::Offset IsFormIDCreated{ 0x69860 };
		inline constexpr REL::Offset CreateReferenceAtLocation{ 0x698A0 };
		inline constexpr REL::Offset CreateProjectileAtLocation{ 0x6A080 };
		inline constexpr REL::Offset CreateExplosionAtLocation{ 0x6A190 };
		inline constexpr REL::Offset DataError{ 0x6A330 };
		inline constexpr REL::Offset GenerateDefaultObjects{ 0x6A370 };
		inline constexpr REL::Offset CheckModels{ 0x6DDB0 };
		inline constexpr REL::Offset CheckTexturesRecurse{ 0x6E910 };
		inline constexpr REL::Offset CheckIcons{ 0x6EC10 };
		inline constexpr REL::Offset CheckForNiRawImageData{ 0x6F0C0 };
		inline constexpr REL::Offset CreateBarterContainer{ 0x6F310 };
		inline constexpr REL::Offset RemoveItemBarterContainer{ 0x6F640 };
		inline constexpr REL::Offset ClearBarterContainer{ 0x6FAF0 };
		inline constexpr REL::Offset IsDLCPackageName{ 0x6FEB0 };
		inline constexpr REL::Offset SetSaveLoad{ 0x150890 };
		inline constexpr REL::Offset GetRegionDataManager{ 0x340940 };
		inline constexpr REL::Offset GetBarterContainer{ 0x340960 };
		inline constexpr REL::Offset pSingleton{ 0xDC3F2C };
	}

	namespace TESDescription
	{
		inline constexpr REL::Offset ctor{ 0x82C50 };
		inline constexpr REL::Offset Save{ 0x82CB0 };
		inline constexpr REL::Offset SaveDescriptionData{ 0x82CD0 };
		inline constexpr REL::Offset GetDescriptionLength{ 0x82D30 };
		inline constexpr REL::Offset LoadDescriptionData{ 0x82D50 };
		inline constexpr REL::Offset LoadDescription{ 0x82F40 };
	}

	namespace TESDialoguePackageData
	{
		inline constexpr REL::Offset ctor{ 0x27B170 };
	}

	namespace TESEatPackageData
	{
		inline constexpr REL::Offset ctor{ 0x27B950 };
	}

	namespace TESEffectShader
	{
		inline constexpr REL::Offset ctor{ 0x105C40 };
		inline constexpr REL::Offset GetTextureShaderTexture{ 0x106370 };
		inline constexpr REL::Offset GetParticleShaderTexture{ 0x106390 };
		inline constexpr REL::Offset GetBlockOutTexture{ 0x1063B0 };
		inline constexpr REL::Offset StopParticleShader{ 0x107810 };
		inline constexpr REL::Offset StartTextureShader{ 0x107B40 };
		inline constexpr REL::Offset StopTextureShader{ 0x107C90 };
		inline constexpr REL::Offset AnimateTextureEffect{ 0x107E30 };
	}

	namespace TESEnchantableForm
	{
		inline constexpr REL::Offset SetCastingType{ 0x1FD00 };
		inline constexpr REL::Offset Save{ 0x7BD70 };
		inline constexpr REL::Offset ctor{ 0x830A0 };
		inline constexpr REL::Offset InitItem{ 0x83210 };
		inline constexpr REL::Offset GetFormEnchanting{ 0xBE330 };
	}

	namespace TESEscortPackageData
	{
		inline constexpr REL::Offset ctor{ 0x27BBF0 };
	}

	namespace TESEyes
	{
		inline constexpr REL::Offset ctor{ 0x1FC050 };
		inline constexpr REL::Offset CanBeMale{ 0x1FC530 };
		inline constexpr REL::Offset CanBeFemale{ 0x1FC590 };
		inline constexpr REL::Offset CanBeEyesForNPC{ 0x1FC5F0 };
	}

	namespace TESFaction
	{
		inline constexpr REL::Offset GetEvil{ 0x7D7C0 };
		inline constexpr REL::Offset SetPCAnEnemy{ 0x7EB90 };
		inline constexpr REL::Offset SetPCMurder{ 0x7EBB0 };
		inline constexpr REL::Offset SetPCAttack{ 0x7EBD0 };
		inline constexpr REL::Offset GetPCAnEnemy{ 0x1A2270 };
		inline constexpr REL::Offset ctor{ 0x1FC680 };
		inline constexpr REL::Offset SetFlag{ 0x1FC970 };
		inline constexpr REL::Offset SetFactionFightReaction{ 0x1FD430 };
		inline constexpr REL::Offset CheckFactionReactions{ 0x1FD850 };
		inline constexpr REL::Offset GetTrackCrime{ 0x4B7D00 };
	}

	namespace TESFile
	{
		inline constexpr REL::Offset GetChunkSize{ 0x1660 };
		inline constexpr REL::Offset GetFormData{ 0x62270 };
		inline constexpr REL::Offset GetMasterList{ 0x64DF0 };
		inline constexpr REL::Offset GetOffset{ 0x67BB0 };
		inline constexpr REL::Offset GetFileVersion{ 0x694C0 };
		inline constexpr REL::Offset ctor{ 0x70710 };
		inline constexpr REL::Offset dtor{ 0x709F0 };
		inline constexpr REL::Offset GetMasterDataList{ 0x70B90 };
		inline constexpr REL::Offset ClearMasterLists{ 0x70BC0 };
		inline constexpr REL::Offset OpenTES{ 0x70C70 };
		inline constexpr REL::Offset OpenTES_1{ 0x70CA0 };
		inline constexpr REL::Offset CloseTES{ 0x71130 };
		inline constexpr REL::Offset LoadTESInfo{ 0x71400 };
		inline constexpr REL::Offset GetFORMSize{ 0x71840 };
		inline constexpr REL::Offset GenIndexTable{ 0x71870 };
		inline constexpr REL::Offset GetIndexFile{ 0x71A10 };
		inline constexpr REL::Offset GetMaster{ 0x71C20 };
		inline constexpr REL::Offset SetChecked{ 0x71D00 };
		inline constexpr REL::Offset GetActive{ 0x71D60 };
		inline constexpr REL::Offset InitEndian{ 0x71E60 };
		inline constexpr REL::Offset TESRewind{ 0x71F80 };
		inline constexpr REL::Offset TESRewindChunk{ 0x72000 };
		inline constexpr REL::Offset ClearCurrentChunk{ 0x720D0 };
		inline constexpr REL::Offset IsCurrentFormCompressed{ 0x72100 };
		inline constexpr REL::Offset NextForm{ 0x72150 };
		inline constexpr REL::Offset SetOffset{ 0x723A0 };
		inline constexpr REL::Offset SetOffsetChunk{ 0x724F0 };
		inline constexpr REL::Offset GetTESFormNoRet{ 0x72620 };
		inline constexpr REL::Offset GetTESForm{ 0x72660 };
		inline constexpr REL::Offset GetTESChunk{ 0x726B0 };
		inline constexpr REL::Offset NextChunk{ 0x726F0 };
		inline constexpr REL::Offset GetChunkData{ 0x727F0 };
		inline constexpr REL::Offset ReadFormHeader{ 0x72BC0 };
		inline constexpr REL::Offset ReadChunkHeader{ 0x72D30 };
		inline constexpr REL::Offset StartForm{ 0x72E60 };
		inline constexpr REL::Offset AddTESForm{ 0x72FE0 };
		inline constexpr REL::Offset EasyWrite{ 0x73110 };
		inline constexpr REL::Offset GetCompileIndex{ 0x73250 };
		inline constexpr REL::Offset GetCurrentGroup{ 0x732D0 };
		inline constexpr REL::Offset StartGroup{ 0x73310 };
		inline constexpr REL::Offset EndGroup{ 0x733A0 };
		inline constexpr REL::Offset CloseGroup{ 0x73490 };
		inline constexpr REL::Offset FindForm{ 0x734D0 };
		inline constexpr REL::Offset NextGroup{ 0x73660 };
		inline constexpr REL::Offset StartAndEndGroupsForForm{ 0x736C0 };
		inline constexpr REL::Offset CloseAllOpenGroups{ 0x73830 };
		inline constexpr REL::Offset IsFileVersionTooHigh{ 0x738A0 };
		inline constexpr REL::Offset FreeDecompressedBuffer{ 0x73960 };
		inline constexpr REL::Offset GetThreadSafeFile{ 0x739B0 };
		inline constexpr REL::Offset GetThreadSafeFileForThread{ 0x73AE0 };
		inline constexpr REL::Offset GetThreadSafeParent{ 0x73C70 };
		inline constexpr REL::Offset DecompressCurrentForm{ 0x740A0 };
	}

	namespace TESFlora
	{
		inline constexpr REL::Offset ctor{ 0x108450 };
	}

	namespace TESFollowPackageData
	{
		inline constexpr REL::Offset ctor{ 0x27BFD0 };
	}

	namespace TESForm
	{
		inline constexpr REL::Offset GetFormType{ 0x1170 };
		inline constexpr REL::Offset GetInitialized{ 0x13E0 };
		inline constexpr REL::Offset QEndianSwapOnSave{ 0x1500 };
		inline constexpr REL::Offset GetTemporary{ 0x77C0 };
		inline constexpr REL::Offset GetDisabledOrDeleted{ 0x37B90 };
		inline constexpr REL::Offset GetDelete{ 0x40D80 };
		inline constexpr REL::Offset GetDisabled{ 0x40DA0 };
		inline constexpr REL::Offset GetFormTypeString{ 0x40E30 };
		inline constexpr REL::Offset GetFireOff{ 0x48A20 };
		inline constexpr REL::Offset GetDestructible{ 0x52370 };
		inline constexpr REL::Offset GetAltered{ 0x60340 };
		inline constexpr REL::Offset GetFormTypeString_1{ 0x612B0 };
		inline constexpr REL::Offset SetStillLoading{ 0x6A010 };
		inline constexpr REL::Offset GetFormBuffer{ 0x73070 };
		inline constexpr REL::Offset GetFormBufferSize{ 0x73080 };
		inline constexpr REL::Offset GetFormEditorIDLength{ 0x74CB0 };
		inline constexpr REL::Offset GetDestroyed{ 0x77BA0 };
		inline constexpr REL::Offset ctor{ 0x83370 };
		inline constexpr REL::Offset GetFormByNumericID{ 0x839C0 };
		inline constexpr REL::Offset GetFormByEditorID{ 0x83A00 };
		inline constexpr REL::Offset RemoveFromDataStructures{ 0x83C70 };
		inline constexpr REL::Offset CompressSaveBuffer{ 0x83D70 };
		inline constexpr REL::Offset SetTemporary{ 0x84490 };
		inline constexpr REL::Offset SetEmpty{ 0x84580 };
		inline constexpr REL::Offset SetDestroyed{ 0x84650 };
		inline constexpr REL::Offset SetDestructible{ 0x846A0 };
		inline constexpr REL::Offset SetFireOff{ 0x84A70 };
		inline constexpr REL::Offset SetInitialized{ 0x84AB0 };
		inline constexpr REL::Offset SetDisabled{ 0x84AF0 };
		inline constexpr REL::Offset IsDefaultForm{ 0x84B40 };
		inline constexpr REL::Offset ForceChange{ 0x84B90 };
		inline constexpr REL::Offset SaveGameDataOLD{ 0x84CE0 };
		inline constexpr REL::Offset LoadGameDataOLD{ 0x84D00 };
		inline constexpr REL::Offset SaveNumericID{ 0x84D20 };
		inline constexpr REL::Offset LoadNumericID{ 0x84D40 };
		inline constexpr REL::Offset IsDefaultForm_1{ 0x84E40 };
		inline constexpr REL::Offset GetFile{ 0x84E60 };
		inline constexpr REL::Offset LoadForm{ 0x85110 };
		inline constexpr REL::Offset CopyAllComponents{ 0x851B0 };
		inline constexpr REL::Offset CompareAllComponents{ 0x85270 };
		inline constexpr REL::Offset StartForm{ 0x855A0 };
		inline constexpr REL::Offset CloseForm{ 0x85680 };
		inline constexpr REL::Offset AddChunk{ 0x856D0 };
		inline constexpr REL::Offset AddChunkArray{ 0x856F0 };
		inline constexpr REL::Offset AddChunkArray_1{ 0x85710 };
		inline constexpr REL::Offset AddChunkArray32{ 0x85750 };
		inline constexpr REL::Offset AddChunkArray16{ 0x85820 };
		inline constexpr REL::Offset AddChunk_1{ 0x858F0 };
		inline constexpr REL::Offset AddChunk_2{ 0x85910 };
		inline constexpr REL::Offset AddChunk_3{ 0x85950 };
		inline constexpr REL::Offset __AddChunkData{ 0x85990 };
		inline constexpr REL::Offset GetFormIDAsSaved{ 0x85B60 };
		inline constexpr REL::Offset FormIDMatchesWithoutIndex{ 0x85BE0 };
		inline constexpr REL::Offset AddCompileIndex{ 0x85D50 };
		inline constexpr REL::Offset SaveData{ 0x85E00 };
		inline constexpr REL::Offset __SaveData{ 0x85E20 };
		inline constexpr REL::Offset LoadData{ 0x861F0 };
		inline constexpr REL::Offset GetDataSizeAdded{ 0x86620 };
		inline constexpr REL::Offset GetFormTypeFromFormString{ 0x86890 };
		inline constexpr REL::Offset GetNoCollision{ 0x10D4A0 };
		inline constexpr REL::Offset GetFileCount{ 0x1504E0 };
		inline constexpr REL::Offset SetDisableFade{ 0x16C780 };
		inline constexpr REL::Offset IsStillLoading{ 0x176D30 };
		inline constexpr REL::Offset GetFormID{ 0x44E3A0 };
	}

	namespace TESFullName
	{
		inline constexpr REL::Offset ctor{ 0x2D00 };
		inline constexpr REL::Offset GetFullName{ 0x82720 };
		inline constexpr REL::Offset Save{ 0x87010 };
		inline constexpr REL::Offset dtor{ 0x191300 };
	}

	namespace TESFurniture
	{
		inline constexpr REL::Offset ctor{ 0x108E00 };
		inline constexpr REL::Offset VerifyMarkers{ 0x109350 };
		inline constexpr REL::Offset CanSitOn{ 0x1093F0 };
		inline constexpr REL::Offset CanSleepOn{ 0x109420 };
		inline constexpr REL::Offset GetMarkerEnabled{ 0x109450 };
		inline constexpr REL::Offset IsSleepMarker{ 0x1094F0 };
		inline constexpr REL::Offset IsSitMarker{ 0x109510 };
		inline constexpr REL::Offset GetMarkerTargetOffset{ 0x109920 };
		inline constexpr REL::Offset GetMarkerHeadingOffset{ 0x1099C0 };
	}

	namespace TESGlobal
	{
		inline constexpr REL::Offset GetType{ 0x129EA0 };
	}

	namespace TESGrass
	{
		inline constexpr REL::Offset ctor{ 0x109A10 };
	}

	namespace TESGrass_GRASS_DATA
	{
		inline constexpr REL::Offset Endian{ 0x10A120 };
	}

	namespace TESHair
	{
		inline constexpr REL::Offset ctor{ 0x1FDAA0 };
		inline constexpr REL::Offset CanBeHairForNPC{ 0x1FDFA0 };
	}

	namespace TESHealthForm
	{
		inline constexpr REL::Offset ctor{ 0x871D0 };
		inline constexpr REL::Offset dtor{ 0x87200 };
		inline constexpr REL::Offset GetFormAsHealthForm{ 0x872E0 };
		inline constexpr REL::Offset GetFormHealth{ 0x873D0 };
	}

	namespace TESIcon
	{
		inline constexpr REL::Offset ctor{ 0x2C20 };
		inline constexpr REL::Offset dtor{ 0x2C40 };
	}

	namespace TESIdleForm
	{
		inline constexpr REL::Offset GetConditions{ 0x36AA0 };
		inline constexpr REL::Offset ctor{ 0x1FE040 };
		inline constexpr REL::Offset InitParents{ 0x1FEDB0 };
		inline constexpr REL::Offset FixNextIdles{ 0x1FEFA0 };
		inline constexpr REL::Offset GetIdleAnimGroupSection{ 0x1FF160 };
		inline constexpr REL::Offset CheckIdleFile{ 0x1FF280 };
		inline constexpr REL::Offset GetIdleToPlay{ 0x1FF2E0 };
		inline constexpr REL::Offset CheckConditions{ 0x1FF430 };
		inline constexpr REL::Offset GetChildByIndex{ 0x1FF4D0 };
		inline constexpr REL::Offset RemoveChildAtIndex{ 0x1FF560 };
		inline constexpr REL::Offset RemoveChild{ 0x1FF5D0 };
		inline constexpr REL::Offset DetachFromParent{ 0x1FF610 };
	}

	namespace TESIdleManager
	{
		inline constexpr REL::Offset ctor{ 0x1FFAF0 };
		inline constexpr REL::Offset dtor{ 0x1FFB60 };
		inline constexpr REL::Offset DestroyRootIdleArrayForms{ 0x200030 };
		inline constexpr REL::Offset AddRootIdleArray{ 0x200170 };
		inline constexpr REL::Offset AddRootIdleArray_1{ 0x2004F0 };
		inline constexpr REL::Offset GetRootIdleArray{ 0x200560 };
		inline constexpr REL::Offset GetRootIdleArray_1{ 0x2005C0 };
		inline constexpr REL::Offset GetLooseIdleArray{ 0x200690 };
		inline constexpr REL::Offset GetRootFilenameList{ 0x200700 };
		inline constexpr REL::Offset GetIdleDirName{ 0x2007F0 };
		inline constexpr REL::Offset GetUsedItem{ 0x2008F0 };
		inline constexpr REL::Offset SetUsedItem{ 0x200900 };
		inline constexpr REL::Offset SetUsedItemLevel{ 0x200920 };
		inline constexpr REL::Offset SetUsedItemActivate{ 0x200940 };
		inline constexpr REL::Offset GetIdleToPlay{ 0x200950 };
	}

	namespace TESImageSpace
	{
		inline constexpr REL::Offset ctor{ 0x12B310 };
	}

	namespace TESImageSpaceModifiableForm
	{
		inline constexpr REL::Offset ctor{ 0x87420 };
		inline constexpr REL::Offset Save{ 0x87450 };
		inline constexpr REL::Offset InitItem{ 0x87490 };
	}

	namespace TESImageSpaceModifier
	{
		inline constexpr REL::Offset GetTickCount{ 0x129990 };
		inline constexpr REL::Offset ctor{ 0x12B8F0 };
		inline constexpr REL::Offset FlushData{ 0x12ED90 };
		inline constexpr REL::Offset Apply{ 0x131720 };
		inline constexpr REL::Offset ApplyWeather{ 0x131D20 };
		inline constexpr REL::Offset BlendApply{ 0x132220 };
		inline constexpr REL::Offset GetGetHit{ 0x1D2860 };
		inline constexpr REL::Offset GetConcussion{ 0x40BFA0 };
		inline constexpr REL::Offset GetExplosionInFace{ 0x5AD630 };
	}

	namespace TESImageSpaceModifier_ImageSpaceModifierData
	{
		inline constexpr REL::Offset Endian{ 0x131490 };
	}

	namespace TESLandTexture
	{
		inline constexpr REL::Offset ctor{ 0x140C50 };
		inline constexpr REL::Offset QueueTexture{ 0x141540 };
		inline constexpr REL::Offset GetHavokMaterialType{ 0x141570 };
	}

	namespace TESLevCharacter
	{
		inline constexpr REL::Offset ctor{ 0x10A770 };
	}

	namespace TESLevCreature
	{
		inline constexpr REL::Offset ctor{ 0x10ADF0 };
	}

	namespace TESLevSpell
	{
		inline constexpr REL::Offset ctor{ 0x10B8F0 };
		inline constexpr REL::Offset CalculateCurrentForm{ 0x10BD60 };
	}

	namespace TESLeveledList
	{
		inline constexpr REL::Offset SetChanceNone{ 0x2E680 };
		inline constexpr REL::Offset ctor{ 0x87650 };
		inline constexpr REL::Offset dtor{ 0x876D0 };
		inline constexpr REL::Offset GetCalcAllBelow{ 0x877E0 };
		inline constexpr REL::Offset GetUseAll{ 0x878A0 };
		inline constexpr REL::Offset AddScriptAddedLeveledObject{ 0x87A00 };
		inline constexpr REL::Offset GetFormAsLeveledList{ 0x87BE0 };
		inline constexpr REL::Offset CalculateCurrentForm{ 0x87D00 };
		inline constexpr REL::Offset CalculateCurrentFormList{ 0x87F70 };
		inline constexpr REL::Offset CalculateCurrentFormListForRef{ 0x88350 };
		inline constexpr REL::Offset Save{ 0x88400 };
		inline constexpr REL::Offset InitItem{ 0x88570 };
		inline constexpr REL::Offset LoadGame{ 0x88D70 };
	}

	namespace TESLoadScreen
	{
		inline constexpr REL::Offset ctor{ 0x1A66E0 };
		inline constexpr REL::Offset CanDisplayForForm{ 0x1A6EC0 };
		inline constexpr REL::Offset GetLoadScreenTypeDataType{ 0x1A7130 };
	}

	namespace TESLoadScreenType
	{
		inline constexpr REL::Offset ctor{ 0x1A7160 };
	}

	namespace TESModel
	{
		inline constexpr REL::Offset ctor{ 0x88F50 };
		inline constexpr REL::Offset GetDistantModelName{ 0x89120 };
		inline constexpr REL::Offset GetDistantModelName_1{ 0x89190 };
		inline constexpr REL::Offset Save{ 0x891D0 };
		inline constexpr REL::Offset LoadModelChunk{ 0x892D0 };
		inline constexpr REL::Offset GetModel{ 0x895B0 };
	}

	namespace TESModelList
	{
		inline constexpr REL::Offset ctor{ 0x89A60 };
		inline constexpr REL::Offset dtor{ 0x89AE0 };
		inline constexpr REL::Offset Save{ 0x89BA0 };
		inline constexpr REL::Offset LoadModelListChunk{ 0x89CE0 };
		inline constexpr REL::Offset AddNIFFile{ 0x89FA0 };
	}

	namespace TESModelTextureSwap
	{
		inline constexpr REL::Offset ctor{ 0x8A3D0 };
		inline constexpr REL::Offset Save{ 0x8A520 };
		inline constexpr REL::Offset BuildTextureSwapChunkData{ 0x8A590 };
		inline constexpr REL::Offset InitItem{ 0x8AA80 };
		inline constexpr REL::Offset SwapTextures{ 0x8AFE0 };
		inline constexpr REL::Offset UnpackTextureSwapChunkData{ 0x8E3D0 };
	}

	namespace TESNPC
	{
		inline constexpr REL::Offset GetHairColor{ 0x169D0 };
		inline constexpr REL::Offset GetRace{ 0xAC110 };
		inline constexpr REL::Offset ClearHead{ 0x1DD560 };
		inline constexpr REL::Offset ctor{ 0x201170 };
		inline constexpr REL::Offset RandomizeFaceCoord{ 0x201830 };
		inline constexpr REL::Offset SetClass{ 0x201C70 };
		inline constexpr REL::Offset GetHairLength{ 0x202130 };
		inline constexpr REL::Offset GetHeadPartList{ 0x202170 };
		inline constexpr REL::Offset SetHair{ 0x2031E0 };
		inline constexpr REL::Offset SetEyeColor{ 0x203200 };
		inline constexpr REL::Offset FillCharGenPresetList{ 0x203280 };
		inline constexpr REL::Offset CopyHeadData{ 0x203790 };
		inline constexpr REL::Offset GetFaceCoord{ 0x203AD0 };
		inline constexpr REL::Offset GetHair{ 0x203B50 };
		inline constexpr REL::Offset InitValues{ 0x203BE0 };
		inline constexpr REL::Offset GetFormHealthLeveled{ 0x203FC0 };
		inline constexpr REL::Offset GetFormFatigueLeveled{ 0x2040D0 };
		inline constexpr REL::Offset GetRaceHeight{ 0x2041D0 };
		inline constexpr REL::Offset GetWeight{ 0x204250 };
		inline constexpr REL::Offset GetFaceNPC{ 0x2044C0 };
		inline constexpr REL::Offset GetHeadPartModTexture{ 0x2044E0 };
		inline constexpr REL::Offset InitDefaultWorn{ 0x2047C0 };
		inline constexpr REL::Offset CreateBipedAnim{ 0x2055F0 };
		inline constexpr REL::Offset FixNPCNormals{ 0x2056F0 };
		inline constexpr REL::Offset ReplaceRefModel{ 0x205D70 };
		inline constexpr REL::Offset LoadObjectArray{ 0x205E70 };
		inline constexpr REL::Offset BuildObjectArray{ 0x205FC0 };
		inline constexpr REL::Offset InitWorn{ 0x206050 };
		inline constexpr REL::Offset InitWornObject{ 0x2061B0 };
		inline constexpr REL::Offset FixDisplayedHeadParts{ 0x2062E0 };
		inline constexpr REL::Offset InitParts{ 0x206540 };
		inline constexpr REL::Offset LinearFaceGenHeadLoad{ 0x206820 };
		inline constexpr REL::Offset InitHead{ 0x207370 };
		inline constexpr REL::Offset AttachHead{ 0x207420 };
		inline constexpr REL::Offset SaveFaceGen{ 0x209D60 };
		inline constexpr REL::Offset LoadFaceGen{ 0x209F60 };
		inline constexpr REL::Offset InitLoadFaceGen{ 0x20A890 };
		inline constexpr REL::Offset SwapEyes{ 0x20A950 };
		inline constexpr REL::Offset BuildDefaultModelList{ 0x20AF90 };
		inline constexpr REL::Offset SwitchRace{ 0x20B240 };
		inline constexpr REL::Offset GetHeight{ 0x544300 };
	}

	namespace TESObject
	{
		inline constexpr REL::Offset GetModelFileName{ 0x10FD90 };
		inline constexpr REL::Offset GetScaledModelFileName{ 0x10FDF0 };
	}

	namespace TESObjectACTI
	{
		inline constexpr REL::Offset ctor{ 0x1104F0 };
		inline constexpr REL::Offset SetActivationString{ 0x110EA0 };
		inline constexpr REL::Offset GetActivationString{ 0x1110E0 };
	}

	namespace TESObjectARMO
	{
		inline constexpr REL::Offset GetArmorRating{ 0xBE060 };
		inline constexpr REL::Offset GetDamageThreshold{ 0xBE180 };
		inline constexpr REL::Offset ctor{ 0x1129F0 };
		inline constexpr REL::Offset GetArmorWeight{ 0x114410 };
	}

	namespace TESObjectBOOK
	{
		inline constexpr REL::Offset GetScroll{ 0x9700 };
		inline constexpr REL::Offset ctor{ 0x114500 };
		inline constexpr REL::Offset GetTeaches{ 0x114FD0 };
		inline constexpr REL::Offset Read{ 0x115040 };
	}

	namespace TESObjectCELL
	{
		inline constexpr REL::Offset GetInterior{ 0x25FD0 };
		inline constexpr REL::Offset DecQueuedRefCount{ 0x40A10 };
		inline constexpr REL::Offset DecCriticalQueuedRefCount{ 0x40A50 };
		inline constexpr REL::Offset GetLoaded{ 0x50FB0 };
		inline constexpr REL::Offset GetState{ 0x50FD0 };
		inline constexpr REL::Offset GetAttached{ 0x50FF0 };
		inline constexpr REL::Offset ExteriorWorld{ 0x51010 };
		inline constexpr REL::Offset SetState{ 0x512A0 };
		inline constexpr REL::Offset HasWater{ 0x518E0 };
		inline constexpr REL::Offset GetCellName{ 0x51CB0 };
		inline constexpr REL::Offset GetAttaching{ 0x523C0 };
		inline constexpr REL::Offset GetbhkWorld{ 0x543C0 };
		inline constexpr REL::Offset GetFakeExterior{ 0x54B10 };
		inline constexpr REL::Offset GetChildNode{ 0x56FC0 };
		inline constexpr REL::Offset GetLandNode{ 0x5C9A0 };
		inline constexpr REL::Offset AddDecal{ 0xA3FE0 };
		inline constexpr REL::Offset MarkerNode{ 0x124CF0 };
		inline constexpr REL::Offset GetHoursToRespawnCell{ 0x126100 };
		inline constexpr REL::Offset GetCellMopp{ 0x137B30 };
		inline constexpr REL::Offset ctor{ 0x1415B0 };
		inline constexpr REL::Offset CellRefLockEnter{ 0x141AC0 };
		inline constexpr REL::Offset CellRefLockLeave{ 0x141AE0 };
		inline constexpr REL::Offset SaveReferences{ 0x142040 };
		inline constexpr REL::Offset GetGroupBlockKey{ 0x1441B0 };
		inline constexpr REL::Offset GetGroupSubBlockKey{ 0x144210 };
		inline constexpr REL::Offset CalcExtGroupBlockKey{ 0x144280 };
		inline constexpr REL::Offset CalcExtGroupSubBlockKey{ 0x1442C0 };
		inline constexpr REL::Offset GetPublicState{ 0x1443E0 };
		inline constexpr REL::Offset GetCantWaitHere{ 0x1444C0 };
		inline constexpr REL::Offset CantTravelFrom{ 0x144520 };
		inline constexpr REL::Offset GetInteriorData{ 0x1445D0 };
		inline constexpr REL::Offset CreateCellData{ 0x144630 };
		inline constexpr REL::Offset GetDataAmbient{ 0x144750 };
		inline constexpr REL::Offset GetDataDirectional{ 0x144830 };
		inline constexpr REL::Offset GetDataDirectionalZ{ 0x144910 };
		inline constexpr REL::Offset GetDataFog{ 0x1449D0 };
		inline constexpr REL::Offset GetDataFogNearPlane{ 0x144AB0 };
		inline constexpr REL::Offset GetDataFogFarPlane{ 0x144B10 };
		inline constexpr REL::Offset GetDataFogPower{ 0x144B70 };
		inline constexpr REL::Offset GetDataClipDist{ 0x144BD0 };
		inline constexpr REL::Offset GetDataY{ 0x144C30 };
		inline constexpr REL::Offset CreateLoadedData{ 0x144CE0 };
		inline constexpr REL::Offset AddAnimatedRef{ 0x1452C0 };
		inline constexpr REL::Offset RemoveAnimatedRef{ 0x145360 };
		inline constexpr REL::Offset AddEmittanceRef{ 0x1453B0 };
		inline constexpr REL::Offset RemoveEmittanceRef{ 0x1454F0 };
		inline constexpr REL::Offset AddScriptedRef{ 0x145560 };
		inline constexpr REL::Offset RemoveScriptedRef{ 0x145590 };
		inline constexpr REL::Offset RemoveActivatingRef{ 0x145670 };
		inline constexpr REL::Offset GetWaterRefList{ 0x145710 };
		inline constexpr REL::Offset AddMultiBoundRef{ 0x145740 };
		inline constexpr REL::Offset GetMultiBoundNode{ 0x145960 };
		inline constexpr REL::Offset CreatePortalGraph{ 0x145B30 };
		inline constexpr REL::Offset ClearPortalGraph{ 0x145C10 };
		inline constexpr REL::Offset Get3D{ 0x145CB0 };
		inline constexpr REL::Offset Load3D{ 0x145CF0 };
		inline constexpr REL::Offset IsNodeCulled{ 0x1468F0 };
		inline constexpr REL::Offset Clear3D{ 0x146970 };
		inline constexpr REL::Offset GetOwner{ 0x146A40 };
		inline constexpr REL::Offset GetOwnershipRank{ 0x146AC0 };
		inline constexpr REL::Offset GetDetachTime{ 0x146AF0 };
		inline constexpr REL::Offset SetDetachTime{ 0x146B10 };
		inline constexpr REL::Offset SetCellOwnership{ 0x146BF0 };
		inline constexpr REL::Offset GetEncounterZone{ 0x146C20 };
		inline constexpr REL::Offset SetDetachTime_1{ 0x146C70 };
		inline constexpr REL::Offset IsActorCellOwner{ 0x146CA0 };
		inline constexpr REL::Offset CheckifTrespassing{ 0x146DA0 };
		inline constexpr REL::Offset IsActorBaseCellOwner{ 0x146EE0 };
		inline constexpr REL::Offset GetLand{ 0x146FB0 };
		inline constexpr REL::Offset SetLand{ 0x1470A0 };
		inline constexpr REL::Offset GetRegionList{ 0x147110 };
		inline constexpr REL::Offset GetWaterHeight{ 0x1471E0 };
		inline constexpr REL::Offset GetWaterHeight_1{ 0x147250 };
		inline constexpr REL::Offset SetWaterHeight{ 0x147440 };
		inline constexpr REL::Offset GetMusicType{ 0x1474B0 };
		inline constexpr REL::Offset GetClimate{ 0x1475B0 };
		inline constexpr REL::Offset GetUsableImageSpace{ 0x147680 };
		inline constexpr REL::Offset GetWaterType{ 0x147770 };
		inline constexpr REL::Offset CreateCanopyShadowMaskForCell{ 0x147830 };
		inline constexpr REL::Offset PlaceCanopyShadowInAdjacentCell{ 0x1479C0 };
		inline constexpr REL::Offset PlaceCanopyShadow{ 0x147AD0 };
		inline constexpr REL::Offset AddReference{ 0x148230 };
		inline constexpr REL::Offset AddReferenceSimple{ 0x148740 };
		inline constexpr REL::Offset AttachReference3D{ 0x148880 };
		inline constexpr REL::Offset PerformCellNodeAttach{ 0x1496B0 };
		inline constexpr REL::Offset DynamicNode{ 0x1497A0 };
		inline constexpr REL::Offset TestObjectAgainstRoom{ 0x1497C0 };
		inline constexpr REL::Offset ActorNode{ 0x14A050 };
		inline constexpr REL::Offset TestObjectAgainstMultibounds{ 0x14A070 };
		inline constexpr REL::Offset StaticNode{ 0x14AA60 };
		inline constexpr REL::Offset QueueAttachChild{ 0x14ABD0 };
		inline constexpr REL::Offset PerformQueuedChildAttaches{ 0x14AE30 };
		inline constexpr REL::Offset ChangeProcessLevel{ 0x14AF40 };
		inline constexpr REL::Offset ProcessActors{ 0x14AF80 };
		inline constexpr REL::Offset PickRandomTeleportDoorInSpace{ 0x14AFB0 };
		inline constexpr REL::Offset FillRecipeContainer{ 0x14B260 };
		inline constexpr REL::Offset SaveGameTest{ 0x14B5B0 };
		inline constexpr REL::Offset ClearReference3D{ 0x14B750 };
		inline constexpr REL::Offset AddMapMarkersToList{ 0x14B830 };
		inline constexpr REL::Offset AddAudioMarkersToList{ 0x14B8C0 };
		inline constexpr REL::Offset AttachSounds{ 0x14B950 };
		inline constexpr REL::Offset UpdateSounds{ 0x14BA00 };
		inline constexpr REL::Offset AttachLights{ 0x14BA80 };
		inline constexpr REL::Offset UpdateLights{ 0x14BAF0 };
		inline constexpr REL::Offset GetLightCount{ 0x14BB90 };
		inline constexpr REL::Offset UpdateReferences3DandProcess{ 0x14BC10 };
		inline constexpr REL::Offset AttachModels{ 0x14BCF0 };
		inline constexpr REL::Offset CalcRefCenterPoint{ 0x14C030 };
		inline constexpr REL::Offset RunScripts{ 0x14C740 };
		inline constexpr REL::Offset AssignPersistentRefsToCellsInWorld{ 0x14C8C0 };
		inline constexpr REL::Offset AddFurnitureToList{ 0x14CA00 };
		inline constexpr REL::Offset RemoveReference{ 0x14CA90 };
		inline constexpr REL::Offset ClearRefList{ 0x14CD20 };
		inline constexpr REL::Offset GetFirstRefr{ 0x14CEE0 };
		inline constexpr REL::Offset GetFirstRefr_1{ 0x14CF20 };
		inline constexpr REL::Offset GetCOCPlacementInfo{ 0x14CFD0 };
		inline constexpr REL::Offset DetermineCOCPlacement{ 0x14D090 };
		inline constexpr REL::Offset EnumReferencesCloseToPointFromInterior{ 0x14D4B0 };
		inline constexpr REL::Offset EnumReferencesCloseToPoint{ 0x14DA20 };
		inline constexpr REL::Offset BuildTeleportDoorList{ 0x14DB50 };
		inline constexpr REL::Offset FindTeleportDoorsForLocation{ 0x14DC00 };
		inline constexpr REL::Offset BuildLocalMapDoorList{ 0x14DCF0 };
		inline constexpr REL::Offset GetWorldSpace{ 0x14DDD0 };
		inline constexpr REL::Offset SetWorldSpace{ 0x14DE10 };
		inline constexpr REL::Offset HandleExpiredReferences{ 0x14DF30 };
		inline constexpr REL::Offset TakeLocalMapPicture{ 0x14E830 };
		inline constexpr REL::Offset TakeExteriorLocalMapPicture{ 0x14EE80 };
		inline constexpr REL::Offset TakeInteriorLocalMapPicture{ 0x14F500 };
		inline constexpr REL::Offset GetDistanceFromPoint{ 0x14FB70 };
		inline constexpr REL::Offset GetScaleBasedOnLocation{ 0x14FD70 };
		inline constexpr REL::Offset IsPointInCellExterior{ 0x150200 };
		inline constexpr REL::Offset LoadAllTempData{ 0x150340 };
		inline constexpr REL::Offset LoadTempDataFromFile{ 0x150500 };
		inline constexpr REL::Offset UnLoadAllTempData{ 0x1508B0 };
		inline constexpr REL::Offset CalcLeveledCreatures{ 0x150C60 };
		inline constexpr REL::Offset FindReferenceInFile{ 0x150E10 };
		inline constexpr REL::Offset FindLandDataInFile{ 0x150F60 };
		inline constexpr REL::Offset GetLootBag{ 0x151110 };
		inline constexpr REL::Offset CreateLootBagAtRef{ 0x151180 };
		inline constexpr REL::Offset FillLootBag{ 0x1512F0 };
		inline constexpr REL::Offset SetLowestProcessToMiddleLow{ 0x151480 };
		inline constexpr REL::Offset GetLowestProcessMiddleLow{ 0x151620 };
		inline constexpr REL::Offset GetPersistentCell{ 0x1516C0 };
		inline constexpr REL::Offset UpdateManagedNodes{ 0x151890 };
		inline constexpr REL::Offset SyncActorNodeToHavok{ 0x152390 };
		inline constexpr REL::Offset RunQueuedParticleUpdates{ 0x152570 };
		inline constexpr REL::Offset UpdateParticlesOnly{ 0x1526F0 };
		inline constexpr REL::Offset UpdateMorphControllersOnly{ 0x152790 };
		inline constexpr REL::Offset AttachToWorld{ 0x152970 };
		inline constexpr REL::Offset Detach{ 0x152BD0 };
		inline constexpr REL::Offset InitHavok{ 0x152DC0 };
		inline constexpr REL::Offset SetupMopp{ 0x1535F0 };
		inline constexpr REL::Offset DetachHavok{ 0x153700 };
		inline constexpr REL::Offset RunAnimations{ 0x153820 };
		inline constexpr REL::Offset UpdateRefSounds{ 0x1538E0 };
		inline constexpr REL::Offset PickWaterDistance{ 0x153BF0 };
		inline constexpr REL::Offset PickWorldDistance{ 0x153D00 };
		inline constexpr REL::Offset Pick{ 0x153EE0 };
		inline constexpr REL::Offset CreateWorld{ 0x154010 };
		inline constexpr REL::Offset MoveExteriorWorld{ 0x1546A0 };
		inline constexpr REL::Offset GetLandHeight{ 0x1547C0 };
		inline constexpr REL::Offset IsFormCellChild{ 0x154810 };
		inline constexpr REL::Offset IsFormTypeCellChild{ 0x1548A0 };
		inline constexpr REL::Offset ToggleCollisionGeometry{ 0x154910 };
		inline constexpr REL::Offset SetCollisionGeometryDisplay{ 0x154960 };
		inline constexpr REL::Offset SetActorCollisionGeometry{ 0x154A20 };
		inline constexpr REL::Offset GetNorthRotation{ 0x155AD0 };
		inline constexpr REL::Offset AdjustCoordForNorthRotation{ 0x155B10 };
		inline constexpr REL::Offset GetSeenData{ 0x155BC0 };
		inline constexpr REL::Offset ClearSeenData{ 0x155BE0 };
		inline constexpr REL::Offset UpdateSeenDataForPlayer{ 0x155C20 };
		inline constexpr REL::Offset UpdateSeenData{ 0x155F60 };
		inline constexpr REL::Offset GetSeenValue{ 0x156870 };
		inline constexpr REL::Offset GetIntSeenSection{ 0x156EF0 };
		inline constexpr REL::Offset UpdateTrees{ 0x1570D0 };
		inline constexpr REL::Offset QueueReferences{ 0x1571A0 };
		inline constexpr REL::Offset UpdateFadeNodes{ 0x1573E0 };
		inline constexpr REL::Offset AddReferencesToLoadedReferenceCollection{ 0x157470 };
		inline constexpr REL::Offset RemoveReferencesFromLoadedReferenceCollection{ 0x1574D0 };
		inline constexpr REL::Offset AddObstaclesAndDoors{ 0x1575D0 };
		inline constexpr REL::Offset RemoveObstaclesAndDoors{ 0x1576C0 };
		inline constexpr REL::Offset SetNavMeshArray{ 0x157760 };
		inline constexpr REL::Offset ProcessAddonNodesForRefs{ 0x1577B0 };
		inline constexpr REL::Offset ClearLocationMarkers{ 0x1578F0 };
		inline constexpr REL::Offset CullChildrenOfMultibounds{ 0x157990 };
		inline constexpr REL::Offset ForceLODFadeIn{ 0x157AE0 };
		inline constexpr REL::Offset FadeToLowDetail{ 0x157C40 };
		inline constexpr REL::Offset ShouldDisplayHighDetail{ 0x157D10 };
		inline constexpr REL::Offset RenderTestCell{ 0x157DD0 };
		inline constexpr REL::Offset RenderTestPos{ 0x158330 };
		inline constexpr REL::Offset RenderTestPosRot{ 0x158430 };
		inline constexpr REL::Offset SaveRenderFailureData{ 0x1586E0 };
		inline constexpr REL::Offset GetLightingTemplate{ 0x158B40 };
		inline constexpr REL::Offset GetLightingTemplateInheritanceFlag{ 0x158B80 };
		inline constexpr REL::Offset RemoveAutoWaterReferenceFromReferencesCurrentWater{ 0x158BA0 };
		inline constexpr REL::Offset ActivateAllSubmergedReferencesIslands{ 0x158C90 };
		inline constexpr REL::Offset GetRefList{ 0x5604F0 };
		inline constexpr REL::Offset GetPortalGraph{ 0x5D9F20 };
	}

	namespace TESObjectCELL_QUEUED_ATTACH
	{
		inline constexpr REL::Offset dtor{ 0x2208D0 };
	}

	namespace TESObjectCLOT
	{
		inline constexpr REL::Offset ctor{ 0x115440 };
	}

	namespace TESObjectCONT
	{
		inline constexpr REL::Offset ctor{ 0x1160F0 };
		inline constexpr REL::Offset CanActivate{ 0x116CD0 };
	}

	namespace TESObjectDOOR
	{
		inline constexpr REL::Offset ctor{ 0x1173E0 };
		inline constexpr REL::Offset IsMinimalUse{ 0x118000 };
		inline constexpr REL::Offset IsSlidingDoor{ 0x118080 };
		inline constexpr REL::Offset HandlePlayerTeleport{ 0x118B70 };
		inline constexpr REL::Offset DoorTeleportPlayerArrivalCallback{ 0x118CF0 };
		inline constexpr REL::Offset CanActorIgnoreLock{ 0x118E60 };
		inline constexpr REL::Offset CanActorIgnoreLock_1{ 0x118F00 };
		inline constexpr REL::Offset AutoDoorCallback{ 0x118F80 };
		inline constexpr REL::Offset IsRandomDoor{ 0x1194D0 };
		inline constexpr REL::Offset RandomlyTeleportsTo{ 0x119500 };
		inline constexpr REL::Offset CanBeRandomTeleport{ 0x119570 };
		inline constexpr REL::Offset FindRandomTeleportTarget{ 0x1195E0 };
		inline constexpr REL::Offset LinkRandomTeleportDoors{ 0x119810 };
		inline constexpr REL::Offset GetRandomTeleportList{ 0x471A30 };
	}

	namespace TESObjectIMOD
	{
		inline constexpr REL::Offset ctor{ 0x119CC0 };
	}

	namespace TESObjectLAND
	{
		inline constexpr REL::Offset HasVertices{ 0x5CB90 };
		inline constexpr REL::Offset ctor{ 0x133120 };
		inline constexpr REL::Offset InitializeStatics{ 0x133420 };
		inline constexpr REL::Offset GetCellX{ 0x133FD0 };
		inline constexpr REL::Offset GetCellY{ 0x134010 };
		inline constexpr REL::Offset GetWorldCellX{ 0x134050 };
		inline constexpr REL::Offset GetWorldCellY{ 0x134080 };
		inline constexpr REL::Offset SetCell{ 0x1340E0 };
		inline constexpr REL::Offset GetLandRemapped{ 0x134140 };
		inline constexpr REL::Offset GetVertex{ 0x134240 };
		inline constexpr REL::Offset GetNormal{ 0x134390 };
		inline constexpr REL::Offset GetColorA{ 0x1345C0 };
		inline constexpr REL::Offset GetDefaultTexture{ 0x135AE0 };
		inline constexpr REL::Offset GetQuadLandNode{ 0x135AF0 };
		inline constexpr REL::Offset GetWorldOffsetForBlock{ 0x135B30 };
		inline constexpr REL::Offset LoadVertices{ 0x135B90 };
		inline constexpr REL::Offset LoadVerticesIntoArrays{ 0x135D00 };
		inline constexpr REL::Offset UnLoadVertices{ 0x136D80 };
		inline constexpr REL::Offset MakeLandTriStrips{ 0x1371B0 };
		inline constexpr REL::Offset Attach3D{ 0x1374F0 };
		inline constexpr REL::Offset ReadMoppCodeFromBuffer{ 0x138C00 };
		inline constexpr REL::Offset IsLoaded{ 0x1394A0 };
		inline constexpr REL::Offset MarkLoaded{ 0x1394C0 };
		inline constexpr REL::Offset CreateLandscape{ 0x139500 };
		inline constexpr REL::Offset InitLandscape{ 0x139960 };
		inline constexpr REL::Offset UpdateMesh{ 0x13A090 };
		inline constexpr REL::Offset GetDefaultWorldHeight{ 0x13A550 };
		inline constexpr REL::Offset GetMainTexture{ 0x13A5E0 };
		inline constexpr REL::Offset GetMainTexture_1{ 0x13A630 };
		inline constexpr REL::Offset GetTexture{ 0x13A700 };
		inline constexpr REL::Offset GetTexturePercent{ 0x13A830 };
		inline constexpr REL::Offset AdjustTextureArrays{ 0x13A940 };
		inline constexpr REL::Offset GetTextureUsePercent{ 0x13AE30 };
		inline constexpr REL::Offset MergeSameFileTextures{ 0x13AEB0 };
		inline constexpr REL::Offset GetVertexLocation{ 0x13B450 };
		inline constexpr REL::Offset GetCoordData{ 0x13B550 };
		inline constexpr REL::Offset CalculateGrasParams{ 0x13BC10 };
		inline constexpr REL::Offset GetLandNormal{ 0x13CAF0 };
		inline constexpr REL::Offset GetGeometry{ 0x13F0E0 };
		inline constexpr REL::Offset GetLandHeight{ 0x13F180 };
		inline constexpr REL::Offset GetMinMaxBlockHeight{ 0x13F390 };
		inline constexpr REL::Offset GetMinMaxLandHeight{ 0x13F440 };
		inline constexpr REL::Offset GetLandColor{ 0x13F570 };
		inline constexpr REL::Offset DrawLandBorder{ 0x13FA40 };
		inline constexpr REL::Offset InitDistantTextureBlending{ 0x1400E0 };
	}

	namespace TESObjectLIGH
	{
		inline constexpr REL::Offset GetSound{ 0x36B0 };
		inline constexpr REL::Offset GetCanCarry{ 0x6F070 };
		inline constexpr REL::Offset ctor{ 0x10C6C0 };
		inline constexpr REL::Offset StopParticlesRecursive{ 0x10D640 };
		inline constexpr REL::Offset GenDynamic{ 0x10D810 };
		inline constexpr REL::Offset Update{ 0x10DE20 };
		inline constexpr REL::Offset Update_1{ 0x10DE60 };
	}

	namespace TESObjectMISC
	{
		inline constexpr REL::Offset ctor{ 0x11A6A0 };
		inline constexpr REL::Offset GetLoopingSound{ 0x4CDD90 };
	}

	namespace TESObjectREFR
	{
		inline constexpr REL::Offset GetAngleOnReference{ 0x30830 };
		inline constexpr REL::Offset IsMultiBoundRef{ 0x39F90 };
		inline constexpr REL::Offset IsMarker{ 0x44ED0 };
		inline constexpr REL::Offset GetLoadedDataFlag{ 0x523E0 };
		inline constexpr REL::Offset GetBackgroundLoadingRef{ 0x7B200 };
		inline constexpr REL::Offset GetActorBone{ 0x90310 };
		inline constexpr REL::Offset SetLocationOnReferenceSimple{ 0x9EEA0 };
		inline constexpr REL::Offset GetExtraData{ 0x127080 };
		inline constexpr REL::Offset ctor{ 0x15A2F0 };
		inline constexpr REL::Offset HasContainer{ 0x15D310 };
		inline constexpr REL::Offset GetIsOfType{ 0x15D3B0 };
		inline constexpr REL::Offset GetAttachedAnimationSaveSize{ 0x15F880 };
		inline constexpr REL::Offset SaveAttachedAnimation{ 0x15F900 };
		inline constexpr REL::Offset ResetAttachedAnimation{ 0x15F970 };
		inline constexpr REL::Offset GetControllerManagerSaveSize{ 0x15FDB0 };
		inline constexpr REL::Offset SaveControllerManager{ 0x15FE70 };
		inline constexpr REL::Offset LoadControllerManager{ 0x15FFA0 };
		inline constexpr REL::Offset GetHavokDataSaveSize{ 0x160350 };
		inline constexpr REL::Offset SaveHavokData{ 0x1604B0 };
		inline constexpr REL::Offset LoadHavokData{ 0x160530 };
		inline constexpr REL::Offset GetCollisionObjectSize{ 0x160870 };
		inline constexpr REL::Offset SaveHavokDataForCollisionObjectOld{ 0x160A10 };
		inline constexpr REL::Offset LoadHavokDataForCollisionObjectOld{ 0x160E70 };
		inline constexpr REL::Offset LoadHavokDataPreVersion81{ 0x161860 };
		inline constexpr REL::Offset LoadHavokDataForCollisionObjectPreVersion81{ 0x161B40 };
		inline constexpr REL::Offset GetOriginalOpenByDefaultState{ 0x161D90 };
		inline constexpr REL::Offset MoveToEditorLocation{ 0x161EF0 };
		inline constexpr REL::Offset Update3DPosition{ 0x162020 };
		inline constexpr REL::Offset GatherHavokSaveData{ 0x162D20 };
		inline constexpr REL::Offset SaveHavokData_1{ 0x162DE0 };
		inline constexpr REL::Offset LoadHavokData_1{ 0x162ED0 };
		inline constexpr REL::Offset GatherHavokSaveDataForCollisionObject{ 0x163120 };
		inline constexpr REL::Offset SaveHavokDataForCollisionObject{ 0x163220 };
		inline constexpr REL::Offset LoadHavokDataForCollisionObject{ 0x163380 };
		inline constexpr REL::Offset CheckSaveAnimation{ 0x163530 };
		inline constexpr REL::Offset SaveAnimation{ 0x163650 };
		inline constexpr REL::Offset LoadAnimation{ 0x1636E0 };
		inline constexpr REL::Offset ResetAnimation{ 0x163890 };
		inline constexpr REL::Offset SetSequencePosition{ 0x163D80 };
		inline constexpr REL::Offset SaveControllerManager_1{ 0x163F30 };
		inline constexpr REL::Offset LoadControllerManager_1{ 0x164010 };
		inline constexpr REL::Offset GetLightingObjectType{ 0x164360 };
		inline constexpr REL::Offset CreateReference{ 0x164480 };
		inline constexpr REL::Offset SetDroppedRef{ 0x164C60 };
		inline constexpr REL::Offset SetTargeted{ 0x164DB0 };
		inline constexpr REL::Offset MustBeVisibleDistant{ 0x164E00 };
		inline constexpr REL::Offset GetVisibleDistant{ 0x164E60 };
		inline constexpr REL::Offset GetIsImposter{ 0x164F00 };
		inline constexpr REL::Offset GetIsInvisibleLODMultType{ 0x165090 };
		inline constexpr REL::Offset SetIsInvisibleLODMultType{ 0x1650D0 };
		inline constexpr REL::Offset HasTemp3D{ 0x1651E0 };
		inline constexpr REL::Offset MustRefPersist{ 0x165260 };
		inline constexpr REL::Offset GetRefPersists{ 0x1653D0 };
		inline constexpr REL::Offset GetPersistFlagValue{ 0x165450 };
		inline constexpr REL::Offset SetRefPersists{ 0x165480 };
		inline constexpr REL::Offset HasTimeControllers{ 0x165580 };
		inline constexpr REL::Offset HasScript{ 0x1656D0 };
		inline constexpr REL::Offset InitScript{ 0x165730 };
		inline constexpr REL::Offset RunScript{ 0x165870 };
		inline constexpr REL::Offset InitAnimation{ 0x1659F0 };
		inline constexpr REL::Offset BuildKFFileList{ 0x166970 };
		inline constexpr REL::Offset EndSequence{ 0x1672C0 };
		inline constexpr REL::Offset GetScriptPointer{ 0x1673C0 };
		inline constexpr REL::Offset GetScriptVariables{ 0x1673E0 };
		inline constexpr REL::Offset GetScale{ 0x167400 };
		inline constexpr REL::Offset SetScale{ 0x167490 };
		inline constexpr REL::Offset GetMyOwner{ 0x167770 };
		inline constexpr REL::Offset GetOwner{ 0x167790 };
		inline constexpr REL::Offset IsPartofEvilFaction{ 0x1678A0 };
		inline constexpr REL::Offset GetOwnershipGlobal{ 0x167960 };
		inline constexpr REL::Offset GetOwnershipRank{ 0x1679F0 };
		inline constexpr REL::Offset SetOwner{ 0x167AD0 };
		inline constexpr REL::Offset SetGlobal{ 0x167B50 };
		inline constexpr REL::Offset SetRank{ 0x167BD0 };
		inline constexpr REL::Offset RemoveOwner{ 0x167C50 };
		inline constexpr REL::Offset GetEncounterZone{ 0x167D20 };
		inline constexpr REL::Offset GetLocationEncounterZone{ 0x167D90 };
		inline constexpr REL::Offset SetEncounterZone{ 0x167DD0 };
		inline constexpr REL::Offset GetCalcLevel{ 0x167E10 };
		inline constexpr REL::Offset GetMarkerUsed{ 0x167F80 };
		inline constexpr REL::Offset SetMarkerUsed{ 0x168020 };
		inline constexpr REL::Offset SetMarkerReserved{ 0x168150 };
		inline constexpr REL::Offset HasFreeMarker{ 0x168260 };
		inline constexpr REL::Offset GetFirstFreeMarkerIndex{ 0x1682C0 };
		inline constexpr REL::Offset FreeUpAllMarkers{ 0x168480 };
		inline constexpr REL::Offset GetMarkerAtIndex{ 0x168500 };
		inline constexpr REL::Offset IsFurniture{ 0x168680 };
		inline constexpr REL::Offset GetClosestFreeMarker{ 0x1686B0 };
		inline constexpr REL::Offset GetHealth{ 0x168AD0 };
		inline constexpr REL::Offset SetHealth{ 0x168BD0 };
		inline constexpr REL::Offset GetRadius{ 0x168CB0 };
		inline constexpr REL::Offset GetTeleport{ 0x168E50 };
		inline constexpr REL::Offset AddTeleport{ 0x168E70 };
		inline constexpr REL::Offset GetLinkedDoorTeleportPosition{ 0x168FA0 };
		inline constexpr REL::Offset GetLinkedDoorTeleportRotation{ 0x169000 };
		inline constexpr REL::Offset GetMapMarkerData{ 0x169060 };
		inline constexpr REL::Offset AddLock{ 0x1690A0 };
		inline constexpr REL::Offset GetMyLock{ 0x169140 };
		inline constexpr REL::Offset GetLock{ 0x169160 };
		inline constexpr REL::Offset GetLockLevel{ 0x1691B0 };
		inline constexpr REL::Offset GetExtraLock{ 0x1691F0 };
		inline constexpr REL::Offset Lock{ 0x169250 };
		inline constexpr REL::Offset UnLock{ 0x1692A0 };
		inline constexpr REL::Offset GetSeed{ 0x1692D0 };
		inline constexpr REL::Offset SetSeed{ 0x169350 };
		inline constexpr REL::Offset GetXTarget{ 0x1693D0 };
		inline constexpr REL::Offset CheckUsesExternalEmittance{ 0x1694C0 };
		inline constexpr REL::Offset GetEmittanceSource{ 0x169580 };
		inline constexpr REL::Offset GetMultiBoundData{ 0x169840 };
		inline constexpr REL::Offset GetMultiBoundHalfExtent{ 0x169880 };
		inline constexpr REL::Offset GetMultiBound{ 0x169920 };
		inline constexpr REL::Offset GetMultiBoundRoom{ 0x1699B0 };
		inline constexpr REL::Offset SetMultiBoundRef{ 0x169AE0 };
		inline constexpr REL::Offset GetLinkedRef{ 0x169B80 };
		inline constexpr REL::Offset SetLinkedRef{ 0x169BA0 };
		inline constexpr REL::Offset DrawRefLink{ 0x169BE0 };
		inline constexpr REL::Offset RedrawRefLinks{ 0x169CB0 };
		inline constexpr REL::Offset DrawActivateRefLink{ 0x169DF0 };
		inline constexpr REL::Offset IsActivatingChildren{ 0x16A250 };
		inline constexpr REL::Offset InitChildActivates{ 0x16A290 };
		inline constexpr REL::Offset UpdateChildActivates{ 0x16A380 };
		inline constexpr REL::Offset ApplyAllDecals{ 0x16A4A0 };
		inline constexpr REL::Offset ClearAllDecals{ 0x16A8D0 };
		inline constexpr REL::Offset SetMerchantContainer{ 0x16A9B0 };
		inline constexpr REL::Offset GetEnableStateParent{ 0x16A9F0 };
		inline constexpr REL::Offset SetEnableStateParent{ 0x16AA10 };
		inline constexpr REL::Offset GetEnableStateInverse{ 0x16AA70 };
		inline constexpr REL::Offset CheckEnableParentLoop{ 0x16AAC0 };
		inline constexpr REL::Offset UpdateEnableStateChildrenFlagsRecursive{ 0x16AC00 };
		inline constexpr REL::Offset GetEnableStateChildList{ 0x16AC90 };
		inline constexpr REL::Offset SetDroppedItemData{ 0x16ACB0 };
		inline constexpr REL::Offset GetPackageStartLocationWorld{ 0x16AD30 };
		inline constexpr REL::Offset GetPackageStartLocationInteriorCell{ 0x16AD80 };
		inline constexpr REL::Offset GetPackageStartLocationCoord{ 0x16ADD0 };
		inline constexpr REL::Offset SetPackageStartLocation{ 0x16AE10 };
		inline constexpr REL::Offset GetRespawn{ 0x16AE60 };
		inline constexpr REL::Offset IsLeveledCreature{ 0x16AF40 };
		inline constexpr REL::Offset HasLeveledCreatureCalced{ 0x16AFC0 };
		inline constexpr REL::Offset RestoreLeveledCreatureOriginalBase{ 0x16B0B0 };
		inline constexpr REL::Offset GetRadioStationRadius{ 0x16B190 };
		inline constexpr REL::Offset GetRadioStationRangeType{ 0x16B210 };
		inline constexpr REL::Offset Is3DHighPriority{ 0x16B250 };
		inline constexpr REL::Offset SetLoadedDataFlag{ 0x16C880 };
		inline constexpr REL::Offset InitHavokForPlaceableWater{ 0x16C8F0 };
		inline constexpr REL::Offset InitHavokForPrimitiveTrigger{ 0x16D7E0 };
		inline constexpr REL::Offset InitHavokForCollisionObject{ 0x16EAB0 };
		inline constexpr REL::Offset InitHavokForAcousticSpace{ 0x16F140 };
		inline constexpr REL::Offset UpdateReference3D{ 0x16F700 };
		inline constexpr REL::Offset FindReferenceFor3D{ 0x16F930 };
		inline constexpr REL::Offset GetOrientation{ 0x16FA00 };
		inline constexpr REL::Offset SetOrientation{ 0x16FA90 };
		inline constexpr REL::Offset MultipleMatrixByRace{ 0x16FAC0 };
		inline constexpr REL::Offset GetBoundMax{ 0x16FC30 };
		inline constexpr REL::Offset Release3DRelatedData{ 0x16FCB0 };
		inline constexpr REL::Offset Set3DSimple{ 0x170F70 };
		inline constexpr REL::Offset ReplaceModel{ 0x1710C0 };
		inline constexpr REL::Offset GetActorBone_1{ 0x171530 };
		inline constexpr REL::Offset ClearInterpolators{ 0x171560 };
		inline constexpr REL::Offset GetModel{ 0x1715D0 };
		inline constexpr REL::Offset GetModelBoundSize{ 0x171600 };
		inline constexpr REL::Offset GetTESModel{ 0x171630 };
		inline constexpr REL::Offset RemoveWeapon{ 0x171B50 };
		inline constexpr REL::Offset MarkAsPickedUp{ 0x172230 };
		inline constexpr REL::Offset MarkAsDeleted{ 0x172270 };
		inline constexpr REL::Offset Is3DCritical{ 0x172350 };
		inline constexpr REL::Offset GetDistanceFromPoint{ 0x172380 };
		inline constexpr REL::Offset GetDistanceFromReference{ 0x1723B0 };
		inline constexpr REL::Offset GetDeltaForAngle{ 0x172500 };
		inline constexpr REL::Offset GetLight{ 0x1725F0 };
		inline constexpr REL::Offset SetLight{ 0x1726E0 };
		inline constexpr REL::Offset AddLight{ 0x1728C0 };
		inline constexpr REL::Offset RemoveLight{ 0x1729E0 };
		inline constexpr REL::Offset KillLight{ 0x172A50 };
		inline constexpr REL::Offset CanBeMoved{ 0x172C80 };
		inline constexpr REL::Offset GetAction{ 0x172D30 };
		inline constexpr REL::Offset SetAction{ 0x172D50 };
		inline constexpr REL::Offset ClearAction{ 0x172DB0 };
		inline constexpr REL::Offset SetActionRef{ 0x172E10 };
		inline constexpr REL::Offset GetActionRef{ 0x172E30 };
		inline constexpr REL::Offset GetDismembered{ 0x173090 };
		inline constexpr REL::Offset Activate{ 0x173170 };
		inline constexpr REL::Offset MoveRefToNewSpace{ 0x173800 };
		inline constexpr REL::Offset Enable{ 0x173F40 };
		inline constexpr REL::Offset Disable{ 0x174400 };
		inline constexpr REL::Offset AddReferenceItem{ 0x174B30 };
		inline constexpr REL::Offset AddBoundObjectItem{ 0x174FA0 };
		inline constexpr REL::Offset WearingObject{ 0x175400 };
		inline constexpr REL::Offset HasObjectId{ 0x175450 };
		inline constexpr REL::Offset GetInventoryItem{ 0x1754A0 };
		inline constexpr REL::Offset GetInventoryCount{ 0x175590 };
		inline constexpr REL::Offset GetInventoryObjectCount{ 0x175610 };
		inline constexpr REL::Offset GetWorldLocation{ 0x175650 };
		inline constexpr REL::Offset SetObjectReference{ 0x175690 };
		inline constexpr REL::Offset SetAngleOnReference{ 0x175700 };
		inline constexpr REL::Offset SetAngleOnReferenceX{ 0x175770 };
		inline constexpr REL::Offset SetAngleOnReferenceY{ 0x1757A0 };
		inline constexpr REL::Offset SetAngleOnReferenceZ{ 0x1757D0 };
		inline constexpr REL::Offset SetLocationOnReference{ 0x175830 };
		inline constexpr REL::Offset GetSpace{ 0x175CA0 };
		inline constexpr REL::Offset GetInterior{ 0x175D10 };
		inline constexpr REL::Offset GetWorldSpace{ 0x175D70 };
		inline constexpr REL::Offset GetVATStarget{ 0x176070 };
		inline constexpr REL::Offset GetInventoryItem_1{ 0x176260 };
		inline constexpr REL::Offset FilteredAddObject{ 0x1764F0 };
		inline constexpr REL::Offset CleanUpTraps{ 0x176760 };
		inline constexpr REL::Offset PreCalcTriStripsShapeAabb{ 0x176D50 };
		inline constexpr REL::Offset GetWeightInContainer{ 0x177250 };
		inline constexpr REL::Offset RestoreRagDollData{ 0x177330 };
		inline constexpr REL::Offset ShowPrimitive{ 0x177390 };
		inline constexpr REL::Offset TransChangeCallback{ 0x177450 };
		inline constexpr REL::Offset DebugDisplayCallback{ 0x177CA0 };
		inline constexpr REL::Offset GetGoldCount{ 0x177D50 };
		inline constexpr REL::Offset HasQuestObject{ 0x177DE0 };
		inline constexpr REL::Offset AddAddonNodes{ 0x177E20 };
		inline constexpr REL::Offset AddMasterParticleAddonNodes{ 0x178060 };
		inline constexpr REL::Offset RemoveMasterParticleAddonNodes{ 0x178170 };
		inline constexpr REL::Offset RemoveSounds{ 0x178250 };
		inline constexpr REL::Offset RemoveAddonNodes{ 0x178300 };
		inline constexpr REL::Offset HasAddonNodes{ 0x178400 };
		inline constexpr REL::Offset HasAddonFlags{ 0x1784B0 };
		inline constexpr REL::Offset RandomizeAddons{ 0x1784F0 };
		inline constexpr REL::Offset IsAnOwner{ 0x1785E0 };
		inline constexpr REL::Offset IsOwnerEvil{ 0x178790 };
		inline constexpr REL::Offset GetMapNameForLocation{ 0x178870 };
		inline constexpr REL::Offset AddTalkingActivatorMobileObjectREFR{ 0x178950 };
		inline constexpr REL::Offset AddLockChange{ 0x1789B0 };
		inline constexpr REL::Offset SetLastFinishedSequence{ 0x178A30 };
		inline constexpr REL::Offset GetTargetType{ 0x179280 };
		inline constexpr REL::Offset IsCrimeToActivate{ 0x179690 };
		inline constexpr REL::Offset AttachSound{ 0x179AC0 };
		inline constexpr REL::Offset CanHaveSound{ 0x17A2F0 };
		inline constexpr REL::Offset ShouldPlaySound{ 0x17A370 };
		inline constexpr REL::Offset UpdateAddonNodeSounds{ 0x17A3C0 };
		inline constexpr REL::Offset UpdateAddonNodeSoundsRecursive{ 0x17A410 };
		inline constexpr REL::Offset SetSayToTopic{ 0x17AD20 };
		inline constexpr REL::Offset FixAttachedBSObjectSizeAndTransform{ 0x17ADA0 };
		inline constexpr REL::Offset GetRelevantWaterHeight{ 0x17B0A0 };
		inline constexpr REL::Offset SetInZone{ 0x17B0D0 };
		inline constexpr REL::Offset QUnderwater{ 0x17B200 };
		inline constexpr REL::Offset SetUnderwater{ 0x17B240 };
		inline constexpr REL::Offset GetInaccessible{ 0x17B460 };
		inline constexpr REL::Offset GetIsHiddenDoor{ 0x17B4B0 };
		inline constexpr REL::Offset RemoveFromAllWater{ 0x17B520 };
		inline constexpr REL::Offset SayForceGoodbyeGreetingToPlayer{ 0x17B7C0 };
		inline constexpr REL::Offset GetSayToTopic{ 0x17BD40 };
		inline constexpr REL::Offset UpdateMultiboundShapeTransformsRecursive{ 0x17BD80 };
		inline constexpr REL::Offset GetRawScale{ 0x198040 };
		inline constexpr REL::Offset GetObjectReference{ 0x3AF430 };
	}

	namespace TESObjectSTAT
	{
		inline constexpr REL::Offset ctor{ 0x11B140 };
	}

	namespace TESObjectTREE
	{
		inline constexpr REL::Offset ctor{ 0x11B6E0 };
		inline constexpr REL::Offset GetBillboardTextureFilename{ 0x11C3B0 };
		inline constexpr REL::Offset CreateBillboardGeomData{ 0x11C490 };
		inline constexpr REL::Offset BuildDistant3D{ 0x11CBA0 };
	}

	namespace TESObjectWEAP
	{
		inline constexpr REL::Offset GetWeaponType{ 0x46390 };
		inline constexpr REL::Offset IsEmbeddedWeapon{ 0x6E8C0 };
		inline constexpr REL::Offset GetIsPlayable{ 0x7BCF0 };
		inline constexpr REL::Offset Get1stPersonModObject{ 0xAB500 };
		inline constexpr REL::Offset GetHideBackpack{ 0xAB730 };
		inline constexpr REL::Offset HasScope{ 0xAD010 };
		inline constexpr REL::Offset HasModScope{ 0xAD030 };
		inline constexpr REL::Offset GetModEffectValue{ 0xBCF60 };
		inline constexpr REL::Offset GetModItem{ 0xBD570 };
		inline constexpr REL::Offset GetModEffect{ 0xBD880 };
		inline constexpr REL::Offset GetFormWeight{ 0xBE380 };
		inline constexpr REL::Offset IsThrownWeapon{ 0xC0BF0 };
		inline constexpr REL::Offset IsRangedWeapon{ 0xC0C30 };
		inline constexpr REL::Offset IsGunWeapon{ 0xC0C60 };
		inline constexpr REL::Offset GetSpeed{ 0xE4620 };
		inline constexpr REL::Offset GetFormClipRounds{ 0xFE160 };
		inline constexpr REL::Offset ctor{ 0x11D770 };
		inline constexpr REL::Offset GetReloadAnim{ 0x11E2A0 };
		inline constexpr REL::Offset GetAttackAnim{ 0x11F5F0 };
		inline constexpr REL::Offset GetAttackSound{ 0x1215A0 };
		inline constexpr REL::Offset GetAttackSound2{ 0x122440 };
		inline constexpr REL::Offset GetAttackSound2D{ 0x122470 };
		inline constexpr REL::Offset GetAttackFailSound{ 0x1224C0 };
		inline constexpr REL::Offset GetMeleeBlockSound{ 0x1224E0 };
		inline constexpr REL::Offset GetIdleSound{ 0x122500 };
		inline constexpr REL::Offset GetEquipSound{ 0x122520 };
		inline constexpr REL::Offset GetUnEquipSound{ 0x122540 };
		inline constexpr REL::Offset GetImpactData{ 0x122BA0 };
		inline constexpr REL::Offset GetEmbeddedWeaponNode{ 0x122C00 };
		inline constexpr REL::Offset GetCombatWeaponType{ 0x122C80 };
		inline constexpr REL::Offset Fire{ 0x123150 };
		inline constexpr REL::Offset IsAutomaticWeapon{ 0x124B40 };
		inline constexpr REL::Offset GetAmmoPerShot{ 0x124B60 };
		inline constexpr REL::Offset GetMinSpreadDegrees{ 0x124B80 };
		inline constexpr REL::Offset GetSpreadDegrees{ 0x124BE0 };
		inline constexpr REL::Offset ExpelShellCasing{ 0x124DB0 };
		inline constexpr REL::Offset QueueFiles{ 0x125510 };
		inline constexpr REL::Offset GetSoundLevelValue{ 0x125620 };
		inline constexpr REL::Offset GetFireNodeName{ 0x1256B0 };
		inline constexpr REL::Offset GetFireNode{ 0x125700 };
		inline constexpr REL::Offset CalculateReleasePoint{ 0x1257A0 };
		inline constexpr REL::Offset GetCurrentAmmo{ 0x125980 };
		inline constexpr REL::Offset GetProjectile{ 0x125A90 };
		inline constexpr REL::Offset GetProjectile_1{ 0x125AE0 };
		inline constexpr REL::Offset GetNumProjectiles{ 0x125B20 };
		inline constexpr REL::Offset GetReach{ 0x2447F0 };
		inline constexpr REL::Offset IsMeleeWeapon{ 0x2450C0 };
		inline constexpr REL::Offset GetAttackSpeed{ 0x246020 };
		inline constexpr REL::Offset IsTwoHandedWeapon{ 0x246CB0 };
		inline constexpr REL::Offset GetStrengthRequirement{ 0x263B60 };
		inline constexpr REL::Offset GetAttackLoop{ 0x4BFFA0 };
		inline constexpr REL::Offset GetWeaponSkill{ 0x4D85E0 };
		inline constexpr REL::Offset GetAimArc{ 0x5D1B10 };
	}

	namespace TESPackage
	{
		inline constexpr REL::Offset GetPackType{ 0x1CA90 };
		inline constexpr REL::Offset GetPackageSchedule{ 0x1D8A0 };
		inline constexpr REL::Offset GetForceUnequipWeapon{ 0x41B00 };
		inline constexpr REL::Offset GetPackageLocation{ 0x15B980 };
		inline constexpr REL::Offset ctor{ 0x2707C0 };
		inline constexpr REL::Offset CreatePackage{ 0x270B90 };
		inline constexpr REL::Offset GetOncePerDay{ 0x270F90 };
		inline constexpr REL::Offset SetPackType{ 0x270FC0 };
		inline constexpr REL::Offset SetDrawWeaponFlag{ 0x271A20 };
		inline constexpr REL::Offset GetPackageTarget{ 0x271D10 };
		inline constexpr REL::Offset SetPackageLocation{ 0x271D30 };
		inline constexpr REL::Offset SetPackageSecondLocation{ 0x271E10 };
		inline constexpr REL::Offset GetDialogueNoHeadtrack{ 0x272760 };
		inline constexpr REL::Offset GetAcquireRadius{ 0x2728A0 };
		inline constexpr REL::Offset GetInitialTargetCount{ 0x272930 };
		inline constexpr REL::Offset SetDialogueTopic{ 0x2729D0 };
		inline constexpr REL::Offset SetDialogueDoNotControlTarget{ 0x272AA0 };
		inline constexpr REL::Offset GetOrCreateEscortPackageData{ 0x272D10 };
		inline constexpr REL::Offset GetPackageSecondLocation{ 0x272DD0 };
		inline constexpr REL::Offset GetPackageSearchLocation{ 0x272F20 };
		inline constexpr REL::Offset SetPackageTarget{ 0x272FC0 };
		inline constexpr REL::Offset SetPackageSchedule{ 0x273180 };
		inline constexpr REL::Offset SetPackageConditions{ 0x273200 };
		inline constexpr REL::Offset SetCombatStyle{ 0x273400 };
		inline constexpr REL::Offset GetIsCreated{ 0x274D40 };
		inline constexpr REL::Offset SetIsCreated{ 0x274D70 };
		inline constexpr REL::Offset SetNeverRun{ 0x274E70 };
		inline constexpr REL::Offset SetWaiting{ 0x274F30 };
		inline constexpr REL::Offset GetSecondLocationWorld{ 0x274FD0 };
		inline constexpr REL::Offset GetSecondLocationCell{ 0x2751A0 };
		inline constexpr REL::Offset GetSecondLocationCoord{ 0x275360 };
		inline constexpr REL::Offset GetSecondLocationRadius{ 0x275670 };
		inline constexpr REL::Offset GetSecondLocationReference{ 0x2756A0 };
		inline constexpr REL::Offset GetSearchLocationCell{ 0x2757E0 };
		inline constexpr REL::Offset GetSearchLocationCoord{ 0x275830 };
		inline constexpr REL::Offset GetSearchLocationRadius{ 0x2758A0 };
		inline constexpr REL::Offset GetUseWeaponPackageData{ 0x2758F0 };
		inline constexpr REL::Offset GetPatrolPackageData{ 0x275920 };
		inline constexpr REL::Offset GetFollowPackageData{ 0x275950 };
		inline constexpr REL::Offset ComputeInitialTarget{ 0x2759E0 };
		inline constexpr REL::Offset GetLocationWorld{ 0x275A50 };
		inline constexpr REL::Offset GetLocationCell{ 0x275C20 };
		inline constexpr REL::Offset GetLocationCoord{ 0x275DE0 };
		inline constexpr REL::Offset GetLocationReference{ 0x276140 };
		inline constexpr REL::Offset GetLocationRadius{ 0x276280 };
		inline constexpr REL::Offset IsTargetAtSecondLocation{ 0x277570 };
		inline constexpr REL::Offset CalculateProcedureType{ 0x2777B0 };
		inline constexpr REL::Offset GetEscortTargetForPackage{ 0x2780E0 };
		inline constexpr REL::Offset GetEscortFollowDistance{ 0x2784C0 };
		inline constexpr REL::Offset EvaluateEscortReference{ 0x2784F0 };
		inline constexpr REL::Offset IsInterruptPackage{ 0x278610 };
		inline constexpr REL::Offset GetPackageRadiusActorToLocation{ 0x278670 };
		inline constexpr REL::Offset GetPackageRadiusActorToRefTarget{ 0x2787E0 };
		inline constexpr REL::Offset ComparePackageSchedule{ 0x278A80 };
		inline constexpr REL::Offset GetShouldReserveTarget{ 0x278D00 };
		inline constexpr REL::Offset IsitDayofTheWeek{ 0x278D40 };
		inline constexpr REL::Offset IsTargetAnActor{ 0x278EC0 };
		inline constexpr REL::Offset GetObjectTypeFromForm{ 0x279BA0 };
		inline constexpr REL::Offset FormMatchesPackageObjectType{ 0x279E00 };
		inline constexpr REL::Offset CopyAllFlags{ 0x27A1B0 };
		inline constexpr REL::Offset GetSelectiveFalloutBehavior{ 0x27A380 };
		inline constexpr REL::Offset GetDefensive{ 0x27A3F0 };
		inline constexpr REL::Offset GetDrawWeaponFlag{ 0x27A460 };
		inline constexpr REL::Offset GetAlwaysRun{ 0x27A480 };
		inline constexpr REL::Offset SetForceUnequipWeapon{ 0x27A640 };
		inline constexpr REL::Offset GetContinueDuringCombat{ 0x27A700 };
		inline constexpr REL::Offset SetContinueDuringCombat{ 0x27A720 };
		inline constexpr REL::Offset GetCombatAlert{ 0x27A770 };
		inline constexpr REL::Offset GetFOEnableIdleChatterBehavior{ 0x27ABD0 };
		inline constexpr REL::Offset GetFOEnableAvoidRadiationBehavior{ 0x27AC50 };
		inline constexpr REL::Offset GetMustComplete{ 0x27EFD0 };
		inline constexpr REL::Offset SetMustReachLocation{ 0x426B40 };
		inline constexpr REL::Offset SetMustComplete{ 0x426B90 };
		inline constexpr REL::Offset GetPackageConditions{ 0x47EAA0 };
		inline constexpr REL::Offset GetServicesEnabled{ 0x4840D0 };
		inline constexpr REL::Offset GetPCContinue{ 0x4840F0 };
		inline constexpr REL::Offset GetWaiting{ 0x4A6290 };
		inline constexpr REL::Offset GetMustReachLocation{ 0x4B1FF0 };
		inline constexpr REL::Offset GetProcedureType{ 0x5611E0 };
		inline constexpr REL::Offset GetPretendInCombat{ 0x581300 };
		inline constexpr REL::Offset SetProcedureType{ 0x584F60 };
		inline constexpr REL::Offset SandboxGetAllowEating{ 0x5F45E0 };
	}

	namespace TESPackageData
	{
		inline constexpr REL::Offset ctor{ 0x27AD20 };
	}

	namespace TESProduceForm
	{
		inline constexpr REL::Offset ctor{ 0x8B560 };
		inline constexpr REL::Offset Save{ 0x8B5C0 };
		inline constexpr REL::Offset SetAllProductionChances{ 0x8B670 };
		inline constexpr REL::Offset InitItem{ 0x8B720 };
	}

	namespace TESQuest
	{
		inline constexpr REL::Offset GetEnabled{ 0x55620 };
		inline constexpr REL::Offset GetScriptLocals{ 0x19E300 };
		inline constexpr REL::Offset GetCompleted{ 0x19E400 };
		inline constexpr REL::Offset GetObjectiveList{ 0x1D43E0 };
		inline constexpr REL::Offset GetConditions{ 0x1F5760 };
		inline constexpr REL::Offset ctor{ 0x20C4B0 };
		inline constexpr REL::Offset GetObjective{ 0x20C8E0 };
		inline constexpr REL::Offset SetEnabled{ 0x20C9C0 };
		inline constexpr REL::Offset SetCompleted{ 0x20CA30 };
		inline constexpr REL::Offset SetFailed{ 0x20CAF0 };
		inline constexpr REL::Offset SetStageDone{ 0x20D510 };
		inline constexpr REL::Offset GetAllowRepeatStages{ 0x20D5E0 };
		inline constexpr REL::Offset GetCurrentStage{ 0x20D700 };
		inline constexpr REL::Offset ResetQuest{ 0x20D720 };
	}

	namespace TESQuestStage
	{
		inline constexpr REL::Offset Load{ 0x20F440 };
		inline constexpr REL::Offset SetDone{ 0x27FDB0 };
	}

	namespace TESQuestStageItem
	{
		inline constexpr REL::Offset ctor{ 0x20F520 };
		inline constexpr REL::Offset dtor{ 0x20F5F0 };
		inline constexpr REL::Offset Load{ 0x20F6A0 };
		inline constexpr REL::Offset InitItem{ 0x20FA10 };
		inline constexpr REL::Offset Resolve{ 0x20FB60 };
		inline constexpr REL::Offset GetEndQuest{ 0x20FD70 };
		inline constexpr REL::Offset GetLogEntry{ 0x20FDB0 };
	}

	namespace TESQuestTarget
	{
		inline constexpr REL::Offset ctor{ 0x20FF70 };
		inline constexpr REL::Offset dtor{ 0x20FFE0 };
		inline constexpr REL::Offset InitItem{ 0x210040 };
		inline constexpr REL::Offset GetReference{ 0x2101B0 };
	}

	namespace TESRace
	{
		inline constexpr REL::Offset GetPlayable{ 0x19F610 };
		inline constexpr REL::Offset GetDefaultVoiceType{ 0x204780 };
		inline constexpr REL::Offset GetHeadPartNodeName{ 0x205D40 };
		inline constexpr REL::Offset GetFaceCoordNum{ 0x207350 };
		inline constexpr REL::Offset ctor{ 0x210210 };
		inline constexpr REL::Offset GetDefaultHairColor{ 0x213100 };
		inline constexpr REL::Offset GetDefaultHair{ 0x213870 };
		inline constexpr REL::Offset GetHeadPartModel{ 0x213970 };
		inline constexpr REL::Offset GetHeadPartTexture{ 0x213B20 };
		inline constexpr REL::Offset CreateHead{ 0x213C50 };
		inline constexpr REL::Offset KillEGTData{ 0x213FD0 };
		inline constexpr REL::Offset GetFaceGenData{ 0x2141F0 };
		inline constexpr REL::Offset GetBodyTextureFileName{ 0x214640 };
		inline constexpr REL::Offset GetBodyModTextureName{ 0x2147E0 };
		inline constexpr REL::Offset GetBodyTexture{ 0x2149B0 };
	}

	namespace TESRaceForm
	{
		inline constexpr REL::Offset Save{ 0x8B830 };
		inline constexpr REL::Offset InitItem{ 0x8B920 };
	}

	namespace TESReactionForm
	{
		inline constexpr REL::Offset ctor{ 0x8BA00 };
		inline constexpr REL::Offset Save{ 0x8BB70 };
		inline constexpr REL::Offset InitItem{ 0x8BC30 };
		inline constexpr REL::Offset GetSaveSize{ 0x8C2E0 };
		inline constexpr REL::Offset SaveGame{ 0x8C400 };
		inline constexpr REL::Offset LoadGame{ 0x8C640 };
		inline constexpr REL::Offset SaveGame_1{ 0x8C9D0 };
		inline constexpr REL::Offset LoadGame_1{ 0x8CA90 };
	}

	namespace TESRecipe
	{
		inline constexpr REL::Offset ctor{ 0x1A7C50 };
		inline constexpr REL::Offset SetCategory{ 0x1A8040 };
		inline constexpr REL::Offset GetIngredientsList{ 0x1A8080 };
		inline constexpr REL::Offset GetCategory{ 0x2A1B60 };
		inline constexpr REL::Offset GetConditions{ 0x2A9540 };
	}

	namespace TESRegion
	{
		inline constexpr REL::Offset UpdateWeather{ 0xF1050 };
	}

	namespace TESRegionData
	{
		inline constexpr REL::Offset ctor{ 0xF1400 };
		inline constexpr REL::Offset GetOverride{ 0xF1540 };
		inline constexpr REL::Offset SetOverride{ 0xF15A0 };
		inline constexpr REL::Offset SetPriority{ 0xF15C0 };
		inline constexpr REL::Offset GetPriority{ 0x1BB4D0 };
	}

	namespace TESRegionDataImposter
	{
		inline constexpr REL::Offset SetImposterVisible{ 0xF24E0 };
	}

	namespace TESRegionDataLandscape
	{
		inline constexpr REL::Offset ctor{ 0xF2790 };
		inline constexpr REL::Offset GetDefaultFullMaskTextureProp{ 0xF2EE0 };
	}

	namespace TESRegionDataList
	{
		inline constexpr REL::Offset Find{ 0xF35B0 };
	}

	namespace TESRegionDataManager
	{
		inline constexpr REL::Offset ctor{ 0xF3660 };
	}

	namespace TESRegionDataMap
	{
		inline constexpr REL::Offset ctor{ 0xF3CA0 };
		inline constexpr REL::Offset ctor_1{ 0xF3D50 };
	}

	namespace TESRegionGrassObject
	{
		inline constexpr REL::Offset ctor{ 0xF5620 };
	}

	namespace TESRegionGrassObjectList
	{
		inline constexpr REL::Offset ctor{ 0xF5DB0 };
	}

	namespace TESRegionList
	{
		inline constexpr REL::Offset ctor{ 0xF6320 };
	}

	namespace TESRegionObject
	{
		inline constexpr REL::Offset ConvertNormalToAngle{ 0xF6E00 };
	}

	namespace TESRegionPointList
	{
		inline constexpr REL::Offset LoadPoints{ 0xF79F0 };
	}

	namespace TESReputation
	{
		inline constexpr REL::Offset ctor{ 0x2153C0 };
		inline constexpr REL::Offset GetReputationValue{ 0x2155C0 };
		inline constexpr REL::Offset DisplayReputationTitleChange{ 0x2155F0 };
		inline constexpr REL::Offset AddReputationValue{ 0x215730 };
		inline constexpr REL::Offset RemoveReputationValue{ 0x215A00 };
		inline constexpr REL::Offset AddReputationValueByLevel{ 0x215C90 };
		inline constexpr REL::Offset RemoveReputationValueByLevel{ 0x215FA0 };
		inline constexpr REL::Offset GetReputationTitle{ 0x216710 };
		inline constexpr REL::Offset GetReputationIcon{ 0x2167D0 };
		inline constexpr REL::Offset GetReputationDesc{ 0x216890 };
		inline constexpr REL::Offset GetReputationLevel{ 0x216950 };
		inline constexpr REL::Offset GetReputationPct{ 0x216A60 };
		inline constexpr REL::Offset GetReputationThreshold{ 0x216A90 };
		inline constexpr REL::Offset CommitCrime{ 0x216C20 };
	}

	namespace TESResponse
	{
		inline constexpr REL::Offset ctor{ 0x216CE0 };
		inline constexpr REL::Offset GetResponseText{ 0x216DE0 };
		inline constexpr REL::Offset TestAudioFullPath{ 0x216E20 };
		inline constexpr REL::Offset GetAudioFullPath{ 0x216F40 };
		inline constexpr REL::Offset GetAudioQuestTopicCombined{ 0x2172C0 };
		inline constexpr REL::Offset GetAudioFilename{ 0x217400 };
		inline constexpr REL::Offset Load{ 0x217530 };
		inline constexpr REL::Offset InitItem{ 0x217580 };
	}

	namespace TESSaveLoadGame
	{
		inline constexpr REL::Offset GetLoading{ 0x7C850 };
		inline constexpr REL::Offset GetCurrentlyLoadingFormHeader{ 0xFD3C0 };
		inline constexpr REL::Offset GetCurrentlySavingFormHeader{ 0xFD3E0 };
		inline constexpr REL::Offset GetRevertBefore{ 0x15F5B0 };
		inline constexpr REL::Offset ctor{ 0x456380 };
		inline constexpr REL::Offset ResetCurrentVersion{ 0x456850 };
		inline constexpr REL::Offset RemoveChanges{ 0x456C70 };
		inline constexpr REL::Offset SaveGame{ 0x456CA0 };
		inline constexpr REL::Offset DeleteSaveGame{ 0x457950 };
		inline constexpr REL::Offset SaveGameDataOLD{ 0x4579B0 };
		inline constexpr REL::Offset LoadGameDataOLD{ 0x4579E0 };
		inline constexpr REL::Offset SaveNumericID{ 0x457A10 };
		inline constexpr REL::Offset LoadNumericID{ 0x457AA0 };
		inline constexpr REL::Offset ReadFile{ 0x457BA0 };
		inline constexpr REL::Offset AdvanceBuffer{ 0x457BD0 };
		inline constexpr REL::Offset ResetReferencePosition{ 0x457D10 };
		inline constexpr REL::Offset SaveGlobalData{ 0x458030 };
		inline constexpr REL::Offset SaveGlobals{ 0x458480 };
		inline constexpr REL::Offset SaveFinalData{ 0x458570 };
		inline constexpr REL::Offset CreateBuffer{ 0x458600 };
		inline constexpr REL::Offset SaveBuffer{ 0x4586A0 };
		inline constexpr REL::Offset DestroyBuffer{ 0x458700 };
		inline constexpr REL::Offset LoadForm{ 0x458730 };
		inline constexpr REL::Offset InitForms{ 0x458AF0 };
		inline constexpr REL::Offset CheckNewReference{ 0x459120 };
		inline constexpr REL::Offset CheckFlags{ 0x4591B0 };
		inline constexpr REL::Offset LoadCell{ 0x459690 };
		inline constexpr REL::Offset CreateChangedReference{ 0x4598D0 };
		inline constexpr REL::Offset CreateReference{ 0x459A90 };
		inline constexpr REL::Offset CreateReferenceFromFile{ 0x459F20 };
		inline constexpr REL::Offset CreatePackage{ 0x45A240 };
		inline constexpr REL::Offset ClearFormID{ 0x45A290 };
		inline constexpr REL::Offset DeleteForm{ 0x45A2E0 };
		inline constexpr REL::Offset GetInitialDataSaveSize{ 0x45A450 };
		inline constexpr REL::Offset SaveInitialData{ 0x45A520 };
		inline constexpr REL::Offset LoadInitialData{ 0x45AC30 };
		inline constexpr REL::Offset ComputeArmorHash{ 0x45B170 };
		inline constexpr REL::Offset SavePluginList{ 0x45B240 };
		inline constexpr REL::Offset BuildChangesString{ 0x45B320 };
		inline constexpr REL::Offset QueueBufferLoad{ 0x45EFC0 };
		inline constexpr REL::Offset LoadAnimations{ 0x45F070 };
		inline constexpr REL::Offset LoadAnimationForReference{ 0x45F150 };
		inline constexpr REL::Offset QueueAttachedAnimationLoad{ 0x45F2B0 };
		inline constexpr REL::Offset LoadAttachedAnimations{ 0x45F2E0 };
		inline constexpr REL::Offset LoadCharControllers{ 0x45F450 };
		inline constexpr REL::Offset QueueHavokDataLoad{ 0x45F5A0 };
		inline constexpr REL::Offset LoadHavokData{ 0x45F5D0 };
		inline constexpr REL::Offset LoadHavokDataForReference{ 0x45F6C0 };
		inline constexpr REL::Offset FinalizeQueuedForms{ 0x45F750 };
		inline constexpr REL::Offset LoadQueuedData{ 0x45F850 };
		inline constexpr REL::Offset GetSaveGameDataOLD{ 0x4600B0 };
		inline constexpr REL::Offset ReadSaveGameDataOLD{ 0x460390 };
		inline constexpr REL::Offset RetrieveSaveGameDataOLD{ 0x4607E0 };
		inline constexpr REL::Offset GenerateSaveGameFileName{ 0x460AE0 };
		inline constexpr REL::Offset LoadHeader{ 0x460E20 };
		inline constexpr REL::Offset SaveHeader{ 0x461130 };
		inline constexpr REL::Offset GetSavingAllowed{ 0x4616F0 };
		inline constexpr REL::Offset AddCreatedBaseObject{ 0x461780 };
		inline constexpr REL::Offset SaveCreatedBaseObjects{ 0x461820 };
		inline constexpr REL::Offset GetNumericIDFromArray{ 0x461C00 };
		inline constexpr REL::Offset LoadNumericIDArrays{ 0x461D10 };
		inline constexpr REL::Offset UpdateLoadingSequence{ 0x461EA0 };
		inline constexpr REL::Offset SetCurrentVersion{ 0x461EE0 };
		inline constexpr REL::Offset TestAllCells{ 0x461F20 };
		inline constexpr REL::Offset ResetVersions{ 0x4620F0 };
		inline constexpr REL::Offset UseSaveGameBlocks{ 0x462110 };
		inline constexpr REL::Offset IsInvalidPoint{ 0x462430 };
		inline constexpr REL::Offset SafetyCheckReferencePositionAndAngle{ 0x4624E0 };
		inline constexpr REL::Offset CleanUpExpiredData{ 0x4627B0 };
		inline constexpr REL::Offset AllowChanges{ 0x4A8150 };
		inline constexpr REL::Offset UnloadForm{ 0x4D0370 };
		inline constexpr REL::Offset GetCurrentVersion{ 0x4DF040 };
	}

	namespace TESScriptableForm
	{
		inline constexpr REL::Offset GetFormScript{ 0x826D0 };
		inline constexpr REL::Offset ctor{ 0x8CC50 };
		inline constexpr REL::Offset Save{ 0x8CCA0 };
	}

	namespace TESSkill
	{
		inline constexpr REL::Offset ctor{ 0x217DA0 };
		inline constexpr REL::Offset ResetData{ 0x217EA0 };
	}

	namespace TESSound
	{
		inline constexpr REL::Offset GetData{ 0xE75D0 };
		inline constexpr REL::Offset GetFilename{ 0x111840 };
		inline constexpr REL::Offset GetMaxDistance{ 0x153B90 };
		inline constexpr REL::Offset GetPassThroughSound{ 0x1E2A70 };
		inline constexpr REL::Offset ctor{ 0x1E2B70 };
		inline constexpr REL::Offset GenerateDefaultObjects{ 0x1E3600 };
		inline constexpr REL::Offset ConvertLoopFlag{ 0x1E39B0 };
	}

	namespace TESSound_SOUND_DATA
	{
		inline constexpr REL::Offset Endian{ 0x1E3020 };
	}

	namespace TESSound_SOUND_DATA2
	{
		inline constexpr REL::Offset Endian{ 0x1E3510 };
	}

	namespace TESSoundFile
	{
		inline constexpr REL::Offset Save{ 0x8CEA0 };
		inline constexpr REL::Offset GetSoundFileLength{ 0x8CEE0 };
		inline constexpr REL::Offset ctor{ 0x1912D0 };
	}

	namespace TESSpellList
	{
		inline constexpr REL::Offset ctor{ 0x8CFE0 };
		inline constexpr REL::Offset dtor{ 0x8D060 };
		inline constexpr REL::Offset GetLeveledSpellList{ 0x8D150 };
		inline constexpr REL::Offset AddSpell{ 0x8D210 };
		inline constexpr REL::Offset AddSpell_1{ 0x8D290 };
		inline constexpr REL::Offset Save{ 0x8D330 };
		inline constexpr REL::Offset InitItem{ 0x8D400 };
		inline constexpr REL::Offset SaveGame{ 0x8E040 };
		inline constexpr REL::Offset LoadGame{ 0x8E140 };
	}

	namespace TESTerrainLODManager
	{
		inline constexpr REL::Offset GetGrassNode{ 0x14F4C0 };
		inline constexpr REL::Offset ctor{ 0x17CD10 };
		inline constexpr REL::Offset InitGrass{ 0x17CF00 };
		inline constexpr REL::Offset UpdateGrass{ 0x17D0A0 };
		inline constexpr REL::Offset UpdateGrassForCell{ 0x17D4F0 };
		inline constexpr REL::Offset CreateGrass{ 0x17DE00 };
	}

	namespace TESTexture
	{
		inline constexpr REL::Offset SetTextureName{ 0x89100 };
		inline constexpr REL::Offset ctor{ 0x8E270 };
		inline constexpr REL::Offset dtor{ 0x8E2E0 };
		inline constexpr REL::Offset Save{ 0x8E370 };
		inline constexpr REL::Offset GetAsNormalFile{ 0x8E5B0 };
		inline constexpr REL::Offset GetAsNormalFile_1{ 0x8E660 };
		inline constexpr REL::Offset GetAsSkinFile{ 0x8E6C0 };
		inline constexpr REL::Offset GetTextureName{ 0x8E730 };
	}

	namespace TESTextureList
	{
		inline constexpr REL::Offset ctor{ 0x88FD0 };
		inline constexpr REL::Offset dtor{ 0x88FF0 };
		inline constexpr REL::Offset LoadFromBuffer{ 0x89670 };
		inline constexpr REL::Offset Load{ 0x89940 };
		inline constexpr REL::Offset Copy{ 0x899F0 };
	}

	namespace TESTextureListArray
	{
		inline constexpr REL::Offset ClearData{ 0x8A010 };
		inline constexpr REL::Offset Load{ 0x8A0D0 };
		inline constexpr REL::Offset Copy{ 0x8A2C0 };
	}

	namespace TESTopic
	{
		inline constexpr REL::Offset ctor{ 0x218580 };
		inline constexpr REL::Offset SetDummyPrompt{ 0x219010 };
		inline constexpr REL::Offset IsTopLevel{ 0x219410 };
		inline constexpr REL::Offset InsertInfo{ 0x219820 };
		inline constexpr REL::Offset GetOwnerQuest{ 0x219D00 };
		inline constexpr REL::Offset IsRemappedRumors{ 0x219DF0 };
		inline constexpr REL::Offset GetInfoByID{ 0x219E10 };
		inline constexpr REL::Offset AddDefaultTopics{ 0x21A040 };
		inline constexpr REL::Offset GetTopic{ 0x21A2D0 };
		inline constexpr REL::Offset GetOwnerTopic{ 0x21A310 };
		inline constexpr REL::Offset CompareTopics{ 0x21A450 };
		inline constexpr REL::Offset GetMatchingInfo{ 0x21A720 };
		inline constexpr REL::Offset GetMatchingInfo_1{ 0x21A760 };
		inline constexpr REL::Offset GetMatchingInfo_2{ 0x21A790 };
		inline constexpr REL::Offset GetMatchingInfo_3{ 0x21A7D0 };
		inline constexpr REL::Offset CreateDialogueItem{ 0x21B320 };
		inline constexpr REL::Offset CreateConversation{ 0x21B440 };
		inline constexpr REL::Offset IsPersuasion{ 0x43DE60 };
	}

	namespace TESTopicInfo
	{
		inline constexpr REL::Offset SetSpeaker{ 0x9480 };
		inline constexpr REL::Offset IsRunImmediately{ 0x179200 };
		inline constexpr REL::Offset GetInfoIndex{ 0x219A70 };
		inline constexpr REL::Offset IsSayOnce{ 0x219B20 };
		inline constexpr REL::Offset IsSayOnceADay{ 0x21AEF0 };
		inline constexpr REL::Offset ctor{ 0x21CCD0 };
		inline constexpr REL::Offset SetPrompt{ 0x21CFD0 };
		inline constexpr REL::Offset ClearResponseList{ 0x21D230 };
		inline constexpr REL::Offset SetInfoConditions{ 0x21E0F0 };
		inline constexpr REL::Offset GetInfoDisplayText{ 0x21E2B0 };
		inline constexpr REL::Offset CheckCondition{ 0x21E600 };
		inline constexpr REL::Offset CloneResponseList{ 0x21E760 };
		inline constexpr REL::Offset GetResponseList{ 0x21E780 };
		inline constexpr REL::Offset GetResultScript{ 0x21EB60 };
		inline constexpr REL::Offset AddTopicList{ 0x21F150 };
		inline constexpr REL::Offset RunResult{ 0x21F170 };
		inline constexpr REL::Offset SetSaidOnce{ 0x21F220 };
		inline constexpr REL::Offset GetDifficulty{ 0x21F2B0 };
		inline constexpr REL::Offset SetInfoIndex{ 0x21F340 };
		inline constexpr REL::Offset IsSpeechChallenge{ 0x3627C0 };
		inline constexpr REL::Offset GetActorValue{ 0x3627E0 };
		inline constexpr REL::Offset GetPerk{ 0x362820 };
	}

	namespace TESTrapListener
	{
		inline constexpr REL::Offset ctor{ 0x22D5C0 };
	}

	namespace TESUseItemPackageData
	{
		inline constexpr REL::Offset ctor{ 0x27C770 };
	}

	namespace TESValueForm
	{
		inline constexpr REL::Offset ctor{ 0x8E7A0 };
		inline constexpr REL::Offset dtor{ 0x8E7D0 };
		inline constexpr REL::Offset GetFormValue{ 0x8E8A0 };
		inline constexpr REL::Offset SetFormValue{ 0x8E960 };
		inline constexpr REL::Offset SaveGame{ 0x8EA40 };
		inline constexpr REL::Offset LoadGame{ 0x8EA80 };
	}

	namespace TESWaterForm
	{
		inline constexpr REL::Offset ctor{ 0x17EBA0 };
		inline constexpr REL::Offset GetData{ 0x17EEF0 };
		inline constexpr REL::Offset GetMaterialName{ 0x17FDA0 };
		inline constexpr REL::Offset GetDangerous{ 0x180060 };
		inline constexpr REL::Offset GetPlaceableAutoWater{ 0x180130 };
		inline constexpr REL::Offset GetPlaceableLODWater{ 0x180330 };
	}

	namespace TESWaterListener
	{
		inline constexpr REL::Offset ctor{ 0x22E630 };
		inline constexpr REL::Offset SetWaterHeight{ 0x22E710 };
		inline constexpr REL::Offset PlaySplashEffects{ 0x22E970 };
		inline constexpr REL::Offset PlaySplashEffects_1{ 0x22EB50 };
		inline constexpr REL::Offset RefreshExteriorWaterHeights{ 0x22F460 };
		inline constexpr REL::Offset RemoveReferenceFromZone{ 0x22FC70 };
		inline constexpr REL::Offset ShouldProcessRigidBody{ 0x22FF10 };
		inline constexpr REL::Offset ProcessRigidBody{ 0x230170 };
		inline constexpr REL::Offset HandleQueuedRemovals{ 0x231370 };
	}

	namespace TESWaterSystem
	{
		inline constexpr REL::Offset ctor{ 0xE1650 };
		inline constexpr REL::Offset UpdateWaterSystem{ 0xE1BC0 };
		inline constexpr REL::Offset GetUseWaterShader{ 0xE2160 };
		inline constexpr REL::Offset GetPlayerUnderwater{ 0xE2180 };
		inline constexpr REL::Offset UpdatePlaceableWater{ 0xE21B0 };
		inline constexpr REL::Offset UpdateLODWater{ 0xE3320 };
		inline constexpr REL::Offset UpdateWaterShaderProperties{ 0xE3590 };
		inline constexpr REL::Offset UpdateWaterNoise{ 0xE3D60 };
		inline constexpr REL::Offset AddPlaceableWater{ 0xE46B0 };
		inline constexpr REL::Offset AddPlaceableWater_1{ 0xE4730 };
		inline constexpr REL::Offset AddLODWater{ 0xE4C80 };
		inline constexpr REL::Offset RemoveLODWater{ 0xE5140 };
		inline constexpr REL::Offset RemovePlaceableWater{ 0xE52F0 };
		inline constexpr REL::Offset RemovePlaceableWater_1{ 0xE5370 };
		inline constexpr REL::Offset UpdateReflectionTexturePointers{ 0xE56C0 };
		inline constexpr REL::Offset ClearReflectionTexturePointers{ 0xE58A0 };
		inline constexpr REL::Offset FindWaterGroup{ 0xE59F0 };
		inline constexpr REL::Offset AddTESObjectToWaterGroup{ 0xE5C80 };
		inline constexpr REL::Offset IsWaterNodeVisible{ 0xE62E0 };
		inline constexpr REL::Offset DisplayWater{ 0xE6370 };
		inline constexpr REL::Offset EnableWaterSystem{ 0xE65D0 };
		inline constexpr REL::Offset DisableWaterSystem{ 0xE6620 };
		inline constexpr REL::Offset UpdateWaterSounds{ 0xE6A80 };
		inline constexpr REL::Offset CreateQuadShape{ 0xE7680 };
		inline constexpr REL::Offset CreateQuadData{ 0xE7770 };
		inline constexpr REL::Offset GetWaterRoot{ 0xE7FF0 };
		inline constexpr REL::Offset GetWaterGeometry{ 0xE8030 };
		inline constexpr REL::Offset CreateWadingWaterGeometry{ 0xE8160 };
		inline constexpr REL::Offset ActorWithinRangeOfWadingWater{ 0xE83E0 };
		inline constexpr REL::Offset AddRipple{ 0xE8510 };
		inline constexpr REL::Offset UpdateActorsInWater{ 0xE8A00 };
		inline constexpr REL::Offset UpdateWaterDisplacementSimulation{ 0xE8EC0 };
		inline constexpr REL::Offset RenderWadingWaterStencil{ 0xE9550 };
		inline constexpr REL::Offset MTSetupSelectiveReflectionTexture{ 0xE9D40 };
		inline constexpr REL::Offset MTSetupWorldReflectionTexture{ 0xEAA00 };
		inline constexpr REL::Offset MTSetupSkyReflectionTexture{ 0xEAF80 };
		inline constexpr REL::Offset MTRenderSelectiveReflectionTexture{ 0xEB220 };
		inline constexpr REL::Offset MTRenderWorldReflectionTexture{ 0xEB540 };
		inline constexpr REL::Offset MTRenderSkyReflectionTexture{ 0xEBBE0 };
		inline constexpr REL::Offset MTSetupSelectiveDepthTexture{ 0xEBEF0 };
		inline constexpr REL::Offset MTRenderSelectiveDepthTexture{ 0xEC800 };
		inline constexpr REL::Offset RenderWaterGroupStencil{ 0xECB60 };
		inline constexpr REL::Offset SetClipPlane{ 0xECEF0 };
		inline constexpr REL::Offset InitializeGreyTexture{ 0xED290 };
		inline constexpr REL::Offset SetCurrentWaterType{ 0x22F310 };
	}

	namespace TESWeather
	{
		inline constexpr REL::Offset GetWeatherData{ 0xED230 };
		inline constexpr REL::Offset ctor{ 0x1807F0 };
		inline constexpr REL::Offset MakeDefault{ 0x181C00 };
	}

	namespace TESWeatherList
	{
		inline constexpr REL::Offset Save{ 0x182380 };
		inline constexpr REL::Offset LoadWeatherListChunk{ 0x182940 };
	}

	namespace TESWeightForm
	{
		inline constexpr REL::Offset ctor{ 0x8EAC0 };
		inline constexpr REL::Offset dtor{ 0x8EAF0 };
		inline constexpr REL::Offset GetFormWeight{ 0x8EBC0 };
	}

	namespace TESWindListener
	{
		inline constexpr REL::Offset ctor{ 0x154590 };
	}

	namespace TESWorldSpace
	{
		inline constexpr REL::Offset GetEncounterZone{ 0x58400 };
		inline constexpr REL::Offset ctor{ 0x182C20 };
		inline constexpr REL::Offset ClearPortalGraph{ 0x183270 };
		inline constexpr REL::Offset FindCellInFile{ 0x1854F0 };
		inline constexpr REL::Offset GetExtCellDataFromFileByEditorID{ 0x185940 };
		inline constexpr REL::Offset LoadCell{ 0x185B30 };
		inline constexpr REL::Offset UnLoadCell{ 0x185E00 };
		inline constexpr REL::Offset FindLandDataInFile{ 0x185EE0 };
		inline constexpr REL::Offset GetClimate{ 0x185FE0 };
		inline constexpr REL::Offset GetUsableImageSpace{ 0x186020 };
		inline constexpr REL::Offset GetWaterType{ 0x186070 };
		inline constexpr REL::Offset GetLODWaterType{ 0x1860C0 };
		inline constexpr REL::Offset GetTerrainManager{ 0x186170 };
		inline constexpr REL::Offset CantTravelFrom{ 0x186210 };
		inline constexpr REL::Offset GetParentUseFlag{ 0x186340 };
		inline constexpr REL::Offset GetParentWorld{ 0x186390 };
		inline constexpr REL::Offset GetWorldMapData{ 0x186400 };
		inline constexpr REL::Offset GetKeyForCellCoord{ 0x187410 };
		inline constexpr REL::Offset GetKeyForWorldCoord{ 0x187440 };
		inline constexpr REL::Offset GetCellFromWorldCoord{ 0x187550 };
		inline constexpr REL::Offset GetCellFromCellCoord{ 0x1875A0 };
		inline constexpr REL::Offset AddCell{ 0x187670 };
		inline constexpr REL::Offset ReleaseCell{ 0x187760 };
		inline constexpr REL::Offset AddMultiBoundRef{ 0x1878D0 };
		inline constexpr REL::Offset IsFixedRef{ 0x187C80 };
		inline constexpr REL::Offset AddToPersistentRefData{ 0x187D10 };
		inline constexpr REL::Offset RemoveFromPersistentRefData{ 0x187E40 };
		inline constexpr REL::Offset AddPersistentRef{ 0x187FF0 };
		inline constexpr REL::Offset AssignPersistentRefsToCell{ 0x188150 };
		inline constexpr REL::Offset BuildMapMarkerList{ 0x1882A0 };
		inline constexpr REL::Offset BuildAudioMarkerList{ 0x1883C0 };
		inline constexpr REL::Offset EnumReferencesCloseToPoint{ 0x1885F0 };
		inline constexpr REL::Offset GetOffsetData{ 0x188A90 };
		inline constexpr REL::Offset CreateOffsetData{ 0x188B00 };
		inline constexpr REL::Offset AdjustMapMarkerCoord{ 0x188E40 };
	}

	namespace TREE_BILLBOARD_DATA
	{
		inline constexpr REL::Offset ctor{ 0x11D2C0 };
	}

	namespace TargetEntry
	{
		inline constexpr REL::Offset ctor{ 0x21FBA0 };
	}

	namespace TaskPortalSwap
	{
		inline constexpr REL::Offset ctor{ 0x299450 };
		inline constexpr REL::Offset dtor{ 0x2994B0 };
	}

	namespace TaskQueueInterface
	{
		inline constexpr REL::Offset GetInstance{ 0x537B0 };
		inline constexpr REL::Offset ThreadBeginInput{ 0x47A6B0 };
		inline constexpr REL::Offset ThreadEndInput{ 0x47A6D0 };
		inline constexpr REL::Offset ProcessQueue{ 0x47A790 };
		inline constexpr REL::Offset ProcessSecondaryQueue{ 0x47A850 };
		inline constexpr REL::Offset QueueScriptFunctionCall{ 0x47A8B0 };
		inline constexpr REL::Offset QueueMorphControllerUpdate{ 0x47AC00 };
		inline constexpr REL::Offset QueueNodeAttach{ 0x47AC60 };
		inline constexpr REL::Offset QueueBiped3DDetach{ 0x47ACB0 };
		inline constexpr REL::Offset QueueSSNRemoveObject{ 0x47AD00 };
		inline constexpr REL::Offset QueueObjectUpdate{ 0x47AD50 };
		inline constexpr REL::Offset QueueActorCreateBlood{ 0x47ADA0 };
		inline constexpr REL::Offset QueueActorHitMe{ 0x47AE10 };
		inline constexpr REL::Offset QueueUpdateDestructibleObject{ 0x47AF50 };
		inline constexpr REL::Offset QueueActorKill{ 0x47AFF0 };
		inline constexpr REL::Offset QueueHavokAdd{ 0x47B0F0 };
		inline constexpr REL::Offset QueueHavokRemove{ 0x47B140 };
		inline constexpr REL::Offset QueueActorMoveCharController{ 0x47B190 };
		inline constexpr REL::Offset QueueHavokMotionChange{ 0x47B1E0 };
		inline constexpr REL::Offset QueueHavokDetach{ 0x47B2B0 };
		inline constexpr REL::Offset QueueHavokAdjustForceAddCount{ 0x47B300 };
		inline constexpr REL::Offset QueueAttachWeapon{ 0x47B360 };
		inline constexpr REL::Offset QueueWaterObjectForAdd{ 0x47B4A0 };
		inline constexpr REL::Offset QueueWaterObjectForRemove{ 0x47B4F0 };
		inline constexpr REL::Offset QueueActorSetPosition{ 0x47B650 };
		inline constexpr REL::Offset QueueAddRipple{ 0x47B760 };
		inline constexpr REL::Offset TaskUnpackFunc{ 0x47B990 };
		inline constexpr REL::Offset QueueIfActive{ 0x47D160 };
		inline constexpr REL::Offset pInstance{ 0xDDF1A8 };
	}

	namespace TelekinesisEffect
	{
		inline constexpr REL::Offset ctor{ 0x42A460 };
		inline constexpr REL::Offset CreateSpring{ 0x42A6A0 };
		inline constexpr REL::Offset RemoveSpring{ 0x42AFA0 };
	}

	namespace TeleportDoorSearch
	{
		inline constexpr REL::Offset ctor{ 0x2F33B0 };
		inline constexpr REL::Offset BuildNodePath{ 0x2F34E0 };
	}

	namespace TeleportPath
	{
		inline constexpr REL::Offset ctor{ 0x2F48B0 };
		inline constexpr REL::Offset dtor{ 0x2F4930 };
		inline constexpr REL::Offset ComputeLength{ 0x2F49C0 };
	}

	namespace Tile
	{
		inline constexpr REL::Offset GetModel{ 0x16C7F0 };
		inline constexpr REL::Offset GetName{ 0x300300 };
		inline constexpr REL::Offset Set{ 0x300320 };
		inline constexpr REL::Offset SetName{ 0x307E10 };
		inline constexpr REL::Offset ctor{ 0x309860 };
		inline constexpr REL::Offset GetTileUpdateAllCriticalSectionLock{ 0x313D70 };
		inline constexpr REL::Offset Set_1{ 0x315C60 };
		inline constexpr REL::Offset SetSpeechChallengeFailure{ 0x31AA60 };
		inline constexpr REL::Offset GetSpeechChallegeFailure{ 0x31AA80 };
		inline constexpr REL::Offset Release{ 0x5FF690 };
		inline constexpr REL::Offset AddToTable{ 0x5FF8A0 };
		inline constexpr REL::Offset LoadTextTable{ 0x5FF970 };
		inline constexpr REL::Offset AddUserTrait{ 0x600940 };
		inline constexpr REL::Offset GetFloat{ 0x6011B0 };
		inline constexpr REL::Offset GetString{ 0x6011F0 };
		inline constexpr REL::Offset IsTrue{ 0x601230 };
		inline constexpr REL::Offset Poke{ 0x601290 };
		inline constexpr REL::Offset Set_2{ 0x6012D0 };
		inline constexpr REL::Offset Set_3{ 0x601350 };
		inline constexpr REL::Offset GetRealX{ 0x6013D0 };
		inline constexpr REL::Offset GetRealY{ 0x601440 };
		inline constexpr REL::Offset GetMaximumDepth{ 0x601530 };
		inline constexpr REL::Offset GetTileThickness{ 0x601540 };
		inline constexpr REL::Offset TextToTrait{ 0x601860 };
		inline constexpr REL::Offset GetExtraDataFromTraitName{ 0x601A20 };
		inline constexpr REL::Offset ParseFile{ 0x601E20 };
		inline constexpr REL::Offset InsertIncludedFiles{ 0x602D40 };
		inline constexpr REL::Offset BuildAndNameTree{ 0x6031B0 };
		inline constexpr REL::Offset ConnectTraitsToTree{ 0x6033B0 };
		inline constexpr REL::Offset FinalPostParse{ 0x6037E0 };
		inline constexpr REL::Offset GetRenderedMenu{ 0x603C60 };
		inline constexpr REL::Offset GetMenu{ 0x603C90 };
		inline constexpr REL::Offset GetChildByName{ 0x603DA0 };
		inline constexpr REL::Offset GetChildByID{ 0x603EB0 };
		inline constexpr REL::Offset GetFirstRefCopy{ 0x603F70 };
		inline constexpr REL::Offset DeleteChildren{ 0x604150 };
		inline constexpr REL::Offset UpdateChildren{ 0x604620 };
		inline constexpr REL::Offset UpdateTile{ 0x604640 };
		inline constexpr REL::Offset GetTextureAtlasInfo{ 0x606DD0 };
		inline constexpr REL::Offset SetNeedsUpdate{ 0x6074D0 };
		inline constexpr REL::Offset AddNeedsUpdate{ 0x607530 };
		inline constexpr REL::Offset AddDirtyTile{ 0x607690 };
		inline constexpr REL::Offset UpdateClipwindows{ 0x6079D0 };
		inline constexpr REL::Offset ReClipChildren{ 0x607A40 };
		inline constexpr REL::Offset AddFadeControl{ 0x607C60 };
		inline constexpr REL::Offset UpdateFadeControls{ 0x6080D0 };
		inline constexpr REL::Offset SetParent{ 0x6087D0 };
		inline constexpr REL::Offset SearchForTileByID{ 0x608FB0 };
		inline constexpr REL::Offset GetMenuByClass{ 0x609030 };
		inline constexpr REL::Offset GetUnderscoreValue{ 0x60A0B0 };
		inline constexpr REL::Offset PlayTileSound{ 0x60B110 };
		inline constexpr REL::Offset RecursiveColorUpdate{ 0x60B350 };
		inline constexpr REL::Offset RecursiveColorUpdate_1{ 0x60B420 };
		inline constexpr REL::Offset RecursiveRotationUpdate{ 0x60B520 };
		inline constexpr REL::Offset IsValidUserTraitName{ 0x60BB00 };
		inline constexpr REL::Offset gb_Parse_Error{ 0xDF32C8 };
	}

	namespace Tile3D
	{
		inline constexpr REL::Offset IsPlaying{ 0x38A1F0 };
		inline constexpr REL::Offset UpdateNIF{ 0x620980 };
		inline constexpr REL::Offset RemoveProperties{ 0x620BA0 };
		inline constexpr REL::Offset SetupShaderPropertiesRecurse{ 0x621340 };
	}

	namespace Tile_BuildStorage
	{
		inline constexpr REL::Offset ctor{ 0x60AC80 };
	}

	namespace Tile_Extra
	{
		inline constexpr REL::Offset ctor{ 0x61F610 };
	}

	namespace Tile_TileTemplate
	{
		inline constexpr REL::Offset AddPair{ 0x60A410 };
	}

	namespace Tile_Value
	{
		inline constexpr REL::Offset AddAction{ 0x609080 };
		inline constexpr REL::Offset AddAction_1{ 0x609130 };
		inline constexpr REL::Offset ClearActions{ 0x609200 };
		inline constexpr REL::Offset CalculateValue{ 0x609410 };
		inline constexpr REL::Offset SetFloat{ 0x60A270 };
		inline constexpr REL::Offset SetString{ 0x60A300 };
	}

	namespace TileImage
	{
		inline constexpr REL::Offset ctor{ 0x30B5D0 };
		inline constexpr REL::Offset ConvertToActualFilename{ 0x61F7D0 };
		inline constexpr REL::Offset AddToTesTextures{ 0x61FA20 };
		inline constexpr REL::Offset SetSourceTexture{ 0x620610 };
	}

	namespace TileRect
	{
		inline constexpr REL::Offset ctor{ 0x309840 };
	}

	namespace TileShaderProperty
	{
		inline constexpr REL::Offset SetUseTexScroll{ 0x3700D0 };
		inline constexpr REL::Offset SetTileTexture{ 0x7B7A10 };
	}

	namespace TopicInfoArray
	{
		inline constexpr REL::Offset ctor{ 0x2197C0 };
		inline constexpr REL::Offset InsertInfoAt{ 0x21BC10 };
	}

	namespace TraitMenu
	{
		inline constexpr REL::Offset ctor{ 0x3E6780 };
		inline constexpr REL::Offset Create{ 0x3E6990 };
		inline constexpr REL::Offset Close{ 0x3E6E10 };
		inline constexpr REL::Offset InitLists{ 0x3E7030 };
		inline constexpr REL::Offset UpdatePointCounter{ 0x3E71B0 };
		inline constexpr REL::Offset ResetPerksFunc{ 0x3E7630 };
		inline constexpr REL::Offset UpdatePerksFunc{ 0x3E7670 };
		inline constexpr REL::Offset SortPerksFunc{ 0x3E7740 };
		inline constexpr REL::Offset ApplyPerkEffects{ 0x3E7850 };
	}

	namespace TraitSelectMenu
	{
		inline constexpr REL::Offset Create{ 0x3E7B60 };
		inline constexpr REL::Offset Close{ 0x3E7DE0 };
		inline constexpr REL::Offset ScrollForm{ 0x3E8310 };
		inline constexpr REL::Offset SetButtonAsHighlighted{ 0x3E8470 };
		inline constexpr REL::Offset Navigate{ 0x3E85C0 };
		inline constexpr REL::Offset SetBoxAsChecked{ 0x3E86C0 };
		inline constexpr REL::Offset ToggleCheckBox{ 0x3E8860 };
	}

	namespace TrespassPackage
	{
		inline constexpr REL::Offset ctor{ 0x5F9250 };
	}

	namespace TriggerEntry
	{
		inline constexpr REL::Offset Update{ 0x22CC90 };
		inline constexpr REL::Offset ctor{ 0x22DC50 };
	}

	namespace TriggerEntry_RefList
	{
		inline constexpr REL::Offset ctor{ 0x22C640 };
		inline constexpr REL::Offset ForceLeaveTrigger{ 0x22C860 };
		inline constexpr REL::Offset Add{ 0x22C9D0 };
	}

	namespace TutorialMenu
	{
		inline constexpr REL::Offset IsHelpEnabled{ 0x1D4A40 };
		inline constexpr REL::Offset ctor{ 0x31F240 };
		inline constexpr REL::Offset Create{ 0x3E8890 };
		inline constexpr REL::Offset Close{ 0x3E8D60 };
		inline constexpr REL::Offset SetPage{ 0x3E8ED0 };
		inline constexpr REL::Offset UpdatePrevNext{ 0x3E9010 };
		inline constexpr REL::Offset SetTitleAndText{ 0x3E9060 };
	}

	namespace UnreachableLocation
	{
		inline constexpr REL::Offset SaveGame{ 0x5A2D80 };
		inline constexpr REL::Offset LoadGame{ 0x5A2DB0 };
	}

	namespace UseWeaponActorPackageData
	{
		inline constexpr REL::Offset ctor{ 0x27D8F0 };
	}

	namespace VATS
	{
		inline constexpr REL::Offset IsInVats{ 0x125430 };
		inline constexpr REL::Offset GetVATSLight{ 0x1D8710 };
		inline constexpr REL::Offset ClearData{ 0x5C6BA0 };
		inline constexpr REL::Offset SetMode{ 0x5C6C30 };
		inline constexpr REL::Offset QueueAction{ 0x5C71A0 };
		inline constexpr REL::Offset GetCurrentAction{ 0x5C71C0 };
		inline constexpr REL::Offset Update{ 0x5C7240 };
		inline constexpr REL::Offset FreeHeadAction{ 0x5C86B0 };
		inline constexpr REL::Offset QuitVATSPlayback{ 0x5C8950 };
		inline constexpr REL::Offset GetTargetPos{ 0x5C8AC0 };
		inline constexpr REL::Offset SetFirstProjectile{ 0x5C8B90 };
		inline constexpr REL::Offset SetLastProjectile{ 0x5C8C40 };
		inline constexpr REL::Offset GetPlayerUpdateMult{ 0x5C8CC0 };
		inline constexpr REL::Offset GetTargetUpdateMult{ 0x5C8D60 };
		inline constexpr REL::Offset EvaluateCommand{ 0x5C8E00 };
		inline constexpr REL::Offset GetLineOfSight{ 0x5C8F20 };
		inline constexpr REL::Offset UpdateMeleeAttack{ 0x5C9280 };
		inline constexpr REL::Offset UpdateCurrentCameraAction{ 0x5C95E0 };
		inline constexpr REL::Offset UseNextCamera{ 0x5C9920 };
		inline constexpr REL::Offset UpdateVATSLight{ 0x5C9AE0 };
		inline constexpr REL::Offset IsMeleeCommand{ 0x5C9F60 };
		inline constexpr REL::Offset GetTargetPercentagePos{ 0x5C9FE0 };
		inline constexpr REL::Offset InitPlayerDeath{ 0x5CA1F0 };
		inline constexpr REL::Offset ForceTargetKillShot{ 0x5CA2C0 };
		inline constexpr REL::Offset ClearCommandList{ 0x5CA410 };
	}

	namespace VATSMenu
	{
		inline constexpr REL::Offset ctor{ 0x320040 };
		inline constexpr REL::Offset Create{ 0x3E9200 };
		inline constexpr REL::Offset SetupSpecialAttackButtons{ 0x3EB920 };
		inline constexpr REL::Offset Close{ 0x3EBD50 };
		inline constexpr REL::Offset ShowTargetLimb{ 0x3EC3A0 };
		inline constexpr REL::Offset UpdateQueuedActionList{ 0x3EFA10 };
		inline constexpr REL::Offset UpdateChanceToHit{ 0x3F07A0 };
		inline constexpr REL::Offset SetMeterChance{ 0x3F0EA0 };
		inline constexpr REL::Offset PrepareMeters{ 0x3F1840 };
		inline constexpr REL::Offset UpdateAmmo{ 0x3F28D0 };
		inline constexpr REL::Offset SetTargetLimb{ 0x3F3070 };
		inline constexpr REL::Offset SetHeadingReached{ 0x3F3BD0 };
		inline constexpr REL::Offset GetActorValueFromBodyPart{ 0x3F3BF0 };
		inline constexpr REL::Offset GetVatsTarget{ 0x3F3C90 };
		inline constexpr REL::Offset PrecalcTargetHitChances{ 0x3F3E00 };
		inline constexpr REL::Offset VatsMenuRenderTemplate{ 0x3F4830 };
		inline constexpr REL::Offset VatsMenuGetTileByName{ 0x3F4890 };
		inline constexpr REL::Offset CalculateProbableEnemyHealth{ 0x3F48E0 };
		inline constexpr REL::Offset SelectNearestTarget{ 0x3F4C50 };
		inline constexpr REL::Offset FilterDestructibleObjects{ 0x3F4F30 };
		inline constexpr REL::Offset GetShotBurstCount{ 0x3F5050 };
		inline constexpr REL::Offset GetScreenPlaneProjectionMatrix{ 0x3F51B0 };
		inline constexpr REL::Offset BuildTargetList{ 0x3F52C0 };
		inline constexpr REL::Offset PickNewTarget{ 0x3F6AF0 };
		inline constexpr REL::Offset BuildMetersForTarget{ 0x3F6E50 };
	}

	namespace VATS_COMMAND
	{
		inline constexpr REL::Offset ctor{ 0x5CA4A0 };
		inline constexpr REL::Offset dtor{ 0x5CA4C0 };
	}

	namespace ValueModifierEffect
	{
		inline constexpr REL::Offset ctor{ 0x42BA60 };
		inline constexpr REL::Offset ShowAttributeReductionMessage{ 0x42BE10 };
		inline constexpr REL::Offset CheckAdjustNoNegativeMagnitude{ 0x42CE70 };
	}

	namespace ViewCaster
	{
		inline constexpr REL::Offset Init{ 0x231AB0 };
		inline constexpr REL::Offset SetShapeGroup{ 0x231C50 };
		inline constexpr REL::Offset Add{ 0x231CA0 };
		inline constexpr REL::Offset FindActivateREFR{ 0x231D60 };
	}

	namespace VirtualActorPathHandler
	{
		inline constexpr REL::Offset ctor{ 0x5EA770 };
		inline constexpr REL::Offset UseDoorAtNode{ 0x5EAD90 };
	}

	namespace VirtualPathingNode
	{
		inline constexpr REL::Offset IsVirtualTeleportDoorNode{ 0x2CA0C0 };
		inline constexpr REL::Offset HasActualLocation{ 0x2CAC70 };
		inline constexpr REL::Offset ctor{ 0x2F4D00 };
		inline constexpr REL::Offset ctor_1{ 0x2F4DA0 };
		inline constexpr REL::Offset ctor_2{ 0x2F4E40 };
		inline constexpr REL::Offset ctor_3{ 0x2F4F00 };
		inline constexpr REL::Offset ctor_4{ 0x2F4F90 };
		inline constexpr REL::Offset SetLocation{ 0x2F5060 };
		inline constexpr REL::Offset LoadGame{ 0x2F5100 };
	}

	namespace WORLD_MAP_DATA
	{
		inline constexpr REL::Offset Endian{ 0x1840B0 };
	}

	namespace WaterShader
	{
		inline constexpr REL::Offset LoadShaders{ 0x7827C0 };
	}

	namespace WaterShaderData
	{
		inline constexpr REL::Offset Endian{ 0x17F3A0 };
	}

	namespace WaterTargetEntry
	{
		inline constexpr REL::Offset ctor{ 0x22E590 };
	}

	namespace WeaponObject
	{
		inline constexpr REL::Offset UpdateChain{ 0x888810 };
		inline constexpr REL::Offset UpdateConstraints{ 0x889050 };
	}

	namespace Writer
	{
		inline constexpr REL::Offset writeInt{ 0x9BE790 };
		inline constexpr REL::Offset worthWriting_hkDataObject__Value_{ 0x9BE980 };
		inline constexpr REL::Offset worthWriting_hkDataArray__Value_{ 0x9BEAB0 };
		inline constexpr REL::Offset writeString{ 0x9BED30 };
		inline constexpr REL::Offset writeClass{ 0x9BF1A0 };
		inline constexpr REL::Offset scanObject{ 0x9BF450 };
		inline constexpr REL::Offset _writeArrayItems{ 0x9BF930 };
		inline constexpr REL::Offset writeBinaryValue{ 0x9BFEF0 };
		inline constexpr REL::Offset ctor{ 0x9C0500 };
	}

	namespace Writer_ListenerCache
	{
		inline constexpr REL::Offset callListenerAndCache{ 0x9BEDD0 };
	}

	namespace Writer_MemberWriteFlags
	{
		inline constexpr REL::Offset ctor{ 0x9BEFC0 };
		inline constexpr REL::Offset toBytes{ 0x9BF0D0 };
	}

	namespace ZoneEntry
	{
		inline constexpr REL::Offset RemoveTarget{ 0x17B700 };
		inline constexpr REL::Offset GetTargetEntry{ 0x17B730 };
		inline constexpr REL::Offset ctor{ 0x21FC10 };
		inline constexpr REL::Offset dtor{ 0x21FC50 };
		inline constexpr REL::Offset GetZoneEntry{ 0x220300 };
	}

	namespace _SharedShapeData
	{
		inline constexpr REL::Offset setReplacement{ 0x9749C0 };
		inline constexpr REL::Offset removeSingleReferencedShapeData{ 0x974A20 };
	}

	namespace ahkpBreakableConstraintData
	{
		inline constexpr REL::Offset SetChild{ 0x8C49B0 };
	}

	namespace bhkAabbPhantom
	{
		inline constexpr REL::Offset ctor{ 0x16E550 };
	}

	namespace bhkAcousticSpacePhantomCallbackShape
	{
		inline constexpr REL::Offset ctor{ 0x16F690 };
	}

	namespace bhkBlendController
	{
		inline constexpr REL::Offset DoGetUp{ 0x89BDF0 };
	}

	namespace bhkBoxShape
	{
		inline constexpr REL::Offset ctor{ 0x16E610 };
		inline constexpr REL::Offset Init{ 0x16E810 };
		inline constexpr REL::Offset ctor_1{ 0x4E5100 };
	}

	namespace bhkBvTreeShape
	{
		inline constexpr REL::Offset GetShapeCollection{ 0x177190 };
	}

	namespace bhkCapsuleShape
	{
		inline constexpr REL::Offset ctor{ 0x26D6A0 };
		inline constexpr REL::Offset CopyCinfo{ 0x8AADE0 };
	}

	namespace bhkCharacterController
	{
		inline constexpr REL::Offset SetPosition{ 0x1620E0 };
		inline constexpr REL::Offset SetWaterHeight{ 0x17B1D0 };
		inline constexpr REL::Offset QIsFlying{ 0x1C0860 };
		inline constexpr REL::Offset GetState{ 0x1C0880 };
		inline constexpr REL::Offset QChaseBip{ 0x221240 };
		inline constexpr REL::Offset GetWorld{ 0x221AD0 };
		inline constexpr REL::Offset SetProjectile{ 0x4105E0 };
		inline constexpr REL::Offset SetQuickSimulate{ 0x410610 };
		inline constexpr REL::Offset SetMOBObject{ 0x410640 };
		inline constexpr REL::Offset GetNiObject{ 0x410660 };
		inline constexpr REL::Offset SetFallTime{ 0x4106B0 };
		inline constexpr REL::Offset QWaterHeight{ 0x410A80 };
		inline constexpr REL::Offset SetCollisionFilter{ 0x410FF0 };
		inline constexpr REL::Offset GetPosition{ 0x412B00 };
		inline constexpr REL::Offset GetCollisionGroup{ 0x419250 };
		inline constexpr REL::Offset QOnStairs{ 0x438750 };
		inline constexpr REL::Offset SetWantState{ 0x48B0A0 };
		inline constexpr REL::Offset QSupported{ 0x48B0C0 };
		inline constexpr REL::Offset QLODDistance{ 0x4A3B50 };
		inline constexpr REL::Offset QCanJump{ 0x544400 };
		inline constexpr REL::Offset FindDisplayGeometry{ 0x86E0B0 };
		inline constexpr REL::Offset GetRadius{ 0x86E280 };
	}

	namespace bhkCharacterControllerCinfo
	{
		inline constexpr REL::Offset SetGravity{ 0x7860 };
		inline constexpr REL::Offset SetPosition{ 0x410510 };
		inline constexpr REL::Offset SetAcrobatics{ 0x410550 };
		inline constexpr REL::Offset SetStartState{ 0x410570 };
		inline constexpr REL::Offset SetColFilter{ 0x410590 };
		inline constexpr REL::Offset SetShape{ 0x4105C0 };
		inline constexpr REL::Offset ctor{ 0x86DA50 };
	}

	namespace bhkCharacterListener
	{
		inline constexpr REL::Offset GetFlag{ 0x221270 };
		inline constexpr REL::Offset SetFlag{ 0x229670 };
	}

	namespace bhkCharacterListenerArrow
	{
		inline constexpr REL::Offset ctor{ 0x4D10E0 };
		inline constexpr REL::Offset ProcessCollision{ 0x4D12E0 };
	}

	namespace bhkCharacterListenerSpell
	{
		inline constexpr REL::Offset ctor{ 0x406EB0 };
		inline constexpr REL::Offset GetObjectREFR{ 0x407730 };
	}

	namespace bhkCharacterProxy
	{
		inline constexpr REL::Offset GethkPosition{ 0x221A40 };
		inline constexpr REL::Offset GetLinearVelocity{ 0x26CA00 };
		inline constexpr REL::Offset GethkLinearVelocity{ 0x407080 };
		inline constexpr REL::Offset SetLinearVelocity{ 0x40FB00 };
	}

	namespace bhkCollisionObject
	{
		inline constexpr REL::Offset GetbhkCollisionObject{ 0x3B610 };
		inline constexpr REL::Offset Getbhk{ 0xB5A20 };
		inline constexpr REL::Offset ctor{ 0x16D580 };
		inline constexpr REL::Offset GetRigidBody{ 0x2FA820 };
	}

	namespace bhkContactListener
	{
		inline constexpr REL::Offset ctor{ 0x2234B0 };
	}

	namespace bhkConvexShape
	{
		inline constexpr REL::Offset ctor{ 0x16E690 };
	}

	namespace bhkDashpotAction
	{
		inline constexpr REL::Offset CopyCinfo{ 0x8C3A50 };
	}

	namespace bhkEntityListener
	{
		inline constexpr REL::Offset ctor{ 0x21F4D0 };
	}

	namespace bhkFilteredCdBodyCollector
	{
		inline constexpr REL::Offset ctor{ 0x4AFF30 };
	}

	namespace bhkHingeConstraint
	{
		inline constexpr REL::Offset ctor{ 0x5BA410 };
	}

	namespace bhkMatrix3
	{
		inline constexpr REL::Offset setIdentity{ 0x16E140 };
		inline constexpr REL::Offset ctor{ 0x16E2A0 };
		inline constexpr REL::Offset NI2HKNS{ 0x5AE4D0 };
	}

	namespace bhkMouseSpringAction
	{
		inline constexpr REL::Offset ctor{ 0xB5040 };
	}

	namespace bhkMultiSphereShape
	{
		inline constexpr REL::Offset ctor{ 0x26D490 };
	}

	namespace bhkMultithreadedSystem
	{
		inline constexpr REL::Offset ctor{ 0x8BF400 };
	}

	namespace bhkNiCollisionObject
	{
		inline constexpr REL::Offset GetbhkNiCollisionObject{ 0xA8B00 };
		inline constexpr REL::Offset Getbhk{ 0xB5A50 };
		inline constexpr REL::Offset SetReset{ 0xD9FA0 };
		inline constexpr REL::Offset SetBit{ 0xD9FC0 };
		inline constexpr REL::Offset SetNotify{ 0x173ED0 };
		inline constexpr REL::Offset SetSetLocal{ 0x173F00 };
	}

	namespace bhkPCollisionObject
	{
		inline constexpr REL::Offset Getbhk{ 0xB5AD0 };
		inline constexpr REL::Offset ctor{ 0x26D3D0 };
	}

	namespace bhkPhantom
	{
		inline constexpr REL::Offset ResetPhantomFlags{ 0x16E350 };
		inline constexpr REL::Offset ctor{ 0x16E3E0 };
	}

	namespace bhkPickData
	{
		inline constexpr REL::Offset GetFrom{ 0x585F0 };
		inline constexpr REL::Offset GetTo{ 0x587F0 };
		inline constexpr REL::Offset GethkTo{ 0x58820 };
		inline constexpr REL::Offset CalcTo{ 0x58840 };
		inline constexpr REL::Offset ctor{ 0xA3C20 };
		inline constexpr REL::Offset SetFrom{ 0xA3DA0 };
		inline constexpr REL::Offset SetTo{ 0xA3EB0 };
		inline constexpr REL::Offset SetTo_1{ 0xA3F40 };
		inline constexpr REL::Offset SetFilter{ 0xA3F70 };
		inline constexpr REL::Offset SetLength{ 0xA3F90 };
		inline constexpr REL::Offset SetAllCollector{ 0xA3FB0 };
		inline constexpr REL::Offset SetClosestCollector{ 0x19CEB0 };
		inline constexpr REL::Offset CalcHitPoint{ 0x1DBE60 };
		inline constexpr REL::Offset SetLength_1{ 0x3F68A0 };
		inline constexpr REL::Offset GetNiAVObject{ 0x866FB0 };
	}

	namespace bhkPlaneShape
	{
		inline constexpr REL::Offset CopyCinfo{ 0x8CB1B0 };
	}

	namespace bhkRagdollController
	{
		inline constexpr REL::Offset SetRagdollAnim{ 0x56C90 };
		inline constexpr REL::Offset QFootIK{ 0x95580 };
		inline constexpr REL::Offset QRagdollAnimEnable{ 0x152490 };
		inline constexpr REL::Offset SetFootIKEnable{ 0x1BA130 };
		inline constexpr REL::Offset QRagdollFeedbackActive{ 0x49D690 };
		inline constexpr REL::Offset SetLookAtIKTarget{ 0x4A3B70 };
		inline constexpr REL::Offset InitGrabIK{ 0x875460 };
		inline constexpr REL::Offset EnableRagdollAnim{ 0x87A8D0 };
		inline constexpr REL::Offset InitPoseMatching{ 0x87B1F0 };
		inline constexpr REL::Offset SetRagdollFeedbackActive{ 0x87B6A0 };
		inline constexpr REL::Offset EnableRagdollFeedback{ 0x87BA10 };
		inline constexpr REL::Offset CopyPoseTo3DRec{ 0x87BCB0 };
	}

	namespace bhkRigidBody
	{
		inline constexpr REL::Offset operator_call{ 0xAE750 };
		inline constexpr REL::Offset GetMass{ 0xB5400 };
		inline constexpr REL::Offset Getbhk{ 0xB5A80 };
		inline constexpr REL::Offset GetMotionType{ 0x117630 };
		inline constexpr REL::Offset IsActive{ 0x1609B0 };
		inline constexpr REL::Offset GetPosition{ 0x160BC0 };
		inline constexpr REL::Offset GetLinearVelocity{ 0x160D50 };
		inline constexpr REL::Offset GetLinearVelocity_1{ 0x160D80 };
		inline constexpr REL::Offset GetAngularVelocity{ 0x160DE0 };
		inline constexpr REL::Offset GetAngularVelocity_1{ 0x160E10 };
		inline constexpr REL::Offset SetPosition{ 0x1610F0 };
		inline constexpr REL::Offset SetRotation{ 0x161150 };
		inline constexpr REL::Offset SetLinearVelocity{ 0x1615D0 };
		inline constexpr REL::Offset SetAngularVelocity{ 0x161630 };
		inline constexpr REL::Offset SetLinearVelocity_1{ 0x161690 };
		inline constexpr REL::Offset SetAngularVelocity_1{ 0x1617C0 };
		inline constexpr REL::Offset ctor{ 0x16D380 };
		inline constexpr REL::Offset GethkMaxLinearVelocity{ 0x177B50 };
		inline constexpr REL::Offset GetStoredDynamicMotion{ 0x1D3D10 };
		inline constexpr REL::Offset GetDynamicMass{ 0x22AB20 };
		inline constexpr REL::Offset AddMotionType{ 0x88EE20 };
		inline constexpr REL::Offset SetFixed{ 0x88F210 };
	}

	namespace bhkRigidBodyCinfo
	{
		inline constexpr REL::Offset SetPosition{ 0x16D300 };
		inline constexpr REL::Offset SetRotation{ 0x16D320 };
		inline constexpr REL::Offset SetMotionType{ 0x16D360 };
		inline constexpr REL::Offset SetCollisionFilter{ 0x16F0F0 };
		inline constexpr REL::Offset GetQualityTypeString{ 0x88D4A0 };
	}

	namespace bhkSPCollisionObject
	{
		inline constexpr REL::Offset ctor{ 0x26D3A0 };
	}

	namespace bhkSerializable
	{
		inline constexpr REL::Offset ctor{ 0xB5120 };
		inline constexpr REL::Offset CloneCritLock{ 0x6A13E0 };
	}

	namespace bhkShape
	{
		inline constexpr REL::Offset Getbhk{ 0xA3A40 };
		inline constexpr REL::Offset ctor{ 0x16E6F0 };
		inline constexpr REL::Offset QMaterial{ 0x2205A0 };
		inline constexpr REL::Offset GetSubshapeMaterial{ 0x884F10 };
	}

	namespace bhkShapePhantom
	{
		inline constexpr REL::Offset SetTransform{ 0x16DF20 };
		inline constexpr REL::Offset ctor{ 0x16E370 };
	}

	namespace bhkSimpleShapePhantom
	{
		inline constexpr REL::Offset ctor{ 0x16E2D0 };
	}

	namespace bhkSphereRepShape
	{
		inline constexpr REL::Offset ctor{ 0x16E6C0 };
	}

	namespace bhkSphereShape
	{
		inline constexpr REL::Offset ctor{ 0x16E950 };
	}

	namespace bhkTaskletManagerCallback_bhkThreadState
	{
		inline constexpr REL::Offset CreateThreadMemory{ 0x868050 };
	}

	namespace bhkTelekinesisListener
	{
		inline constexpr REL::Offset ctor{ 0x407790 };
		inline constexpr REL::Offset Finish{ 0x407A10 };
		inline constexpr REL::Offset RemoveTelekinesisListeners{ 0x407AC0 };
		inline constexpr REL::Offset Remove{ 0x407CB0 };
	}

	namespace bhkTransform
	{
		inline constexpr REL::Offset setIdentity{ 0x16E120 };
		inline constexpr REL::Offset ctor{ 0x16E270 };
		inline constexpr REL::Offset NI2HK{ 0x5AE4A0 };
	}

	namespace bhkTransformShape
	{
		inline constexpr REL::Offset ctor{ 0x26D590 };
	}

	namespace bhkTriSampledHeightFieldBvTreeShape
	{
		inline constexpr REL::Offset ctor{ 0x222310 };
	}

	namespace bhkTriangleShape
	{
		inline constexpr REL::Offset CopyCinfo{ 0x8CAA30 };
	}

	namespace bhkUnaryAction
	{
		inline constexpr REL::Offset ctor{ 0xB50C0 };
		inline constexpr REL::Offset GetRigidBody{ 0x42AEB0 };
		inline constexpr REL::Offset GethkRigidBody{ 0x42AEE0 };
		inline constexpr REL::Offset ProcessEntity{ 0x886940 };
	}

	namespace bhkVector4
	{
		inline constexpr REL::Offset operator_call{ 0xB4DB0 };
		inline constexpr REL::Offset NI2HK{ 0xB4E50 };
		inline constexpr REL::Offset ctor{ 0xB4FA0 };
		inline constexpr REL::Offset setZero4{ 0xB4FC0 };
		inline constexpr REL::Offset set{ 0xB4FF0 };
	}

	namespace bhkWaterPhantomCallbackShape
	{
		inline constexpr REL::Offset ctor{ 0x16D5F0 };
	}

	namespace bhkWorld
	{
		inline constexpr REL::Offset SetEnabled{ 0x54380 };
		inline constexpr REL::Offset IsHavokDebug{ 0x54AE0 };
		inline constexpr REL::Offset QDebugDisplay{ 0xBAE00 };
		inline constexpr REL::Offset Remove{ 0x1380D0 };
		inline constexpr REL::Offset operator_call{ 0x141C80 };
		inline constexpr REL::Offset operator_new{ 0x153300 };
		inline constexpr REL::Offset UnMarkForWrite{ 0x1533C0 };
		inline constexpr REL::Offset AddEntityListener{ 0x1533F0 };
		inline constexpr REL::Offset AddContactListener{ 0x153440 };
		inline constexpr REL::Offset AddTrapListener{ 0x153480 };
		inline constexpr REL::Offset AddAcousticSpaceListener{ 0x1534F0 };
		inline constexpr REL::Offset Add{ 0x16D2C0 };
		inline constexpr REL::Offset Getbhk{ 0x221480 };
		inline constexpr REL::Offset QPickCountOverride{ 0x488960 };
		inline constexpr REL::Offset SetPickCountOverride{ 0x866230 };
		inline constexpr REL::Offset StartBatchingAdds{ 0x866300 };
		inline constexpr REL::Offset InitSystem{ 0x868230 };
		inline constexpr REL::Offset SetDebugObjectColor{ 0x868E30 };
		inline constexpr REL::Offset RemoveObjects{ 0x869EE0 };
		inline constexpr REL::Offset UpdatePosition{ 0x869F50 };
		inline constexpr REL::Offset EnableCollision{ 0x86A0B0 };
		inline constexpr REL::Offset Activate{ 0x86A270 };
		inline constexpr REL::Offset SetMotion{ 0x86A350 };
		inline constexpr REL::Offset SetGroup{ 0x86A3D0 };
		inline constexpr REL::Offset SetVisualDebugger{ 0x86A640 };
		inline constexpr REL::Offset StopBatchingAdds{ 0x86B540 };
	}

	namespace bhkWorldObject
	{
		inline constexpr REL::Offset GetCollidable{ 0x3B560 };
		inline constexpr REL::Offset GetShape{ 0xAE6A0 };
		inline constexpr REL::Offset GethkShape{ 0xAE6C0 };
		inline constexpr REL::Offset QFlags{ 0x1631E0 };
		inline constexpr REL::Offset GetFlags{ 0x163200 };
		inline constexpr REL::Offset ctor{ 0x16D440 };
		inline constexpr REL::Offset SetCollisionFilter{ 0x226CB0 };
		inline constexpr REL::Offset SetFlags{ 0x228F30 };
		inline constexpr REL::Offset IsAddedToWorld{ 0x4CFFA0 };
	}

	namespace hkAabb
	{
		inline constexpr REL::Offset ctor{ 0x37C10 };
		inline constexpr REL::Offset ctor_1{ 0x228950 };
		inline constexpr REL::Offset includePoint{ 0x229560 };
	}

	namespace hkAabbPhantomCinfo
	{
		inline constexpr REL::Offset ctor{ 0x16E4E0 };
	}

	namespace hkBinaryPackfileWriter
	{
		inline constexpr REL::Offset ctor{ 0x9BC670 };
		inline constexpr REL::Offset writeClassName{ 0x9BC6F0 };
		inline constexpr REL::Offset fillSectionTags{ 0x9BC7A0 };
		inline constexpr REL::Offset writeAllObjects{ 0x9BCEA0 };
	}

	namespace hkBinaryPackfileWriter_SaveContext
	{
		inline constexpr REL::Offset ctor{ 0x9BD8A0 };
	}

	namespace hkBool
	{
		inline constexpr REL::Offset operator_bool{ 0x1609F0 };
		inline constexpr REL::Offset ctor{ 0x222570 };
	}

	namespace hkBoxShapeCinfo
	{
		inline constexpr REL::Offset ctor{ 0x16E860 };
	}

	namespace hkBsdSocket
	{
		inline constexpr REL::Offset ctor{ 0x9A30A0 };
	}

	namespace hkBufferedStreamReader
	{
		inline constexpr REL::Offset ctor{ 0x92BC30 };
	}

	namespace hkCapsuleShapeCinfo
	{
		inline constexpr REL::Offset ctor{ 0x26D650 };
	}

	namespace hkClass
	{
		inline constexpr REL::Offset getName{ 0x946D40 };
		inline constexpr REL::Offset getParent{ 0x946D50 };
		inline constexpr REL::Offset getNumMembers{ 0x946F00 };
		inline constexpr REL::Offset getNumDeclaredMembers{ 0x946F70 };
		inline constexpr REL::Offset getMemberByName{ 0x946FE0 };
		inline constexpr REL::Offset getObjectSize{ 0x9470D0 };
		inline constexpr REL::Offset ctor{ 0x9472A0 };
		inline constexpr REL::Offset updateMetadataInplace{ 0xA04D30 };
		inline constexpr REL::Offset updateMetadataInplace_1{ 0xA04D90 };
	}

	namespace hkClassMember
	{
		inline constexpr REL::Offset getStructClass{ 0x986910 };
		inline constexpr REL::Offset getClass{ 0x986920 };
		inline constexpr REL::Offset getCstyleArraySize{ 0x986940 };
		inline constexpr REL::Offset getAlignment{ 0x986A90 };
		inline constexpr REL::Offset getTypeOf{ 0x986C00 };
		inline constexpr REL::Offset getSubtypeOf{ 0x986D70 };
		inline constexpr REL::Offset getTypeName{ 0x986EC0 };
	}

	namespace hkClassMemberAccessor
	{
		inline constexpr REL::Offset ctor{ 0x987180 };
		inline constexpr REL::Offset ctor_1{ 0x9871A0 };
	}

	namespace hkCommandRouter
	{
		inline constexpr REL::Offset consumeCommands{ 0x9D9660 };
	}

	namespace hkContactPoint
	{
		inline constexpr REL::Offset ctor{ 0x232DC0 };
		inline constexpr REL::Offset set{ 0x26C9C0 };
	}

	namespace hkContainerHeapAllocator
	{
		inline constexpr REL::Offset get{ 0xA4840 };
	}

	namespace hkConvexShapeCinfo
	{
		inline constexpr REL::Offset ctor{ 0x16E8D0 };
	}

	namespace hkCpuJobThreadPoolCinfo
	{
		inline constexpr REL::Offset ctor{ 0x92D380 };
	}

	namespace hkCriticalSection
	{
		inline constexpr REL::Offset ctor{ 0x8F6DA0 };
	}

	namespace hkDataArray
	{
		inline constexpr REL::Offset dtor{ 0x9BAB70 };
		inline constexpr REL::Offset operator_call{ 0x9BAB90 };
		inline constexpr REL::Offset setSize{ 0x9BABE0 };
		inline constexpr REL::Offset getSize{ 0x9BAC00 };
		inline constexpr REL::Offset getType{ 0x9BAC10 };
	}

	namespace hkDataArray_Value
	{
		inline constexpr REL::Offset asVec{ 0x9BAC50 };
		inline constexpr REL::Offset asString{ 0x9BAC70 };
		inline constexpr REL::Offset asReal{ 0x9BAC80 };
		inline constexpr REL::Offset asInt{ 0x9BAC90 };
	}

	namespace hkDataArrayImpl
	{
		inline constexpr REL::Offset set{ 0x9CAF70 };
	}

	namespace hkDataArrayNative
	{
		inline constexpr REL::Offset ctor{ 0x9BBB90 };
	}

	namespace hkDataClass
	{
		inline constexpr REL::Offset ctor{ 0x9BA650 };
		inline constexpr REL::Offset dtor{ 0x9BA660 };
		inline constexpr REL::Offset isNull{ 0x9BA670 };
		inline constexpr REL::Offset getName{ 0x9BA680 };
		inline constexpr REL::Offset getWorld{ 0x9BA6C0 };
		inline constexpr REL::Offset getNumMembers{ 0x9BA730 };
		inline constexpr REL::Offset getCinfo{ 0x9BAFE0 };
	}

	namespace hkDataClassDict
	{
		inline constexpr REL::Offset ctor{ 0x9CABB0 };
		inline constexpr REL::Offset selfDestruct{ 0x9CB990 };
	}

	namespace hkDataClassNative
	{
		inline constexpr REL::Offset fillMemberInfo{ 0x9BBE80 };
	}

	namespace hkDataObject
	{
		inline constexpr REL::Offset ctor{ 0x9BA760 };
		inline constexpr REL::Offset ctor_1{ 0x9BA780 };
		inline constexpr REL::Offset dtor{ 0x9BA7F0 };
		inline constexpr REL::Offset operator_call{ 0x9BA870 };
		inline constexpr REL::Offset isNull{ 0x9BA980 };
	}

	namespace hkDataObject_Value
	{
		inline constexpr REL::Offset getType{ 0x9BA920 };
	}

	namespace hkDataWorldDict
	{
		inline constexpr REL::Offset ctor{ 0x9C8030 };
	}

	namespace hkDataWorldDict_ObjectTracker
	{
		inline constexpr REL::Offset retrackRenamedClass{ 0x9C8F20 };
		inline constexpr REL::Offset findTrackedClasses{ 0x9C9240 };
		inline constexpr REL::Offset removeClassContent{ 0x9CA890 };
	}

	namespace hkDataWorldNative
	{
		inline constexpr REL::Offset ctor{ 0x9BB360 };
		inline constexpr REL::Offset setContents{ 0x9BB730 };
	}

	namespace hkDebugDisplayProcess
	{
		inline constexpr REL::Offset ctor{ 0x9DCAF0 };
	}

	namespace hkDefaultClassNameRegistry
	{
		inline constexpr REL::Offset ctor{ 0x9B79C0 };
	}

	namespace hkDefaultError
	{
		inline constexpr REL::Offset showMessage{ 0x92B3E0 };
		inline constexpr REL::Offset ctor{ 0x92B640 };
	}

	namespace hkDisplayAABB
	{
		inline constexpr REL::Offset setExtents{ 0x9E1170 };
		inline constexpr REL::Offset ctor{ 0x9E1210 };
	}

	namespace hkDisplayBox
	{
		inline constexpr REL::Offset ctor{ 0x9E1FC0 };
	}

	namespace hkDisplayCapsule
	{
		inline constexpr REL::Offset ctor{ 0x922DC0 };
	}

	namespace hkDisplayCone
	{
		inline constexpr REL::Offset ctor{ 0x9E5450 };
	}

	namespace hkDisplayConvex
	{
		inline constexpr REL::Offset ctor{ 0x9E1D20 };
	}

	namespace hkDisplayPlane
	{
		inline constexpr REL::Offset ctor{ 0x9E4FF0 };
	}

	namespace hkDisplaySerializeIStream
	{
		inline constexpr REL::Offset ctor{ 0x9DABE0 };
		inline constexpr REL::Offset readQuadVector4{ 0x9DAC60 };
	}

	namespace hkDisplaySerializeOStream
	{
		inline constexpr REL::Offset ctor{ 0x9DA690 };
		inline constexpr REL::Offset ctor_1{ 0x9DA6E0 };
		inline constexpr REL::Offset writeQuadVector4{ 0x9DA730 };
		inline constexpr REL::Offset writeTransform{ 0x9DA740 };
	}

	namespace hkDisplaySphere
	{
		inline constexpr REL::Offset ctor{ 0xA0AF50 };
	}

	namespace hkErrStream
	{
		inline constexpr REL::Offset ctor{ 0x8B1600 };
	}

	namespace hkError
	{
		inline constexpr REL::Offset ctor{ 0x225F10 };
	}

	namespace hkFileSystem
	{
		inline constexpr REL::Offset ctor{ 0x224E00 };
	}

	namespace hkFreeListAllocator
	{
		inline constexpr REL::Offset ctor{ 0x960270 };
	}

	namespace hkFreeListMemorySystem
	{
		inline constexpr REL::Offset ctor{ 0x8D0A60 };
	}

	namespace hkIArchive
	{
		inline constexpr REL::Offset ctor{ 0x9D9130 };
	}

	namespace hkInspectProcess
	{
		inline constexpr REL::Offset ctor{ 0x9DB600 };
	}

	namespace hkIstream
	{
		inline constexpr REL::Offset operator_call{ 0x9CC4A0 };
	}

	namespace hkJobQueue
	{
		inline constexpr REL::Offset checkQueueAndReleaseOneWaitingThread{ 0x904990 };
		inline constexpr REL::Offset registerJobWithCpuThread{ 0x904A20 };
		inline constexpr REL::Offset setQueueCapacityForJobType{ 0x904A80 };
		inline constexpr REL::Offset addJobQueueLocked{ 0x904B00 };
		inline constexpr REL::Offset addJob{ 0x904B90 };
		inline constexpr REL::Offset finishJob{ 0x904D80 };
		inline constexpr REL::Offset finishJobAndGetNextJob{ 0x904E80 };
		inline constexpr REL::Offset finishAddAndGetNextJob{ 0x905020 };
		inline constexpr REL::Offset processAllJobs{ 0x9051B0 };
		inline constexpr REL::Offset ctor{ 0x905490 };
		inline constexpr REL::Offset findJobInternal{ 0x905840 };
	}

	namespace hkJobQueueHwSetup
	{
		inline constexpr REL::Offset operator_call{ 0x905B50 };
	}

	namespace hkKdTree
	{
		inline constexpr REL::Offset initNodeArray{ 0x997770 };
		inline constexpr REL::Offset ctor{ 0x997970 };
	}

	namespace hkKdTreeCinfo
	{
		inline constexpr REL::Offset ctor{ 0x9976D0 };
	}

	namespace hkKdTreeCpuBroadphaseBundleCastCollector
	{
		inline constexpr REL::Offset ctor{ 0xA4DDE0 };
	}

	namespace hkLargeBlockAllocator
	{
		inline constexpr REL::Offset ctor{ 0x9D8D40 };
	}

	namespace hkLeakDetectAllocator
	{
		inline constexpr REL::Offset danger{ 0x95EDC0 };
		inline constexpr REL::Offset checkedFree{ 0x95F150 };
		inline constexpr REL::Offset quit{ 0x95F320 };
	}

	namespace hkLocalFrame
	{
		inline constexpr REL::Offset getTransformToRoot{ 0x9F66A0 };
	}

	namespace hkMatrix3
	{
		inline constexpr REL::Offset setIdentity{ 0x177090 };
		inline constexpr REL::Offset setZero{ 0x177110 };
		inline constexpr REL::Offset mul{ 0x8D4C70 };
	}

	namespace hkMemoryMeshShape
	{
		inline constexpr REL::Offset ctor{ 0xA4A1D0 };
	}

	namespace hkMemoryResourceContainer
	{
		inline constexpr REL::Offset ctor{ 0xA2EB70 };
		inline constexpr REL::Offset ctor_1{ 0xA2EBC0 };
	}

	namespace hkMemoryResourceHandle
	{
		inline constexpr REL::Offset ctor{ 0xA2EA20 };
	}

	namespace hkMemoryRouter
	{
		inline constexpr REL::Offset easyAlloc{ 0x885690 };
		inline constexpr REL::Offset easyFree{ 0x8856C0 };
		inline constexpr REL::Offset getInstance{ 0x885750 };
		inline constexpr REL::Offset ctor{ 0x885770 };
	}

	namespace hkMemoryStreamReader
	{
		inline constexpr REL::Offset ctor{ 0xA05B40 };
	}

	namespace hkMemorySystem
	{
		inline constexpr REL::Offset getInstance{ 0x8BBFC0 };
		inline constexpr REL::Offset _printStatistics{ 0x8BC220 };
	}

	namespace hkMonitorStream
	{
		inline constexpr REL::Offset init{ 0x8B0DB0 };
		inline constexpr REL::Offset quit{ 0x8B0DF0 };
		inline constexpr REL::Offset resize{ 0x8B0E50 };
	}

	namespace hkMotionState
	{
		inline constexpr REL::Offset ctor{ 0x9431B0 };
	}

	namespace hkMouseSpringActionCinfo
	{
		inline constexpr REL::Offset ctor{ 0xB4F40 };
	}

	namespace hkNativeFileSystem
	{
		inline constexpr REL::Offset nativePlatformToHavokConvertPath{ 0x92B360 };
	}

	namespace hkOArchive
	{
		inline constexpr REL::Offset write8u{ 0x9605D0 };
		inline constexpr REL::Offset writeRaw{ 0x9607B0 };
		inline constexpr REL::Offset getStreamWriter{ 0x960800 };
		inline constexpr REL::Offset ctor{ 0x960830 };
		inline constexpr REL::Offset write16u{ 0x960920 };
		inline constexpr REL::Offset write32{ 0x960940 };
		inline constexpr REL::Offset write32u{ 0x960960 };
		inline constexpr REL::Offset write64u{ 0x9609A0 };
		inline constexpr REL::Offset writeFloat32{ 0x9609C0 };
	}

	namespace hkObjectCopier
	{
		inline constexpr REL::Offset ctor{ 0xA03120 };
		inline constexpr REL::Offset writeZero{ 0xA03460 };
		inline constexpr REL::Offset saveBody{ 0xA036B0 };
		inline constexpr REL::Offset saveExtras{ 0xA03EA0 };
	}

	namespace hkObjectResource
	{
		inline constexpr REL::Offset setClassNameRegistry{ 0xA04EB0 };
		inline constexpr REL::Offset setTypeInfoRegistry{ 0xA04EE0 };
		inline constexpr REL::Offset ctor{ 0xA04F10 };
	}

	namespace hkOstream
	{
		inline constexpr REL::Offset operator_call{ 0x8C0120 };
		inline constexpr REL::Offset operator_call_1{ 0x8C01C0 };
		inline constexpr REL::Offset operator_call_2{ 0x8C0280 };
		inline constexpr REL::Offset operator_call_3{ 0x8C02D0 };
		inline constexpr REL::Offset operator_call_4{ 0x8C0320 };
		inline constexpr REL::Offset printf{ 0x8C0410 };
		inline constexpr REL::Offset operator_call_5{ 0x8C05A0 };
		inline constexpr REL::Offset operator_call_6{ 0x8C05F0 };
	}

	namespace hkPackfileData
	{
		inline constexpr REL::Offset ctor{ 0xA05700 };
	}

	namespace hkPackfileSectionHeader
	{
		inline constexpr REL::Offset getExports{ 0xA02F60 };
		inline constexpr REL::Offset getImports{ 0xA03010 };
	}

	namespace hkPackfileWriter
	{
		inline constexpr REL::Offset getCurrentVersion{ 0x9BDA20 };
		inline constexpr REL::Offset notDuplicateMetaData{ 0x9BDB70 };
		inline constexpr REL::Offset findSectionFor{ 0x9BDDC0 };
		inline constexpr REL::Offset addObject{ 0x9BE150 };
		inline constexpr REL::Offset ctor{ 0x9BE4D0 };
	}

	namespace hkPlatformObjectWriter
	{
		inline constexpr REL::Offset ctor{ 0xA02BB0 };
	}

	namespace hkPlatformObjectWriter_Cache
	{
		inline constexpr REL::Offset ctor{ 0xA02DE0 };
	}

	namespace hkProcessFactory
	{
		inline constexpr REL::Offset ctor{ 0x9D94C0 };
	}

	namespace hkRefVariant
	{
		inline constexpr REL::Offset ctor{ 0x947750 };
	}

	namespace hkReferencedObject
	{
		inline constexpr REL::Offset operator_delete{ 0x138EB0 };
		inline constexpr REL::Offset ctor{ 0x138EF0 };
		inline constexpr REL::Offset removeReferenceLockUnchecked{ 0x8903B0 };
	}

	namespace hkReferencedObjectLock
	{
		inline constexpr REL::Offset ctor{ 0x890830 };
	}

	namespace hkRelocationInfo
	{
		inline constexpr REL::Offset addImport{ 0xA02800 };
	}

	namespace hkResourceContainer
	{
		inline constexpr REL::Offset getPath{ 0xA2EAE0 };
	}

	namespace hkRotation
	{
		inline constexpr REL::Offset ctor{ 0x16DF00 };
	}

	namespace hkSemaphore
	{
		inline constexpr REL::Offset ctor{ 0x904350 };
		inline constexpr REL::Offset dtor{ 0x904370 };
		inline constexpr REL::Offset release{ 0x904390 };
	}

	namespace hkServerDebugDisplayHandler
	{
		inline constexpr REL::Offset ctor{ 0x9D9CC0 };
	}

	namespace hkServerProcessHandler
	{
		inline constexpr REL::Offset ctor{ 0x960F30 };
	}

	namespace hkShapePhantomCinfo
	{
		inline constexpr REL::Offset ctor{ 0x16E0B0 };
	}

	namespace hkSimdReal
	{
		inline constexpr REL::Offset operator_float{ 0x586D0 };
		inline constexpr REL::Offset ctor{ 0x1DBF20 };
	}

	namespace hkSimpleShapePhantomCinfo
	{
		inline constexpr REL::Offset ctor{ 0x16E090 };
		inline constexpr REL::Offset dtor{ 0x16EA90 };
	}

	namespace hkSocket
	{
		inline constexpr REL::Offset ctor{ 0x92B850 };
	}

	namespace hkSolverAllocator
	{
		inline constexpr REL::Offset ctor{ 0x95E900 };
	}

	namespace hkSphere
	{
		inline constexpr REL::Offset setRadius{ 0x4A50D0 };
	}

	namespace hkStackMemory
	{
		inline constexpr REL::Offset initMemory{ 0x4C70C0 };
	}

	namespace hkStackTracer_CallTree
	{
		inline constexpr REL::Offset insertCallStack{ 0x9A2BD0 };
	}

	namespace hkStaticClassNameRegistry
	{
		inline constexpr REL::Offset ctor{ 0x9B7AB0 };
	}

	namespace hkStatisticsCollector
	{
		inline constexpr REL::Offset ctor{ 0x906F50 };
		inline constexpr REL::Offset getAllocatedSize{ 0x906F80 };
		inline constexpr REL::Offset addNormalChunk{ 0x906FB0 };
		inline constexpr REL::Offset addStringPtr{ 0x907030 };
	}

	namespace hkStdioStreamReader
	{
		inline constexpr REL::Offset ctor{ 0x92BD60 };
	}

	namespace hkStdioStreamWriter
	{
		inline constexpr REL::Offset ctor{ 0x92BF70 };
	}

	namespace hkStreamReader
	{
		inline constexpr REL::Offset ctor{ 0x225FC0 };
	}

	namespace hkStreamStatisticsCollector
	{
		inline constexpr REL::Offset ctor{ 0x9DF170 };
	}

	namespace hkStreamWriter
	{
		inline constexpr REL::Offset ctor{ 0x225FE0 };
	}

	namespace hkStringBuf
	{
		inline constexpr REL::Offset ctor{ 0x8BBD80 };
		inline constexpr REL::Offset ctor_1{ 0x961A50 };
		inline constexpr REL::Offset operator_call{ 0x961C10 };
		inline constexpr REL::Offset printf{ 0x961D00 };
		inline constexpr REL::Offset appendJoin{ 0x961E30 };
	}

	namespace hkStringPtr
	{
		inline constexpr REL::Offset ctor{ 0x8B0A60 };
		inline constexpr REL::Offset ctor_1{ 0x8B0A70 };
		inline constexpr REL::Offset ctor_2{ 0x8B0B80 };
		inline constexpr REL::Offset ctor_3{ 0x8B0BD0 };
		inline constexpr REL::Offset operator_call{ 0x8B0C10 };
		inline constexpr REL::Offset operator_call_1{ 0x8B0C30 };
	}

	namespace hkStructureLayout
	{
		inline constexpr REL::Offset ctor{ 0x9C1680 };
		inline constexpr REL::Offset computeMemberOffsetsInplace{ 0x9C1BB0 };
	}

	namespace hkSystemMemoryBlockServer
	{
		inline constexpr REL::Offset ctor{ 0x960500 };
	}

	namespace hkTraceStream
	{
		inline constexpr REL::Offset printf{ 0x987AA0 };
	}

	namespace hkTransform
	{
		inline constexpr REL::Offset ctor{ 0x16DED0 };
		inline constexpr REL::Offset setIdentity{ 0x177070 };
		inline constexpr REL::Offset ctor_1{ 0x22AAE0 };
		inline constexpr REL::Offset ctor_2{ 0x232B40 };
		inline constexpr REL::Offset set{ 0x4CD6A0 };
		inline constexpr REL::Offset setMul{ 0x8B2240 };
	}

	namespace hkTransformShapeCinfo
	{
		inline constexpr REL::Offset ctor{ 0x26D550 };
	}

	namespace hkUFloat8
	{
		inline constexpr REL::Offset operator_call{ 0x8A9360 };
	}

	namespace hkUnionFind
	{
		inline constexpr REL::Offset moveBiggestGroupToIndexZero{ 0x9281B0 };
		inline constexpr REL::Offset reindex{ 0x9282C0 };
		inline constexpr REL::Offset sortByGroupId{ 0x9283E0 };
	}

	namespace hkVector4
	{
		inline constexpr REL::Offset setAdd4{ 0x58880 };
		inline constexpr REL::Offset setSub4{ 0x58A10 };
		inline constexpr REL::Offset getZero{ 0x58B20 };
		inline constexpr REL::Offset ctor{ 0xA3C90 };
		inline constexpr REL::Offset operator_call{ 0xA3F10 };
		inline constexpr REL::Offset set{ 0xB4D50 };
		inline constexpr REL::Offset setZero4{ 0x138F40 };
		inline constexpr REL::Offset ctor_1{ 0x1532A0 };
		inline constexpr REL::Offset add4{ 0x153F70 };
		inline constexpr REL::Offset mul4{ 0x227920 };
		inline constexpr REL::Offset normalize3{ 0x22AEA0 };
		inline constexpr REL::Offset setTransformedPos{ 0x87F640 };
		inline constexpr REL::Offset setTransformedInversePos{ 0x87F690 };
		inline constexpr REL::Offset setRotatedDir{ 0x87F700 };
	}

	namespace hkVersionPatchManager
	{
		inline constexpr REL::Offset findLastPatchIndexForUid{ 0x9B7DE0 };
		inline constexpr REL::Offset recomputePatchDependencies{ 0x9B8670 };
		inline constexpr REL::Offset preparePatches{ 0x9B95C0 };
	}

	namespace hkVersionPatchManager_UidFromClassVersion
	{
		inline constexpr REL::Offset cache{ 0x9B7D00 };
	}

	namespace hkVisualDebugger
	{
		inline constexpr REL::Offset serve{ 0x8D0D00 };
		inline constexpr REL::Offset writeStep{ 0x8D0E00 };
		inline constexpr REL::Offset deleteClient{ 0x8D0E60 };
		inline constexpr REL::Offset shutdown{ 0x8D11A0 };
		inline constexpr REL::Offset addDefaultProcess{ 0x8D12E0 };
		inline constexpr REL::Offset addTrackedObject{ 0x8D1330 };
		inline constexpr REL::Offset createClient{ 0x8D1440 };
		inline constexpr REL::Offset removeDefaultProcess{ 0x8D1610 };
		inline constexpr REL::Offset ctor{ 0x8D1780 };
		inline constexpr REL::Offset capture{ 0x8D1B20 };
	}

	namespace hkaAnimation
	{
		inline constexpr REL::Offset ctor{ 0xA2F500 };
	}

	namespace hkaAnnotationTrack
	{
		inline constexpr REL::Offset ctor{ 0xA4E420 };
	}

	namespace hkaFootstepAnalysisInfo
	{
		inline constexpr REL::Offset ctor{ 0xA40800 };
	}

	namespace hkaFootstepAnalysisInfoContainer
	{
		inline constexpr REL::Offset newPreviewInfo{ 0xA40EC0 };
	}

	namespace hkaRagdollInstance
	{
		inline constexpr REL::Offset ctor{ 0x8DE450 };
		inline constexpr REL::Offset ctor_1{ 0x8DE5E0 };
	}

	namespace hkaRagdollRigidBodyController
	{
		inline constexpr REL::Offset operator_new{ 0x87C2B0 };
	}

	namespace hkaSkeletonMapper
	{
		inline constexpr REL::Offset mapPoseLocalSpace{ 0x8E3090 };
		inline constexpr REL::Offset mapPose{ 0x8E3A00 };
		inline constexpr REL::Offset checkMappingLocalSpace{ 0x8E43E0 };
	}

	namespace hkaSkeletonMapperData
	{
		inline constexpr REL::Offset operator_call{ 0x8DB400 };
	}

	namespace hkaSkeletonMapperUtils_Params
	{
		inline constexpr REL::Offset ctor{ 0x8DB7C0 };
	}

	namespace hkaSplineCompressedAnimation
	{
		inline constexpr REL::Offset writeRotation{ 0xA319E0 };
		inline constexpr REL::Offset writePoints{ 0xA31B20 };
		inline constexpr REL::Offset initialize{ 0xA31D50 };
		inline constexpr REL::Offset ctor{ 0xA32AF0 };
	}

	namespace hkaTrackAnalysis_AnalysisStats
	{
		inline constexpr REL::Offset displayReport{ 0xA4E660 };
	}

	namespace hkgpConvexHull
	{
		inline constexpr REL::Offset getIndex{ 0x975070 };
		inline constexpr REL::Offset getIndex_1{ 0x975150 };
		inline constexpr REL::Offset getPlaneIndex{ 0x975210 };
		inline constexpr REL::Offset getVolume{ 0x9752E0 };
		inline constexpr REL::Offset getSurfaceArea{ 0x975390 };
		inline constexpr REL::Offset getSphericity{ 0x975440 };
		inline constexpr REL::Offset getWorldInertia{ 0x975490 };
		inline constexpr REL::Offset getCenterOfMass{ 0x975560 };
		inline constexpr REL::Offset getNumPlanes{ 0x975600 };
		inline constexpr REL::Offset getPlane{ 0x9756A0 };
		inline constexpr REL::Offset fetchPositions{ 0x976120 };
		inline constexpr REL::Offset generateGeometry{ 0x976410 };
		inline constexpr REL::Offset ctor{ 0x976CA0 };
		inline constexpr REL::Offset clone{ 0x976CF0 };
		inline constexpr REL::Offset buildFromPlanes{ 0x9774A0 };
		inline constexpr REL::Offset buildFromPlanes_1{ 0x977840 };
		inline constexpr REL::Offset expandByPlanarMargin{ 0x977BE0 };
		inline constexpr REL::Offset absoluteScale{ 0x978720 };
		inline constexpr REL::Offset volumeSimplify{ 0x978B90 };
		inline constexpr REL::Offset createVoronoiFeatures{ 0x979F90 };
	}

	namespace hkgpConvexHullImpl
	{
		inline constexpr REL::Offset mustHaveIndex{ 0x974F10 };
		inline constexpr REL::Offset mustHaveMassProperties{ 0x974FB0 };
		inline constexpr REL::Offset clipLine{ 0x97A5A0 };
		inline constexpr REL::Offset isPointInside{ 0x97B330 };
		inline constexpr REL::Offset buildMassProperties_hkgpConvexHullImpl__PositionAsTransform_{ 0x97B600 };
		inline constexpr REL::Offset getEdgeLengths{ 0x97C610 };
		inline constexpr REL::Offset generateVertexAdjacencyGraph{ 0x97CAA0 };
		inline constexpr REL::Offset build{ 0x981510 };
		inline constexpr REL::Offset decimateVertices{ 0x982AD0 };
		inline constexpr REL::Offset splitByPlane_hkgpConvexHullImpl__PositionAsSource_{ 0x983430 };
	}

	namespace hkgpMesh
	{
		inline constexpr REL::Offset fetchPositions{ 0xA12640 };
		inline constexpr REL::Offset locate{ 0xA13210 };
		inline constexpr REL::Offset hasValidTopology{ 0xA14B30 };
		inline constexpr REL::Offset bindEdge{ 0xA14BD0 };
		inline constexpr REL::Offset fixBindings{ 0xA14D10 };
		inline constexpr REL::Offset segregateVerticesBasedOnPartId{ 0xA15830 };
		inline constexpr REL::Offset append{ 0xA17B00 };
		inline constexpr REL::Offset clipTriangles{ 0xA19D60 };
		inline constexpr REL::Offset removeButterflies{ 0xA1A7A0 };
		inline constexpr REL::Offset ctor{ 0xA1B750 };
		inline constexpr REL::Offset explodeParts{ 0xA1B820 };
		inline constexpr REL::Offset appendFromGeometry{ 0xA1CE10 };
		inline constexpr REL::Offset appendFromConvexHull{ 0xA1D900 };
		inline constexpr REL::Offset trim{ 0xA1D960 };
		inline constexpr REL::Offset cutAndCap{ 0xA1DE00 };
	}

	namespace hkp3AxisSweep
	{
		inline constexpr REL::Offset setBitsBasedOnXInterval{ 0x9112C0 };
		inline constexpr REL::Offset _fixDeterministicOrderAfterNodeIdWasDecreased{ 0x911790 };
		inline constexpr REL::Offset endOverlapCheckMarker{ 0x911D00 };
	}

	namespace hkp3AxisSweep_hkpBpAxis
	{
		inline constexpr REL::Offset insert{ 0x911DA0 };
		inline constexpr REL::Offset insertTail{ 0x911E80 };
		inline constexpr REL::Offset removeBatch_2_{ 0x91A180 };
	}

	namespace hkpAabbPhantom
	{
		inline constexpr REL::Offset setAabb{ 0x8F24A0 };
		inline constexpr REL::Offset castRay{ 0x8F2510 };
		inline constexpr REL::Offset castRay_1{ 0x8F26B0 };
		inline constexpr REL::Offset linearCast{ 0x8F2880 };
		inline constexpr REL::Offset ctor{ 0x8F2CB0 };
		inline constexpr REL::Offset ctor_1{ 0xA004F0 };
	}

	namespace hkpAabbTreeCollidableRaycaster
	{
		inline constexpr REL::Offset ctor{ 0x99A040 };
	}

	namespace hkpAabbTreeWorldManager
	{
		inline constexpr REL::Offset scanActiveListAndGetInactivated{ 0x908800 };
		inline constexpr REL::Offset queueActivated{ 0x908940 };
		inline constexpr REL::Offset queueInactivated{ 0x908980 };
		inline constexpr REL::Offset ctor{ 0x908CF0 };
		inline constexpr REL::Offset buildInactiveTree{ 0x909020 };
		inline constexpr REL::Offset buildKdTree{ 0x9094A0 };
		inline constexpr REL::Offset incrementalBuild{ 0x9099D0 };
		inline constexpr REL::Offset fullBuild{ 0x909DF0 };
	}

	namespace hkpActiveContactPointViewer
	{
		inline constexpr REL::Offset ctor{ 0x968840 };
		inline constexpr REL::Offset registerViewer{ 0x9688D0 };
	}

	namespace hkpAllCdBodyPairCollector
	{
		inline constexpr REL::Offset ctor{ 0x22D350 };
	}

	namespace hkpAllCdPointCollector
	{
		inline constexpr REL::Offset ctor{ 0x220FF0 };
		inline constexpr REL::Offset sortHits{ 0x8ABAD0 };
	}

	namespace hkpAllRayHitCollector
	{
		inline constexpr REL::Offset ctor{ 0xA3A70 };
	}

	namespace hkpBallGun
	{
		inline constexpr REL::Offset ctor{ 0xA46F20 };
		inline constexpr REL::Offset ctor_1{ 0xA46F90 };
	}

	namespace hkpBallSocketChainData
	{
		inline constexpr REL::Offset ctor{ 0x953D90 };
		inline constexpr REL::Offset ctor_1{ 0x953DF0 };
	}

	namespace hkpBoxBoxAgent
	{
		inline constexpr REL::Offset staticGetClosestPoints{ 0x940470 };
		inline constexpr REL::Offset staticGetPenetrations{ 0x9406C0 };
	}

	namespace hkpBreakableConstraintData
	{
		inline constexpr REL::Offset ctor{ 0x94DF30 };
		inline constexpr REL::Offset ctor_1{ 0x94DFC0 };
	}

	namespace hkpBridgeConstraintAtom
	{
		inline constexpr REL::Offset init{ 0x921CE0 };
	}

	namespace hkpBroadPhase
	{
		inline constexpr REL::Offset ctor{ 0x997010 };
		inline constexpr REL::Offset enableMultiThreading{ 0x997070 };
	}

	namespace hkpBroadPhaseBorder
	{
		inline constexpr REL::Offset ctor{ 0x90B710 };
	}

	namespace hkpBroadphaseViewer
	{
		inline constexpr REL::Offset ctor{ 0x96A940 };
		inline constexpr REL::Offset registerViewer{ 0x96AD40 };
	}

	namespace hkpBvAgent
	{
		inline constexpr REL::Offset staticLinearCast{ 0x945800 };
		inline constexpr REL::Offset staticGetClosestPoints{ 0x945AF0 };
		inline constexpr REL::Offset staticGetPenetrations{ 0x945DD0 };
	}

	namespace hkpBvTreeAgent
	{
		inline constexpr REL::Offset staticLinearCast{ 0x930F50 };
		inline constexpr REL::Offset staticGetClosestPoints{ 0x931110 };
		inline constexpr REL::Offset staticGetPenetrations{ 0x9312F0 };
		inline constexpr REL::Offset registerAgent{ 0x9314E0 };
	}

	namespace hkpBvTreeStreamAgent
	{
		inline constexpr REL::Offset ctor{ 0x92DEF0 };
	}

	namespace hkpCachingShapePhantom
	{
		inline constexpr REL::Offset ctor{ 0x94CE10 };
		inline constexpr REL::Offset ctor_1{ 0xA003D0 };
	}

	namespace hkpCachingShapePhantomRay
	{
		inline constexpr REL::Offset castRay{ 0x8C26C0 };
	}

	namespace hkpCapsuleCapsuleAgent
	{
		inline constexpr REL::Offset staticGetPenetrations{ 0x93B420 };
		inline constexpr REL::Offset staticGetClosestPoints{ 0x93BD80 };
	}

	namespace hkpCapsuleTriangleAgent
	{
		inline constexpr REL::Offset staticGetClosestPoints{ 0x93A280 };
		inline constexpr REL::Offset staticGetPenetrations{ 0x93A8C0 };
	}

	namespace hkpCdBody
	{
		inline constexpr REL::Offset getRootCollidable{ 0x224020 };
	}

	namespace hkpCharacterContext
	{
		inline constexpr REL::Offset ctor{ 0x8A9580 };
	}

	namespace hkpCharacterProxy
	{
		inline constexpr REL::Offset getLinearVelocity{ 0x8AC950 };
		inline constexpr REL::Offset ctor{ 0x8ADA70 };
		inline constexpr REL::Offset integrateImplementation{ 0x8ADE20 };
		inline constexpr REL::Offset checkSupportDeprecated{ 0x8AE900 };
	}

	namespace hkpCharacterStateManager
	{
		inline constexpr REL::Offset ctor{ 0x8BC460 };
		inline constexpr REL::Offset registerState{ 0x8BC4E0 };
	}

	namespace hkpClosestRayHitCollector
	{
		inline constexpr REL::Offset ctor{ 0x22A220 };
		inline constexpr REL::Offset reset{ 0x22A290 };
	}

	namespace hkpCollidable
	{
		inline constexpr REL::Offset getCollisionFilterInfo{ 0x3B540 };
		inline constexpr REL::Offset getType{ 0xB5980 };
		inline constexpr REL::Offset getOwner{ 0xB59D0 };
	}

	namespace hkpCollisionCallbackUtil
	{
		inline constexpr REL::Offset addCollisionCallbackUtil{ 0x90B040 };
		inline constexpr REL::Offset ctor{ 0x90B180 };
	}

	namespace hkpCollisionDispatcher
	{
		inline constexpr REL::Offset internalRegisterCollisionAgent{ 0x8FB2A0 };
		inline constexpr REL::Offset debugPrintTable{ 0x8FC1D0 };
	}

	namespace hkpConstraintChainInstance
	{
		inline constexpr REL::Offset ctor{ 0xA00240 };
	}

	namespace hkpConstraintInstance
	{
		inline constexpr REL::Offset ctor{ 0x8F3EA0 };
	}

	namespace hkpConstraintViewer
	{
		inline constexpr REL::Offset draw{ 0x969260 };
		inline constexpr REL::Offset ctor{ 0x9698B0 };
		inline constexpr REL::Offset registerViewer{ 0x969A00 };
	}

	namespace hkpContactPointViewer
	{
		inline constexpr REL::Offset ctor{ 0x9E29B0 };
		inline constexpr REL::Offset drawAllContactPointsInIsland{ 0x9E2DA0 };
	}

	namespace hkpContinuousSimulation
	{
		inline constexpr REL::Offset collideEntitiesBroadPhaseContinuousFindPairs{ 0x90C030 };
		inline constexpr REL::Offset ctor{ 0x90D020 };
		inline constexpr REL::Offset addToiEvent{ 0x90D150 };
		inline constexpr REL::Offset collideEntitiesBroadPhaseContinuous{ 0x90D3F0 };
		inline constexpr REL::Offset collideIslandNarrowPhaseContinuous{ 0x90D8B0 };
		inline constexpr REL::Offset handleSimpleToi{ 0x90E210 };
		inline constexpr REL::Offset advanceTimeInternal{ 0x90ED10 };
	}

	namespace hkpConvexListAgent
	{
		inline constexpr REL::Offset staticGetClosestPoints{ 0x9339D0 };
		inline constexpr REL::Offset staticGetPenetrations{ 0x933B90 };
		inline constexpr REL::Offset staticLinearCast{ 0x933CA0 };
		inline constexpr REL::Offset registerAgent{ 0x9346B0 };
	}

	namespace hkpConvexPieceStreamData
	{
		inline constexpr REL::Offset operator_delete{ 0x9FFCA0 };
	}

	namespace hkpConvexRadiusBuilder
	{
		inline constexpr REL::Offset ctor{ 0x9E3060 };
	}

	namespace hkpConvexRadiusViewer
	{
		inline constexpr REL::Offset findWorld{ 0x968A70 };
		inline constexpr REL::Offset removeAllGeometries{ 0x968B20 };
		inline constexpr REL::Offset ctor{ 0x968B90 };
		inline constexpr REL::Offset registerViewer{ 0x968E40 };
		inline constexpr REL::Offset addWorld{ 0x968E60 };
		inline constexpr REL::Offset removeWorld{ 0x969010 };
	}

	namespace hkpConvexTransformShapeBase
	{
		inline constexpr REL::Offset ctor{ 0x89E340 };
	}

	namespace hkpCylinderShape
	{
		inline constexpr REL::Offset getCylinderRadius{ 0x9571A0 };
	}

	namespace hkpDefaultToiResourceMgr
	{
		inline constexpr REL::Offset ctor{ 0x99FB90 };
	}

	namespace hkpDefaultWorldMaintenanceMgr
	{
		inline constexpr REL::Offset ctor{ 0x90B250 };
	}

	namespace hkpDefaultWorldMemoryWatchDog
	{
		inline constexpr REL::Offset removeObjectsFromIsland{ 0xA48290 };
	}

	namespace hkpDisableEntityCollisionFilter
	{
		inline constexpr REL::Offset addEntityToFilter{ 0xA46A30 };
	}

	namespace hkpEndOfStepCallbackUtil
	{
		inline constexpr REL::Offset ctor{ 0x99E860 };
	}

	namespace hkpEntity
	{
		inline constexpr REL::Offset getNumConstraints{ 0x89C380 };
		inline constexpr REL::Offset ctor{ 0x89CE00 };
	}

	namespace hkpEntityEntityBroadPhaseListener
	{
		inline constexpr REL::Offset ctor{ 0x9107D0 };
	}

	namespace hkpEntityListener
	{
		inline constexpr REL::Offset ctor{ 0x21F580 };
	}

	namespace hkpFirstPersonGun
	{
		inline constexpr REL::Offset sweepSphere{ 0xA464E0 };
		inline constexpr REL::Offset ctor{ 0xA46660 };
	}

	namespace hkpGenericConstraintData
	{
		inline constexpr REL::Offset ctor{ 0x950C00 };
		inline constexpr REL::Offset ctor_1{ 0x950C90 };
	}

	namespace hkpGravityGun
	{
		inline constexpr REL::Offset pickBody{ 0xA45A60 };
		inline constexpr REL::Offset gravityGunPush{ 0xA45EE0 };
	}

	namespace hkpGsk
	{
		inline constexpr REL::Offset castRay{ 0x9AC2B0 };
	}

	namespace hkpGskfAgent
	{
		inline constexpr REL::Offset ctor{ 0x9ACBD0 };
	}

	namespace hkpGunProjectile
	{
		inline constexpr REL::Offset addToWorld{ 0xA44C90 };
		inline constexpr REL::Offset removeFromWorld{ 0xA44CC0 };
	}

	namespace hkpHeightFieldAgent
	{
		inline constexpr REL::Offset staticGetPenetrations{ 0x9317D0 };
		inline constexpr REL::Offset staticGetClosestPoints{ 0x9319E0 };
		inline constexpr REL::Offset staticLinearCast{ 0x931D30 };
		inline constexpr REL::Offset ctor{ 0x932060 };
	}

	namespace hkpHingeConstraintData
	{
		inline constexpr REL::Offset ctor{ 0x8BE7B0 };
	}

	namespace hkpInactiveContactPointViewer
	{
		inline constexpr REL::Offset ctor{ 0x968770 };
		inline constexpr REL::Offset registerViewer{ 0x968800 };
	}

	namespace hkpIslandActivationListener
	{
		inline constexpr REL::Offset ctor{ 0x2241C0 };
	}

	namespace hkpKdTreeWorldManager
	{
		inline constexpr REL::Offset ctor{ 0x90A2D0 };
		inline constexpr REL::Offset buildTreeSingleThreaded{ 0x90A560 };
		inline constexpr REL::Offset gatherCollidablesFromWorld{ 0x90A6A0 };
		inline constexpr REL::Offset buildTreeDistributed{ 0x90A810 };
	}

	namespace hkpLimitedHingeConstraintData
	{
		inline constexpr REL::Offset setMotor{ 0x8B8AC0 };
		inline constexpr REL::Offset ctor{ 0x8B9090 };
	}

	namespace hkpLinearCastInput
	{
		inline constexpr REL::Offset ctor{ 0x221290 };
	}

	namespace hkpMalleableConstraintData
	{
		inline constexpr REL::Offset ctor{ 0x8A9AA0 };
		inline constexpr REL::Offset ctor_1{ 0x8DF710 };
		inline constexpr REL::Offset ctor_2{ 0x8DF760 };
	}

	namespace hkpMidphaseViewer
	{
		inline constexpr REL::Offset ctor{ 0x96A280 };
		inline constexpr REL::Offset registerViewer{ 0x96A850 };
	}

	namespace hkpMoppAabbCastVirtualMachine
	{
		inline constexpr REL::Offset queryRayOnTree{ 0x9A71C0 };
		inline constexpr REL::Offset aabbCast{ 0x9A8180 };
	}

	namespace hkpMoppAgent
	{
		inline constexpr REL::Offset staticLinearCast{ 0x92F0D0 };
		inline constexpr REL::Offset registerAgent{ 0x92F2C0 };
	}

	namespace hkpMoppBvTreeShape
	{
		inline constexpr REL::Offset ctor{ 0x9544F0 };
	}

	namespace hkpMoppCodeGenerator
	{
		inline constexpr REL::Offset ctor{ 0xA065F0 };
	}

	namespace hkpMoppDefaultAssembler
	{
		inline constexpr REL::Offset ctor{ 0xA090C0 };
	}

	namespace hkpMoppEarlyExitObbVirtualMachine
	{
		inline constexpr REL::Offset queryOBBOnTree{ 0xA63F10 };
	}

	namespace hkpMoppFindAllVirtualMachine
	{
		inline constexpr REL::Offset queryOnTree{ 0xA65EE0 };
		inline constexpr REL::Offset queryOnTreeRight{ 0xA66290 };
		inline constexpr REL::Offset queryOnTreeLeft{ 0xA66600 };
	}

	namespace hkpMoppKDopGeometriesVirtualMachine
	{
		inline constexpr REL::Offset queryMoppKDopGeometriesRecurse{ 0xA65140 };
	}

	namespace hkpMoppLongRayVirtualMachine
	{
		inline constexpr REL::Offset queryRayOnTree{ 0x9D1F30 };
	}

	namespace hkpMoppModifyVirtualMachine
	{
		inline constexpr REL::Offset queryModicationPointsRecursive{ 0xA66950 };
	}

	namespace hkpMoppObbVirtualMachine
	{
		inline constexpr REL::Offset queryAabbOnTree{ 0x9D1400 };
	}

	namespace hkpMoppSphereVirtualMachine
	{
		inline constexpr REL::Offset querySphereOnTree{ 0xA64870 };
	}

	namespace hkpMotion
	{
		inline constexpr REL::Offset getMass{ 0x886430 };
	}

	namespace hkpMousePickingViewer
	{
		inline constexpr REL::Offset ctor{ 0x966B90 };
		inline constexpr REL::Offset registerViewer{ 0x966C90 };
		inline constexpr REL::Offset pickObject{ 0x966D00 };
	}

	namespace hkpMouseSpringAction
	{
		inline constexpr REL::Offset ctor{ 0x8BB4E0 };
		inline constexpr REL::Offset ctor_1{ 0x8BB560 };
	}

	namespace hkpMultiRayConvexAgent
	{
		inline constexpr REL::Offset staticGetClosestPoints{ 0x937280 };
		inline constexpr REL::Offset staticGetPenetrations{ 0x9374F0 };
		inline constexpr REL::Offset ctor{ 0x9376B0 };
	}

	namespace hkpMultiSphereTriangleAgent
	{
		inline constexpr REL::Offset staticGetClosestPoints{ 0x9386C0 };
	}

	namespace hkpMultiThreadedSimulation
	{
		inline constexpr REL::Offset processNextJob{ 0x901E50 };
		inline constexpr REL::Offset stepBeginSt{ 0x9022B0 };
		inline constexpr REL::Offset processAgentNnEntriesFromMultipleIslands{ 0x902930 };
		inline constexpr REL::Offset ctor{ 0x902C80 };
		inline constexpr REL::Offset addToiEventWithCriticalSectionLock{ 0x902E70 };
		inline constexpr REL::Offset finishMtStep{ 0x903290 };
	}

	namespace hkpPairCollisionFilter
	{
		inline constexpr REL::Offset ctor{ 0x9EF350 };
	}

	namespace hkpPhantomAgent
	{
		inline constexpr REL::Offset ctor{ 0x942790 };
	}

	namespace hkpPhantomCallbackShape
	{
		inline constexpr REL::Offset ctor{ 0x16D610 };
	}

	namespace hkpPhantomDisplayViewer
	{
		inline constexpr REL::Offset removeWorld{ 0x966250 };
		inline constexpr REL::Offset addWorld{ 0x9662C0 };
		inline constexpr REL::Offset registerViewer{ 0x966AF0 };
	}

	namespace hkpPhysicsContext
	{
		inline constexpr REL::Offset registerAllPhysicsProcesses{ 0x8D1ED0 };
		inline constexpr REL::Offset removeFromInspection{ 0x8D2080 };
		inline constexpr REL::Offset addForInspection{ 0x8D22F0 };
	}

	namespace hkpPhysicsData
	{
		inline constexpr REL::Offset splitPhysicsSystems{ 0x94C3B0 };
	}

	namespace hkpPhysicsSystem
	{
		inline constexpr REL::Offset removeAll{ 0x906090 };
		inline constexpr REL::Offset addRigidBody{ 0x906290 };
		inline constexpr REL::Offset ctor{ 0x9065E0 };
	}

	namespace hkpPoweredChainData
	{
		inline constexpr REL::Offset addConstraintInfoInBodySpace{ 0xA3B850 };
		inline constexpr REL::Offset ctor{ 0xA3B8F0 };
		inline constexpr REL::Offset ctor_1{ 0xA3B960 };
	}

	namespace hkpPoweredChainMapper
	{
		inline constexpr REL::Offset buildChainMapper{ 0xA3A5B0 };
	}

	namespace hkpPredGskfAgent
	{
		inline constexpr REL::Offset createPredGskfAgent{ 0x941F50 };
	}

	namespace hkpProcessCollisionOutputBackup
	{
		inline constexpr REL::Offset rollbackOutput{ 0x933600 };
		inline constexpr REL::Offset ctor{ 0x933670 };
	}

	namespace hkpRagdollConstraintData
	{
		inline constexpr REL::Offset ctor{ 0x8DF2F0 };
	}

	namespace hkpRagdollLimitsDrawer
	{
		inline constexpr REL::Offset ctor{ 0x969A40 };
		inline constexpr REL::Offset dtor{ 0x969A80 };
	}

	namespace hkpReportContactMgr_Factory
	{
		inline constexpr REL::Offset ctor{ 0x8FCA20 };
	}

	namespace hkpRigidBody
	{
		inline constexpr REL::Offset getMass{ 0xB4EA0 };
		inline constexpr REL::Offset getPosition{ 0xB4EC0 };
		inline constexpr REL::Offset getTransform{ 0xB4F00 };
		inline constexpr REL::Offset getMotionType{ 0x117670 };
		inline constexpr REL::Offset getLinearVelocity{ 0x160DC0 };
		inline constexpr REL::Offset getAngularVelocity{ 0x160E50 };
		inline constexpr REL::Offset getStoredDynamicMotion{ 0x8A86C0 };
		inline constexpr REL::Offset ctor{ 0x8A8C90 };
		inline constexpr REL::Offset getCinfo{ 0x8A8F50 };
	}

	namespace hkpRigidBodyCentreOfMassViewer
	{
		inline constexpr REL::Offset removeWorld{ 0x969B20 };
		inline constexpr REL::Offset addWorld{ 0x969C10 };
		inline constexpr REL::Offset ctor{ 0x96A040 };
		inline constexpr REL::Offset registerViewer{ 0x96A180 };
	}

	namespace hkpRigidBodyInertiaViewer
	{
		inline constexpr REL::Offset removeWorld{ 0x966F30 };
		inline constexpr REL::Offset addWorld{ 0x967020 };
		inline constexpr REL::Offset registerViewer{ 0x9678C0 };
	}

	namespace hkpRootCdPoint
	{
		inline constexpr REL::Offset operator_call{ 0x2212C0 };
		inline constexpr REL::Offset ctor{ 0x232D40 };
	}

	namespace hkpSerializedTrack1nInfo
	{
		inline constexpr REL::Offset dtor{ 0xA084F0 };
	}

	namespace hkpShapeCollectionAgent
	{
		inline constexpr REL::Offset staticGetClosestPoints{ 0x943960 };
		inline constexpr REL::Offset staticLinearCast{ 0x943B90 };
		inline constexpr REL::Offset staticGetPenetrations{ 0x943DC0 };
	}

	namespace hkpShapeDisplayBuilder
	{
		inline constexpr REL::Offset ctor{ 0x9DFB80 };
	}

	namespace hkpShapeDisplayBuilder_hkpShapeDisplayBuilderEnvironment
	{
		inline constexpr REL::Offset ctor{ 0x9DFB70 };
	}

	namespace hkpShapeDisplayViewer
	{
		inline constexpr REL::Offset findWorld{ 0x9655E0 };
		inline constexpr REL::Offset removeAllGeometries{ 0x965750 };
		inline constexpr REL::Offset ctor{ 0x9657D0 };
		inline constexpr REL::Offset registerViewer{ 0x965950 };
		inline constexpr REL::Offset addWorld{ 0x965970 };
		inline constexpr REL::Offset removeWorld{ 0x965FC0 };
		inline constexpr REL::Offset getId{ 0x966180 };
	}

	namespace hkpShapeRayCastInput
	{
		inline constexpr REL::Offset ctor{ 0xA3D20 };
	}

	namespace hkpSimpleContactConstraintData
	{
		inline constexpr REL::Offset ctor{ 0x992F20 };
	}

	namespace hkpSimpleShapePhantom
	{
		inline constexpr REL::Offset ctor{ 0x9FC850 };
	}

	namespace hkpSimpleWorldRayCaster
	{
		inline constexpr REL::Offset castRay{ 0x8FAB30 };
	}

	namespace hkpSimulation
	{
		inline constexpr REL::Offset reCollideAfterStepFailure{ 0x8F8820 };
		inline constexpr REL::Offset integrateInternal{ 0x8F8DA0 };
		inline constexpr REL::Offset collideEntitiesBroadPhaseDiscrete{ 0x8F9C60 };
	}

	namespace hkpSimulationIsland
	{
		inline constexpr REL::Offset isFullyConnected{ 0x9077D0 };
		inline constexpr REL::Offset ctor{ 0x907830 };
	}

	namespace hkpSimulationIslandViewer
	{
		inline constexpr REL::Offset ctor{ 0x964A50 };
		inline constexpr REL::Offset registerViewer{ 0x9651C0 };
	}

	namespace hkpSphereBoxAgent
	{
		inline constexpr REL::Offset staticGetPenetrations{ 0x93C440 };
		inline constexpr REL::Offset staticGetClosestPoints{ 0x93CC00 };
	}

	namespace hkpSphereCapsuleAgent
	{
		inline constexpr REL::Offset staticGetPenetrations{ 0x93E330 };
		inline constexpr REL::Offset staticGetClosestPoints{ 0x93EBE0 };
	}

	namespace hkpSphereShape
	{
		inline constexpr REL::Offset ctor{ 0x8D8160 };
	}

	namespace hkpSphereSphereAgent
	{
		inline constexpr REL::Offset staticGetPenetrations{ 0x93F6A0 };
		inline constexpr REL::Offset staticGetClosestPoints{ 0x93FB20 };
	}

	namespace hkpSphereTriangleAgent
	{
		inline constexpr REL::Offset staticGetPenetrations{ 0x93D3E0 };
		inline constexpr REL::Offset staticGetClosestPoints{ 0x93D8C0 };
	}

	namespace hkpSweptTransformDisplayViewer
	{
		inline constexpr REL::Offset findWorld{ 0x963FF0 };
		inline constexpr REL::Offset removeAllGeometries{ 0x9641F0 };
		inline constexpr REL::Offset ctor{ 0x964260 };
		inline constexpr REL::Offset registerViewer{ 0x964630 };
		inline constexpr REL::Offset addWorld{ 0x964650 };
		inline constexpr REL::Offset removeWorld{ 0x964800 };
	}

	namespace hkpToiCountViewer
	{
		inline constexpr REL::Offset ctor{ 0x967CE0 };
		inline constexpr REL::Offset registerViewer{ 0x967E10 };
		inline constexpr REL::Offset displayCountForBody{ 0x968030 };
	}

	namespace hkpTransformCollapseUtil_Results
	{
		inline constexpr REL::Offset report{ 0x973430 };
	}

	namespace hkpTriSampledHeightFieldBvTreeShape
	{
		inline constexpr REL::Offset getExtentsForQueryAabb{ 0x926940 };
	}

	namespace hkpTriSampledHeightFieldCollection
	{
		inline constexpr REL::Offset getHeightFieldShape{ 0x926450 };
	}

	namespace hkpTypedBroadPhaseDispatcher
	{
		inline constexpr REL::Offset removePairs{ 0x8F70F0 };
		inline constexpr REL::Offset removeDuplicates{ 0x8F7130 };
	}

	namespace hkpTyremarksInfo
	{
		inline constexpr REL::Offset ctor{ 0xA3A2A0 };
	}

	namespace hkpUnaryAction
	{
		inline constexpr REL::Offset ctor{ 0x92B260 };
	}

	namespace hkpVehicleInstance
	{
		inline constexpr REL::Offset updateBeforeCollisionDetection{ 0xA37940 };
		inline constexpr REL::Offset simulateVehicle{ 0xA385E0 };
		inline constexpr REL::Offset updateBrake{ 0xA38A30 };
		inline constexpr REL::Offset updateSteering{ 0xA38D50 };
		inline constexpr REL::Offset updateComponents{ 0xA38E60 };
		inline constexpr REL::Offset stepVehicleUsingWheelCollideOutput{ 0xA39030 };
		inline constexpr REL::Offset stepVehicle{ 0xA39190 };
		inline constexpr REL::Offset operator_call{ 0xA39480 };
	}

	namespace hkpVehicleViewer
	{
		inline constexpr REL::Offset registerViewer{ 0x963DA0 };
	}

	namespace hkpWeldingViewer
	{
		inline constexpr REL::Offset ctor{ 0x9626B0 };
	}

	namespace hkpWorld
	{
		inline constexpr REL::Offset unlock{ 0x891190 };
		inline constexpr REL::Offset lockIslandForConstraintUpdate{ 0x8911D0 };
		inline constexpr REL::Offset unlockIslandForConstraintUpdate{ 0x891210 };
		inline constexpr REL::Offset getCinfo{ 0x891C50 };
		inline constexpr REL::Offset castRay{ 0x891F70 };
		inline constexpr REL::Offset castRay_1{ 0x892040 };
		inline constexpr REL::Offset linearCast{ 0x892430 };
		inline constexpr REL::Offset getWorldAsOneSystem{ 0x8929E0 };
		inline constexpr REL::Offset getMemoryWatchDog{ 0x893570 };
		inline constexpr REL::Offset removeAll{ 0x893580 };
		inline constexpr REL::Offset getWorldAsSystems{ 0x893B30 };
		inline constexpr REL::Offset updateCollisionFilterOnPhantom{ 0x8944A0 };
		inline constexpr REL::Offset updateCollisionFilterOnEntity{ 0x8946E0 };
		inline constexpr REL::Offset addEntityBatch{ 0x894BD0 };
		inline constexpr REL::Offset removeEntityBatch{ 0x8951B0 };
		inline constexpr REL::Offset ctor{ 0x895A80 };
		inline constexpr REL::Offset shiftBroadPhase{ 0x896A20 };
		inline constexpr REL::Offset updateCollisionFilterOnWorld{ 0x896FF0 };
		inline constexpr REL::Offset setCollisionFilter{ 0x8977C0 };
		inline constexpr REL::Offset removePhysicsSystem{ 0x8980D0 };
	}

	namespace hkpWorldCinfo
	{
		inline constexpr REL::Offset ctor{ 0x890B80 };
	}

	namespace hkpWorldMemoryViewer
	{
		inline constexpr REL::Offset ctor{ 0x963280 };
		inline constexpr REL::Offset registerViewer{ 0x963400 };
	}

	namespace hkpWorldObject
	{
		inline constexpr REL::Offset copyProperties{ 0x8A92A0 };
		inline constexpr REL::Offset ctor{ 0x8D2C50 };
		inline constexpr REL::Offset ctor_1{ 0x8D2CE0 };
	}

	namespace hkpWorldOperationQueue
	{
		inline constexpr REL::Offset queueOperation{ 0x8F7690 };
		inline constexpr REL::Offset executeAllPendingBodyOperations{ 0x8F7AE0 };
	}

	namespace hkpWorldRayCastOutput
	{
		inline constexpr REL::Offset reset{ 0x22A2B0 };
		inline constexpr REL::Offset ctor{ 0x296C30 };
		inline constexpr REL::Offset operator_call{ 0x5C1A70 };
	}

	namespace hkpWorldRayCaster
	{
		inline constexpr REL::Offset castRay{ 0x8BF860 };
	}

	namespace hkpWorldSnapshotViewer
	{
		inline constexpr REL::Offset registerViewer{ 0x963000 };
	}

	namespace hkpWorldViewerBase
	{
		inline constexpr REL::Offset ctor{ 0x9DCCB0 };
	}

	namespace hkxAttributeGroup
	{
		inline constexpr REL::Offset findAttributeObjectByName{ 0xA5C540 };
		inline constexpr REL::Offset getBoolValue{ 0xA5C6B0 };
		inline constexpr REL::Offset getIntValue{ 0xA5C7A0 };
		inline constexpr REL::Offset getStringValue{ 0xA5C8B0 };
		inline constexpr REL::Offset getMatrixValue{ 0xA5C9B0 };
		inline constexpr REL::Offset operator_call{ 0xA5CCE0 };
	}

	namespace hkxAttributeHolder
	{
		inline constexpr REL::Offset ctor{ 0xA3E950 };
	}

	namespace hkxEnvironment
	{
		inline constexpr REL::Offset convertToString{ 0xA3F2B0 };
		inline constexpr REL::Offset setVariable{ 0xA3F3B0 };
		inline constexpr REL::Offset interpretString{ 0xA3F520 };
	}

	namespace hkxMaterialShader
	{
		inline constexpr REL::Offset ctor{ 0xA02140 };
	}

	namespace hkxMeshSection
	{
		inline constexpr REL::Offset collectVertexPositions{ 0xA61480 };
		inline constexpr REL::Offset appendGeometry{ 0xA61530 };
		inline constexpr REL::Offset operator_call{ 0xA61770 };
	}

	namespace hkxNode
	{
		inline constexpr REL::Offset replaceAllObjects{ 0xA3EBA0 };
	}

	namespace hkxTextureFile
	{
		inline constexpr REL::Offset ctor{ 0xA017F0 };
	}

	namespace hkxVertexBuffer
	{
		inline constexpr REL::Offset copyVertex{ 0xA3E030 };
		inline constexpr REL::Offset setNumVertices{ 0xA3E3A0 };
		inline constexpr REL::Offset copy{ 0xA3E670 };
	}

	namespace hkxVertexBuffer_VertexData
	{
		inline constexpr REL::Offset setSize{ 0xA3E250 };
	}

}
