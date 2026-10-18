#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColorA.h"
#include "RE/N/NiPoint2.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAVObject;
	class NiNode;

	class NiPick
	{
	public:
		class Record;
		class Results;

		enum class CoordinateType : std::int32_t
		{
			kMODEL_COORDINATES = 0x0,
			kWORLD_COORDINATES = 0x1,
		};

		enum class IntersectType : std::int32_t
		{
			kBOUND_INTERSECT = 0x0,
			kTRIANGLE_INTERSECT = 0x1,
		};

		enum class PickType : std::int32_t
		{
			kFIND_ALL = 0x0,
			kFIND_FIRST = 0x1,
		};

		enum class SortType : std::int32_t
		{
			kSORT = 0x0,
			kNO_SORT = 0x1,
		};

		class Record
		{
		public:
			// members
			NiPointer<NiAVObject> m_spObject;          // 00?
			NiPointer<NiNode>     m_spProxyParent;     // 04?
			NiPoint3              m_intersect;         // 08?
			float                 m_fDistance;         // 14?
			std::uint16_t         m_usTriangleIndex;   // 18?
			std::uint16_t         m_usVertexIndex[3];  // 1A?
			NiPoint2              m_texture;           // 20?
			NiPoint3              m_normal;            // 28?
			NiColorA              m_color;             // 34?
		};

		class Results :
			public NiTPrimitiveArray<NiPick::Record*>  // 00
		{
		public:
			// members
			std::uint32_t m_uiValidResults;  // 10?
		};

		void SetObserveAppCullFlag(bool bObserveAppCullFlag)
		{
			using func_t = decltype(&NiPick::SetObserveAppCullFlag);
			static REL::Relocation<func_t> func{ Offsets::NiPick::SetObserveAppCullFlag };
			func(this, bObserveAppCullFlag);
		}

		void SetFrontOnly(bool bFrontOnly)
		{
			using func_t = decltype(&NiPick::SetFrontOnly);
			static REL::Relocation<func_t> func{ Offsets::NiPick::SetFrontOnly };
			func(this, bFrontOnly);
		}

		void SetTarget(NiAVObject* pObject)
		{
			using func_t = decltype(&NiPick::SetTarget);
			static REL::Relocation<func_t> func{ Offsets::NiPick::SetTarget };
			func(this, pObject);
		}

		NiPick* ctor(std::uint32_t uiResultsInitialSize, std::uint32_t uiResultsGrowBy)
		{
			using func_t = NiPick*(__thiscall*)(NiPick*, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::NiPick::ctor };
			return func(this, uiResultsInitialSize, uiResultsGrowBy);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(NiPick*);
			static REL::Relocation<func_t> func{ Offsets::NiPick::dtor };
			func(this);
		}

	public:
		// members
		NiPick::PickType       m_ePickType;            // 00
		NiPick::SortType       m_eSortType;            // 04
		NiPick::IntersectType  m_eIntersectType;       // 08
		NiPick::CoordinateType m_eCoordinateType;      // 0C
		bool                   m_bFrontOnly;           // 10
		bool                   m_bObserveAppCullFlag;  // 11
		std::uint16_t          pad12;                  // 12
		NiPointer<NiAVObject>  m_spRoot;               // 14
		NiPick::Results        m_pickResults;          // 18
		NiPick::Record*        m_pLastAddedRecord;     // 2C
		bool                   m_bReturnTexture;       // 30
		bool                   m_bReturnNormal;        // 31
		bool                   m_bReturnSmoothNormal;  // 32
		bool                   m_bReturnColor;         // 33
	};
	static_assert(sizeof(NiPick) == 0x34);
}
