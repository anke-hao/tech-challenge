#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf()
// 0x00000002 System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlock_m16F92905D9CFB178DBF23C4EC565B08DB4D94D8D (void);
// 0x00000003 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Void*,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m2BA85BFE14F26D0EE6328FB8FDFAFE0AACC01E74 (void);
// 0x00000004 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_mCB99F8ECDF44E187567B1690AA311749B4DDA0C3 (void);
// 0x00000005 T System.Runtime.CompilerServices.Unsafe::As(System.Object)
// 0x00000006 T& System.Runtime.CompilerServices.Unsafe::AsRef(System.Void*)
// 0x00000007 TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x00000008 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.Int32)
// 0x00000009 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.IntPtr)
// 0x0000000A T& System.Runtime.CompilerServices.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x0000000B System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset(T&,T&)
// 0x0000000C System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame(T&,T&)
// 0x0000000D System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_m0A1AD80751DB59E83603083228A891EBEFA4F1D8 (void);
static Il2CppMethodPointer s_methodPointers[13] = 
{
	NULL,
	Unsafe_CopyBlock_m16F92905D9CFB178DBF23C4EC565B08DB4D94D8D,
	Unsafe_InitBlockUnaligned_m2BA85BFE14F26D0EE6328FB8FDFAFE0AACC01E74,
	Unsafe_InitBlockUnaligned_mCB99F8ECDF44E187567B1690AA311749B4DDA0C3,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_m0A1AD80751DB59E83603083228A891EBEFA4F1D8,
};
static const int32_t s_InvokerIndices[13] = 
{
	-1,
	2839,
	2840,
	2840,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2222,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x06000001, { 0, 1 } },
	{ 0x06000008, { 1, 1 } },
	{ 0x06000009, { 2, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[3] = 
{
	{ (Il2CppRGCTXDataType)2, 254 },
	{ (Il2CppRGCTXDataType)2, 257 },
	{ (Il2CppRGCTXDataType)2, 258 },
};
extern const CustomAttributesCacheGenerator g_System_Runtime_CompilerServices_Unsafe_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule = 
{
	"System.Runtime.CompilerServices.Unsafe.dll",
	13,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	3,
	s_rgctxValues,
	NULL,
	g_System_Runtime_CompilerServices_Unsafe_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
