#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDataWorld.h"
#include "RE/H/hkDataWorld_DataWorldType.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkSerializeMultiMap.h"
#include "RE/H/hkStringMap.h"

namespace RE
{
	class InternedStringRefCounted;
	class hkDataArrayImpl;
	class hkDataClass;
	class hkDataClassDict;
	class hkDataClassImpl;
	class hkDataClass_Cinfo;
	class hkDataClass_MemberInfo;
	class hkDataObject;
	class hkDataObjectDict;
	class hkDataObjectImpl;
	class hkDataObject_Handle;

	class hkDataWorldDict :
		public hkDataWorld  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDataWorldDict };
		static constexpr auto VTABLE{ VTABLE::hkDataWorldDict };

		class ObjectTracker;

		class ObjectTracker
		{
		public:
			void retrackRenamedClass(char const* oldName, char const* newName)
			{
				using func_t = decltype(&ObjectTracker::retrackRenamedClass);
				static REL::Relocation<func_t> func{ Offsets::hkDataWorldDict_ObjectTracker::retrackRenamedClass };
				func(this, oldName, newName);
			}

			void findTrackedClasses(hkArray<hkDataClassImpl*, hkContainerHeapAllocator>& classesOut) const
			{
				using func_t = decltype(&ObjectTracker::findTrackedClasses);
				static REL::Relocation<func_t> func{ Offsets::hkDataWorldDict_ObjectTracker::findTrackedClasses };
				func(this, classesOut);
			}

		private:
			void removeClassContent(hkDataClassDict* klass)
			{
				using func_t = decltype(&ObjectTracker::removeClassContent);
				static REL::Relocation<func_t> func{ Offsets::hkDataWorldDict_ObjectTracker::removeClassContent };
				func(this, klass);
			}

		public:
			// members
			hkStringMap<hkDataClassDict*, hkContainerHeapAllocator>          m_classes;             // 00
			hkSerializeMultiMap<hkDataClassDict*, hkDataClassDict*>          m_derivedFromParent;   // 10?
			hkDataObjectDict*                                                m_topLevelObject;      // 2C?
			hkSerializeMultiMap<hkDataClassDict*, hkDataObjectDict*>         m_objectsFromClass;    // 30?
			hkStringMap<char*, hkContainerHeapAllocator>                     m_interns;             // 4C?
			hkStringMap<InternedStringRefCounted*, hkContainerHeapAllocator> m_internedClassNames;  // 5C?
			hkSerializeMultiMap<hkDataClassDict*, hkDataArrayImpl*>          m_arraysFromClass;     // 6C?
		};

		// override (hkDataWorld)
		virtual ~hkDataWorldDict() = default;  // 00

		// add
		virtual hkDataClassImpl* newClass(hkDataClass_Cinfo const& cinfo);                                                                // 03
		virtual hkDataObjectImpl* newObject(const hkDataClass* a_arg1) const;                                                             // 04
		virtual hkDataArrayImpl* newArray(hkDataObject* a_arg1, const hkDataClass_MemberInfo* a_arg2) const;                              // 05
		virtual hkEnum<hkDataWorld_DataWorldType, std::int32_t>* getType(hkEnum<hkDataWorld_DataWorldType, std::int32_t>* a_arg1) const;  // 06
		virtual hkDataObject* getContents(hkDataObject* a_arg1) const;                                                                    // 07
		virtual void findAllClasses(hkArray<hkDataClassImpl*, hkContainerHeapAllocator>* a_arg1) const;                                   // 08
		virtual hkDataClassImpl* findClass(const char* a_arg1) const;                                                                     // 09
		virtual hkDataObject* findObject(hkDataObject* a_arg1, const hkDataObject_Handle* a_arg2) const;                                  // 0A

		hkDataWorldDict* ctor()
		{
			using func_t = hkDataWorldDict*(__thiscall*)(hkDataWorldDict*);
			static REL::Relocation<func_t> func{ Offsets::hkDataWorldDict::ctor };
			return func(this);
		}

	public:
		// members
		hkDataWorldDict::ObjectTracker* m_tracker;  // 08
	};
}
