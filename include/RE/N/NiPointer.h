#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// A pointer to a reference counted object. The reference count is not touched: copies and destruction leave it alone (the type is a plain
	// pointer member so that it can sit inside the game's layouts and unions), the accessors only read the pointer.
	template <class T>
	class NiPointer
	{
	public:
		[[nodiscard]] T*   get() const noexcept { return m_pObject; }
		[[nodiscard]] T*   operator->() const noexcept { return m_pObject; }
		[[nodiscard]] T&   operator*() const noexcept { return *m_pObject; }
		[[nodiscard]] explicit operator bool() const noexcept { return m_pObject != nullptr; }

		[[nodiscard]] bool operator==(const NiPointer& a_rhs) const noexcept { return m_pObject == a_rhs.m_pObject; }
		[[nodiscard]] bool operator==(const T* a_rhs) const noexcept { return m_pObject == a_rhs; }

		// members
		T* m_pObject;
	};
}
