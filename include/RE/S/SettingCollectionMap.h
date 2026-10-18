#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTCaseInsensitiveStringMap.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/S/SettingCollection.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class SettingCollectionMap :
		public SettingCollection<T>  // 00
	{
	public:
		// override (SettingCollection<T>)
		virtual ~SettingCollectionMap() = default;                                     // 00
		virtual void Add(T* apSetting);                                                // 01
		virtual void Remove(T* apSetting);                                             // 02
		virtual std::uint32_t GetViewerStrings(NiTPrimitiveArray<char*>* apStringsA);  // 03
		virtual bool WriteSettings();                                                  // 08
		virtual bool ReadSettings();                                                   // 09

		// members
		BSTCaseInsensitiveStringMap<T*> SettingsA;
	};
}
