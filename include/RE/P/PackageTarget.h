#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CHUNK_ID.h"
#include "RE/P/PACKAGE_OBJECT_TYPE.h"
#include "RE/P/PACK_TARG_TYPE.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class TESForm;
	class TESObjectREFR;

	class PackageTarget
	{
	public:
		PACK_TARG_TYPE GetTargType()
		{
			using func_t = decltype(&PackageTarget::GetTargType);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::GetTargType };
			return func(this);
		}

		PackageTarget* ctor()
		{
			using func_t = PackageTarget*(__thiscall*)(PackageTarget*);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::ctor };
			return func(this);
		}

		TESForm* GetTargObject()
		{
			using func_t = decltype(&PackageTarget::GetTargObject);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::GetTargObject };
			return func(this);
		}

		PACKAGE_OBJECT_TYPE GetTargObjectType()
		{
			using func_t = decltype(&PackageTarget::GetTargObjectType);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::GetTargObjectType };
			return func(this);
		}

		void SetTargType(PACK_TARG_TYPE aeType)
		{
			using func_t = decltype(&PackageTarget::SetTargType);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::SetTargType };
			func(this, aeType);
		}

		void SetTargReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&PackageTarget::SetTargReference);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::SetTargReference };
			func(this, apRef);
		}

		void SetTargObject(TESForm* apObj)
		{
			using func_t = decltype(&PackageTarget::SetTargObject);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::SetTargObject };
			func(this, apObj);
		}

		void Copy(PackageTarget* apCopy)
		{
			using func_t = decltype(&PackageTarget::Copy);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::Copy };
			func(this, apCopy);
		}

		bool Compare(PackageTarget* apCompare)
		{
			using func_t = decltype(&PackageTarget::Compare);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::Compare };
			return func(this, apCompare);
		}

		void Save(CHUNK_ID aeChunk)
		{
			using func_t = decltype(&PackageTarget::Save);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::Save };
			func(this, aeChunk);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&PackageTarget::InitItem);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::InitItem };
			func(this, apOwner);
		}

		void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&PackageTarget::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

	private:
		TESObjectREFR* GetTargReference()
		{
			using func_t = decltype(&PackageTarget::GetTargReference);
			static REL::Relocation<func_t> func{ Offsets::PackageTarget::GetTargReference };
			return func(this);
		}

	public:
		// members
		std::uint8_t eTargType;       // 00
		std::uint8_t pad01[0x3];      // 01
		union
		{
			TESObjectREFR* pReference;
			TESForm* pObject;
			TESForm* pRefOrObj;
			PACKAGE_OBJECT_TYPE eObjType;
		} ___u1;  // 04
		std::int32_t iValue;          // 08
		float        fAcquireRadius;  // 0C
	};
	static_assert(sizeof(PackageTarget) == 0x10);
}
