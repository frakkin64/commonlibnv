#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBinaryStream.h"
#include "RE/N/NiFile_OpenMode.h"

namespace RE
{
	class NiFile :
		public NiBinaryStream  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFile };
		static constexpr auto VTABLE{ VTABLE::NiFile };

		using OpenMode = NiFile_OpenMode;

		class OverlappedContext;

		enum class FileMethod : std::int32_t
		{
			kFILE_USE_POINTER = 0x0,
			kFILE_USE_HANDLE = 0x1,
			kFILE_USE_MASK = 0xF,
			kFILE_USE_DOUBLEBUFFER = 0x80,
		};

		class OverlappedContext
		{
		public:
			// members
			std::uint32_t m_uiFilePointer;    // 00?
			std::uint32_t m_uiBytesExpected;  // 04?
			bool          m_bIOPending;       // 08?
			std::uint8_t  pad09[0x3];         // 09
			std::uint8_t  unk0C[0x14];        // 0C? opaque
		};

		// add
		virtual void Unk_05();  // 05
		virtual void Unk_06();  // 06
		virtual void Unk_07();  // 07

		// members
		// not placed: m_uiPos(absent), m_hFile(absent), m_uiStreamBuffer(absent), m_uiReadBuffer(absent), m_apBuffers(absent), m_uiDiskReads(absent), m_kOLContext(absent), bIsDDX(absent), m_eMode(absent)
		std::uint32_t      m_uiBufferAllocSize;  // 10
		std::uint32_t      m_uiBufferReadSize;   // 14
		std::uint32_t      m_uiCurrentFilePos;   // 18
		char*              m_pBuffer;            // 1C
		NiFile::FileMethod m_eFileMethod;        // 20
		bool               m_bUseDoubleBuffer;   // 24
		std::uint8_t       pad25[0x3];           // 25
		_iobuf*            m_pFile;              // 28
		bool               m_bGood;              // 2C
		std::uint8_t       pad2D[0x3];           // 2D
	};
}
