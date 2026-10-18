#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAVObject.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTObjectArray.h"

namespace RE
{
	class NiNode :
		public NiAVObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiNode };
		static constexpr auto VTABLE{ VTABLE::NiNode };

		// add
		virtual void AttachChild(NiAVObject* apChild, bool abFirstAvail);                              // 37
		virtual void Unk_38();                                                                         // 38
		virtual void DetachChild(NiAVObject* pkChild);                                                 // 3A (reversed overload group)
		virtual void DetachChild(NiAVObject* pkChild, NiPointer<NiAVObject>& aspAVObject);             // 39 (reversed overload group)
		virtual void DetachChildAt(std::uint32_t i);                                                   // 3C (reversed overload group)
		virtual void DetachChildAt(std::uint32_t i, NiPointer<NiAVObject>& aspAVObject);               // 3B (reversed overload group)
		virtual void SetAt(std::uint32_t i, NiAVObject* pkChild);                                      // 3E (reversed overload group)
		virtual void SetAt(std::uint32_t i, NiAVObject* pkChild, NiPointer<NiAVObject>& aspAVObject);  // 3D (reversed overload group)
		virtual void UpdateUpwardPass();                                                               // 3F

		std::uint32_t GetArrayCount() const
		{
			using func_t = decltype(&NiNode::GetArrayCount);
			static REL::Relocation<func_t> func{ Offsets::NiNode::GetArrayCount };
			return func(this);
		}

		NiAVObject* GetAt(std::uint32_t i) const
		{
			using func_t = decltype(&NiNode::GetAt);
			static REL::Relocation<func_t> func{ Offsets::NiNode::GetAt };
			return func(this, i);
		}

		std::uint32_t GetChildCount() const
		{
			using func_t = decltype(&NiNode::GetChildCount);
			static REL::Relocation<func_t> func{ Offsets::NiNode::GetChildCount };
			return func(this);
		}

		NiAVObject* GetAtChecked(std::uint32_t i) const
		{
			using func_t = decltype(&NiNode::GetAtChecked);
			static REL::Relocation<func_t> func{ Offsets::NiNode::GetAtChecked };
			return func(this, i);
		}

		void CompactChildArray()
		{
			using func_t = decltype(&NiNode::CompactChildArray);
			static REL::Relocation<func_t> func{ Offsets::NiNode::CompactChildArray };
			func(this);
		}

		void RemoveAllChildren()
		{
			using func_t = decltype(&NiNode::RemoveAllChildren);
			static REL::Relocation<func_t> func{ Offsets::NiNode::RemoveAllChildren };
			func(this);
		}

		bool QNotVisible()
		{
			using func_t = decltype(&NiNode::QNotVisible);
			static REL::Relocation<func_t> func{ Offsets::NiNode::QNotVisible };
			return func(this);
		}

		void DetachAllChildren()
		{
			using func_t = decltype(&NiNode::DetachAllChildren);
			static REL::Relocation<func_t> func{ Offsets::NiNode::DetachAllChildren };
			func(this);
		}

		NiNode* ctor(std::uint32_t uiNumChildren)
		{
			using func_t = NiNode*(__thiscall*)(NiNode*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::NiNode::ctor };
			return func(this, uiNumChildren);
		}

	public:
		// members
		NiTObjectArray<NiPointer<NiAVObject>> m_kChildren;  // 9C
	};
	static_assert(sizeof(NiNode) == 0xAC);
}
