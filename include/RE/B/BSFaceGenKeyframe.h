#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_FACEGEN_MORPH_TYPE.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class __declspec(novtable) BSFaceGenKeyframe
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenKeyframe };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenKeyframe };

		// add
		virtual ~BSFaceGenKeyframe() = default;                                                               // 00
		virtual BS_FACEGEN_MORPH_TYPE GetType();                                                              // 01
		virtual bool SetType(BS_FACEGEN_MORPH_TYPE aeType);                                                   // 02
		virtual float GetTime() const;                                                                        // 03
		virtual bool SetTime(float afTime);                                                                   // 04
		virtual bool AddToList(NiTPointerList<BSFaceGenKeyframe*>* a_arg1);                                   // 05
		virtual bool MergeMorphDataFrom(BSFaceGenKeyframe* a_arg1, float a_arg2, bool a_arg3, bool a_arg4);   // 07 (reversed overload group)
		virtual bool MergeMorphDataFrom(BSFaceGenKeyframe* a_arg1, BSFaceGenKeyframe* a_arg2, float a_arg3);  // 06 (reversed overload group)
		virtual bool ClearData(bool a_arg1);                                                                  // 08
		virtual BSFaceGenKeyframe* CreateCopy();                                                              // 09
		virtual void CopyFrom(BSFaceGenKeyframe* a_arg1);                                                     // 0A
		virtual bool Compare(BSFaceGenKeyframe* a_arg1);                                                      // 0B
		virtual float GetStrength();                                                                          // 0C
		virtual bool IsEmpty();                                                                               // 0D
		virtual void SetToZero();                                                                             // 0E
		virtual bool UpdateToTarget(float a_arg1, BSFaceGenKeyframe* a_arg2);                                 // 0F
		virtual bool IsTargetAvailable();                                                                     // 10
		virtual bool IsMultiple();                                                                            // 11
		virtual bool IsExclusive();                                                                           // 12

		BSFaceGenKeyframe* ctor(BS_FACEGEN_MORPH_TYPE aeType)
		{
			using func_t = BSFaceGenKeyframe*(__thiscall*)(BSFaceGenKeyframe*, BS_FACEGEN_MORPH_TYPE);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenKeyframe::ctor };
			return func(this, aeType);
		}

	public:
		// members
		BS_FACEGEN_MORPH_TYPE eType;  // 04
		float                 fTime;  // 08
	};
	static_assert(sizeof(BSFaceGenKeyframe) == 0xC);
}
