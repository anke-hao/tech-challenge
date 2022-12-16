#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Runtime.Versioning.NonVersionableAttribute
struct NonVersionableAttribute_tE17959EE262225F0E5FDEB133DB2374BA59A877A;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4664E62587ACD72C26D74F2339E9FB64FFF25D79 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.Unsafe
struct Unsafe_t485A10722E79AC609765C46AA50773C3A1D13095  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Runtime.Versioning.NonVersionableAttribute
struct NonVersionableAttribute_tE17959EE262225F0E5FDEB133DB2374BA59A877A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonVersionableAttribute__ctor_m0A1AD80751DB59E83603083228A891EBEFA4F1D8 (NonVersionableAttribute_tE17959EE262225F0E5FDEB133DB2374BA59A877A * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_m16F92905D9CFB178DBF23C4EC565B08DB4D94D8D (uint8_t* ___destination0, uint8_t* ___source1, uint32_t ___byteCount2, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___destination0;
		uint8_t* L_1 = ___source1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Void*,System.Byte,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m2BA85BFE14F26D0EE6328FB8FDFAFE0AACC01E74 (void* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___startAddress0;
		uint8_t L_1 = ___value1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
