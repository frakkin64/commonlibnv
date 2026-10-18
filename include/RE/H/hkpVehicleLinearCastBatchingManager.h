#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpVehicleCastBatchingManager.h"

namespace RE
{
	class hkJobQueue;
	class hkSemaphore;
	class hkStepInfo;
	class hkpWorld;

	class hkpVehicleLinearCastBatchingManager :
		public hkpVehicleCastBatchingManager  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleLinearCastBatchingManager };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleLinearCastBatchingManager };

		// override (hkpVehicleCastBatchingManager)
		virtual ~hkpVehicleLinearCastBatchingManager() = default;  // 00

		// add
		virtual void Unk_06();                                                                                                                                                       // 06
		virtual void Unk_07();                                                                                                                                                       // 07
		virtual std::int32_t getBufferSize(std::int32_t numJobs);                                                                                                                    // 08
		virtual std::int32_t buildAndAddCastJobs(hkpWorld const* world, std::int32_t filterSize, std::int32_t numJobs, hkJobQueue* jobQueue, hkSemaphore* semaphore, void* buffer);  // 09
		virtual void stepVehiclesUsingCastResults(hkStepInfo const& stepInfo, std::int32_t numJobs, void* buffer);                                                                   // 0A
	};
}
