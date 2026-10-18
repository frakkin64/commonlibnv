#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/ENUM_LOD_MULT.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedFileEntry.h"

namespace RE
{
	class Model;
	class TESModel;
	class TESTextureList;

	class QueuedModel :
		public QueuedFileEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedModel };
		static constexpr auto VTABLE{ VTABLE::QueuedModel };

		// override (QueuedFileEntry)
		virtual ~QueuedModel() = default;                                                       // 00
		virtual void Run() override;                                                            // 01
		virtual void Finish() override;                                                         // 02
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void GenerateKey() override;                                                    // 06
		virtual void QueueMe() override;                                                        // 08
		virtual void CheckFinished() override;                                                  // 0A
		virtual std::uint8_t GetFileIndex() override;                                           // 0B

		// add
		virtual void QueueMe_0C(TESTextureList* apTextureList);  // 0C

		QueuedModel* ctor(char const* apFileName, IO_TASK_PRIORITY aePriority, ENUM_LOD_MULT aeLODFadeMult, bool abPrepareAfterLoad, bool bAddRefCount)
		{
			using func_t = QueuedModel*(__thiscall*)(QueuedModel*, char const*, IO_TASK_PRIORITY, ENUM_LOD_MULT, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::QueuedModel::ctor };
			return func(this, apFileName, aePriority, aeLODFadeMult, abPrepareAfterLoad, bAddRefCount);
		}

		void SetPrepareAfterLoad(bool abValue)
		{
			using func_t = decltype(&QueuedModel::SetPrepareAfterLoad);
			static REL::Relocation<func_t> func{ Offsets::QueuedModel::SetPrepareAfterLoad };
			func(this, abValue);
		}

		void SetAddRefCount(bool abValue)
		{
			using func_t = decltype(&QueuedModel::SetAddRefCount);
			static REL::Relocation<func_t> func{ Offsets::QueuedModel::SetAddRefCount };
			func(this, abValue);
		}

		QueuedModel* ctor(TESModel* apModel, IO_TASK_PRIORITY aePriority, ENUM_LOD_MULT aeLODFadeMult, bool abPrepareAfterLoad, bool bAddRefCount)
		{
			using func_t = QueuedModel*(__thiscall*)(QueuedModel*, TESModel*, IO_TASK_PRIORITY, ENUM_LOD_MULT, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::QueuedModel::ctor_1 };
			return func(this, apModel, aePriority, aeLODFadeMult, abPrepareAfterLoad, bAddRefCount);
		}

		QueuedModel* ctor(Model* apModel, IO_TASK_PRIORITY aePriority)
		{
			using func_t = QueuedModel*(__thiscall*)(QueuedModel*, Model*, IO_TASK_PRIORITY);
			static REL::Relocation<func_t> func{ Offsets::QueuedModel::ctor_2 };
			return func(this, apModel, aePriority);
		}

		void SetFaceGenModel(bool abValue)
		{
			using func_t = decltype(&QueuedModel::SetFaceGenModel);
			static REL::Relocation<func_t> func{ Offsets::QueuedModel::SetFaceGenModel };
			func(this, abValue);
		}

	public:
		// members
		NiPointer<Model> spModel;                     // 30
		TESModel*        pTESModel;                   // 34
		ENUM_LOD_MULT    eLODFadeMult;                // 38
		std::uint8_t     cFlags;                      // 3C
		std::uint8_t     pad3D[0x3];                  // 3D
		float            mfOverriddenVisualDistance;  // 40
		std::uint32_t    pad44;                       // 44
	};
	static_assert(sizeof(QueuedModel) == 0x48);
}
