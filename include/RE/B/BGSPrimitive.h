#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColorA.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSPrimitiveBox;
	class BGSPrimitiveSphere;
	class BSFadeNode;
	class BSMultiBoundShape;
	class NiGeometry;
	class NiLines;

	class __declspec(novtable) BGSPrimitive
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSPrimitive };
		static constexpr auto VTABLE{ VTABLE::BGSPrimitive };

		enum class PRIMITIVE_TYPE : std::int32_t
		{
			kPRIMITIVE_NONE = 0x0,
			kPRIMITIVE_BOX = 0x1,
			kPRIMITIVE_SPHERE = 0x2,
			kPRIMITIVE_PLANE = 0x3,
			kPRIMITIVE_LINE = 0x4,
		};

		// add
		virtual ~BGSPrimitive() = default;                                  // 00
		virtual void Build();                                               // 01
		virtual void SetColor(NiColorA* a_arg1);                            // 02
		virtual void SetRadii(NiPoint3* a_arg1);                            // 03
		virtual bool IsInside(NiPoint3* a_arg1);                            // 04
		virtual BSMultiBoundShape* MakeMultiBoundShape(NiPoint3& akAngle);  // 05

		NiColorA GetColor()
		{
			using func_t = decltype(&BGSPrimitive::GetColor);
			static REL::Relocation<func_t> func{ Offsets::BGSPrimitive::GetColor };
			return func(this);
		}

		NiPoint3 GetRadii()
		{
			using func_t = decltype(&BGSPrimitive::GetRadii);
			static REL::Relocation<func_t> func{ Offsets::BGSPrimitive::GetRadii };
			return func(this);
		}

		static BGSPrimitive* Copy(BGSPrimitive* apCopy)
		{
			using func_t = decltype(&BGSPrimitive::Copy);
			static REL::Relocation<func_t> func{ Offsets::BGSPrimitive::Copy };
			return func(apCopy);
		}

		static BGSPrimitive* CreateAbstract(BGSPrimitive::PRIMITIVE_TYPE a_eType, NiPoint3& aRadii, NiColorA& aColor)
		{
			using func_t = decltype(&BGSPrimitive::CreateAbstract);
			static REL::Relocation<func_t> func{ Offsets::BGSPrimitive::CreateAbstract };
			return func(a_eType, aRadii, aColor);
		}

		static BGSPrimitiveBox* CreateBox(NiPoint3& aSize, NiColorA& aColor)
		{
			using func_t = decltype(&BGSPrimitive::CreateBox);
			static REL::Relocation<func_t> func{ Offsets::BGSPrimitive::CreateBox };
			return func(aSize, aColor);
		}

		static BGSPrimitiveSphere* CreateSphere(float a_arg1, NiColorA& a_arg2)
		{
			using func_t = decltype(&BGSPrimitive::CreateSphere);
			static REL::Relocation<func_t> func{ Offsets::BGSPrimitive::CreateSphere };
			return func(a_arg1, a_arg2);
		}

	public:
		// members
		BGSPrimitive::PRIMITIVE_TYPE eType;                 // 04
		NiColorA                     Color;                 // 08
		NiPoint3                     Radii;                 // 18
		NiPointer<NiGeometry>        spGeometry;            // 24
		NiPointer<NiLines>           spFrame;               // 28?
		NiPointer<BSFadeNode>        spNode;                // 2C?
		std::uint32_t                iScaleHandlesEnabled;  // 30?
	};
}
