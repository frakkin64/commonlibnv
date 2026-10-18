#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAdditionalGeometryData.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAdditionalGeometryData_NiAGDDataBlock;
	class NiObject;
	class NiStream;

	class BSPackedAdditionalGeometryData :
		public NiAdditionalGeometryData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPackedAdditionalGeometryData };
		static constexpr auto VTABLE{ VTABLE::BSPackedAdditionalGeometryData };

		// override (NiAdditionalGeometryData)
		virtual ~BSPackedAdditionalGeometryData() = default;                             // 00
		virtual void LoadBinary(NiStream& arStream) override;                            // 13
		virtual void LinkObject(NiStream& arStream) override;                            // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                   // 15
		virtual void SaveBinary(NiStream& arStream) override;                            // 16
		virtual bool IsEqual(NiObject* apObject) override;                               // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;     // 18
		virtual NiAdditionalGeometryData_NiAGDDataBlock* CreateAGDDataBlock() override;  // 24

		// members
		std::uint32_t m_uiShaderDeclarationIndex;  // 2C
		std::uint32_t m_uiVertexStride;            // 30
	};
	static_assert(sizeof(BSPackedAdditionalGeometryData) == 0x34);
}
