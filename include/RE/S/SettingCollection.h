#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class T;

	template <class T>
	class __declspec(novtable) SettingCollection
	{
	public:
		// add
		virtual ~SettingCollection() = default;                                    // 00
		virtual void Add(T* a_arg1);                                               // 01
		virtual void Remove(T* a_arg1);                                            // 02
		virtual std::uint32_t GetViewerStrings(NiTPrimitiveArray<char*>* a_arg1);  // 03
		virtual bool WriteSetting(T* a_arg1);                                      // 04
		virtual bool ReadSetting(T* a_arg1);                                       // 05
		virtual bool Open(bool abWrite);                                           // 06
		virtual bool Close();                                                      // 07
		virtual bool WriteSettings();                                              // 08
		virtual bool ReadSettings();                                               // 09

		// members
		char pSettingFile[260];
		void* pHandle;
	};
}
