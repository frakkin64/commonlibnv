#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiNPShortPoint3.h"
#include "RE/N/NiPoint3.h"
#include "RE/T/TESObject.h"

namespace RE
{
	class NiAVObject;
	class TESFile;
	class TESObjectREFR;

	class TESBoundObject :
		public TESObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESBoundObject };
		static constexpr auto VTABLE{ VTABLE::TESBoundObject };

		class BOUND_DATA;

		class BOUND_DATA
		{
		public:
			void Endian()
			{
				using func_t = decltype(&BOUND_DATA::Endian);
				static REL::Relocation<func_t> func{ Offsets::TESBoundObject_BOUND_DATA::Endian };
				func(this);
			}

		public:
			// members
			NiNPShortPoint3 BoundMin;  // 00
			NiNPShortPoint3 BoundMax;  // 06
		};
		static_assert(sizeof(BOUND_DATA) == 0xC);

		// override (TESObject)
		virtual ~TESBoundObject() = default;                                                                                                                             // 04
		virtual void LoadObjectBound(TESFile* apFile) override;                                                                                                          // 37
		virtual bool IsBoundObject() override;                                                                                                                           // 38
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49
		virtual NiAVObject* Clone3D(TESObjectREFR* pRequester, bool deepCopy) override;                                                                                  // 53
		virtual bool ReplaceModel() override;                                                                                                                            // 58

		// add
		virtual NiAVObject* Clone3D_5E(TESObjectREFR* pRequester);  // 5E
		virtual bool ReplaceModel_5F(char const* pfilename);        // 5F

		TESBoundObject* ctor()
		{
			using func_t = TESBoundObject*(__thiscall*)(TESBoundObject*);
			static REL::Relocation<func_t> func{ Offsets::TESBoundObject::ctor };
			return func(this);
		}

		void CopyBoundData(TESBoundObject* apCopy)
		{
			using func_t = decltype(&TESBoundObject::CopyBoundData);
			static REL::Relocation<func_t> func{ Offsets::TESBoundObject::CopyBoundData };
			func(this, apCopy);
		}

		NiPoint3 GetBoundMin()
		{
			using func_t = decltype(&TESBoundObject::GetBoundMin);
			static REL::Relocation<func_t> func{ Offsets::TESBoundObject::GetBoundMin };
			return func(this);
		}

		NiPoint3 GetBoundMax()
		{
			using func_t = decltype(&TESBoundObject::GetBoundMax);
			static REL::Relocation<func_t> func{ Offsets::TESBoundObject::GetBoundMax };
			return func(this);
		}

		float GetBoundSize()
		{
			using func_t = decltype(&TESBoundObject::GetBoundSize);
			static REL::Relocation<func_t> func{ Offsets::TESBoundObject::GetBoundSize };
			return func(this);
		}

	public:
		// members
		TESBoundObject::BOUND_DATA BoundData;  // 24
	};
}
