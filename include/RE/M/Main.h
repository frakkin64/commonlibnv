#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSPackedTaskQueue.h"
#include "RE/N/NiPointer.h"
#include "RE/S/ScrapHeap.h"

namespace RE
{
	class BSParticleSystemManager;
	class BSRenderedTexture;
	class BSShaderAccumulator;
	class ImageSpaceManager;
	class NiCamera;
	class NiDX9Renderer;
	class NiGeometry;
	class NiNode;
	class SceneGraph;
	class Sun;

	class Main
	{
	public:
		static BSParticleSystemManager* GetMasterParticleSystemManager()
		{
			using func_t = decltype(&Main::GetMasterParticleSystemManager);
			static REL::Relocation<func_t> func{ Offsets::Main::GetMasterParticleSystemManager };
			return func();
		}

		static SceneGraph* GetWorldSceneGraph()
		{
			using func_t = decltype(&Main::GetWorldSceneGraph);
			static REL::Relocation<func_t> func{ Offsets::Main::GetWorldSceneGraph };
			return func();
		}

		static void CreateMenuRootNode3D()
		{
			using func_t = decltype(&Main::CreateMenuRootNode3D);
			static REL::Relocation<func_t> func{ Offsets::Main::CreateMenuRootNode3D };
			func();
		}

		BSShaderAccumulator* QDrawWorldAccum()
		{
			using func_t = decltype(&Main::QDrawWorldAccum);
			static REL::Relocation<func_t> func{ Offsets::Main::QDrawWorldAccum };
			return func(this);
		}

		static NiCamera* WorldRootCamera()
		{
			using func_t = decltype(&Main::WorldRootCamera);
			static REL::Relocation<func_t> func{ Offsets::Main::WorldRootCamera };
			return func();
		}

		static bool GetSceneIsComplex()
		{
			using func_t = decltype(&Main::GetSceneIsComplex);
			static REL::Relocation<func_t> func{ Offsets::Main::GetSceneIsComplex };
			return func();
		}

		static bool QFaderToBlackVisible()
		{
			using func_t = decltype(&Main::QFaderToBlackVisible);
			static REL::Relocation<func_t> func{ Offsets::Main::QFaderToBlackVisible };
			return func();
		}

		Main* ctor()
		{
			using func_t = Main*(__thiscall*)(Main*);
			static REL::Relocation<func_t> func{ Offsets::Main::ctor };
			return func(this);
		}

		void Main_AudioInit()
		{
			using func_t = decltype(&Main::Main_AudioInit);
			static REL::Relocation<func_t> func{ Offsets::Main::Main_AudioInit };
			func(this);
		}

		void InitTES(NiNode* pScene)
		{
			using func_t = decltype(&Main::InitTES);
			static REL::Relocation<func_t> func{ Offsets::Main::InitTES };
			func(this, pScene);
		}

		void InitSceneGraph()
		{
			using func_t = decltype(&Main::InitSceneGraph);
			static REL::Relocation<func_t> func{ Offsets::Main::InitSceneGraph };
			func(this);
		}

		void OnIdle_ScaleLOD()
		{
			using func_t = decltype(&Main::OnIdle_ScaleLOD);
			static REL::Relocation<func_t> func{ Offsets::Main::OnIdle_ScaleLOD };
			func(this);
		}

		void OnIdle_UpdateTimer()
		{
			using func_t = decltype(&Main::OnIdle_UpdateTimer);
			static REL::Relocation<func_t> func{ Offsets::Main::OnIdle_UpdateTimer };
			func(this);
		}

		void OnIdle_PollControls()
		{
			using func_t = decltype(&Main::OnIdle_PollControls);
			static REL::Relocation<func_t> func{ Offsets::Main::OnIdle_PollControls };
			func(this);
		}

		void OnIdle_HandleMenuBackground()
		{
			using func_t = decltype(&Main::OnIdle_HandleMenuBackground);
			static REL::Relocation<func_t> func{ Offsets::Main::OnIdle_HandleMenuBackground };
			func(this);
		}

		void OnIdle_UpdateAudio()
		{
			using func_t = decltype(&Main::OnIdle_UpdateAudio);
			static REL::Relocation<func_t> func{ Offsets::Main::OnIdle_UpdateAudio };
			func(this);
		}

