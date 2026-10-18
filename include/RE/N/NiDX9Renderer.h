#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRect.h"
#include "RE/N/NiRenderer.h"

namespace RE
{
	class NiCamera;
	class NiFrustum;
	class NiGeometry;
	class NiPoint3;
	class NiRenderTargetGroup;

	class NiDX9Renderer :
		public NiRenderer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDX9Renderer };
		static constexpr auto VTABLE{ VTABLE::NiDX9Renderer };

		class BatchedObject;
		class PrePackObject;

		enum class TexFormat : std::int32_t
		{
			kTEX_RGB565 = 0x0,
			kTEX_RGB888 = 0x1,
			kTEX_RGBA5551 = 0x2,
			kTEX_RGBA4444 = 0x3,
			kTEX_RGBA8888 = 0x4,
			kTEX_PAL8 = 0x5,
			kTEX_PALA8 = 0x6,
			kTEX_COMPRESS1 = 0x7,
			kTEX_COMPRESS3 = 0x8,
			kTEX_COMPRESS5 = 0x9,
			kTEX_BUMP88 = 0xA,
			kTEX_BUMPLUMA556 = 0xB,
			kTEX_BUMPLUMA888 = 0xC,
			kTEX_L8 = 0xD,
			kTEX_A8 = 0xE,
			kTEX_RGBA1010102F = 0xF,
			kTEX_R16F = 0x10,
			kTEX_RG32F = 0x11,
			kTEX_RGBA64F = 0x12,
			kTEX_R32F = 0x13,
			kTEX_RG64F = 0x14,
			kTEX_RGBA128F = 0x15,
			kTEX_DEFAULT = 0x16,
			kTEX_NUM = 0x16,
		};

		enum class TexUsage : std::int32_t
		{
			kTEXUSE_TEX = 0x0,
			kTEXUSE_RENDERED_TEX = 0x1,
			kTEXUSE_CUBE = 0x2,
			kTEXUSE_RENDERED_CUBE = 0x3,
			kTEXUSE_DYNAMIC_TEX = 0x4,
			kTEXUSE_NUM = 0x5,
		};

		class BatchedObject
		{
		public:
			// members
			// not placed: m_pkGeometry(absent), m_pkCurrPartition(absent), m_pkBuffData(absent), m_pkNext(absent)
		};

		class PrePackObject
		{
		public:
			// members
			// not placed: m_spData(absent), m_spSkin(absent), m_pkPartition(absent), m_pkShaderDecl(absent), m_uiBonesPerPartition(absent), m_uiBonesPerVertex(absent), m_pkBuffData(absent), m_uiStream(absent), m_pkNext(absent)
		};

		// add
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26
		virtual void Unk_27();  // 27
		virtual void Unk_28();  // 28
		virtual void Unk_29();  // 29
		virtual void Unk_2A();  // 2A
		virtual void Unk_2B();  // 2B
		virtual void Unk_2C();  // 2C
		virtual void Unk_2D();  // 2D
		virtual void Unk_2E();  // 2E
		virtual void Unk_2F();  // 2F
		virtual void Unk_30();  // 30
		virtual void Unk_31();  // 31
		virtual void Unk_32();  // 32
		virtual void Unk_33();  // 33
		virtual void Unk_34();  // 34
		virtual void Unk_35();  // 35
		virtual void Unk_36();  // 36
		virtual void Unk_37();  // 37
		virtual void Unk_38();  // 38
		virtual void Unk_39();  // 39
		virtual void Unk_3A();  // 3A
		virtual void Unk_3B();  // 3B
		virtual void Unk_3C();  // 3C
		virtual void Unk_3D();  // 3D
		virtual void Unk_3E();  // 3E
		virtual void Unk_3F();  // 3F
		virtual void Unk_40();  // 40
		virtual void Unk_41();  // 41
		virtual void Unk_42();  // 42
		virtual void Unk_43();  // 43
		virtual void Unk_44();  // 44
		virtual void Unk_45();  // 45
		virtual void Unk_46();  // 46
		virtual void Unk_47();  // 47
		virtual void Unk_48();  // 48
		virtual void Unk_49();  // 49
		virtual void Unk_4A();  // 4A
		virtual void Unk_4B();  // 4B
		virtual void Unk_4C();  // 4C
		virtual void Unk_4D();  // 4D
		virtual void Unk_4E();  // 4E
		virtual void Unk_4F();  // 4F
		virtual void Unk_50();  // 50
		virtual void Unk_51();  // 51
		virtual void Unk_52();  // 52
		virtual void Unk_53();  // 53
		virtual void Unk_54();  // 54
		virtual void Unk_55();  // 55
		virtual void Unk_56();  // 56
		virtual void Unk_57();  // 57
		virtual void Unk_58();  // 58
		virtual void Unk_59();  // 59
		virtual void Unk_5A();  // 5A
		virtual void Unk_5B();  // 5B
		virtual void Unk_5C();  // 5C
		virtual void Unk_5D();  // 5D
		virtual void Unk_5E();  // 5E
		virtual void Unk_5F();  // 5F
		virtual void Unk_60();  // 60
		virtual void Unk_61();  // 61
		virtual void Unk_62();  // 62
		virtual void Unk_63();  // 63
		virtual void Unk_64();  // 64
		virtual void Unk_65();  // 65
		virtual void Unk_66();  // 66
		virtual void Unk_67();  // 67
		virtual void Unk_68();  // 68
		virtual void Unk_69();  // 69
		virtual void Unk_6A();  // 6A
		virtual void Unk_6B();  // 6B
		virtual void Unk_6C();  // 6C
		virtual void Unk_6D();  // 6D
		virtual void Unk_6E();  // 6E
		virtual void Unk_6F();  // 6F
		virtual void Unk_70();  // 70
		virtual void Unk_71();  // 71
		virtual void Unk_72();  // 72

		static NiDX9Renderer* GetRenderer()
		{
			using func_t = decltype(&NiDX9Renderer::GetRenderer);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::GetRenderer };
			return func();
		}

		void LockRenderer()
		{
			using func_t = decltype(&NiDX9Renderer::LockRenderer);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::LockRenderer };
			func(this);
		}

		void UnlockRenderer()
		{
			using func_t = decltype(&NiDX9Renderer::UnlockRenderer);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::UnlockRenderer };
			func(this);
		}

		void SetScreenSpaceCameraData(NiRect<float> const* pkPort)
		{
			using func_t = decltype(&NiDX9Renderer::SetScreenSpaceCameraData);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::SetScreenSpaceCameraData };
			func(this, pkPort);
		}

		std::uint32_t GetBackbufferWidth()
		{
			using func_t = decltype(&NiDX9Renderer::GetBackbufferWidth);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::GetBackbufferWidth };
			return func(this);
		}

		std::uint32_t GetBackbufferHeight()
		{
			using func_t = decltype(&NiDX9Renderer::GetBackbufferHeight);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::GetBackbufferHeight };
			return func(this);
		}

		void SetCameraData(NiCamera const* pkCamera)
		{
			using func_t = void (NiDX9Renderer::*)(NiCamera const*);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::SetCameraData };
			func(this, pkCamera);
		}

		void SetCameraData(NiPoint3 const& kWorldLoc, NiPoint3 const& kWorldDir, NiPoint3 const& kWorldUp, NiPoint3 const& kWorldRight, NiFrustum const& kFrustum, NiRect<float> const& kPort)
		{
			using func_t = void (NiDX9Renderer::*)(NiPoint3 const&, NiPoint3 const&, NiPoint3 const&, NiPoint3 const&, NiFrustum const&, NiRect<float> const&);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::SetCameraData_1 };
			func(this, kWorldLoc, kWorldDir, kWorldUp, kWorldRight, kFrustum, kPort);
		}

		void ClearBuffer(NiRect<float> const* pkR, std::uint32_t uiMode)
		{
			using func_t = decltype(&NiDX9Renderer::ClearBuffer);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::ClearBuffer };
			func(this, pkR, uiMode);
		}

		bool BeginOffScreenFrame()
		{
			using func_t = decltype(&NiDX9Renderer::BeginOffScreenFrame);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::BeginOffScreenFrame };
			return func(this);
		}

		bool EndOffScreenFrame()
		{
			using func_t = decltype(&NiDX9Renderer::EndOffScreenFrame);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::EndOffScreenFrame };
			return func(this);
		}

		bool BeginUsingRenderTargetGroup(NiRenderTargetGroup* pkTarget, std::uint32_t uiClearMode)
		{
			using func_t = decltype(&NiDX9Renderer::BeginUsingRenderTargetGroup);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::BeginUsingRenderTargetGroup };
			return func(this, pkTarget, uiClearMode);
		}

	protected:
		static std::int32_t CreateDirect3D9()
		{
			using func_t = decltype(&NiDX9Renderer::CreateDirect3D9);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::CreateDirect3D9 };
			return func();
		}

		void AddToBatch(NiGeometry* pkGeometry)
		{
			using func_t = decltype(&NiDX9Renderer::AddToBatch);
			static REL::Relocation<func_t> func{ Offsets::NiDX9Renderer::AddToBatch };
			func(this, pkGeometry);
		}

	public:
		// members
		// not placed: iRenderFence(absent), iOwningThread(absent), m_bWidescreen(absent), m_pkD3DDevice9(absent), m_kD3DCaps9(absent), m_kRingBufferParams(absent), m_uiBehaviorFlags(absent), m_bCopyTouchedEDRAM(absent), m_uiBackground(absent), m_fZClear(absent), m_uiStencilClear(absent), m_bFloatingPointDepthUsed(absent), m_bResolvableDSRecreate(absent), m_uiResolveClearMode(absent), m_uiResolveClearColor(absent), m_uiResolveClearStencil(absent), m_fResolveClearZ(absent), m_uiRendFlags(absent), m_acBehavior(absent), m_kPrePackObjects(absent), m_pkBatchHead(absent), m_pkBatchTail(absent), m_pkBatchedPropertyState(absent), m_pkBatchedEffectState(absent), m_spBatchedShader(absent), m_kCamRight(absent), m_kCamUp(absent), m_kModelCamRight(absent), m_kModelCamUp(absent), m_kWorldBound(absent), m_kDefaultBound(absent), m_fNearDepth(absent), m_fDepthRange(absent), m_kD3DIdentity(absent), m_kD3DPort(absent), m_uiHWBones(absent), m_uiMaxStreams(absent), m_uiMaxPixelShaderVersion(absent), m_uiMaxVertexShaderVersion(absent), m_bMipmapCubeMaps(absent) ...
	};
}
