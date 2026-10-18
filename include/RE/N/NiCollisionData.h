#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiCollisionObject.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiBoundingVolume;
	class NiOBBRoot;

	class NiCollisionData :
		public NiCollisionObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiCollisionData };
		static constexpr auto VTABLE{ VTABLE::NiCollisionData };

		enum class CollisionMode : std::int32_t
		{
			kUSE_OBB = 0x0,
			kUSE_TRI = 0x1,
			kUSE_ABV = 0x2,
			kNOTEST = 0x3,
			kUSE_NIBOUND = 0x4,
			kCOLLISIONMODE_POS = 0x5,
		};

		enum class PropagationMode : std::int32_t
		{
			kPROPAGATE_ON_SUCCESS = 0x0,
			kPROPAGATE_ON_FAILURE = 0x1,
			kPROPAGATE_ALWAYS = 0x2,
			kPROPAGATE_NEVER = 0x3,
			kPROPAGATIONMODE_POS = 0x4,
		};

		// add
		virtual void Unk_28();  // 28

	protected:
		char* GetViewerString(char const* pcPrefix, NiCollisionData::CollisionMode eMode)
		{
			using func_t = char* (NiCollisionData::*)(char const*, NiCollisionData::CollisionMode);
			static REL::Relocation<func_t> func{ Offsets::NiCollisionData::GetViewerString };
			return func(this, pcPrefix, eMode);
		}

		char* GetViewerString(char const* pcPrefix, NiCollisionData::PropagationMode eMode)
		{
			using func_t = char* (NiCollisionData::*)(char const*, NiCollisionData::PropagationMode);
			static REL::Relocation<func_t> func{ Offsets::NiCollisionData::GetViewerString_1 };
			return func(this, pcPrefix, eMode);
		}

	public:
		// members
		NiPoint3                         m_kLocalVelocity;            // 0C?
		NiPoint3                         m_kWorldVelocity;            // 18
		NiCollisionData::PropagationMode m_ePropagationMode;          // 24
		NiCollisionData::CollisionMode   m_eCollisionMode;            // 28
		NiBoundingVolume*                m_pkModelABV;                // 2C
		NiBoundingVolume*                m_pkWorldABV;                // 30
		NiOBBRoot*                       m_pkOBBRoot;                 // 34
		void*                            m_pfnCollideCallback;        // 38
		void*                            m_pvCollideCallbackData;     // 3C
		NiPoint3*                        m_pkWorldVertex;             // 40
		NiPoint3*                        m_pkWorldNormal;             // 44
		bool                             m_bWorldVerticesNeedUpdate;  // 48
		bool                             m_bWorldNormalsNeedUpdate;   // 49
		std::uint16_t                    m_usNumVertices;             // 4A?
		std::uint16_t                    m_usNumTriangles;            // 4C?
		bool                             m_bAuxCallbacks;             // 4E?
		std::uint8_t                     pad4F;                       // 4F
	};
}
