#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkSerializable.h"
#include "RE/C/CFilter.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAVObject;
	class NiNode;
	class NiObject;
	class NiStream;
	class bhkShape;
	class bhkWorld;
	class hkpCollidable;
	class hkpShape;
	class hkpWorld;

	class bhkWorldObject :
		public bhkSerializable  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkWorldObject };
		static constexpr auto VTABLE{ VTABLE::bhkWorldObject };

		// override (bhkSerializable)
		virtual ~bhkWorldObject() = default;                                          // 00
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void Link(bool abAttach) override;                                    // 24
		virtual hkpWorld* GethkWorldRw() override;                                    // 26
		virtual bool Add(bhkWorld* __formal) override;                                // 27

		// add
		virtual void UpdateCFilter();                               // 31
		virtual bool ForceAdd(bhkWorld* apWorld);                   // 32
		virtual NiAVObject* CreateDisplayGeometry(NiNode* apNode);  // 33
		virtual void DestroyDisplayGeometry();                      // 34

		hkpCollidable const* GetCollidable() const
		{
			using func_t = decltype(&bhkWorldObject::GetCollidable);
			static REL::Relocation<func_t> func{ Offsets::bhkWorldObject::GetCollidable };
			return func(this);
		}

		bhkShape* GetShape()
		{
			using func_t = decltype(&bhkWorldObject::GetShape);
			static REL::Relocation<func_t> func{ Offsets::bhkWorldObject::GetShape };
			return func(this);
		}

		hkpShape* GethkShape()
		{
			using func_t = decltype(&bhkWorldObject::GethkShape);
			static REL::Relocation<func_t> func{ Offsets::bhkWorldObject::GethkShape };
			return func(this);
		}

		bool QFlags(std::uint32_t aiFlags) const
		{
			using func_t = decltype(&bhkWorldObject::QFlags);
			static REL::Relocation<func_t> func{ Offsets::bhkWorldObject::QFlags };
			return func(this, aiFlags);
		}

		std::uint32_t GetFlags(std::uint32_t aiFlags) const
		{
			using func_t = decltype(&bhkWorldObject::GetFlags);
			static REL::Relocation<func_t> func{ Offsets::bhkWorldObject::GetFlags };
			return func(this, aiFlags);
		}

		bhkWorldObject* ctor()
		{
			using func_t = bhkWorldObject*(__thiscall*)(bhkWorldObject*);
			static REL::Relocation<func_t> func{ Offsets::bhkWorldObject::ctor };
			return func(this);
		}

		void SetCollisionFilter(CFilter aiFilter)
		{
			using func_t = decltype(&bhkWorldObject::SetCollisionFilter);
			static REL::Relocation<func_t> func{ Offsets::bhkWorldObject::SetCollisionFilter };
			func(this, aiFilter);
		}

		void SetFlags(std::uint32_t aiFlags, bool abTF)
		{
			using func_t = decltype(&bhkWorldObject::SetFlags);
			static REL::Relocation<func_t> func{ Offsets::bhkWorldObject::SetFlags };
			func(this, aiFlags, abTF);
		}

		bool IsAddedToWorld() const
		{
			using func_t = decltype(&bhkWorldObject::IsAddedToWorld);
			static REL::Relocation<func_t> func{ Offsets::bhkWorldObject::IsAddedToWorld };
			return func(this);
		}

	public:
		// members
		std::uint32_t iFlags;  // 10
	};
	static_assert(sizeof(bhkWorldObject) == 0x14);
}
