#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTFixedStringMap.h"
#include "RE/N/NiTObjectPtrSet.h"

namespace RE
{
	class NiGPUProgram;
	class NiMaterialResource;

	class NiGPUProgramCache :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiGPUProgramCache };
		static constexpr auto VTABLE{ VTABLE::NiGPUProgramCache };

		class NiGPUProgramDesc;

		class NiGPUProgramDesc :
			public NiRefObject  // 00
		{
		public:
			// members
			NiPointer<NiGPUProgram>                        m_spProgram;  // 08?
			NiTObjectPtrSet<NiPointer<NiMaterialResource>> m_kUniforms;  // 0C?
		};

		// add
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05
		virtual void Unk_06();  // 06
		virtual void Unk_07();  // 07
		virtual void Unk_08();  // 08
		virtual void Unk_09();  // 09
		virtual void Unk_0A();  // 0A
		virtual void Unk_0B();  // 0B
		virtual void Unk_0C();  // 0C
		virtual void Unk_0D();  // 0D
		virtual void Unk_0E();  // 0E
		virtual void Unk_0F();  // 0F
		virtual void Unk_10();  // 10
		virtual void Unk_11();  // 11
		virtual void Unk_12();  // 12
		virtual void Unk_13();  // 13
		virtual void Unk_14();  // 14
		virtual void Unk_15();  // 15
		virtual void Unk_16();  // 16
		virtual void Unk_17();  // 17
		virtual void Unk_18();  // 18
		virtual void Unk_19();  // 19
		virtual void Unk_1A();  // 1A
		virtual void Unk_1B();  // 1B
		virtual void Unk_1C();  // 1C
		virtual void Unk_1D();  // 1D
		virtual void Unk_1E();  // 1E
		virtual void Unk_1F();  // 1F
		virtual void Unk_20();  // 20
		virtual void Unk_21();  // 21
		virtual void Unk_22();  // 22
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25

		// members
		NiTFixedStringMap<NiPointer<NiGPUProgramCache::NiGPUProgramDesc>> m_kCachedPrograms;        // 08?
		NiFixedString                                                     m_kFilename;              // 18
		NiFixedString                                                     m_kWorkingDir;            // 1C
		NiFixedString                                                     m_kPathAndFilename;       // 20
		NiFixedString                                                     m_kShaderProfile;         // 24
		NiTObjectPtrSet<NiFixedString>                                    m_kValidTargets;          // 28
		std::uint32_t                                                     m_uiVersion;              // 34
		bool                                                              m_bAutoWriteCacheToDisk;  // 38
		bool                                                              m_bLoaded;                // 39
		bool                                                              m_bLocked;                // 3A
		std::uint8_t                                                      pad3B;                    // 3B
	};
}
