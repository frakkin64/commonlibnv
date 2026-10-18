#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class PathingRequest;
	class PathingSolution;

	// not confirmed: no named code in the executable refers to this type
	class PathingDebugGeometryData :
		public NiRefObject  // 00
	{
	public:
		// members
		NiPointer<PathingRequest>  spRequest;              // 08?
		NiPointer<PathingSolution> spSolution;             // 0C?
		bool                       bActorLocation;         // 10?
		std::uint8_t               pad11[0x3];             // 11
		NiPoint3                   ActorLocation;          // 14?
		bool                       bActorRotation;         // 20?
		std::uint8_t               pad21[0x3];             // 21
		float                      fActorRotation;         // 24?
		bool                       bLookAtPoint;           // 28?
		std::uint8_t               pad29[0x3];             // 29
		NiPoint3                   LookAtPoint;            // 2C?
		bool                       bTether;                // 38?
		std::uint8_t               pad39[0x3];             // 39
		NiPoint3                   TetherLocation;         // 3C?
		bool                       bRotateGoal;            // 48?
		std::uint8_t               pad49[0x3];             // 49
		float                      fRotateGoal;            // 4C?
		bool                       bPathFailed;            // 50?
		bool                       bRequestChanged;        // 51?
		bool                       bSolutionChanged;       // 52?
		bool                       bActorLocationChanged;  // 53?
		bool                       bActorRotationChanged;  // 54?
		bool                       bLookAtPointChanged;    // 55?
		bool                       bTetherChanged;         // 56?
		bool                       bRotateGoalChanged;     // 57?
	};
}