		void UpdateNonRenderSafeAITasks()
		{
			using func_t = decltype(&Main::UpdateNonRenderSafeAITasks);
			static REL::Relocation<func_t> func{ Offsets::Main::UpdateNonRenderSafeAITasks };
			func(this);
		}

		void OnIdle_UpdateProcessLists()
		{
			using func_t = decltype(&Main::OnIdle_UpdateProcessLists);
			static REL::Relocation<func_t> func{ Offsets::Main::OnIdle_UpdateProcessLists };
			func(this);
		}

		void OnIdle_UpdatePlayer()
		{
			using func_t = decltype(&Main::OnIdle_UpdatePlayer);
			static REL::Relocation<func_t> func{ Offsets::Main::OnIdle_UpdatePlayer };
			func(this);
		}

		void OnIdle_UpdateCurrentGridCell()
		{
			using func_t = decltype(&Main::OnIdle_UpdateCurrentGridCell);
			static REL::Relocation<func_t> func{ Offsets::Main::OnIdle_UpdateCurrentGridCell };
			func(this);
		}

		void OnIdle_UpdateAnimationsAndEffects()
		{
			using func_t = decltype(&Main::OnIdle_UpdateAnimationsAndEffects);
			static REL::Relocation<func_t> func{ Offsets::Main::OnIdle_UpdateAnimationsAndEffects };
			func(this);
		}

		void OnIdle_DoInterfaceIdle()
		{
			using func_t = decltype(&Main::OnIdle_DoInterfaceIdle);
			static REL::Relocation<func_t> func{ Offsets::Main::OnIdle_DoInterfaceIdle };
			func(this);
		}

		void OnIdle_UpdateImageSpace(bool abAdvanceTime)
		{
			using func_t = decltype(&Main::OnIdle_UpdateImageSpace);
			static REL::Relocation<func_t> func{ Offsets::Main::OnIdle_UpdateImageSpace };
			func(this, abAdvanceTime);
		}

		void PostSwapProcess()
		{
			using func_t = decltype(&Main::PostSwapProcess);
			static REL::Relocation<func_t> func{ Offsets::Main::PostSwapProcess };
			func(this);
		}

		void OnIdle_PostThreadsProcess()
		{
			using func_t = decltype(&Main::OnIdle_PostThreadsProcess);
			static REL::Relocation<func_t> func{ Offsets::Main::OnIdle_PostThreadsProcess };
			func(this);
		}

		void DrawWorld(BSRenderedTexture* apDestination, bool abRenderedMenuMode, bool abSkipFirstPerson)
		{
			using func_t = decltype(&Main::DrawWorld);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld };
			func(this, apDestination, abRenderedMenuMode, abSkipFirstPerson);
		}

