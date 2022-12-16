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
// 0x00000004 T System.Runtime.CompilerServices.Unsafe::As(System.Object)
// 0x00000005 T& System.Runtime.CompilerServices.Unsafe::AsRef(System.Void*)
// 0x00000006 TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x00000007 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.Int32)
// 0x00000008 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.IntPtr)
// 0x00000009 T& System.Runtime.CompilerServices.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x0000000A System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset(T&,T&)
// 0x0000000B System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_m0A1AD80751DB59E83603083228A891EBEFA4F1D8 (void);
static Il2CppMethodPointer s_methodPointers[11] = 
{
	NULL,
	Unsafe_CopyBlock_m16F92905D9CFB178DBF23C4EC565B08DB4D94D8D,
	Unsafe_InitBlockUnaligned_m2BA85BFE14F26D0EE6328FB8FDFAFE0AACC01E74,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_m0A1AD80751DB59E83603083228A891EBEFA4F1D8,
};
static const int32_t s_InvokerIndices[11] = 
{
	-1,
	2805,
	2806,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2201,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x06000001, { 0, 1 } },
	{ 0x06000007, { 1, 1 } },
	{ 0x06000008, { 2, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[3] = 
{
	{ (Il2CppRGCTXDataType)2, 264 },
	{ (Il2CppRGCTXDataType)2, 267 },
	{ (Il2CppRGCTXDataType)2, 268 },
};
extern const CustomAttributesCacheGenerator g_System_Runtime_CompilerServices_Unsafe_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule = 
{
	"System.Runtime.CompilerServices.Unsafe.dll",
	11,
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
