#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"

namespace RE
{
	class BSFaceGenAnimationData;
	class BSFile;

	class LipSynchAnim
	{
	public:
		LipSynchAnim* ctor(std::uint32_t aiNumFrames, std::int32_t aiStartingFrame)
		{
			using func_t = LipSynchAnim*(__thiscall*)(LipSynchAnim*, std::uint32_t, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::LipSynchAnim::ctor };
			return func(this, aiNumFrames, aiStartingFrame);
		}

		static LipSynchAnim* LoadFromFile(char const* apFilename)
		{
			using func_t = LipSynchAnim*(__cdecl*)(char const*);
			static REL::Relocation<func_t> func{ Offsets::LipSynchAnim::LoadFromFile };
			return func(apFilename);
		}

		static LipSynchAnim* LoadFromFile(BSFile* apFile)
		{
			using func_t = LipSynchAnim*(__cdecl*)(BSFile*);
			static REL::Relocation<func_t> func{ Offsets::LipSynchAnim::LoadFromFile_1 };
			return func(apFile);
		}

		bool ApplyToNode(BSFaceGenAnimationData* apData, float afEmptyAtEnd)
		{
			using func_t = decltype(&LipSynchAnim::ApplyToNode);
			static REL::Relocation<func_t> func{ Offsets::LipSynchAnim::ApplyToNode };
			return func(this, apData, afEmptyAtEnd);
		}

		static bool ChangeFilenameToLipSynch(BSStringT<char>& aFilename)
		{
			using func_t = decltype(&LipSynchAnim::ChangeFilenameToLipSynch);
			static REL::Relocation<func_t> func{ Offsets::LipSynchAnim::ChangeFilenameToLipSynch };
			return func(aFilename);
		}

	protected:
		static LipSynchAnim* Scatter(char const* pBuffer, std::uint32_t nBufferSize)
		{
			using func_t = decltype(&LipSynchAnim::Scatter);
			static REL::Relocation<func_t> func{ Offsets::LipSynchAnim::Scatter };
			return func(pBuffer, nBufferSize);
		}

		static bool Decompress(BSFile* apFile, char* apDest, std::uint32_t aiBufferSize, std::uint32_t aiDecompSize)
		{
			using func_t = decltype(&LipSynchAnim::Decompress);
			static REL::Relocation<func_t> func{ Offsets::LipSynchAnim::Decompress };
			return func(apFile, apDest, aiBufferSize, aiDecompSize);
		}

	public:
		// members
		std::uint32_t iNumFrames;      // 00
		std::int32_t  iStartingFrame;  // 04
		float**       ppPhonemes;      // 08
		float**       ppModifiers;     // 0C
	};
	static_assert(sizeof(LipSynchAnim) == 0x10);
}
