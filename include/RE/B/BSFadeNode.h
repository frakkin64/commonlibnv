#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/E/ENUM_LOD_MULT.h"
#include "RE/N/NiNode.h"

namespace RE
{
	class BSMultiBoundRoom;
	class BSNiBoundArray;
	class BSPortal;

	class BSFadeNode :
		public NiNode  // 00
	{
	public:
		void TurnFadeNodeOn()
		{
			using func_t = decltype(&BSFadeNode::TurnFadeNodeOn);
			static REL::Relocation<func_t> func{ Offsets::BSFadeNode::TurnFadeNodeOn };
			func(this);
		}

		void SetFadingFlag(bool aFade)
		{
			using func_t = decltype(&BSFadeNode::SetFadingFlag);
			static REL::Relocation<func_t> func{ Offsets::BSFadeNode::SetFadingFlag };
			func(this, aFade);
		}

		void SetIgnoreFade(bool abIgnoreFade)
		{
			using func_t = decltype(&BSFadeNode::SetIgnoreFade);
			static REL::Relocation<func_t> func{ Offsets::BSFadeNode::SetIgnoreFade };
			func(this, abIgnoreFade);
		}

		static void SetFadeEnabled(bool abVal)
		{
			using func_t = decltype(&BSFadeNode::SetFadeEnabled);
			static REL::Relocation<func_t> func{ Offsets::BSFadeNode::SetFadeEnabled };
			func(abVal);
		}

		void TurnFadeNodeOff()
		{
			using func_t = decltype(&BSFadeNode::TurnFadeNodeOff);
			static REL::Relocation<func_t> func{ Offsets::BSFadeNode::TurnFadeNodeOff };
			func(this);
		}

		void SetUserData(void* apData)
		{
			using func_t = decltype(&BSFadeNode::SetUserData);
			static REL::Relocation<func_t> func{ Offsets::BSFadeNode::SetUserData };
			func(this, apData);
		}

		void ForceLODMultType(ENUM_LOD_MULT aeMultType)
		{
			using func_t = decltype(&BSFadeNode::ForceLODMultType);
			static REL::Relocation<func_t> func{ Offsets::BSFadeNode::ForceLODMultType };
			func(this, aeMultType);
		}

		void* QUserData()
		{
			using func_t = decltype(&BSFadeNode::QUserData);
			static REL::Relocation<func_t> func{ Offsets::BSFadeNode::QUserData };
			return func(this);
		}

		void SetLODMultType(ENUM_LOD_MULT aeMultType)
		{
			using func_t = decltype(&BSFadeNode::SetLODMultType);
			static REL::Relocation<func_t> func{ Offsets::BSFadeNode::SetLODMultType };
			func(this, aeMultType);
		}

		void SetRange(float afNearDist, float afFarDist)
		{
			using func_t = decltype(&BSFadeNode::SetRange);
			static REL::Relocation<func_t> func{ Offsets::BSFadeNode::SetRange };
			func(this, afNearDist, afFarDist);
		}

		static void InitSDM()
		{
			using func_t = decltype(&BSFadeNode::InitSDM);
			static REL::Relocation<func_t> func{ Offsets::BSFadeNode::InitSDM };
			func();
		}

	public:
		// members
		float                           fNearDistSqr;      // AC
		float                           fFarDistSqr;       // B0
		float                           fLastFade;         // B4
		float                           fCurrentFade;      // B8
		float                           fBoundRadius;      // BC
		float                           fTimeSinceUpdate;  // C0
		ENUM_LOD_MULT                   eMultType;         // C4
		std::int32_t                    iFrameCounter;     // C8
		void*                           pUserData;         // CC
		BSNiBoundArray*                 pBoundArray;       // D0?
		BSSimpleList<BSMultiBoundRoom*> ParentRoomList;    // D4?
		BSSimpleList<BSPortal*>         ParentPortalList;  // DC?
	};
}
