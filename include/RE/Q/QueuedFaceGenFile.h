#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedFileLoad.h"

namespace RE
{
	class BSFaceGenModel;
	class BSFaceGenModelMeshData;

	class QueuedFaceGenFile :
		public QueuedFileLoad  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedFaceGenFile };
		static constexpr auto VTABLE{ VTABLE::QueuedFaceGenFile };

		// override (QueuedFileLoad)
		virtual ~QueuedFaceGenFile() = default;  // 00

		QueuedFaceGenFile* ctor(BSFaceGenModel* apModel, BSFaceGenModelMeshData* apMeshData)
		{
			using func_t = QueuedFaceGenFile*(__thiscall*)(QueuedFaceGenFile*, BSFaceGenModel*, BSFaceGenModelMeshData*);
			static REL::Relocation<func_t> func{ Offsets::QueuedFaceGenFile::ctor };
			return func(this, apModel, apMeshData);
		}

	public:
		// members
		NiPointer<BSFaceGenModel>         spFaceGenModel;   // 38
		NiPointer<BSFaceGenModelMeshData> spModelMeshData;  // 3C
	};
	static_assert(sizeof(QueuedFaceGenFile) == 0x40);
}
