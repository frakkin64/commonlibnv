#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class NavMesh;

	class NavMeshPtr :
		public NiPointer<NavMesh>  // 00
	{
	public:
		NavMeshPtr& operator_call(NavMeshPtr const& ptr)
		{
			using func_t = decltype(&NavMeshPtr::operator_call);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPtr::operator_call };
			return func(this, ptr);
		}

		NavMeshPtr* ctor(NavMeshPtr const& ptr)
		{
			using func_t = NavMeshPtr*(__thiscall*)(NavMeshPtr*, NavMeshPtr const&);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPtr::ctor };
			return func(this, ptr);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(NavMeshPtr*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPtr::dtor };
			func(this);
		}

		static NavMeshPtr MakeNavMeshPtr(NavMesh* result)
		{
			using func_t = NavMeshPtr(__cdecl*)(NavMesh*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPtr::MakeNavMeshPtr };
			return func(result);
		}

		static void MakeNavMeshPtr(NavMeshPtr& arNavmeshPtr, NavMesh* apNavMesh)
		{
			using func_t = void(__cdecl*)(NavMeshPtr&, NavMesh*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPtr::MakeNavMeshPtr_1 };
			func(arNavmeshPtr, apNavMesh);
		}

		NavMeshPtr* ctor()
		{
			using func_t = NavMeshPtr*(__thiscall*)(NavMeshPtr*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPtr::ctor_2 };
			return func(this);
		}

	private:
		NavMeshPtr* ctor(NavMesh* pObject)
		{
			using func_t = NavMeshPtr*(__thiscall*)(NavMeshPtr*, NavMesh*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPtr::ctor_1 };
			return func(this, pObject);
		}
	};
}