		void DrawWorldRenderedMenu(BSRenderedTexture* apDestination, bool bwireframe)
		{
			using func_t = decltype(&Main::DrawWorldRenderedMenu);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorldRenderedMenu };
			func(this, apDestination, bwireframe);
		}

		void DrawWorldWireframe(BSRenderedTexture* apDestination, bool abSkipFirstPerson)
		{
			using func_t = decltype(&Main::DrawWorldWireframe);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorldWireframe };
			func(this, apDestination, abSkipFirstPerson);
		}

		void DrawWorldStandard(BSRenderedTexture* apDestination, bool abSkipFirstPerson)
		{
			using func_t = decltype(&Main::DrawWorldStandard);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorldStandard };
			func(this, apDestination, abSkipFirstPerson);
		}

		void DrawWorld_UpdateOffscreenBuffers()
		{
			using func_t = decltype(&Main::DrawWorld_UpdateOffscreenBuffers);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_UpdateOffscreenBuffers };
			func(this);
		}

		void UpdateOffscreenInterface()
		{
			using func_t = decltype(&Main::UpdateOffscreenInterface);
			static REL::Relocation<func_t> func{ Offsets::Main::UpdateOffscreenInterface };
			func(this);
		}

		void SetActive(bool abValue)
		{
			using func_t = decltype(&Main::SetActive);
			static REL::Relocation<func_t> func{ Offsets::Main::SetActive };
			func(this, abValue);
		}

		void RenderMenuBackground()
		{
			using func_t = decltype(&Main::RenderMenuBackground);
			static REL::Relocation<func_t> func{ Offsets::Main::RenderMenuBackground };
			func(this);
		}

		void DrawWorld_UpdateWater()
		{
			using func_t = decltype(&Main::DrawWorld_UpdateWater);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_UpdateWater };
			func(this);
		}

		void DrawWorldMenu3D(BSRenderedTexture* apDestination)
		{
			using func_t = decltype(&Main::DrawWorldMenu3D);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorldMenu3D };
			func(this, apDestination);
		}

		void DrawWorld_WaitForParallelUpdate()
		{
			using func_t = decltype(&Main::DrawWorld_WaitForParallelUpdate);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_WaitForParallelUpdate };
			func(this);
		}

		Sun* DrawWorld_Init()
		{
			using func_t = decltype(&Main::DrawWorld_Init);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_Init };
			return func(this);
		}

		BSRenderedTexture* DrawWorld_InitRenderTexture(NiDX9Renderer* apRenderer, BSRenderedTexture* apDestination, bool abWireframe, bool abMultiSampleEnabled)
		{
			using func_t = decltype(&Main::DrawWorld_InitRenderTexture);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_InitRenderTexture };
			return func(this, apRenderer, apDestination, abWireframe, abMultiSampleEnabled);
		}

		void DrawWorld_DrawScene(Sun* psun, bool abDo1stPerson, bool abWireframe, bool abIssueVATSPartialQuery)
		{
			using func_t = decltype(&Main::DrawWorld_DrawScene);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_DrawScene };
			func(this, psun, abDo1stPerson, abWireframe, abIssueVATSPartialQuery);
		}

		void DrawWorld_Add1stPersonToDepthBuffer(BSRenderedTexture* apRenderTexture)
		{
			using func_t = decltype(&Main::DrawWorld_Add1stPersonToDepthBuffer);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_Add1stPersonToDepthBuffer };
			func(this, apRenderTexture);
		}

		void DrawWorld_Refraction(BSShaderAccumulator* apShaderAccum, BSRenderedTexture* apRenderTexture)
		{
			using func_t = decltype(&Main::DrawWorld_Refraction);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_Refraction };
			func(this, apShaderAccum, apRenderTexture);
		}

		bool DrawWorld_VATSOcclusionQuery()
		{
			using func_t = decltype(&Main::DrawWorld_VATSOcclusionQuery);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_VATSOcclusionQuery };
			return func(this);
		}

		void DrawWorld_VATS(bool abIssuedVATSQuery)
		{
			using func_t = decltype(&Main::DrawWorld_VATS);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_VATS };
			func(this, abIssuedVATSQuery);
		}

		void DrawWorld_RestartRenderTexture(BSRenderedTexture* apRenderTexture, bool abMultiSampleEnabled, std::uint32_t auiClearMode)
		{
			using func_t = decltype(&Main::DrawWorld_RestartRenderTexture);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_RestartRenderTexture };
			func(this, apRenderTexture, abMultiSampleEnabled, auiClearMode);
		}

		void DrawWorld_CopyMenuBG(ImageSpaceManager* apImagespaceManager, NiDX9Renderer* apRenderer, bool abMultiSampleEnabled, BSRenderedTexture* apDestination)
		{
			using func_t = decltype(&Main::DrawWorld_CopyMenuBG);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_CopyMenuBG };
			func(this, apImagespaceManager, apRenderer, abMultiSampleEnabled, apDestination);
		}

		void DrawWorld_MTSetup1stPerson()
		{
			using func_t = decltype(&Main::DrawWorld_MTSetup1stPerson);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_MTSetup1stPerson };
			func(this);
		}

		void DrawWorld_MTRender1stPerson(NiDX9Renderer* apRenderer, NiGeometry* apRenderedMenuGeom, Sun* apSun, BSRenderedTexture* apRenderTexture)
		{
			using func_t = decltype(&Main::DrawWorld_MTRender1stPerson);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_MTRender1stPerson };
			func(this, apRenderer, apRenderedMenuGeom, apSun, apRenderTexture);
		}

		void DrawWorld_DrawRenderedMenuParent()
		{
			using func_t = decltype(&Main::DrawWorld_DrawRenderedMenuParent);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_DrawRenderedMenuParent };
			func(this);
		}

		void DrawWorld_DoDepth(BSShaderAccumulator* apShaderAccum, BSRenderedTexture* apRenderTexture)
		{
			using func_t = decltype(&Main::DrawWorld_DoDepth);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_DoDepth };
			func(this, apShaderAccum, apRenderTexture);
		}

		void DrawWorld_ImageSpace(bool abMultiSampleEnabled, BSRenderedTexture* apRenderTexture, NiDX9Renderer* apRenderer, BSRenderedTexture* apDestination)
		{
			using func_t = decltype(&Main::DrawWorld_ImageSpace);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_ImageSpace };
			func(this, abMultiSampleEnabled, apRenderTexture, apRenderer, apDestination);
		}

		void DrawWorld_RenderedMenu(NiGeometry* apPipboyGeom, NiDX9Renderer* apRenderer)
		{
			using func_t = decltype(&Main::DrawWorld_RenderedMenu);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_RenderedMenu };
			func(this, apPipboyGeom, apRenderer);
		}

		void DrawWorld_ScreenSplatter(NiDX9Renderer* apRenderer)
		{
			using func_t = decltype(&Main::DrawWorld_ScreenSplatter);
			static REL::Relocation<func_t> func{ Offsets::Main::DrawWorld_ScreenSplatter };
			func(this, apRenderer);
		}

		void KillMenuBGTexture()
		{
			using func_t = decltype(&Main::KillMenuBGTexture);
			static REL::Relocation<func_t> func{ Offsets::Main::KillMenuBGTexture };
			func(this);
		}

		void PerformGameReset(bool abCreateMainMenu)
		{
			using func_t = decltype(&Main::PerformGameReset);
			static REL::Relocation<func_t> func{ Offsets::Main::PerformGameReset };
			func(this, abCreateMainMenu);
		}

		void* GetControls()
		{
			using func_t = decltype(&Main::GetControls);
			static REL::Relocation<func_t> func{ Offsets::Main::GetControls };
			return func(this);
		}

		static void InitSky()
		{
			using func_t = decltype(&Main::InitSky);
			static REL::Relocation<func_t> func{ Offsets::Main::InitSky };
			func();
		}

	protected:
		bool LoadPluginsFromFile(char const* pPath, char const* pFilename)
		{
			using func_t = decltype(&Main::LoadPluginsFromFile);
			static REL::Relocation<func_t> func{ Offsets::Main::LoadPluginsFromFile };
			return func(this, pPath, pFilename);
		}

	public:
		// members
		// not placed: pLaunchData, bThisIsAReboot
		bool                           bResumeLoadingThread;       // 00
		bool                           bQuitGame;                  // 01
		bool                           bResetGame;                 // 02
		bool                           bGameActive;                // 03
		bool                           bOnIdle;                    // 04
		bool                           bReloadContent;             // 05
		bool                           bFlyCamera;                 // 06
		bool                           bFreezeTime;                // 07
		HWND__*                        hWnd;                       // 08
		HINSTANCE__*                   hInstance;                  // 0C
		std::uint32_t                  iThreadID;                  // 10
		void*                          hThreadHandle;              // 14
		ScrapHeap                      PackedTaskHeap;             // 18
		BSPackedTaskQueue              TaskQueue;                  // 28
		ScrapHeap                      SecondaryPackedTaskHeap;    // 50
		BSPackedTaskQueue              SecondaryTaskQueue;         // 60
		NiPointer<BSShaderAccumulator> spDrawWorldAccum;           // 88
		NiPointer<BSShaderAccumulator> spDraw1stPersonAccum;       // 8C
		NiPointer<BSShaderAccumulator> spDraw1stPersonDepthAccum;  // 90
		NiPointer<BSShaderAccumulator> spScreenSplatterAccum;      // 94
		NiPointer<BSShaderAccumulator> spRenderedMenuAccum;        // 98
		bool                           bRenderingMenuBG;           // 9C
		std::uint8_t                   pad9D[0x3];                 // 9D
		NiPointer<NiCamera>            sp1stPersonAdjustedCamera;  // A0
	};
	static_assert(sizeof(Main) == 0xA4);
}
