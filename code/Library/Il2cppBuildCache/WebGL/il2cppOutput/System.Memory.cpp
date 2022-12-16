#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E;
// System.Pinnable`1<System.Char>
struct Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784;
// System.Reflection.Assembly
struct Assembly_t;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9B89B1C38B332E83EF5D9D1D6F6088C7AC3E6EFB;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tD738FE6B83F63AC66FDD73BCD3193016FDEBFAB0;
// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_t4ED9D8CF7709ED7300B718C603BBF8F8AF65EF38;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tEE4069DE19AA2D2FEF7D3142EAE79311F7BB26E9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Resources.ResourceManager
struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0DF027D1C7415CBB03F663A5D5ACE52D29226059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t620905184FE92C7CD2128B5FE4079C455117C4B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A;
IL2CPP_EXTERN_C String_t* _stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5;
IL2CPP_EXTERN_C String_t* _stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_DestinationTooShort_mD9C82D6A62948DA443166283990BF760F77C76C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m4A71872D4B069AF36758A61E4CA3FB663B4E8EC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArrayTypeMismatchException_mFC0D7756FD2EA1A7E41D8426D819369FDBD728FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB421A47ED18F02BE7F55B5C2E8ED3D78D390362E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisPinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C_m82E4B553890021735125CA73FE33DE7FECFFC346_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m3CAB19E292901642C2A5C1EE1ABE3D292F75BC0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t4D39A8EE0C8A926B38B7B1CC0A2E24A82350D16D_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDCF4F358E642BBA69DFA9FB7B49D03098113B765 
{
public:

public:
};


// System.Object


// System.Pinnable`1<System.Char>
struct Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C  : public RuntimeObject
{
public:
	// T System.Pinnable`1::Data
	Il2CppChar ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C, ___Data_0)); }
	inline Il2CppChar get_Data_0() const { return ___Data_0; }
	inline Il2CppChar* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(Il2CppChar value)
	{
		___Data_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// FxResources.System.Memory.SR
struct SR_t4D39A8EE0C8A926B38B7B1CC0A2E24A82350D16D  : public RuntimeObject
{
public:

public:
};


// System.SR
struct SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF  : public RuntimeObject
{
public:

public:
};

struct SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields
{
public:
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * ___s_resourceManager_0;
	// System.Type System.SR::<ResourceType>k__BackingField
	Type_t * ___U3CResourceTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_resourceManager_0() { return static_cast<int32_t>(offsetof(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields, ___s_resourceManager_0)); }
	inline ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * get_s_resourceManager_0() const { return ___s_resourceManager_0; }
	inline ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A ** get_address_of_s_resourceManager_0() { return &___s_resourceManager_0; }
	inline void set_s_resourceManager_0(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * value)
	{
		___s_resourceManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_resourceManager_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResourceTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields, ___U3CResourceTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CResourceTypeU3Ek__BackingField_1() const { return ___U3CResourceTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CResourceTypeU3Ek__BackingField_1() { return &___U3CResourceTypeU3Ek__BackingField_1; }
	inline void set_U3CResourceTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CResourceTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResourceTypeU3Ek__BackingField_1), (void*)value);
	}
};


// System.SpanHelpers
struct SpanHelpers_t43B4372273814AD441D829F43044F265A20EB152  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ThrowHelper
struct ThrowHelper_t6FEE8E226685E1C0DA06AA73F71F45104987D3DE  : public RuntimeObject
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

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9B89B1C38B332E83EF5D9D1D6F6088C7AC3E6EFB  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_t4ED9D8CF7709ED7300B718C603BBF8F8AF65EF38  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tEE4069DE19AA2D2FEF7D3142EAE79311F7BB26E9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.ExceptionArgument
struct ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MemoryExtensions
struct MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40  : public RuntimeObject
{
public:

public:
};

