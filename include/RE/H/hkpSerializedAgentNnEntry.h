#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContactPoint.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpSerializedTrack1nInfo.h"
#include "RE/H/hkpSimpleContactConstraintAtom.h"

namespace RE
{
	class hkpEntity;

	class hkpSerializedAgentNnEntry :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSerializedAgentNnEntry };
		static constexpr auto VTABLE{ VTABLE::hkpSerializedAgentNnEntry };

		enum class SerializedAgentType : std::int32_t
		{
			kINVALID_AGENT_TYPE = 0x0,
			kBOX_BOX_AGENT3 = 0x1,
			kCAPSULE_TRIANGLE_AGENT3 = 0x2,
			kPRED_GSK_AGENT3 = 0x3,
			kPRED_GSK_CYLINDER_AGENT3 = 0x4,
			kCONVEX_LIST_AGENT3 = 0x5,
			kLIST_AGENT3 = 0x6,
			kBV_TREE_AGENT3 = 0x7,
			kCOLLECTION_COLLECTION_AGENT3 = 0x8,
			kCOLLECTION_AGENT3 = 0x9,
		};

		// override (hkReferencedObject)
		virtual ~hkpSerializedAgentNnEntry() = default;  // 00

		// members
		hkpEntity*                                                          m_bodyA;                 // 08?
		hkpEntity*                                                          m_bodyB;                 // 0C?
		std::uint32_t                                                       m_bodyAId;               // 10?
		std::uint32_t                                                       m_bodyBId;               // 14?
		hkBool                                                              m_useEntityIds;          // 18?
		std::uint8_t                                                        pad19[0x3];              // 19
		hkEnum<hkpSerializedAgentNnEntry::SerializedAgentType, std::int8_t> m_agentType;             // 1C?
		std::uint8_t                                                        pad1D[0x3];              // 1D
		hkpSimpleContactConstraintAtom                                      m_atom;                  // 20?
		hkArray<std::uint8_t, hkContainerHeapAllocator>                     m_propertiesStream;      // 24?
		hkArray<hkContactPoint, hkContainerHeapAllocator>                   m_contactPoints;         // 30?
		hkArray<std::uint8_t, hkContainerHeapAllocator>                     m_cpIdMgr;               // 3C?
		std::uint8_t                                                        m_nnEntryData[160];      // 48?
		hkpSerializedTrack1nInfo                                            m_trackInfo;             // E8?
		std::uint8_t                                                        m_endianCheckBuffer[4];  // 100?
		std::uint32_t                                                       m_version;               // 104?
	};
}
