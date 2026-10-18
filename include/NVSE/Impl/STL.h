#pragma once

#include <cstddef>
#include <cstdint>
#include <string_view>

// The game's std::vector (24 bytes) and std::string (28 bytes) objects, as they sit in the game's structures. The host
// standard library's types have other sizes, so these are layout-compatible views of the game's objects: they allow
// reading what the game holds, but never allocate, grow or free (the storage belongs to the game's allocator).
namespace RE::stl
{
	// checked-iterator build of the game's compiler: container proxy pointer, the proxy allocator and the element allocator (one padded byte each), then first / last / end pointers
	template <class T>
	struct vector
	{
	public:
		using value_type = T;
		using size_type = std::uint32_t;
		using iterator = T*;
		using const_iterator = const T*;

		[[nodiscard]] iterator       begin() noexcept { return _first; }
		[[nodiscard]] const_iterator begin() const noexcept { return _first; }
		[[nodiscard]] const_iterator cbegin() const noexcept { return _first; }
		[[nodiscard]] iterator       end() noexcept { return _last; }
		[[nodiscard]] const_iterator end() const noexcept { return _last; }
		[[nodiscard]] const_iterator cend() const noexcept { return _last; }

		[[nodiscard]] size_type size() const noexcept { return static_cast<size_type>(_last - _first); }
		[[nodiscard]] size_type capacity() const noexcept { return static_cast<size_type>(_end - _first); }
		[[nodiscard]] bool      empty() const noexcept { return _first == _last; }

		[[nodiscard]] T*       data() noexcept { return _first; }
		[[nodiscard]] const T* data() const noexcept { return _first; }

		[[nodiscard]] T&       operator[](size_type a_pos) noexcept { return _first[a_pos]; }
		[[nodiscard]] const T& operator[](size_type a_pos) const noexcept { return _first[a_pos]; }
		[[nodiscard]] T&       front() noexcept { return *_first; }
		[[nodiscard]] const T& front() const noexcept { return *_first; }
		[[nodiscard]] T&       back() noexcept { return *(_last - 1); }
		[[nodiscard]] const T& back() const noexcept { return *(_last - 1); }

		// members (read-only in practice: the storage belongs to the game's allocator)
		void*        _proxy;            // 00 (checked-iterator container proxy, freed with the allocator at 04)
		std::uint8_t _proxyAlloc[4];    // 04
		std::uint8_t _alloc[4];         // 08 (element allocator)
		T*           _first;            // 0C
		T*           _last;             // 10
		T*           _end;              // 14
	};
	static_assert(sizeof(vector<int>) == 0x18);
	static_assert(offsetof(vector<int>, _alloc) == 0x08);
	static_assert(offsetof(vector<int>, _first) == 0x0C);
	static_assert(offsetof(vector<int>, _last) == 0x10);

	// small-string optimised: 16-byte buffer, or a pointer when the reserve is 16 or more
	struct string
	{
	public:
		using size_type = std::uint32_t;

		[[nodiscard]] const char* c_str() const noexcept { return _reserve >= 0x10 ? _bx.ptr : _bx.buf; }
		[[nodiscard]] const char* data() const noexcept { return c_str(); }
		[[nodiscard]] size_type   size() const noexcept { return _size; }
		[[nodiscard]] size_type   length() const noexcept { return _size; }
		[[nodiscard]] size_type   capacity() const noexcept { return _reserve; }
		[[nodiscard]] bool        empty() const noexcept { return _size == 0; }

		[[nodiscard]] const char* begin() const noexcept { return c_str(); }
		[[nodiscard]] const char* end() const noexcept { return c_str() + _size; }
		[[nodiscard]] char        operator[](size_type a_pos) const noexcept { return c_str()[a_pos]; }

		[[nodiscard]] operator std::string_view() const noexcept { return { c_str(), _size }; }

		union Bx
		{
			char  buf[0x10];
			char* ptr;
		};

		void*         _proxy;    // 00
		Bx            _bx;       // 04
		std::uint32_t _size;     // 14
		std::uint32_t _reserve;  // 18
	};
	static_assert(sizeof(string) == 0x1C);
	static_assert(offsetof(string, _bx) == 0x04);
	static_assert(offsetof(string, _size) == 0x14);
	static_assert(offsetof(string, _reserve) == 0x18);
}
