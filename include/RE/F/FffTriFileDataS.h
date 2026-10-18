#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2Vect2TC.h"
#include "RE/F/FR2Vect3TC.h"
#include "RE/F/FffTriDiffMorphS.h"
#include "RE/F/FffTriStatMorphS.h"
#include "RE/F/FffTriSurfLabelS.h"
#include "RE/F/FffTriVtxLabelS.h"
#include "RE/F/FutVect4TC.h"

namespace RE
{
	class FffTriFileDataS
	{
	public:
		// members
		stl::vector<FR2Vect3TC<float>>        vtxList;        // 00?
		stl::vector<FR2Vect3TC<std::int32_t>> triList;        // 18
		stl::vector<FutVect4TC<std::int32_t>> quadList;       // 30?
		stl::vector<FR2Vect2TC<float>>        txtData;        // 48?
		stl::vector<FR2Vect3TC<std::int32_t>> txtTriList;     // 60?
		stl::vector<FutVect4TC<std::int32_t>> txtQuadList;    // 78?
		stl::vector<FffTriVtxLabelS>          vtxLabelList;   // 90?
		stl::vector<FffTriSurfLabelS>         surfLabelList;  // A8?
		stl::vector<FffTriDiffMorphS>         diffMorphList;  // C0?
		stl::vector<FffTriStatMorphS>         statMorphList;  // D8?
	};
}
