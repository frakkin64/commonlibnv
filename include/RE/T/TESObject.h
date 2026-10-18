#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESForm.h"

namespace RE
{
	class BipedAnim;
	class NiAVObject;
	class TESObjectList;
	class TESObjectREFR;
	class TESWaterForm;

	class TESObject :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObject };
		static constexpr auto VTABLE{ VTABLE::TESObject };

		// override (TESForm)
		virtual ~TESObject() = default;                // 04
		virtual bool IsObject() override;              // 3A
		virtual std::uint32_t GetRefCount() override;  // 41

		// add
		virtual NiAVObject* Load3D();                                           // 4E
		virtual bool IsBoundAnimObject();                                       // 4F
		virtual TESWaterForm* GetWaterType();                                   // 50
		virtual bool IsAutoCalc();                                              // 51
		virtual void SetAutoCalc(bool bAC);                                     // 52
		virtual NiAVObject* Clone3D(TESObjectREFR* pRequester, bool deepCopy);  // 53
		virtual void UnClone3D(TESObjectREFR* apRequester);                     // 54
		virtual bool IsMarker();                                                // 55
		virtual bool IsOcclusionMarker();                                       // 56
		virtual void InitDefaultWorn();                                         // 57
		virtual bool ReplaceModel(BipedAnim* biped);                            // 59 (reversed overload group)
		virtual bool ReplaceModel();                                            // 58 (reversed overload group)
		virtual std::uint32_t IncRef();                                         // 5A
		virtual void Unk_5B();                                                  // 5B
		virtual std::uint32_t DecRef();                                         // 5C
		virtual NiAVObject* LoadGraphics(TESObjectREFR* apRef);                 // 5D

		char const* GetModelFileName(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObject::GetModelFileName);
			static REL::Relocation<func_t> func{ Offsets::TESObject::GetModelFileName };
			return func(this, apRef);
		}

		void GetScaledModelFileName(TESObjectREFR* apRef, char* apScaledFileName)
		{
			using func_t = decltype(&TESObject::GetScaledModelFileName);
			static REL::Relocation<func_t> func{ Offsets::TESObject::GetScaledModelFileName };
			func(this, apRef, apScaledFileName);
		}

	public:
		// members
		TESObjectList* m_pParentList;  // 18
		TESObject*     nod_lpPrev;     // 1C
		TESObject*     nod_lpNext;     // 20
	};
	static_assert(sizeof(TESObject) == 0x24);
}