struct MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_StaticFields
{
public:
	// System.IntPtr System.MemoryExtensions::StringAdjustment
	intptr_t ___StringAdjustment_0;

public:
	inline static int32_t get_offset_of_StringAdjustment_0() { return static_cast<int32_t>(offsetof(MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_StaticFields, ___StringAdjustment_0)); }
	inline intptr_t get_StringAdjustment_0() const { return ___StringAdjustment_0; }
	inline intptr_t* get_address_of_StringAdjustment_0() { return &___StringAdjustment_0; }
	inline void set_StringAdjustment_0(intptr_t value)
	{
		___StringAdjustment_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Resources.UltimateResourceFallbackLocation
struct UltimateResourceFallbackLocation_tA4EBEA627CD0C386314EBB60D7A4225C435D0F0B 
{
public:
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UltimateResourceFallbackLocation_tA4EBEA627CD0C386314EBB60D7A4225C435D0F0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Resources.ResourceManager
struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A  : public RuntimeObject
{
public:
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t * ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t * ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t * ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t * ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;

public:
	inline static int32_t get_offset_of_BaseNameField_0() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___BaseNameField_0)); }
	inline String_t* get_BaseNameField_0() const { return ___BaseNameField_0; }
	inline String_t** get_address_of_BaseNameField_0() { return &___BaseNameField_0; }
	inline void set_BaseNameField_0(String_t* value)
	{
		___BaseNameField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseNameField_0), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceSets_1() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___ResourceSets_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_ResourceSets_1() const { return ___ResourceSets_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_ResourceSets_1() { return &___ResourceSets_1; }
	inline void set_ResourceSets_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___ResourceSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceSets_1), (void*)value);
	}

	inline static int32_t get_offset_of__resourceSets_2() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____resourceSets_2)); }
	inline Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * get__resourceSets_2() const { return ____resourceSets_2; }
	inline Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E ** get_address_of__resourceSets_2() { return &____resourceSets_2; }
	inline void set__resourceSets_2(Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * value)
	{
		____resourceSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resourceSets_2), (void*)value);
	}

	inline static int32_t get_offset_of_moduleDir_3() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___moduleDir_3)); }
	inline String_t* get_moduleDir_3() const { return ___moduleDir_3; }
	inline String_t** get_address_of_moduleDir_3() { return &___moduleDir_3; }
	inline void set_moduleDir_3(String_t* value)
	{
		___moduleDir_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moduleDir_3), (void*)value);
	}

	inline static int32_t get_offset_of_MainAssembly_4() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___MainAssembly_4)); }
	inline Assembly_t * get_MainAssembly_4() const { return ___MainAssembly_4; }
	inline Assembly_t ** get_address_of_MainAssembly_4() { return &___MainAssembly_4; }
	inline void set_MainAssembly_4(Assembly_t * value)
	{
		___MainAssembly_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MainAssembly_4), (void*)value);
	}

	inline static int32_t get_offset_of__locationInfo_5() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____locationInfo_5)); }
	inline Type_t * get__locationInfo_5() const { return ____locationInfo_5; }
	inline Type_t ** get_address_of__locationInfo_5() { return &____locationInfo_5; }
	inline void set__locationInfo_5(Type_t * value)
	{
		____locationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____locationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__userResourceSet_6() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____userResourceSet_6)); }
	inline Type_t * get__userResourceSet_6() const { return ____userResourceSet_6; }
	inline Type_t ** get_address_of__userResourceSet_6() { return &____userResourceSet_6; }
	inline void set__userResourceSet_6(Type_t * value)
	{
		____userResourceSet_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userResourceSet_6), (void*)value);
	}

	inline static int32_t get_offset_of__neutralResourcesCulture_7() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____neutralResourcesCulture_7)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__neutralResourcesCulture_7() const { return ____neutralResourcesCulture_7; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__neutralResourcesCulture_7() { return &____neutralResourcesCulture_7; }
	inline void set__neutralResourcesCulture_7(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____neutralResourcesCulture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____neutralResourcesCulture_7), (void*)value);
	}

	inline static int32_t get_offset_of__lastUsedResourceCache_8() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____lastUsedResourceCache_8)); }
	inline CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * get__lastUsedResourceCache_8() const { return ____lastUsedResourceCache_8; }
	inline CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 ** get_address_of__lastUsedResourceCache_8() { return &____lastUsedResourceCache_8; }
	inline void set__lastUsedResourceCache_8(CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * value)
	{
		____lastUsedResourceCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastUsedResourceCache_8), (void*)value);
	}

	inline static int32_t get_offset_of__ignoreCase_9() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____ignoreCase_9)); }
	inline bool get__ignoreCase_9() const { return ____ignoreCase_9; }
	inline bool* get_address_of__ignoreCase_9() { return &____ignoreCase_9; }
	inline void set__ignoreCase_9(bool value)
	{
		____ignoreCase_9 = value;
	}

	inline static int32_t get_offset_of_UseManifest_10() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___UseManifest_10)); }
	inline bool get_UseManifest_10() const { return ___UseManifest_10; }
	inline bool* get_address_of_UseManifest_10() { return &___UseManifest_10; }
	inline void set_UseManifest_10(bool value)
	{
		___UseManifest_10 = value;
	}

	inline static int32_t get_offset_of_UseSatelliteAssem_11() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___UseSatelliteAssem_11)); }
	inline bool get_UseSatelliteAssem_11() const { return ___UseSatelliteAssem_11; }
	inline bool* get_address_of_UseSatelliteAssem_11() { return &___UseSatelliteAssem_11; }
	inline void set_UseSatelliteAssem_11(bool value)
	{
		___UseSatelliteAssem_11 = value;
	}

	inline static int32_t get_offset_of__fallbackLoc_12() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____fallbackLoc_12)); }
	inline int32_t get__fallbackLoc_12() const { return ____fallbackLoc_12; }
	inline int32_t* get_address_of__fallbackLoc_12() { return &____fallbackLoc_12; }
	inline void set__fallbackLoc_12(int32_t value)
	{
		____fallbackLoc_12 = value;
	}

	inline static int32_t get_offset_of__satelliteContractVersion_13() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____satelliteContractVersion_13)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get__satelliteContractVersion_13() const { return ____satelliteContractVersion_13; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of__satelliteContractVersion_13() { return &____satelliteContractVersion_13; }
	inline void set__satelliteContractVersion_13(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		____satelliteContractVersion_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____satelliteContractVersion_13), (void*)value);
	}

	inline static int32_t get_offset_of__lookedForSatelliteContractVersion_14() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____lookedForSatelliteContractVersion_14)); }
	inline bool get__lookedForSatelliteContractVersion_14() const { return ____lookedForSatelliteContractVersion_14; }
	inline bool* get_address_of__lookedForSatelliteContractVersion_14() { return &____lookedForSatelliteContractVersion_14; }
	inline void set__lookedForSatelliteContractVersion_14(bool value)
	{
		____lookedForSatelliteContractVersion_14 = value;
	}

	inline static int32_t get_offset_of__callingAssembly_15() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____callingAssembly_15)); }
	inline Assembly_t * get__callingAssembly_15() const { return ____callingAssembly_15; }
	inline Assembly_t ** get_address_of__callingAssembly_15() { return &____callingAssembly_15; }
	inline void set__callingAssembly_15(Assembly_t * value)
	{
		____callingAssembly_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callingAssembly_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_callingAssembly_16() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___m_callingAssembly_16)); }
	inline RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * get_m_callingAssembly_16() const { return ___m_callingAssembly_16; }
	inline RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 ** get_address_of_m_callingAssembly_16() { return &___m_callingAssembly_16; }
	inline void set_m_callingAssembly_16(RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * value)
	{
		___m_callingAssembly_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callingAssembly_16), (void*)value);
	}

	inline static int32_t get_offset_of_resourceGroveler_17() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___resourceGroveler_17)); }
	inline RuntimeObject* get_resourceGroveler_17() const { return ___resourceGroveler_17; }
	inline RuntimeObject** get_address_of_resourceGroveler_17() { return &___resourceGroveler_17; }
	inline void set_resourceGroveler_17(RuntimeObject* value)
	{
		___resourceGroveler_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceGroveler_17), (void*)value);
	}
};

struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields
{
public:
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t * ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;

public:
	inline static int32_t get_offset_of_MagicNumber_18() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___MagicNumber_18)); }
	inline int32_t get_MagicNumber_18() const { return ___MagicNumber_18; }
	inline int32_t* get_address_of_MagicNumber_18() { return &___MagicNumber_18; }
	inline void set_MagicNumber_18(int32_t value)
	{
		___MagicNumber_18 = value;
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_19() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___HeaderVersionNumber_19)); }
	inline int32_t get_HeaderVersionNumber_19() const { return ___HeaderVersionNumber_19; }
	inline int32_t* get_address_of_HeaderVersionNumber_19() { return &___HeaderVersionNumber_19; }
	inline void set_HeaderVersionNumber_19(int32_t value)
	{
		___HeaderVersionNumber_19 = value;
	}

	inline static int32_t get_offset_of__minResourceSet_20() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ____minResourceSet_20)); }
	inline Type_t * get__minResourceSet_20() const { return ____minResourceSet_20; }
	inline Type_t ** get_address_of__minResourceSet_20() { return &____minResourceSet_20; }
	inline void set__minResourceSet_20(Type_t * value)
	{
		____minResourceSet_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minResourceSet_20), (void*)value);
	}

	inline static int32_t get_offset_of_ResReaderTypeName_21() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___ResReaderTypeName_21)); }
	inline String_t* get_ResReaderTypeName_21() const { return ___ResReaderTypeName_21; }
	inline String_t** get_address_of_ResReaderTypeName_21() { return &___ResReaderTypeName_21; }
	inline void set_ResReaderTypeName_21(String_t* value)
	{
		___ResReaderTypeName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResReaderTypeName_21), (void*)value);
	}

	inline static int32_t get_offset_of_ResSetTypeName_22() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___ResSetTypeName_22)); }
	inline String_t* get_ResSetTypeName_22() const { return ___ResSetTypeName_22; }
	inline String_t** get_address_of_ResSetTypeName_22() { return &___ResSetTypeName_22; }
	inline void set_ResSetTypeName_22(String_t* value)
	{
		___ResSetTypeName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResSetTypeName_22), (void*)value);
	}

	inline static int32_t get_offset_of_MscorlibName_23() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___MscorlibName_23)); }
	inline String_t* get_MscorlibName_23() const { return ___MscorlibName_23; }
	inline String_t** get_address_of_MscorlibName_23() { return &___MscorlibName_23; }
	inline void set_MscorlibName_23(String_t* value)
	{
		___MscorlibName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MscorlibName_23), (void*)value);
	}

	inline static int32_t get_offset_of_DEBUG_24() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___DEBUG_24)); }
	inline int32_t get_DEBUG_24() const { return ___DEBUG_24; }
	inline int32_t* get_address_of_DEBUG_24() { return &___DEBUG_24; }
	inline void set_DEBUG_24(int32_t value)
	{
		___DEBUG_24 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F  : public Type_t
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_m7223AEB1A03B64E71E152D35990EBB98CDF68B3E_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method);
// !!0& System.Runtime.CompilerServices.Unsafe::AsRef<System.Char>(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB421A47ED18F02BE7F55B5C2E8ED3D78D390362E_gshared_inline (void* ___source0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset<System.Char>(!!0&,!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m3CAB19E292901642C2A5C1EE1ABE3D292F75BC0A_gshared_inline (Il2CppChar* ___origin0, Il2CppChar* ___target1, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42 (const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Pinnable`1<System.Char>>(System.Object)
inline Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C * Unsafe_As_TisPinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C_m82E4B553890021735125CA73FE33DE7FECFFC346_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	return ((  Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C * (*) (RuntimeObject *, const RuntimeMethod*))Unsafe_As_TisRuntimeObject_m7223AEB1A03B64E71E152D35990EBB98CDF68B3E_gshared_inline)(___o0, method);
}
// !!0& System.Runtime.CompilerServices.Unsafe::AsRef<System.Char>(System.Void*)
inline Il2CppChar* Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB421A47ED18F02BE7F55B5C2E8ED3D78D390362E_inline (void* ___source0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (void*, const RuntimeMethod*))Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB421A47ED18F02BE7F55B5C2E8ED3D78D390362E_gshared_inline)(___source0, method);
}
// System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset<System.Char>(!!0&,!!0&)
inline intptr_t Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m3CAB19E292901642C2A5C1EE1ABE3D292F75BC0A_inline (Il2CppChar* ___origin0, Il2CppChar* ___target1, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppChar*, Il2CppChar*, const RuntimeMethod*))Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m3CAB19E292901642C2A5C1EE1ABE3D292F75BC0A_gshared_inline)(___origin0, ___target1, method);
}
// System.IntPtr System.MemoryExtensions::MeasureStringAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MemoryExtensions_MeasureStringAdjustment_m8E2719E3CCAD24803BEF8B9C9873DDFAA528C762 (const RuntimeMethod* method);
// System.Type System.SR::get_ResourceType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SR_get_ResourceType_mA677195FD1721150495B84739EFFDCB9366A5541_inline (const RuntimeMethod* method);
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25 (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * __this, Type_t * ___resourceSource0, const RuntimeMethod* method);
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_m18A791F4D611559D5B214B3020BAB11F2AC869EC (const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m08DBDDDDF80E9F0013615CAB611F552F836BB526 (const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5 (String_t* ___separator0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mE36F3A5B2DFF613C704AA56989D90D72760391EB (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.SpanHelpers::IsReferenceOrContainsReferencesCore(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferencesCore_m4046A8EAD00DA02AA423C292A8FCBB08268AD781 (Type_t * ___type0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArrayTypeMismatchException_m23F27BF82F951A64682A2CF14E0EDE9F3B54C93F (const RuntimeMethod* method);
// System.Void System.ArrayTypeMismatchException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayTypeMismatchException__ctor_m76932588D9A980CDB675D12B0479F8EAC2D5E96D (ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784 * __this, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m4019588ED8511C985604C8CC9AD4AB6414676945 (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.SR::get_Argument_InvalidTypeWithPointersNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidTypeWithPointersNotSupported_m2FD2DCBFF1853C8F9616D4C55DD1C14163A06B75 (const RuntimeMethod* method);
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m4480ECD777F2A905A368094827DDCB43478A8053 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_DestinationTooShort_m75CF4B3D7F56B0383E0BC84D86C085AA0CE90CD1 (const RuntimeMethod* method);
// System.String System.SR::get_Argument_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_DestinationTooShort_mDD536A55FFA1BD1CF5C34D9E074420C183905559 (const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_m3ED3DA6D593699354BA4D397790440F3BFE84AEA (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m7D7D024DA2EA05AEDF8B8C470F678A5DA96C8EB8 (EmbeddedAttribute_t9B89B1C38B332E83EF5D9D1D6F6088C7AC3E6EFB * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsByRefLikeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsByRefLikeAttribute__ctor_m3F813C04C0FAF02B5AF712ED98929300CD6E44DD (IsByRefLikeAttribute_t4ED9D8CF7709ED7300B718C603BBF8F8AF65EF38 * __this, const RuntimeMethod* method)
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m07A8C937D13DE79AF8ED555F18E5AE9FDA6C3879 (IsReadOnlyAttribute_tEE4069DE19AA2D2FEF7D3142EAE79311F7BB26E9 * __this, const RuntimeMethod* method)
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
// System.IntPtr System.MemoryExtensions::MeasureStringAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MemoryExtensions_MeasureStringAdjustment_m8E2719E3CCAD24803BEF8B9C9873DDFAA528C762 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB421A47ED18F02BE7F55B5C2E8ED3D78D390362E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisPinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C_m82E4B553890021735125CA73FE33DE7FECFFC346_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m3CAB19E292901642C2A5C1EE1ABE3D292F75BC0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		V_0 = _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
		String_t* L_0 = V_0;
		V_2 = L_0;
		String_t* L_1 = V_2;
		V_1 = (Il2CppChar*)((uintptr_t)L_1);
		Il2CppChar* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppChar* L_3 = V_1;
		int32_t L_4;
		L_4 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)L_4));
	}

IL_0016:
	{
		String_t* L_5 = V_0;
		Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C * L_6;
		L_6 = Unsafe_As_TisPinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C_m82E4B553890021735125CA73FE33DE7FECFFC346_inline(L_5, /*hidden argument*/Unsafe_As_TisPinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C_m82E4B553890021735125CA73FE33DE7FECFFC346_RuntimeMethod_var);
		Il2CppChar* L_7 = L_6->get_address_of_Data_0();
		Il2CppChar* L_8 = V_1;
		Il2CppChar* L_9;
		L_9 = Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB421A47ED18F02BE7F55B5C2E8ED3D78D390362E_inline((void*)(void*)L_8, /*hidden argument*/Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB421A47ED18F02BE7F55B5C2E8ED3D78D390362E_RuntimeMethod_var);
		intptr_t L_10;
		L_10 = Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m3CAB19E292901642C2A5C1EE1ABE3D292F75BC0A_inline((Il2CppChar*)L_7, (Il2CppChar*)L_9, /*hidden argument*/Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m3CAB19E292901642C2A5C1EE1ABE3D292F75BC0A_RuntimeMethod_var);
		return (intptr_t)L_10;
	}
}
// System.Void System.MemoryExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryExtensions__cctor_mC634116818572F66DC5A4416FB29AFBFCE859EBE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = MemoryExtensions_MeasureStringAdjustment_m8E2719E3CCAD24803BEF8B9C9873DDFAA528C762(/*hidden argument*/NULL);
		((MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_il2cpp_TypeInfo_var))->set_StringAdjustment_0((intptr_t)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_m18A791F4D611559D5B214B3020BAB11F2AC869EC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B2_0 = NULL;
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_0 = ((SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var))->get_s_resourceManager_0();
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = SR_get_ResourceType_mA677195FD1721150495B84739EFFDCB9366A5541_inline(/*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_3 = (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A *)il2cpp_codegen_object_new(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25(L_3, L_2, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_4 = L_3;
		((SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var))->set_s_resourceManager_0(L_4);
		G_B2_0 = L_4;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m08DBDDDDF80E9F0013615CAB611F552F836BB526 (const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		V_0 = (String_t*)NULL;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_0;
		L_0 = SR_get_ResourceManager_m18A791F4D611559D5B214B3020BAB11F2AC869EC(/*hidden argument*/NULL);
		String_t* L_1 = ___resourceKey0;
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0013;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{ // begin catch(System.Resources.MissingManifestResourceException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0013;
	} // end catch (depth: 1)

IL_0013:
	{
		String_t* L_3 = ___defaultString1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = ___resourceKey0;
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6(L_4, L_5, 4, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_7 = ___defaultString1;
		return L_7;
	}

IL_0022:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m4480ECD777F2A905A368094827DDCB43478A8053 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m08DBDDDDF80E9F0013615CAB611F552F836BB526(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		RuntimeObject * L_5 = ___p11;
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		String_t* L_7 = ___resourceFormat0;
		RuntimeObject * L_8 = ___p11;
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Type System.SR::get_ResourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * SR_get_ResourceType_mA677195FD1721150495B84739EFFDCB9366A5541 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		Type_t * L_0 = ((SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var))->get_U3CResourceTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String System.SR::get_NotSupported_CannotCallEqualsOnSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotSupported_CannotCallEqualsOnSpan_mACE24A88A0ADF9880C315FDC0963BA17E66B0394 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748(_stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_NotSupported_CannotCallGetHashCodeOnSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotSupported_CannotCallGetHashCodeOnSpan_m4BC3D1B6994913E69BDD4028026F18A279A9DBDB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748(_stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_InvalidTypeWithPointersNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidTypeWithPointersNotSupported_m2FD2DCBFF1853C8F9616D4C55DD1C14163A06B75 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748(_stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_DestinationTooShort_mDD536A55FFA1BD1CF5C34D9E074420C183905559 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748(_stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.SR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_m4CA77DF9E538A3B432DD3F12C4D3E655983629DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t4D39A8EE0C8A926B38B7B1CC0A2E24A82350D16D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (SR_t4D39A8EE0C8A926B38B7B1CC0A2E24A82350D16D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		((SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var))->set_U3CResourceTypeU3Ek__BackingField_1(L_1);
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
// System.Boolean System.SpanHelpers::IsReferenceOrContainsReferencesCore(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferencesCore_m4046A8EAD00DA02AA423C292A8FCBB08268AD781 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0DF027D1C7415CBB03F663A5D5ACE52D29226059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t620905184FE92C7CD2128B5FE4079C455117C4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldInfo_t * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		Type_t * L_0 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		Type_t * L_3 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_4;
		L_4 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		Type_t * L_6 = ___type0;
		Type_t * L_7;
		L_7 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Type_t * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_8, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		Type_t * L_10 = V_0;
		___type0 = L_10;
	}

IL_0031:
	{
		Type_t * L_11 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_12;
		L_12 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(65 /* System.Boolean System.Type::get_IsEnum() */, L_12);
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		Type_t * L_14 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_15;
		L_15 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_14, /*hidden argument*/NULL);
		RuntimeObject* L_16;
		L_16 = VirtFuncInvoker0< RuntimeObject* >::Invoke(110 /* System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> System.Reflection.TypeInfo::get_DeclaredFields() */, L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t0DF027D1C7415CBB03F663A5D5ACE52D29226059_il2cpp_TypeInfo_var, L_16);
		V_1 = L_17;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_0053:
		{
			RuntimeObject* L_18 = V_1;
			FieldInfo_t * L_19;
			L_19 = InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t620905184FE92C7CD2128B5FE4079C455117C4B8_il2cpp_TypeInfo_var, L_18);
			V_2 = L_19;
			FieldInfo_t * L_20 = V_2;
			bool L_21;
			L_21 = FieldInfo_get_IsStatic_mE36F3A5B2DFF613C704AA56989D90D72760391EB(L_20, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_0073;
			}
		}

IL_0062:
		{
			FieldInfo_t * L_22 = V_2;
			Type_t * L_23;
			L_23 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_22);
			bool L_24;
			L_24 = SpanHelpers_IsReferenceOrContainsReferencesCore_m4046A8EAD00DA02AA423C292A8FCBB08268AD781(L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_0073;
			}
		}

IL_006f:
		{
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x89, FINALLY_007d);
		}

IL_0073:
		{
			RuntimeObject* L_25 = V_1;
			bool L_26;
			L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0053;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x87, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_1;
			if (!L_27)
			{
				goto IL_0086;
			}
		}

IL_0080:
		{
			RuntimeObject* L_28 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_28);
		}

IL_0086:
		{
			IL2CPP_END_FINALLY(125)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_JUMP_TBL(0x87, IL_0087)
	}

IL_0087:
	{
		return (bool)0;
	}

IL_0089:
	{
		bool L_29 = V_3;
		return L_29;
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
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_mFC0D7756FD2EA1A7E41D8426D819369FDBD728FC (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateArrayTypeMismatchException_m23F27BF82F951A64682A2CF14E0EDE9F3B54C93F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArrayTypeMismatchException_mFC0D7756FD2EA1A7E41D8426D819369FDBD728FC_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArrayTypeMismatchException_m23F27BF82F951A64682A2CF14E0EDE9F3B54C93F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784 * L_0 = (ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784 *)il2cpp_codegen_object_new(ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var);
		ArrayTypeMismatchException__ctor_m76932588D9A980CDB675D12B0479F8EAC2D5E96D(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m4A71872D4B069AF36758A61E4CA3FB663B4E8EC4 (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		Exception_t * L_1;
		L_1 = ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m4019588ED8511C985604C8CC9AD4AB6414676945(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m4A71872D4B069AF36758A61E4CA3FB663B4E8EC4_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m4019588ED8511C985604C8CC9AD4AB6414676945 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_InvalidTypeWithPointersNotSupported_m2FD2DCBFF1853C8F9616D4C55DD1C14163A06B75(/*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		String_t* L_2;
		L_2 = SR_Format_m4480ECD777F2A905A368094827DDCB43478A8053(L_0, L_1, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_mD9C82D6A62948DA443166283990BF760F77C76C8 (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateArgumentException_DestinationTooShort_m75CF4B3D7F56B0383E0BC84D86C085AA0CE90CD1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentException_DestinationTooShort_mD9C82D6A62948DA443166283990BF760F77C76C8_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_DestinationTooShort_m75CF4B3D7F56B0383E0BC84D86C085AA0CE90CD1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_DestinationTooShort_mDD536A55FFA1BD1CF5C34D9E074420C183905559(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5 (int32_t ___argument0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___argument0;
		Exception_t * L_1;
		L_1 = ThrowHelper_CreateArgumentOutOfRangeException_m3ED3DA6D593699354BA4D397790440F3BFE84AEA(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_m3ED3DA6D593699354BA4D397790440F3BFE84AEA (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F_il2cpp_TypeInfo_var, (&___argument0));
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___argument0 = *(int32_t*)UnBox(L_0);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SR_get_ResourceType_mA677195FD1721150495B84739EFFDCB9366A5541_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		Type_t * L_0 = ((SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var))->get_U3CResourceTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_m7223AEB1A03B64E71E152D35990EBB98CDF68B3E_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB421A47ED18F02BE7F55B5C2E8ED3D78D390362E_gshared_inline (void* ___source0, const RuntimeMethod* method)
{
	int32_t* V_0 = NULL;
	{
		void* L_0 = ___source0;
		V_0 = (int32_t*)L_0;
		int32_t* L_1 = V_0;
		return (Il2CppChar*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m3CAB19E292901642C2A5C1EE1ABE3D292F75BC0A_gshared_inline (Il2CppChar* ___origin0, Il2CppChar* ___target1, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___target1;
		Il2CppChar* L_1 = ___origin0;
		return (intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_0, (intptr_t)L_1));
	}
}
