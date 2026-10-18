#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStreamHeader.h"
#include "RE/N/NiFixedString.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiProcessorAffinity.h"
#include "RE/N/NiTLargeObjectArray.h"
#include "RE/N/NiTLargePrimitiveArray.h"
#include "RE/N/NiTPointerMap.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/N/NiTPrimitiveSet.h"
#include "RE/N/NiThreadProcedure.h"
#include "RE/N/NiThread_Priority.h"

namespace RE
{
	class NiBinaryStream;
	class NiObject;
	class NiObjectGroup;
	class NiSearchPath;
	class NiThread;

	class __declspec(novtable) NiStream
	{
	public:
		static constexpr auto RTTI{ RTTI::NiStream };
		static constexpr auto VTABLE{ VTABLE::NiStream };

		class BackgroundLoadProcedure;

		enum class ThreadStatus : std::int32_t
		{
			kUNPAUSED = 0x0,
			kPAUSING = 0x1,
			kPAUSED = 0x2,
			kUNPAUSING = 0x3,
		};

		class BackgroundLoadProcedure :
			public NiThreadProcedure  // 00
		{
		public:
			// members
			NiStream* m_pkStream;  // 04?
		};

		// add
		virtual ~NiStream() = default;                        // 00
		virtual void Unk_01();                                // 01
		virtual void Unk_02();                                // 02
		virtual void Unk_03();                                // 03
		virtual void Unk_04();                                // 04
		virtual void Unk_05();                                // 05
		virtual bool Save(char const* apFileName);            // 06
		virtual void Unk_07();                                // 07
		virtual void Unk_08();                                // 08
		virtual bool RegisterSaveObject(NiObject* apObject);  // 09
		virtual void Unk_0A();                                // 0A
		virtual void Unk_0B();                                // 0B
		virtual void Unk_0C();                                // 0C
		virtual void Unk_0D();                                // 0D
		virtual void Unk_0E();                                // 0E
		virtual bool LoadStream();                            // 0F
		virtual bool SaveStream();                            // 10
		virtual void Unk_11();                                // 11
		virtual void Unk_12();                                // 12
		virtual void Unk_13();                                // 13
		virtual void Unk_14();                                // 14
		virtual void Unk_15();                                // 15
		virtual void Unk_16();                                // 16
		virtual void Unk_17();                                // 17

		std::uint32_t GetObjectCount() const
		{
			using func_t = decltype(&NiStream::GetObjectCount);
			static REL::Relocation<func_t> func{ Offsets::NiStream::GetObjectCount };
			return func(this);
		}

		NiObject* GetObjectAt(std::uint32_t i) const
		{
			using func_t = decltype(&NiStream::GetObjectAt);
			static REL::Relocation<func_t> func{ Offsets::NiStream::GetObjectAt };
			return func(this, i);
		}

		void ReadLinkID()
		{
			using func_t = decltype(&NiStream::ReadLinkID);
			static REL::Relocation<func_t> func{ Offsets::NiStream::ReadLinkID };
			func(this);
		}

		std::uint32_t ReadMultipleLinkIDs()
		{
			using func_t = decltype(&NiStream::ReadMultipleLinkIDs);
			static REL::Relocation<func_t> func{ Offsets::NiStream::ReadMultipleLinkIDs };
			return func(this);
		}

	protected:
		bool LoadRTTI()
		{
			using func_t = decltype(&NiStream::LoadRTTI);
			static REL::Relocation<func_t> func{ Offsets::NiStream::LoadRTTI };
			return func(this);
		}

	public:
		// members
		BSStreamHeader                                m_BSStreamHeader;               // 04
		NiTPrimitiveArray<NiObjectGroup*>             m_kGroups;                      // C8
		std::uint32_t                                 m_uiNifFileVersion;             // D8
		std::uint32_t                                 m_uiNifFileUserDefinedVersion;  // DC
		char                                          m_acFileName[260];              // E0
		bool                                          m_bSaveLittleEndian;            // 1E4
		bool                                          m_bSourceIsLittleEndian;        // 1E5
		std::uint16_t                                 pad1E6;                         // 1E6
		NiSearchPath*                                 m_pkSearchPath;                 // 1E8
		NiTLargeObjectArray<NiPointer<NiObject>>      m_kObjects;                     // 1EC
		NiTLargePrimitiveArray<std::uint32_t>         m_kObjectSizes;                 // 204
		NiTLargeObjectArray<NiPointer<NiObject>>      m_kTopObjects;                  // 21C
		NiTLargeObjectArray<NiFixedString>            m_kFixedStrings;                // 234
		NiBinaryStream*                               m_pkIstr;                       // 24C
		NiBinaryStream*                               m_pkOstr;                       // 250
		NiTPrimitiveSet<std::uint32_t>                m_kLinkIDs;                     // 254
		std::uint32_t                                 m_uiLinkIndex;                  // 260
		NiTPrimitiveSet<std::uint32_t>                m_kLinkIDBlocks;                // 264
		std::uint32_t                                 m_uiLinkBlockIndex;             // 270
		NiTPointerMap<NiObject const*, std::uint32_t> m_kRegisterMap;                 // 274
		std::uint16_t                                 m_usNiAVObjectFlags;            // 284
		std::uint16_t                                 m_usNiTimeControllerFlags;      // 286
		std::uint16_t                                 m_usNiPropertyFlags;            // 288
		std::uint16_t                                 pad28A;                         // 28A
		NiStream::ThreadStatus                        m_eBackgroundLoadStatus;        // 28C
		bool                                          m_bBackgroundLoadExitStatus;    // 290
		std::uint8_t                                  pad291[0x3];                    // 291
		std::uint32_t                                 m_uiLoad;                       // 294
		std::uint32_t                                 m_uiLink;                       // 298
		std::uint32_t                                 m_uiPostLink;                   // 29C
		NiThread*                                     m_pkThread;                     // 2A0
		NiStream::BackgroundLoadProcedure*            m_pkBGLoadProc;                 // 2A4
		NiThread_Priority                             m_ePriority;                    // 2A8
		NiProcessorAffinity                           m_kAffinity;                    // 2AC
		char                                          m_acLastLoadedRTTI[260];        // 2B4
		std::uint32_t                                 m_uiLastError;                  // 3B8
		char                                          m_acLastErrorMessage[260];      // 3BC
		char                                          m_acFilePath[260];              // 4C0
	};
	static_assert(sizeof(NiStream) == 0x5C4);
}
