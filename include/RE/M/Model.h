#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class BSStream;
	class NiNode;

	class Model
	{
	public:
		void DecRefCount()
		{
			using func_t = decltype(&Model::DecRefCount);
			static REL::Relocation<func_t> func{ Offsets::Model::DecRefCount };
			func(this);
		}

		Model* ctor(char const* apFilename, BSStream* apStream, bool abPrepareObject, bool abFaceGenModel)
		{
			using func_t = Model*(__thiscall*)(Model*, char const*, BSStream*, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::Model::ctor };
			return func(this, apFilename, apStream, abPrepareObject, abFaceGenModel);
		}

		Model* ctor(char const* apFilename, NiNode* apObject3D)
		{
			using func_t = Model*(__thiscall*)(Model*, char const*, NiNode*);
			static REL::Relocation<func_t> func{ Offsets::Model::ctor_1 };
			return func(this, apFilename, apObject3D);
		}

		void DecManualRefCount()
		{
			using func_t = decltype(&Model::DecManualRefCount);
			static REL::Relocation<func_t> func{ Offsets::Model::DecManualRefCount };
			func(this);
		}

		void InitModel(char const* apFilename, BSStream* apStream, bool abPrepareObject, bool abFaceGenModel)
		{
			using func_t = decltype(&Model::InitModel);
			static REL::Relocation<func_t> func{ Offsets::Model::InitModel };
			func(this, apFilename, apStream, abPrepareObject, abFaceGenModel);
		}

		void IncManualRefCount()
		{
			using func_t = decltype(&Model::IncManualRefCount);
			static REL::Relocation<func_t> func{ Offsets::Model::IncManualRefCount };
			func(this);
		}

	public:
		// members
		char*             pFilename;        // 00
		std::int32_t      iRefCount;        // 04
		std::int32_t      iManualRefCount;  // 08
		NiPointer<NiNode> spObject3D;       // 0C
	};
	static_assert(sizeof(Model) == 0x10);
}
