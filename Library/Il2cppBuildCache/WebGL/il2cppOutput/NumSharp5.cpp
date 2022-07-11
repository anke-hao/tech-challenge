#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<NumSharp.Utilities.NDCoordinatesIncrementor>
struct Action_1_t87DAD15E519AA96E656941B58137C0D6394DE29F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<System.Boolean>
struct Disposer_t1378F6DA316BDBB918774531DFD00CAA57F8DC4D;
// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<System.Byte>
struct Disposer_tB4CC063B14648855C767E2CC209FC7A33DBA2C70;
// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<System.Char>
struct Disposer_t814AEA35F95BD889923F9940B42489FF9230C505;
// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<System.Double>
struct Disposer_tFB1223A7390EACEFC738323A237F97E30C72344A;
// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<System.Int32>
struct Disposer_t37481D22F4BA2AD9F6285C812BAE15329EA2BBB9;
// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<System.Int64>
struct Disposer_t010D6AEB2FE882E825597FB5E2613C1C700A82B8;
// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<System.Single>
struct Disposer_tCA2CC1E284D64F80F5130FE74C00BC517225DE00;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,NumSharp.Slice>
struct Func_2_t487F5607A8A3034ADEF5D061435C33E9AF1B096C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Func`2<NumSharp.Slice,System.Boolean>
struct Func_2_t82951254BC5366DC7343E8EF62B1955768995472;
// System.Func`2<System.String,System.String[]>
struct Func_2_t5BC6467B0F0DE7D4A9047D9B593F2B70DE6ACE19;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Func`2<System.String,System.Double>
struct Func_2_tC82D5EEAF7778E76FC5FF406F425670B237A80D8;
// System.Func`2<System.String,NumSharp.Slice>
struct Func_2_tE05337A1B3F9F8182B40F4986F48F11EA3C37473;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IEnumerable`1<System.Int32>>
struct IEnumerable_1_t76836D0DBFFF9EF2803AF9D0EB8C3E092AD4EE09;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<NumSharp.Slice>
struct IEnumerable_1_t60C518D2E8611589A3E1165363C68E0003FC4BAD;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<NumSharp.Slice>
struct IEnumerator_1_t2C5A9CEB1F4C83FCFE5E4F82B81D692B50DF3874;
// System.Collections.Generic.List`1<NumSharp.SliceDef>
struct List_1_tD2C9719D045E8822B51CF40821A6EE5947727773;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// NumSharp.Slice[]
struct SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1;
// NumSharp.SliceDef[]
struct SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37;
// NumSharp.BroadcastInfo
struct BroadcastInfo_t10BE37F5BCFC00F1FF022F7DAD5F86E4C2A66019;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181;
// NumSharp.Backends.Unmanaged.IArraySlice
struct IArraySlice_tB2F493444E8C7D04C52C14E65A476DF729075445;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerable
struct IEnumerable_t47A618747A1BB2A868710316F7372094849163A2;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// NumSharp.Utilities.NDCoordinatesIncrementor
struct NDCoordinatesIncrementor_t5279EE4E2B66AE56B57E1D3CC6B3F2C5CAC97880;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// NumSharp.NumSharpException
struct NumSharpException_t40D073757BE64EA74244BB8A21CAC4A2625BB5E7;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E;
// NumSharp.Slice
struct Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C;
// System.String
struct String_t;
// NumSharp.TensorEngine
struct TensorEngine_t92D5F6CB55AF8DFBAF7C6106B3E01E2E9EADABC9;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// NumSharp.Backends.UnmanagedStorage
struct UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F;
// NumSharp.ViewInfo
struct ViewInfo_tEEA658FC0685403FAE44E4B6C61841FEA7B4757E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_0
struct U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_1
struct U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_155
struct U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_16
struct U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_166
struct U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_169
struct U3CU3Ec__DisplayClass162_169_t7BFA2C2084A957F2D070FB4A4B32A10F99E54387;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_17
struct U3CU3Ec__DisplayClass162_17_tCC100F4B4E7525B6C429615A828E4FDF1E1480B2;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_170
struct U3CU3Ec__DisplayClass162_170_tE0E02142F36F1DA1C2D140AABFDB0BDD1FECDE58;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_171
struct U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_172
struct U3CU3Ec__DisplayClass162_172_t39D800C0AD647DBA10770A497E9936F80B4094FD;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_173
struct U3CU3Ec__DisplayClass162_173_tD5418E13C0D7B4DC2D4E94027EA70E8687F73E05;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_174
struct U3CU3Ec__DisplayClass162_174_tDCC34579C8003C7A93409DC675FA5CCD19155B80;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_175
struct U3CU3Ec__DisplayClass162_175_tC542B85A215ED69AA71911388090AB6EE21DCE78;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_176
struct U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_177
struct U3CU3Ec__DisplayClass162_177_tF3C20299B9922C2EA7FE6F3E18234854F15E284F;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_178
struct U3CU3Ec__DisplayClass162_178_t2D89425A46F518287F3FAFC693E9C8A4CC7D9ADD;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_179
struct U3CU3Ec__DisplayClass162_179_t3FBDA50F84FA39FFC31E60A24A34870EB0758857;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_18
struct U3CU3Ec__DisplayClass162_18_tE94C46E623E6EDA867F2766856EA5BC1F731B918;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_180
struct U3CU3Ec__DisplayClass162_180_t3F687E016352AC0AE05191B7EA82733528C9B37F;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_181
struct U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_182
struct U3CU3Ec__DisplayClass162_182_tEEBE83EB513FAB11373EB4F55B7C0A8A00AF13D0;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_183
struct U3CU3Ec__DisplayClass162_183_tF7B640E7F2780C5C30E593D9EC4C3952AC6D89CA;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_184
struct U3CU3Ec__DisplayClass162_184_t6BD840333A7DCAB5260CB082E265BF2DD4780EF0;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_185
struct U3CU3Ec__DisplayClass162_185_t9FD43A10738606C139D79D34E8D09D336E7B442D;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_19
struct U3CU3Ec__DisplayClass162_19_t95E05829E5CCD83D9866A21B6C94DE9A10F2475A;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_2
struct U3CU3Ec__DisplayClass162_2_t926F799B6950C3CD40A05F3C219B1A20475B4418;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_20
struct U3CU3Ec__DisplayClass162_20_tC5C255E04F14EA6EF43A225E4FDC51354576B9B6;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_21
struct U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_22
struct U3CU3Ec__DisplayClass162_22_t9D25728098D38C5AC02FE0245DEAFB9ADF345F37;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_23
struct U3CU3Ec__DisplayClass162_23_tF1FA44C0CD3F0AE6F4B951F953C8293A9D928428;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_24
struct U3CU3Ec__DisplayClass162_24_t60430D5C5859EE6C24B2874E940C13202AD027C5;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_25
struct U3CU3Ec__DisplayClass162_25_t2491043510E33B949B1C80C471EF6FCFCA86BE70;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_26
struct U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_27
struct U3CU3Ec__DisplayClass162_27_t8A4F5E8E8AAAB63B867729CA26A37E99D18157C8;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_28
struct U3CU3Ec__DisplayClass162_28_t4F29A0EAECA16FC92BBD6B00D501CA939EB44F62;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_29
struct U3CU3Ec__DisplayClass162_29_t2F64C77BC8F204DDB064C7F8C6A61899BF7D9C8B;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_3
struct U3CU3Ec__DisplayClass162_3_tF4EF8EE02B342D0163987BD9BD9364B1EF29F35A;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_30
struct U3CU3Ec__DisplayClass162_30_t2F7B111DAE64B3A21A2D9D9399B1C86D3B28F9A5;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_31
struct U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_32
struct U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_33
struct U3CU3Ec__DisplayClass162_33_t92D048FD1A7E0AABC476BCC2D2EE8B5778D2F975;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_34
struct U3CU3Ec__DisplayClass162_34_tFC411BB16EA80DF5005D3B338E141367EEEAD5AE;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_35
struct U3CU3Ec__DisplayClass162_35_t4D9EA021B37C55EA459166C0F362E1630EB2B826;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_36
struct U3CU3Ec__DisplayClass162_36_t916B75F615F0754F9BF6520008DDFED13AE735BE;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_37
struct U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_38
struct U3CU3Ec__DisplayClass162_38_t9AEAD30594AEAF30D9036955A5690DF4C1BB5418;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_39
struct U3CU3Ec__DisplayClass162_39_tB4C95A85CC27472D4A8C80161AD7F76374E794E1;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_4
struct U3CU3Ec__DisplayClass162_4_tA5BBDE74E1643A5F15D4A36B263D7F3CAD4D816F;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_40
struct U3CU3Ec__DisplayClass162_40_t3F82A73FD1F6671A92A426816986A3E0C17E28CD;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_41
struct U3CU3Ec__DisplayClass162_41_t2887437E920B8B5B459C0F522AEE85EF1D743A6E;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_42
struct U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_43
struct U3CU3Ec__DisplayClass162_43_t011DD92A0CC5E42CFCCE92414919F3DEEC1D9837;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_44
struct U3CU3Ec__DisplayClass162_44_tD0E07FE05FA8FABFC654A199E4B0B24C5F8096BE;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_45
struct U3CU3Ec__DisplayClass162_45_t70DCB7E406707BAE8E9BFDBB570DCA5EDD820D45;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_46
struct U3CU3Ec__DisplayClass162_46_tD9F730D5CFC47ABB3D2F497561CDF19A7E45107F;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_47
struct U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_48
struct U3CU3Ec__DisplayClass162_48_t3E55E4FB0590AE824CA5D845D21F91B70565F253;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_49
struct U3CU3Ec__DisplayClass162_49_t6CE63BF9AEE83F3DD2EE0747CB8D1BF8A2F5C763;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_5
struct U3CU3Ec__DisplayClass162_5_t2BE174055CD73F3D6A7A1EC36AA85C75FD613A56;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_50
struct U3CU3Ec__DisplayClass162_50_tB3EBF8C8C6AAA94EF9EF49F34DBFE12CF4DC21EE;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_51
struct U3CU3Ec__DisplayClass162_51_t90A85758A65103265B110228BB3FFD22570BD06E;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_52
struct U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_53
struct U3CU3Ec__DisplayClass162_53_t3FE7ABB67D9F8EA8DC1C3A80CE1B1B22907A0DD0;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_54
struct U3CU3Ec__DisplayClass162_54_tE5A6C10CC5FFCB3F8276B953EDA98CFE1E490957;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_55
struct U3CU3Ec__DisplayClass162_55_tEEC54B53CE458CB9328C4B28C8AAF8BA3A3EE7AC;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_56
struct U3CU3Ec__DisplayClass162_56_t85E0658A5C8B3A4999484B284F742D205CA26F9B;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_57
struct U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_58
struct U3CU3Ec__DisplayClass162_58_tFE425BD75B11A3635663F71E3BA2A10466C1EEB9;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_59
struct U3CU3Ec__DisplayClass162_59_tC747EE22DDC83B6B63875D9A3DD7FA1EC35214CF;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_6
struct U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_60
struct U3CU3Ec__DisplayClass162_60_tAB3067C5EC6120B78BC3AC1360C8F6CDF1936B1B;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_61
struct U3CU3Ec__DisplayClass162_61_t132150CC2771F2E8D0CC78C3E386F1EBCD5DCFA7;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_62
struct U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_63
struct U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_64
struct U3CU3Ec__DisplayClass162_64_t041A0C51853D73C9ACA48D97AB950F8254406713;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_65
struct U3CU3Ec__DisplayClass162_65_t6DCA1256FA236AB5A32E1F9AE44B6E3DE27D1D31;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_66
struct U3CU3Ec__DisplayClass162_66_t85A4559C251CA32175070F7D9F8AD722070911AB;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_67
struct U3CU3Ec__DisplayClass162_67_tA855A65D81F22C9D9EAD51FDBAC37A83F62BF951;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_68
struct U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_69
struct U3CU3Ec__DisplayClass162_69_tDBF1F40BF6A3810C3BB82A4D7D6B9AF8428DD0AA;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_7
struct U3CU3Ec__DisplayClass162_7_t7286660C684B3D8C5AF080F044F31F68FE170C41;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_70
struct U3CU3Ec__DisplayClass162_70_tCCE24581F6A2BD074623A9CAC32493398D19E421;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_71
struct U3CU3Ec__DisplayClass162_71_tD0B9C8577D911D35BBF430E62A429F654BFC730D;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_72
struct U3CU3Ec__DisplayClass162_72_t9660F2ACBB88747C7E4E024914C13DEAECC61B35;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_73
struct U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_74
struct U3CU3Ec__DisplayClass162_74_t6DCD4C217D80798A737493B6CF50945F3374CD56;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_75
struct U3CU3Ec__DisplayClass162_75_t8819505132BB6E1B34820F50EB6C2965C72B304A;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_76
struct U3CU3Ec__DisplayClass162_76_t123A4167E82D87E92E27DCA946198CAB17092AD5;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_77
struct U3CU3Ec__DisplayClass162_77_tDED6AAA1C93A88B37A41F38C025B56372D4CD06D;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_78
struct U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_79
struct U3CU3Ec__DisplayClass162_79_tF636CF640644D6E1BFD22269E332011A526E55DD;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_8
struct U3CU3Ec__DisplayClass162_8_tA370969B9E4869D61D39A5E74886751CA5137E54;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_80
struct U3CU3Ec__DisplayClass162_80_t1B907B3DA42D4892FF9447144872F987FE345F3C;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_81
struct U3CU3Ec__DisplayClass162_81_t9D75FAA93DB882F279C4901BB200EDD0FF3F5DC8;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_82
struct U3CU3Ec__DisplayClass162_82_t30A70AB9043D97DCB5594EFCB81D59C732A61A9B;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_83
struct U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_84
struct U3CU3Ec__DisplayClass162_84_tD2F1C9174F2F56FFFA6C63CF1575DAF24C210398;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_85
struct U3CU3Ec__DisplayClass162_85_tDB948ACEAC46D7DF716AB3352146EBA2E8B860DE;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_86
struct U3CU3Ec__DisplayClass162_86_tB44CAA30BE73B781DD09BBC1C021806A66720194;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_87
struct U3CU3Ec__DisplayClass162_87_t9DC053EF9053AD2AE488B586CC3C24BE274EC254;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_88
struct U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_89
struct U3CU3Ec__DisplayClass162_89_tAEF24B6899AA4E48B659B5676651AB938909366D;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_9
struct U3CU3Ec__DisplayClass162_9_tE330AFA05A88A81A665E561059A55F1089A2AC3E;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_90
struct U3CU3Ec__DisplayClass162_90_t1A676C4128A9C58BC4B5C049A6B9B9C62D9925FE;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_91
struct U3CU3Ec__DisplayClass162_91_t94FB285AAAE9B39D80A86AA0B0652845925051D7;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_92
struct U3CU3Ec__DisplayClass162_92_t58EA3799F2F91F5FC746D45D2649F1BA982D7CD9;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_93
struct U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_94
struct U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_95
struct U3CU3Ec__DisplayClass162_95_t44C2CE80EC698B539FCB97AD6D879FEDDB58CC62;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_96
struct U3CU3Ec__DisplayClass162_96_t583336A7845D675E2A6E73EB68D9A78AF0D71D49;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_97
struct U3CU3Ec__DisplayClass162_97_tA3400A3C484EC276832E06A10D81802CE9F05B29;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_98
struct U3CU3Ec__DisplayClass162_98_t16AE778E84D8AE37FD048CAFF439EE3CD0303781;
// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_99
struct U3CU3Ec__DisplayClass162_99_tD95A2AFFF814B071FE8965A07F8A107BAF918F93;
// NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d
struct U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1;
// NumSharp.NDArray/<>c
struct U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD;
// NumSharp.NDArray/<>c__DisplayClass312_0
struct U3CU3Ec__DisplayClass312_0_t8B53532CBB674C9C4A205E500AF75D8FD1211FD3;
// NumSharp.NDArray/<>c__DisplayClass312_1
struct U3CU3Ec__DisplayClass312_1_t1F1502C4CCC52DEA873E43FF12F3633DF65E8457;
// NumSharp.NDArray/<>c__DisplayClass327_0
struct U3CU3Ec__DisplayClass327_0_t66C4F6B764D9188734774F0C5D90EEECF5C8244C;
// NumSharp.NDArray/<ExpandEllipsis>d__309
struct U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251;
// NumSharp.NDArray/SortedData
struct SortedData_tCCCC53DC4B357101BA6148DBDB17F70FB3C41176;
// NumSharp.Utilities.NDOffsetIncrementorAutoresetting/<>c
struct U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6;
// NumSharp.Shape/<>c__DisplayClass65_0
struct U3CU3Ec__DisplayClass65_0_t474EC1690A768C6726AF2A3B143930744FE4CADB;
// NumSharp.Slice/<>c
struct U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA;
// NumSharp.Unmanaged.Memory.StackedMemoryPool/<>c
struct U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537;
// NumSharp.Unmanaged.Memory.StackedMemoryPool/GCContext
struct GCContext_tD63C26352ECDB85962BA928959E7E570A61CD511;
// NumSharp.Backends.UnmanagedStorage/<>c
struct U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562;
// NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136
struct U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t82951254BC5366DC7343E8EF62B1955768995472_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfoOf_1_t24E67DC833655AC53CB5D0D4DAFA4D26C8AFF6C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumSharpException_t40D073757BE64EA74244BB8A21CAC4A2625BB5E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05DBC0DA4EFA8310174A8CEBA036F4A3D02AB3E8;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteralC295975F206CE732CB22C1D3DC0CD0ECF528F837;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisIEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_mB571792445344F6366A87C7AF9CEA3A6809D53EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDDB1BFE9A8B33542584DCA999E2026B94EE02E9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisSlice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_m0FC85A0E58ECD23DBB2A9A7F322E6ECE3E63F3AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisSlice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_mB7CD6D94EA22D8821F5A8C00E461341E426B8DFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m58030D4C46B2E2CF24D65E8F67ED03A72A5AA17F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6CB605437C492728071D7463BB748C325A74FB55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinqExtensions_Yield_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6D5ED2B2DA2C0C6B6F3345A699348E2E80EC0FD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m95F94C82B362473B7EC0FFD67CD9BE863964AE40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NPTypeCodeExtensions_SizeOf_m7DF2C278C9BCA83E5D16C6E6C8DE4BBE5E79AEA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExpandEllipsisU3Ed__136_System_Collections_IEnumerator_Reset_mC90FFACFE82A2A3BF823634DB43D20D32B3DBB36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExpandEllipsisU3Ed__309_System_Collections_IEnumerator_Reset_m716D05CF4D52584241D9A61F848A9EDB72EE2E69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_System_Collections_IEnumerator_Reset_m27CF665F3A2DD52B3D5E4E6403D9B207EBA6A751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExpandEllipsisU3Eb__309_0_m886B476B5B5E9A9A99B45D3B35C55E323A8E32C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFetchIndicesU3Eb__314_0_mE334B1D7817B6515E56E69B2AE09817A1C66467A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetIndicesU3Eb__320_0_m1DFF60385984BBF549AE3D0B8A34CE6DEBD9B209_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1;
struct SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<NumSharp.SliceDef>
struct List_1_tD2C9719D045E8822B51CF40821A6EE5947727773  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD2C9719D045E8822B51CF40821A6EE5947727773, ____items_1)); }
	inline SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9* get__items_1() const { return ____items_1; }
	inline SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD2C9719D045E8822B51CF40821A6EE5947727773, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD2C9719D045E8822B51CF40821A6EE5947727773, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD2C9719D045E8822B51CF40821A6EE5947727773, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD2C9719D045E8822B51CF40821A6EE5947727773_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD2C9719D045E8822B51CF40821A6EE5947727773_StaticFields, ____emptyArray_5)); }
	inline SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// NumSharp.Utilities.NDCoordinatesIncrementor
struct NDCoordinatesIncrementor_t5279EE4E2B66AE56B57E1D3CC6B3F2C5CAC97880  : public RuntimeObject
{
public:
	// System.Action`1<NumSharp.Utilities.NDCoordinatesIncrementor> NumSharp.Utilities.NDCoordinatesIncrementor::endCallback
	Action_1_t87DAD15E519AA96E656941B58137C0D6394DE29F * ___endCallback_0;
	// System.Int32[] NumSharp.Utilities.NDCoordinatesIncrementor::dimensions
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___dimensions_1;
	// System.Int32 NumSharp.Utilities.NDCoordinatesIncrementor::resetto
	int32_t ___resetto_2;
	// System.Int32[] NumSharp.Utilities.NDCoordinatesIncrementor::Index
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Index_3;
	// System.Int32 NumSharp.Utilities.NDCoordinatesIncrementor::subcursor
	int32_t ___subcursor_4;

public:
	inline static int32_t get_offset_of_endCallback_0() { return static_cast<int32_t>(offsetof(NDCoordinatesIncrementor_t5279EE4E2B66AE56B57E1D3CC6B3F2C5CAC97880, ___endCallback_0)); }
	inline Action_1_t87DAD15E519AA96E656941B58137C0D6394DE29F * get_endCallback_0() const { return ___endCallback_0; }
	inline Action_1_t87DAD15E519AA96E656941B58137C0D6394DE29F ** get_address_of_endCallback_0() { return &___endCallback_0; }
	inline void set_endCallback_0(Action_1_t87DAD15E519AA96E656941B58137C0D6394DE29F * value)
	{
		___endCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_dimensions_1() { return static_cast<int32_t>(offsetof(NDCoordinatesIncrementor_t5279EE4E2B66AE56B57E1D3CC6B3F2C5CAC97880, ___dimensions_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_dimensions_1() const { return ___dimensions_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_dimensions_1() { return &___dimensions_1; }
	inline void set_dimensions_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___dimensions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dimensions_1), (void*)value);
	}

	inline static int32_t get_offset_of_resetto_2() { return static_cast<int32_t>(offsetof(NDCoordinatesIncrementor_t5279EE4E2B66AE56B57E1D3CC6B3F2C5CAC97880, ___resetto_2)); }
	inline int32_t get_resetto_2() const { return ___resetto_2; }
	inline int32_t* get_address_of_resetto_2() { return &___resetto_2; }
	inline void set_resetto_2(int32_t value)
	{
		___resetto_2 = value;
	}

	inline static int32_t get_offset_of_Index_3() { return static_cast<int32_t>(offsetof(NDCoordinatesIncrementor_t5279EE4E2B66AE56B57E1D3CC6B3F2C5CAC97880, ___Index_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Index_3() const { return ___Index_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Index_3() { return &___Index_3; }
	inline void set_Index_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Index_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Index_3), (void*)value);
	}

	inline static int32_t get_offset_of_subcursor_4() { return static_cast<int32_t>(offsetof(NDCoordinatesIncrementor_t5279EE4E2B66AE56B57E1D3CC6B3F2C5CAC97880, ___subcursor_4)); }
	inline int32_t get_subcursor_4() const { return ___subcursor_4; }
	inline int32_t* get_address_of_subcursor_4() { return &___subcursor_4; }
	inline void set_subcursor_4(int32_t value)
	{
		___subcursor_4 = value;
	}
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

// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_0
struct U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B  : public RuntimeObject
{
public:
	// System.Single* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_0::lhs_address
	float* ___lhs_address_0;
	// System.Boolean* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_0::rhs_address
	bool* ___rhs_address_1;

public:
	inline static int32_t get_offset_of_lhs_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B, ___lhs_address_0)); }
	inline float* get_lhs_address_0() const { return ___lhs_address_0; }
	inline float** get_address_of_lhs_address_0() { return &___lhs_address_0; }
	inline void set_lhs_address_0(float* value)
	{
		___lhs_address_0 = value;
	}

	inline static int32_t get_offset_of_rhs_address_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B, ___rhs_address_1)); }
	inline bool* get_rhs_address_1() const { return ___rhs_address_1; }
	inline bool** get_address_of_rhs_address_1() { return &___rhs_address_1; }
	inline void set_rhs_address_1(bool* value)
	{
		___rhs_address_1 = value;
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_1
struct U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E  : public RuntimeObject
{
public:
	// System.Boolean* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_1::ret_address
	bool* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_0 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E, ___ret_address_0)); }
	inline bool* get_ret_address_0() const { return ___ret_address_0; }
	inline bool** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(bool* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_155
struct U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A  : public RuntimeObject
{
public:
	// System.Single* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_155::lhs_address
	float* ___lhs_address_0;
	// System.Double* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_155::rhs_address
	double* ___rhs_address_1;

public:
	inline static int32_t get_offset_of_lhs_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A, ___lhs_address_0)); }
	inline float* get_lhs_address_0() const { return ___lhs_address_0; }
	inline float** get_address_of_lhs_address_0() { return &___lhs_address_0; }
	inline void set_lhs_address_0(float* value)
	{
		___lhs_address_0 = value;
	}

	inline static int32_t get_offset_of_rhs_address_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A, ___rhs_address_1)); }
	inline double* get_rhs_address_1() const { return ___rhs_address_1; }
	inline double** get_address_of_rhs_address_1() { return &___rhs_address_1; }
	inline void set_rhs_address_1(double* value)
	{
		___rhs_address_1 = value;
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_16
struct U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963  : public RuntimeObject
{
public:
	// System.Int64* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_16::ret_address
	int64_t* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_0 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_16::CS$<>8__locals16
	U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * ___CSU24U3CU3E8__locals16_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963, ___ret_address_0)); }
	inline int64_t* get_ret_address_0() const { return ___ret_address_0; }
	inline int64_t** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(int64_t* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals16_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963, ___CSU24U3CU3E8__locals16_1)); }
	inline U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * get_CSU24U3CU3E8__locals16_1() const { return ___CSU24U3CU3E8__locals16_1; }
	inline U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B ** get_address_of_CSU24U3CU3E8__locals16_1() { return &___CSU24U3CU3E8__locals16_1; }
	inline void set_CSU24U3CU3E8__locals16_1(U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * value)
	{
		___CSU24U3CU3E8__locals16_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals16_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_166
struct U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27  : public RuntimeObject
{
public:
	// System.Int32* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_166::ret_address
	int32_t* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_155 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_166::CS$<>8__locals161
	U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * ___CSU24U3CU3E8__locals161_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27, ___ret_address_0)); }
	inline int32_t* get_ret_address_0() const { return ___ret_address_0; }
	inline int32_t** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(int32_t* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals161_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27, ___CSU24U3CU3E8__locals161_1)); }
	inline U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * get_CSU24U3CU3E8__locals161_1() const { return ___CSU24U3CU3E8__locals161_1; }
	inline U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A ** get_address_of_CSU24U3CU3E8__locals161_1() { return &___CSU24U3CU3E8__locals161_1; }
	inline void set_CSU24U3CU3E8__locals161_1(U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * value)
	{
		___CSU24U3CU3E8__locals161_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals161_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_169
struct U3CU3Ec__DisplayClass162_169_t7BFA2C2084A957F2D070FB4A4B32A10F99E54387  : public RuntimeObject
{
public:
	// System.Double NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_169::rval
	double ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_166 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_169::CS$<>8__locals164
	U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27 * ___CSU24U3CU3E8__locals164_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_169_t7BFA2C2084A957F2D070FB4A4B32A10F99E54387, ___rval_0)); }
	inline double get_rval_0() const { return ___rval_0; }
	inline double* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(double value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals164_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_169_t7BFA2C2084A957F2D070FB4A4B32A10F99E54387, ___CSU24U3CU3E8__locals164_1)); }
	inline U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27 * get_CSU24U3CU3E8__locals164_1() const { return ___CSU24U3CU3E8__locals164_1; }
	inline U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27 ** get_address_of_CSU24U3CU3E8__locals164_1() { return &___CSU24U3CU3E8__locals164_1; }
	inline void set_CSU24U3CU3E8__locals164_1(U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27 * value)
	{
		___CSU24U3CU3E8__locals164_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals164_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_17
struct U3CU3Ec__DisplayClass162_17_tCC100F4B4E7525B6C429615A828E4FDF1E1480B2  : public RuntimeObject
{
public:
	// System.Boolean NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_17::rval
	bool ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_16 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_17::CS$<>8__locals17
	U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * ___CSU24U3CU3E8__locals17_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_17_tCC100F4B4E7525B6C429615A828E4FDF1E1480B2, ___rval_0)); }
	inline bool get_rval_0() const { return ___rval_0; }
	inline bool* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(bool value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals17_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_17_tCC100F4B4E7525B6C429615A828E4FDF1E1480B2, ___CSU24U3CU3E8__locals17_1)); }
	inline U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * get_CSU24U3CU3E8__locals17_1() const { return ___CSU24U3CU3E8__locals17_1; }
	inline U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 ** get_address_of_CSU24U3CU3E8__locals17_1() { return &___CSU24U3CU3E8__locals17_1; }
	inline void set_CSU24U3CU3E8__locals17_1(U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * value)
	{
		___CSU24U3CU3E8__locals17_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals17_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_170
struct U3CU3Ec__DisplayClass162_170_tE0E02142F36F1DA1C2D140AABFDB0BDD1FECDE58  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_170::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_166 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_170::CS$<>8__locals165
	U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27 * ___CSU24U3CU3E8__locals165_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_170_tE0E02142F36F1DA1C2D140AABFDB0BDD1FECDE58, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals165_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_170_tE0E02142F36F1DA1C2D140AABFDB0BDD1FECDE58, ___CSU24U3CU3E8__locals165_1)); }
	inline U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27 * get_CSU24U3CU3E8__locals165_1() const { return ___CSU24U3CU3E8__locals165_1; }
	inline U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27 ** get_address_of_CSU24U3CU3E8__locals165_1() { return &___CSU24U3CU3E8__locals165_1; }
	inline void set_CSU24U3CU3E8__locals165_1(U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27 * value)
	{
		___CSU24U3CU3E8__locals165_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals165_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_171
struct U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98  : public RuntimeObject
{
public:
	// System.Int64* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_171::ret_address
	int64_t* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_155 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_171::CS$<>8__locals166
	U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * ___CSU24U3CU3E8__locals166_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98, ___ret_address_0)); }
	inline int64_t* get_ret_address_0() const { return ___ret_address_0; }
	inline int64_t** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(int64_t* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals166_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98, ___CSU24U3CU3E8__locals166_1)); }
	inline U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * get_CSU24U3CU3E8__locals166_1() const { return ___CSU24U3CU3E8__locals166_1; }
	inline U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A ** get_address_of_CSU24U3CU3E8__locals166_1() { return &___CSU24U3CU3E8__locals166_1; }
	inline void set_CSU24U3CU3E8__locals166_1(U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * value)
	{
		___CSU24U3CU3E8__locals166_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals166_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_172
struct U3CU3Ec__DisplayClass162_172_t39D800C0AD647DBA10770A497E9936F80B4094FD  : public RuntimeObject
{
public:
	// System.Double NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_172::rval
	double ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_171 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_172::CS$<>8__locals167
	U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * ___CSU24U3CU3E8__locals167_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_172_t39D800C0AD647DBA10770A497E9936F80B4094FD, ___rval_0)); }
	inline double get_rval_0() const { return ___rval_0; }
	inline double* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(double value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals167_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_172_t39D800C0AD647DBA10770A497E9936F80B4094FD, ___CSU24U3CU3E8__locals167_1)); }
	inline U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * get_CSU24U3CU3E8__locals167_1() const { return ___CSU24U3CU3E8__locals167_1; }
	inline U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 ** get_address_of_CSU24U3CU3E8__locals167_1() { return &___CSU24U3CU3E8__locals167_1; }
	inline void set_CSU24U3CU3E8__locals167_1(U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * value)
	{
		___CSU24U3CU3E8__locals167_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals167_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_173
struct U3CU3Ec__DisplayClass162_173_tD5418E13C0D7B4DC2D4E94027EA70E8687F73E05  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_173::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_171 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_173::CS$<>8__locals168
	U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * ___CSU24U3CU3E8__locals168_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_173_tD5418E13C0D7B4DC2D4E94027EA70E8687F73E05, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals168_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_173_tD5418E13C0D7B4DC2D4E94027EA70E8687F73E05, ___CSU24U3CU3E8__locals168_1)); }
	inline U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * get_CSU24U3CU3E8__locals168_1() const { return ___CSU24U3CU3E8__locals168_1; }
	inline U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 ** get_address_of_CSU24U3CU3E8__locals168_1() { return &___CSU24U3CU3E8__locals168_1; }
	inline void set_CSU24U3CU3E8__locals168_1(U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * value)
	{
		___CSU24U3CU3E8__locals168_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals168_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_174
struct U3CU3Ec__DisplayClass162_174_tDCC34579C8003C7A93409DC675FA5CCD19155B80  : public RuntimeObject
{
public:
	// System.Double NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_174::rval
	double ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_171 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_174::CS$<>8__locals169
	U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * ___CSU24U3CU3E8__locals169_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_174_tDCC34579C8003C7A93409DC675FA5CCD19155B80, ___rval_0)); }
	inline double get_rval_0() const { return ___rval_0; }
	inline double* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(double value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals169_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_174_tDCC34579C8003C7A93409DC675FA5CCD19155B80, ___CSU24U3CU3E8__locals169_1)); }
	inline U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * get_CSU24U3CU3E8__locals169_1() const { return ___CSU24U3CU3E8__locals169_1; }
	inline U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 ** get_address_of_CSU24U3CU3E8__locals169_1() { return &___CSU24U3CU3E8__locals169_1; }
	inline void set_CSU24U3CU3E8__locals169_1(U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * value)
	{
		___CSU24U3CU3E8__locals169_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals169_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_175
struct U3CU3Ec__DisplayClass162_175_tC542B85A215ED69AA71911388090AB6EE21DCE78  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_175::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_171 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_175::CS$<>8__locals170
	U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * ___CSU24U3CU3E8__locals170_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_175_tC542B85A215ED69AA71911388090AB6EE21DCE78, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals170_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_175_tC542B85A215ED69AA71911388090AB6EE21DCE78, ___CSU24U3CU3E8__locals170_1)); }
	inline U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * get_CSU24U3CU3E8__locals170_1() const { return ___CSU24U3CU3E8__locals170_1; }
	inline U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 ** get_address_of_CSU24U3CU3E8__locals170_1() { return &___CSU24U3CU3E8__locals170_1; }
	inline void set_CSU24U3CU3E8__locals170_1(U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * value)
	{
		___CSU24U3CU3E8__locals170_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals170_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_176
struct U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7  : public RuntimeObject
{
public:
	// System.Single* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_176::ret_address
	float* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_155 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_176::CS$<>8__locals171
	U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * ___CSU24U3CU3E8__locals171_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7, ___ret_address_0)); }
	inline float* get_ret_address_0() const { return ___ret_address_0; }
	inline float** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(float* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals171_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7, ___CSU24U3CU3E8__locals171_1)); }
	inline U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * get_CSU24U3CU3E8__locals171_1() const { return ___CSU24U3CU3E8__locals171_1; }
	inline U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A ** get_address_of_CSU24U3CU3E8__locals171_1() { return &___CSU24U3CU3E8__locals171_1; }
	inline void set_CSU24U3CU3E8__locals171_1(U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * value)
	{
		___CSU24U3CU3E8__locals171_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals171_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_177
struct U3CU3Ec__DisplayClass162_177_tF3C20299B9922C2EA7FE6F3E18234854F15E284F  : public RuntimeObject
{
public:
	// System.Double NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_177::rval
	double ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_176 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_177::CS$<>8__locals172
	U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * ___CSU24U3CU3E8__locals172_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_177_tF3C20299B9922C2EA7FE6F3E18234854F15E284F, ___rval_0)); }
	inline double get_rval_0() const { return ___rval_0; }
	inline double* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(double value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals172_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_177_tF3C20299B9922C2EA7FE6F3E18234854F15E284F, ___CSU24U3CU3E8__locals172_1)); }
	inline U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * get_CSU24U3CU3E8__locals172_1() const { return ___CSU24U3CU3E8__locals172_1; }
	inline U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 ** get_address_of_CSU24U3CU3E8__locals172_1() { return &___CSU24U3CU3E8__locals172_1; }
	inline void set_CSU24U3CU3E8__locals172_1(U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * value)
	{
		___CSU24U3CU3E8__locals172_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals172_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_178
struct U3CU3Ec__DisplayClass162_178_t2D89425A46F518287F3FAFC693E9C8A4CC7D9ADD  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_178::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_176 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_178::CS$<>8__locals173
	U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * ___CSU24U3CU3E8__locals173_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_178_t2D89425A46F518287F3FAFC693E9C8A4CC7D9ADD, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals173_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_178_t2D89425A46F518287F3FAFC693E9C8A4CC7D9ADD, ___CSU24U3CU3E8__locals173_1)); }
	inline U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * get_CSU24U3CU3E8__locals173_1() const { return ___CSU24U3CU3E8__locals173_1; }
	inline U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 ** get_address_of_CSU24U3CU3E8__locals173_1() { return &___CSU24U3CU3E8__locals173_1; }
	inline void set_CSU24U3CU3E8__locals173_1(U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * value)
	{
		___CSU24U3CU3E8__locals173_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals173_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_179
struct U3CU3Ec__DisplayClass162_179_t3FBDA50F84FA39FFC31E60A24A34870EB0758857  : public RuntimeObject
{
public:
	// System.Double NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_179::rval
	double ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_176 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_179::CS$<>8__locals174
	U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * ___CSU24U3CU3E8__locals174_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_179_t3FBDA50F84FA39FFC31E60A24A34870EB0758857, ___rval_0)); }
	inline double get_rval_0() const { return ___rval_0; }
	inline double* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(double value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals174_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_179_t3FBDA50F84FA39FFC31E60A24A34870EB0758857, ___CSU24U3CU3E8__locals174_1)); }
	inline U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * get_CSU24U3CU3E8__locals174_1() const { return ___CSU24U3CU3E8__locals174_1; }
	inline U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 ** get_address_of_CSU24U3CU3E8__locals174_1() { return &___CSU24U3CU3E8__locals174_1; }
	inline void set_CSU24U3CU3E8__locals174_1(U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * value)
	{
		___CSU24U3CU3E8__locals174_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals174_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_18
struct U3CU3Ec__DisplayClass162_18_tE94C46E623E6EDA867F2766856EA5BC1F731B918  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_18::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_16 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_18::CS$<>8__locals18
	U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * ___CSU24U3CU3E8__locals18_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_18_tE94C46E623E6EDA867F2766856EA5BC1F731B918, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals18_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_18_tE94C46E623E6EDA867F2766856EA5BC1F731B918, ___CSU24U3CU3E8__locals18_1)); }
	inline U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * get_CSU24U3CU3E8__locals18_1() const { return ___CSU24U3CU3E8__locals18_1; }
	inline U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 ** get_address_of_CSU24U3CU3E8__locals18_1() { return &___CSU24U3CU3E8__locals18_1; }
	inline void set_CSU24U3CU3E8__locals18_1(U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * value)
	{
		___CSU24U3CU3E8__locals18_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals18_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_180
struct U3CU3Ec__DisplayClass162_180_t3F687E016352AC0AE05191B7EA82733528C9B37F  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_180::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_176 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_180::CS$<>8__locals175
	U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * ___CSU24U3CU3E8__locals175_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_180_t3F687E016352AC0AE05191B7EA82733528C9B37F, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals175_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_180_t3F687E016352AC0AE05191B7EA82733528C9B37F, ___CSU24U3CU3E8__locals175_1)); }
	inline U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * get_CSU24U3CU3E8__locals175_1() const { return ___CSU24U3CU3E8__locals175_1; }
	inline U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 ** get_address_of_CSU24U3CU3E8__locals175_1() { return &___CSU24U3CU3E8__locals175_1; }
	inline void set_CSU24U3CU3E8__locals175_1(U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * value)
	{
		___CSU24U3CU3E8__locals175_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals175_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_181
struct U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF  : public RuntimeObject
{
public:
	// System.Double* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_181::ret_address
	double* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_155 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_181::CS$<>8__locals176
	U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * ___CSU24U3CU3E8__locals176_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF, ___ret_address_0)); }
	inline double* get_ret_address_0() const { return ___ret_address_0; }
	inline double** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(double* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals176_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF, ___CSU24U3CU3E8__locals176_1)); }
	inline U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * get_CSU24U3CU3E8__locals176_1() const { return ___CSU24U3CU3E8__locals176_1; }
	inline U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A ** get_address_of_CSU24U3CU3E8__locals176_1() { return &___CSU24U3CU3E8__locals176_1; }
	inline void set_CSU24U3CU3E8__locals176_1(U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * value)
	{
		___CSU24U3CU3E8__locals176_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals176_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_182
struct U3CU3Ec__DisplayClass162_182_tEEBE83EB513FAB11373EB4F55B7C0A8A00AF13D0  : public RuntimeObject
{
public:
	// System.Double NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_182::rval
	double ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_181 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_182::CS$<>8__locals177
	U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * ___CSU24U3CU3E8__locals177_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_182_tEEBE83EB513FAB11373EB4F55B7C0A8A00AF13D0, ___rval_0)); }
	inline double get_rval_0() const { return ___rval_0; }
	inline double* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(double value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals177_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_182_tEEBE83EB513FAB11373EB4F55B7C0A8A00AF13D0, ___CSU24U3CU3E8__locals177_1)); }
	inline U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * get_CSU24U3CU3E8__locals177_1() const { return ___CSU24U3CU3E8__locals177_1; }
	inline U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF ** get_address_of_CSU24U3CU3E8__locals177_1() { return &___CSU24U3CU3E8__locals177_1; }
	inline void set_CSU24U3CU3E8__locals177_1(U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * value)
	{
		___CSU24U3CU3E8__locals177_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals177_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_183
struct U3CU3Ec__DisplayClass162_183_tF7B640E7F2780C5C30E593D9EC4C3952AC6D89CA  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_183::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_181 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_183::CS$<>8__locals178
	U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * ___CSU24U3CU3E8__locals178_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_183_tF7B640E7F2780C5C30E593D9EC4C3952AC6D89CA, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals178_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_183_tF7B640E7F2780C5C30E593D9EC4C3952AC6D89CA, ___CSU24U3CU3E8__locals178_1)); }
	inline U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * get_CSU24U3CU3E8__locals178_1() const { return ___CSU24U3CU3E8__locals178_1; }
	inline U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF ** get_address_of_CSU24U3CU3E8__locals178_1() { return &___CSU24U3CU3E8__locals178_1; }
	inline void set_CSU24U3CU3E8__locals178_1(U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * value)
	{
		___CSU24U3CU3E8__locals178_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals178_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_184
struct U3CU3Ec__DisplayClass162_184_t6BD840333A7DCAB5260CB082E265BF2DD4780EF0  : public RuntimeObject
{
public:
	// System.Double NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_184::rval
	double ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_181 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_184::CS$<>8__locals179
	U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * ___CSU24U3CU3E8__locals179_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_184_t6BD840333A7DCAB5260CB082E265BF2DD4780EF0, ___rval_0)); }
	inline double get_rval_0() const { return ___rval_0; }
	inline double* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(double value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals179_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_184_t6BD840333A7DCAB5260CB082E265BF2DD4780EF0, ___CSU24U3CU3E8__locals179_1)); }
	inline U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * get_CSU24U3CU3E8__locals179_1() const { return ___CSU24U3CU3E8__locals179_1; }
	inline U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF ** get_address_of_CSU24U3CU3E8__locals179_1() { return &___CSU24U3CU3E8__locals179_1; }
	inline void set_CSU24U3CU3E8__locals179_1(U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * value)
	{
		___CSU24U3CU3E8__locals179_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals179_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_185
struct U3CU3Ec__DisplayClass162_185_t9FD43A10738606C139D79D34E8D09D336E7B442D  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_185::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_181 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_185::CS$<>8__locals180
	U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * ___CSU24U3CU3E8__locals180_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_185_t9FD43A10738606C139D79D34E8D09D336E7B442D, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals180_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_185_t9FD43A10738606C139D79D34E8D09D336E7B442D, ___CSU24U3CU3E8__locals180_1)); }
	inline U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * get_CSU24U3CU3E8__locals180_1() const { return ___CSU24U3CU3E8__locals180_1; }
	inline U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF ** get_address_of_CSU24U3CU3E8__locals180_1() { return &___CSU24U3CU3E8__locals180_1; }
	inline void set_CSU24U3CU3E8__locals180_1(U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * value)
	{
		___CSU24U3CU3E8__locals180_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals180_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_19
struct U3CU3Ec__DisplayClass162_19_t95E05829E5CCD83D9866A21B6C94DE9A10F2475A  : public RuntimeObject
{
public:
	// System.Boolean NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_19::rval
	bool ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_16 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_19::CS$<>8__locals19
	U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * ___CSU24U3CU3E8__locals19_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_19_t95E05829E5CCD83D9866A21B6C94DE9A10F2475A, ___rval_0)); }
	inline bool get_rval_0() const { return ___rval_0; }
	inline bool* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(bool value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals19_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_19_t95E05829E5CCD83D9866A21B6C94DE9A10F2475A, ___CSU24U3CU3E8__locals19_1)); }
	inline U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * get_CSU24U3CU3E8__locals19_1() const { return ___CSU24U3CU3E8__locals19_1; }
	inline U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 ** get_address_of_CSU24U3CU3E8__locals19_1() { return &___CSU24U3CU3E8__locals19_1; }
	inline void set_CSU24U3CU3E8__locals19_1(U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * value)
	{
		___CSU24U3CU3E8__locals19_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals19_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_2
struct U3CU3Ec__DisplayClass162_2_t926F799B6950C3CD40A05F3C219B1A20475B4418  : public RuntimeObject
{
public:
	// System.Boolean NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_2::rval
	bool ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_1 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * ___CSU24U3CU3E8__locals2_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_2_t926F799B6950C3CD40A05F3C219B1A20475B4418, ___rval_0)); }
	inline bool get_rval_0() const { return ___rval_0; }
	inline bool* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(bool value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_2_t926F799B6950C3CD40A05F3C219B1A20475B4418, ___CSU24U3CU3E8__locals2_1)); }
	inline U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * get_CSU24U3CU3E8__locals2_1() const { return ___CSU24U3CU3E8__locals2_1; }
	inline U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E ** get_address_of_CSU24U3CU3E8__locals2_1() { return &___CSU24U3CU3E8__locals2_1; }
	inline void set_CSU24U3CU3E8__locals2_1(U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * value)
	{
		___CSU24U3CU3E8__locals2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals2_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_20
struct U3CU3Ec__DisplayClass162_20_tC5C255E04F14EA6EF43A225E4FDC51354576B9B6  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_20::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_16 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_20::CS$<>8__locals20
	U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * ___CSU24U3CU3E8__locals20_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_20_tC5C255E04F14EA6EF43A225E4FDC51354576B9B6, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals20_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_20_tC5C255E04F14EA6EF43A225E4FDC51354576B9B6, ___CSU24U3CU3E8__locals20_1)); }
	inline U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * get_CSU24U3CU3E8__locals20_1() const { return ___CSU24U3CU3E8__locals20_1; }
	inline U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 ** get_address_of_CSU24U3CU3E8__locals20_1() { return &___CSU24U3CU3E8__locals20_1; }
	inline void set_CSU24U3CU3E8__locals20_1(U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * value)
	{
		___CSU24U3CU3E8__locals20_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals20_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_21
struct U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2  : public RuntimeObject
{
public:
	// System.Single* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_21::ret_address
	float* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_0 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_21::CS$<>8__locals21
	U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * ___CSU24U3CU3E8__locals21_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2, ___ret_address_0)); }
	inline float* get_ret_address_0() const { return ___ret_address_0; }
	inline float** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(float* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals21_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2, ___CSU24U3CU3E8__locals21_1)); }
	inline U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * get_CSU24U3CU3E8__locals21_1() const { return ___CSU24U3CU3E8__locals21_1; }
	inline U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B ** get_address_of_CSU24U3CU3E8__locals21_1() { return &___CSU24U3CU3E8__locals21_1; }
	inline void set_CSU24U3CU3E8__locals21_1(U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * value)
	{
		___CSU24U3CU3E8__locals21_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals21_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_22
struct U3CU3Ec__DisplayClass162_22_t9D25728098D38C5AC02FE0245DEAFB9ADF345F37  : public RuntimeObject
{
public:
	// System.Boolean NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_22::rval
	bool ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_21 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_22::CS$<>8__locals22
	U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * ___CSU24U3CU3E8__locals22_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_22_t9D25728098D38C5AC02FE0245DEAFB9ADF345F37, ___rval_0)); }
	inline bool get_rval_0() const { return ___rval_0; }
	inline bool* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(bool value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals22_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_22_t9D25728098D38C5AC02FE0245DEAFB9ADF345F37, ___CSU24U3CU3E8__locals22_1)); }
	inline U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * get_CSU24U3CU3E8__locals22_1() const { return ___CSU24U3CU3E8__locals22_1; }
	inline U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 ** get_address_of_CSU24U3CU3E8__locals22_1() { return &___CSU24U3CU3E8__locals22_1; }
	inline void set_CSU24U3CU3E8__locals22_1(U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * value)
	{
		___CSU24U3CU3E8__locals22_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals22_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_23
struct U3CU3Ec__DisplayClass162_23_tF1FA44C0CD3F0AE6F4B951F953C8293A9D928428  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_23::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_21 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_23::CS$<>8__locals23
	U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * ___CSU24U3CU3E8__locals23_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_23_tF1FA44C0CD3F0AE6F4B951F953C8293A9D928428, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals23_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_23_tF1FA44C0CD3F0AE6F4B951F953C8293A9D928428, ___CSU24U3CU3E8__locals23_1)); }
	inline U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * get_CSU24U3CU3E8__locals23_1() const { return ___CSU24U3CU3E8__locals23_1; }
	inline U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 ** get_address_of_CSU24U3CU3E8__locals23_1() { return &___CSU24U3CU3E8__locals23_1; }
	inline void set_CSU24U3CU3E8__locals23_1(U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * value)
	{
		___CSU24U3CU3E8__locals23_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals23_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_24
struct U3CU3Ec__DisplayClass162_24_t60430D5C5859EE6C24B2874E940C13202AD027C5  : public RuntimeObject
{
public:
	// System.Boolean NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_24::rval
	bool ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_21 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_24::CS$<>8__locals24
	U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * ___CSU24U3CU3E8__locals24_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_24_t60430D5C5859EE6C24B2874E940C13202AD027C5, ___rval_0)); }
	inline bool get_rval_0() const { return ___rval_0; }
	inline bool* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(bool value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals24_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_24_t60430D5C5859EE6C24B2874E940C13202AD027C5, ___CSU24U3CU3E8__locals24_1)); }
	inline U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * get_CSU24U3CU3E8__locals24_1() const { return ___CSU24U3CU3E8__locals24_1; }
	inline U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 ** get_address_of_CSU24U3CU3E8__locals24_1() { return &___CSU24U3CU3E8__locals24_1; }
	inline void set_CSU24U3CU3E8__locals24_1(U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * value)
	{
		___CSU24U3CU3E8__locals24_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals24_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_25
struct U3CU3Ec__DisplayClass162_25_t2491043510E33B949B1C80C471EF6FCFCA86BE70  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_25::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_21 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_25::CS$<>8__locals25
	U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * ___CSU24U3CU3E8__locals25_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_25_t2491043510E33B949B1C80C471EF6FCFCA86BE70, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals25_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_25_t2491043510E33B949B1C80C471EF6FCFCA86BE70, ___CSU24U3CU3E8__locals25_1)); }
	inline U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * get_CSU24U3CU3E8__locals25_1() const { return ___CSU24U3CU3E8__locals25_1; }
	inline U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 ** get_address_of_CSU24U3CU3E8__locals25_1() { return &___CSU24U3CU3E8__locals25_1; }
	inline void set_CSU24U3CU3E8__locals25_1(U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * value)
	{
		___CSU24U3CU3E8__locals25_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals25_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_26
struct U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214  : public RuntimeObject
{
public:
	// System.Double* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_26::ret_address
	double* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_0 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_26::CS$<>8__locals26
	U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * ___CSU24U3CU3E8__locals26_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214, ___ret_address_0)); }
	inline double* get_ret_address_0() const { return ___ret_address_0; }
	inline double** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(double* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals26_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214, ___CSU24U3CU3E8__locals26_1)); }
	inline U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * get_CSU24U3CU3E8__locals26_1() const { return ___CSU24U3CU3E8__locals26_1; }
	inline U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B ** get_address_of_CSU24U3CU3E8__locals26_1() { return &___CSU24U3CU3E8__locals26_1; }
	inline void set_CSU24U3CU3E8__locals26_1(U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * value)
	{
		___CSU24U3CU3E8__locals26_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals26_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_27
struct U3CU3Ec__DisplayClass162_27_t8A4F5E8E8AAAB63B867729CA26A37E99D18157C8  : public RuntimeObject
{
public:
	// System.Boolean NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_27::rval
	bool ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_26 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_27::CS$<>8__locals27
	U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * ___CSU24U3CU3E8__locals27_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_27_t8A4F5E8E8AAAB63B867729CA26A37E99D18157C8, ___rval_0)); }
	inline bool get_rval_0() const { return ___rval_0; }
	inline bool* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(bool value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals27_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_27_t8A4F5E8E8AAAB63B867729CA26A37E99D18157C8, ___CSU24U3CU3E8__locals27_1)); }
	inline U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * get_CSU24U3CU3E8__locals27_1() const { return ___CSU24U3CU3E8__locals27_1; }
	inline U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 ** get_address_of_CSU24U3CU3E8__locals27_1() { return &___CSU24U3CU3E8__locals27_1; }
	inline void set_CSU24U3CU3E8__locals27_1(U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * value)
	{
		___CSU24U3CU3E8__locals27_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals27_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_28
struct U3CU3Ec__DisplayClass162_28_t4F29A0EAECA16FC92BBD6B00D501CA939EB44F62  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_28::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_26 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_28::CS$<>8__locals28
	U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * ___CSU24U3CU3E8__locals28_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_28_t4F29A0EAECA16FC92BBD6B00D501CA939EB44F62, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals28_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_28_t4F29A0EAECA16FC92BBD6B00D501CA939EB44F62, ___CSU24U3CU3E8__locals28_1)); }
	inline U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * get_CSU24U3CU3E8__locals28_1() const { return ___CSU24U3CU3E8__locals28_1; }
	inline U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 ** get_address_of_CSU24U3CU3E8__locals28_1() { return &___CSU24U3CU3E8__locals28_1; }
	inline void set_CSU24U3CU3E8__locals28_1(U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * value)
	{
		___CSU24U3CU3E8__locals28_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals28_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_29
struct U3CU3Ec__DisplayClass162_29_t2F64C77BC8F204DDB064C7F8C6A61899BF7D9C8B  : public RuntimeObject
{
public:
	// System.Boolean NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_29::rval
	bool ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_26 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_29::CS$<>8__locals29
	U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * ___CSU24U3CU3E8__locals29_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_29_t2F64C77BC8F204DDB064C7F8C6A61899BF7D9C8B, ___rval_0)); }
	inline bool get_rval_0() const { return ___rval_0; }
	inline bool* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(bool value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals29_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_29_t2F64C77BC8F204DDB064C7F8C6A61899BF7D9C8B, ___CSU24U3CU3E8__locals29_1)); }
	inline U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * get_CSU24U3CU3E8__locals29_1() const { return ___CSU24U3CU3E8__locals29_1; }
	inline U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 ** get_address_of_CSU24U3CU3E8__locals29_1() { return &___CSU24U3CU3E8__locals29_1; }
	inline void set_CSU24U3CU3E8__locals29_1(U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * value)
	{
		___CSU24U3CU3E8__locals29_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals29_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_3
struct U3CU3Ec__DisplayClass162_3_tF4EF8EE02B342D0163987BD9BD9364B1EF29F35A  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_3::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_1 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_3::CS$<>8__locals3
	U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * ___CSU24U3CU3E8__locals3_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_3_tF4EF8EE02B342D0163987BD9BD9364B1EF29F35A, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals3_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_3_tF4EF8EE02B342D0163987BD9BD9364B1EF29F35A, ___CSU24U3CU3E8__locals3_1)); }
	inline U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * get_CSU24U3CU3E8__locals3_1() const { return ___CSU24U3CU3E8__locals3_1; }
	inline U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E ** get_address_of_CSU24U3CU3E8__locals3_1() { return &___CSU24U3CU3E8__locals3_1; }
	inline void set_CSU24U3CU3E8__locals3_1(U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * value)
	{
		___CSU24U3CU3E8__locals3_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals3_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_30
struct U3CU3Ec__DisplayClass162_30_t2F7B111DAE64B3A21A2D9D9399B1C86D3B28F9A5  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_30::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_26 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_30::CS$<>8__locals30
	U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * ___CSU24U3CU3E8__locals30_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_30_t2F7B111DAE64B3A21A2D9D9399B1C86D3B28F9A5, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals30_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_30_t2F7B111DAE64B3A21A2D9D9399B1C86D3B28F9A5, ___CSU24U3CU3E8__locals30_1)); }
	inline U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * get_CSU24U3CU3E8__locals30_1() const { return ___CSU24U3CU3E8__locals30_1; }
	inline U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 ** get_address_of_CSU24U3CU3E8__locals30_1() { return &___CSU24U3CU3E8__locals30_1; }
	inline void set_CSU24U3CU3E8__locals30_1(U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * value)
	{
		___CSU24U3CU3E8__locals30_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals30_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_31
struct U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657  : public RuntimeObject
{
public:
	// System.Single* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_31::lhs_address
	float* ___lhs_address_0;
	// System.Byte* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_31::rhs_address
	uint8_t* ___rhs_address_1;

public:
	inline static int32_t get_offset_of_lhs_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657, ___lhs_address_0)); }
	inline float* get_lhs_address_0() const { return ___lhs_address_0; }
	inline float** get_address_of_lhs_address_0() { return &___lhs_address_0; }
	inline void set_lhs_address_0(float* value)
	{
		___lhs_address_0 = value;
	}

	inline static int32_t get_offset_of_rhs_address_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657, ___rhs_address_1)); }
	inline uint8_t* get_rhs_address_1() const { return ___rhs_address_1; }
	inline uint8_t** get_address_of_rhs_address_1() { return &___rhs_address_1; }
	inline void set_rhs_address_1(uint8_t* value)
	{
		___rhs_address_1 = value;
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_32
struct U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A  : public RuntimeObject
{
public:
	// System.Boolean* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_32::ret_address
	bool* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_31 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_32::CS$<>8__locals31
	U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * ___CSU24U3CU3E8__locals31_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A, ___ret_address_0)); }
	inline bool* get_ret_address_0() const { return ___ret_address_0; }
	inline bool** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(bool* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals31_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A, ___CSU24U3CU3E8__locals31_1)); }
	inline U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * get_CSU24U3CU3E8__locals31_1() const { return ___CSU24U3CU3E8__locals31_1; }
	inline U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 ** get_address_of_CSU24U3CU3E8__locals31_1() { return &___CSU24U3CU3E8__locals31_1; }
	inline void set_CSU24U3CU3E8__locals31_1(U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * value)
	{
		___CSU24U3CU3E8__locals31_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals31_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_33
struct U3CU3Ec__DisplayClass162_33_t92D048FD1A7E0AABC476BCC2D2EE8B5778D2F975  : public RuntimeObject
{
public:
	// System.Byte NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_33::rval
	uint8_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_33::CS$<>8__locals32
	U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * ___CSU24U3CU3E8__locals32_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_33_t92D048FD1A7E0AABC476BCC2D2EE8B5778D2F975, ___rval_0)); }
	inline uint8_t get_rval_0() const { return ___rval_0; }
	inline uint8_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(uint8_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals32_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_33_t92D048FD1A7E0AABC476BCC2D2EE8B5778D2F975, ___CSU24U3CU3E8__locals32_1)); }
	inline U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * get_CSU24U3CU3E8__locals32_1() const { return ___CSU24U3CU3E8__locals32_1; }
	inline U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A ** get_address_of_CSU24U3CU3E8__locals32_1() { return &___CSU24U3CU3E8__locals32_1; }
	inline void set_CSU24U3CU3E8__locals32_1(U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * value)
	{
		___CSU24U3CU3E8__locals32_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals32_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_34
struct U3CU3Ec__DisplayClass162_34_tFC411BB16EA80DF5005D3B338E141367EEEAD5AE  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_34::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_34::CS$<>8__locals33
	U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * ___CSU24U3CU3E8__locals33_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_34_tFC411BB16EA80DF5005D3B338E141367EEEAD5AE, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals33_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_34_tFC411BB16EA80DF5005D3B338E141367EEEAD5AE, ___CSU24U3CU3E8__locals33_1)); }
	inline U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * get_CSU24U3CU3E8__locals33_1() const { return ___CSU24U3CU3E8__locals33_1; }
	inline U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A ** get_address_of_CSU24U3CU3E8__locals33_1() { return &___CSU24U3CU3E8__locals33_1; }
	inline void set_CSU24U3CU3E8__locals33_1(U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * value)
	{
		___CSU24U3CU3E8__locals33_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals33_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_35
struct U3CU3Ec__DisplayClass162_35_t4D9EA021B37C55EA459166C0F362E1630EB2B826  : public RuntimeObject
{
public:
	// System.Byte NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_35::rval
	uint8_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_35::CS$<>8__locals34
	U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * ___CSU24U3CU3E8__locals34_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_35_t4D9EA021B37C55EA459166C0F362E1630EB2B826, ___rval_0)); }
	inline uint8_t get_rval_0() const { return ___rval_0; }
	inline uint8_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(uint8_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals34_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_35_t4D9EA021B37C55EA459166C0F362E1630EB2B826, ___CSU24U3CU3E8__locals34_1)); }
	inline U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * get_CSU24U3CU3E8__locals34_1() const { return ___CSU24U3CU3E8__locals34_1; }
	inline U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A ** get_address_of_CSU24U3CU3E8__locals34_1() { return &___CSU24U3CU3E8__locals34_1; }
	inline void set_CSU24U3CU3E8__locals34_1(U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * value)
	{
		___CSU24U3CU3E8__locals34_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals34_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_36
struct U3CU3Ec__DisplayClass162_36_t916B75F615F0754F9BF6520008DDFED13AE735BE  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_36::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_36::CS$<>8__locals35
	U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * ___CSU24U3CU3E8__locals35_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_36_t916B75F615F0754F9BF6520008DDFED13AE735BE, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals35_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_36_t916B75F615F0754F9BF6520008DDFED13AE735BE, ___CSU24U3CU3E8__locals35_1)); }
	inline U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * get_CSU24U3CU3E8__locals35_1() const { return ___CSU24U3CU3E8__locals35_1; }
	inline U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A ** get_address_of_CSU24U3CU3E8__locals35_1() { return &___CSU24U3CU3E8__locals35_1; }
	inline void set_CSU24U3CU3E8__locals35_1(U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * value)
	{
		___CSU24U3CU3E8__locals35_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals35_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_37
struct U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF  : public RuntimeObject
{
public:
	// System.Byte* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_37::ret_address
	uint8_t* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_31 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_37::CS$<>8__locals36
	U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * ___CSU24U3CU3E8__locals36_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF, ___ret_address_0)); }
	inline uint8_t* get_ret_address_0() const { return ___ret_address_0; }
	inline uint8_t** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(uint8_t* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals36_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF, ___CSU24U3CU3E8__locals36_1)); }
	inline U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * get_CSU24U3CU3E8__locals36_1() const { return ___CSU24U3CU3E8__locals36_1; }
	inline U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 ** get_address_of_CSU24U3CU3E8__locals36_1() { return &___CSU24U3CU3E8__locals36_1; }
	inline void set_CSU24U3CU3E8__locals36_1(U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * value)
	{
		___CSU24U3CU3E8__locals36_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals36_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_38
struct U3CU3Ec__DisplayClass162_38_t9AEAD30594AEAF30D9036955A5690DF4C1BB5418  : public RuntimeObject
{
public:
	// System.Byte NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_38::rval
	uint8_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_37 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_38::CS$<>8__locals37
	U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * ___CSU24U3CU3E8__locals37_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_38_t9AEAD30594AEAF30D9036955A5690DF4C1BB5418, ___rval_0)); }
	inline uint8_t get_rval_0() const { return ___rval_0; }
	inline uint8_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(uint8_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals37_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_38_t9AEAD30594AEAF30D9036955A5690DF4C1BB5418, ___CSU24U3CU3E8__locals37_1)); }
	inline U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * get_CSU24U3CU3E8__locals37_1() const { return ___CSU24U3CU3E8__locals37_1; }
	inline U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF ** get_address_of_CSU24U3CU3E8__locals37_1() { return &___CSU24U3CU3E8__locals37_1; }
	inline void set_CSU24U3CU3E8__locals37_1(U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * value)
	{
		___CSU24U3CU3E8__locals37_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals37_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_39
struct U3CU3Ec__DisplayClass162_39_tB4C95A85CC27472D4A8C80161AD7F76374E794E1  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_39::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_37 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_39::CS$<>8__locals38
	U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * ___CSU24U3CU3E8__locals38_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_39_tB4C95A85CC27472D4A8C80161AD7F76374E794E1, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals38_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_39_tB4C95A85CC27472D4A8C80161AD7F76374E794E1, ___CSU24U3CU3E8__locals38_1)); }
	inline U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * get_CSU24U3CU3E8__locals38_1() const { return ___CSU24U3CU3E8__locals38_1; }
	inline U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF ** get_address_of_CSU24U3CU3E8__locals38_1() { return &___CSU24U3CU3E8__locals38_1; }
	inline void set_CSU24U3CU3E8__locals38_1(U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * value)
	{
		___CSU24U3CU3E8__locals38_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals38_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_4
struct U3CU3Ec__DisplayClass162_4_tA5BBDE74E1643A5F15D4A36B263D7F3CAD4D816F  : public RuntimeObject
{
public:
	// System.Boolean NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_4::rval
	bool ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_1 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_4::CS$<>8__locals4
	U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * ___CSU24U3CU3E8__locals4_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_4_tA5BBDE74E1643A5F15D4A36B263D7F3CAD4D816F, ___rval_0)); }
	inline bool get_rval_0() const { return ___rval_0; }
	inline bool* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(bool value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals4_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_4_tA5BBDE74E1643A5F15D4A36B263D7F3CAD4D816F, ___CSU24U3CU3E8__locals4_1)); }
	inline U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * get_CSU24U3CU3E8__locals4_1() const { return ___CSU24U3CU3E8__locals4_1; }
	inline U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E ** get_address_of_CSU24U3CU3E8__locals4_1() { return &___CSU24U3CU3E8__locals4_1; }
	inline void set_CSU24U3CU3E8__locals4_1(U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * value)
	{
		___CSU24U3CU3E8__locals4_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals4_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_40
struct U3CU3Ec__DisplayClass162_40_t3F82A73FD1F6671A92A426816986A3E0C17E28CD  : public RuntimeObject
{
public:
	// System.Byte NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_40::rval
	uint8_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_37 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_40::CS$<>8__locals39
	U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * ___CSU24U3CU3E8__locals39_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_40_t3F82A73FD1F6671A92A426816986A3E0C17E28CD, ___rval_0)); }
	inline uint8_t get_rval_0() const { return ___rval_0; }
	inline uint8_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(uint8_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals39_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_40_t3F82A73FD1F6671A92A426816986A3E0C17E28CD, ___CSU24U3CU3E8__locals39_1)); }
	inline U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * get_CSU24U3CU3E8__locals39_1() const { return ___CSU24U3CU3E8__locals39_1; }
	inline U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF ** get_address_of_CSU24U3CU3E8__locals39_1() { return &___CSU24U3CU3E8__locals39_1; }
	inline void set_CSU24U3CU3E8__locals39_1(U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * value)
	{
		___CSU24U3CU3E8__locals39_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals39_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_41
struct U3CU3Ec__DisplayClass162_41_t2887437E920B8B5B459C0F522AEE85EF1D743A6E  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_41::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_37 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_41::CS$<>8__locals40
	U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * ___CSU24U3CU3E8__locals40_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_41_t2887437E920B8B5B459C0F522AEE85EF1D743A6E, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals40_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_41_t2887437E920B8B5B459C0F522AEE85EF1D743A6E, ___CSU24U3CU3E8__locals40_1)); }
	inline U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * get_CSU24U3CU3E8__locals40_1() const { return ___CSU24U3CU3E8__locals40_1; }
	inline U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF ** get_address_of_CSU24U3CU3E8__locals40_1() { return &___CSU24U3CU3E8__locals40_1; }
	inline void set_CSU24U3CU3E8__locals40_1(U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * value)
	{
		___CSU24U3CU3E8__locals40_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals40_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_42
struct U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27  : public RuntimeObject
{
public:
	// System.Int32* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_42::ret_address
	int32_t* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_31 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_42::CS$<>8__locals41
	U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * ___CSU24U3CU3E8__locals41_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27, ___ret_address_0)); }
	inline int32_t* get_ret_address_0() const { return ___ret_address_0; }
	inline int32_t** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(int32_t* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals41_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27, ___CSU24U3CU3E8__locals41_1)); }
	inline U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * get_CSU24U3CU3E8__locals41_1() const { return ___CSU24U3CU3E8__locals41_1; }
	inline U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 ** get_address_of_CSU24U3CU3E8__locals41_1() { return &___CSU24U3CU3E8__locals41_1; }
	inline void set_CSU24U3CU3E8__locals41_1(U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * value)
	{
		___CSU24U3CU3E8__locals41_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals41_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_43
struct U3CU3Ec__DisplayClass162_43_t011DD92A0CC5E42CFCCE92414919F3DEEC1D9837  : public RuntimeObject
{
public:
	// System.Byte NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_43::rval
	uint8_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_42 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_43::CS$<>8__locals42
	U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * ___CSU24U3CU3E8__locals42_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_43_t011DD92A0CC5E42CFCCE92414919F3DEEC1D9837, ___rval_0)); }
	inline uint8_t get_rval_0() const { return ___rval_0; }
	inline uint8_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(uint8_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals42_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_43_t011DD92A0CC5E42CFCCE92414919F3DEEC1D9837, ___CSU24U3CU3E8__locals42_1)); }
	inline U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * get_CSU24U3CU3E8__locals42_1() const { return ___CSU24U3CU3E8__locals42_1; }
	inline U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 ** get_address_of_CSU24U3CU3E8__locals42_1() { return &___CSU24U3CU3E8__locals42_1; }
	inline void set_CSU24U3CU3E8__locals42_1(U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * value)
	{
		___CSU24U3CU3E8__locals42_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals42_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_44
struct U3CU3Ec__DisplayClass162_44_tD0E07FE05FA8FABFC654A199E4B0B24C5F8096BE  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_44::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_42 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_44::CS$<>8__locals43
	U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * ___CSU24U3CU3E8__locals43_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_44_tD0E07FE05FA8FABFC654A199E4B0B24C5F8096BE, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals43_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_44_tD0E07FE05FA8FABFC654A199E4B0B24C5F8096BE, ___CSU24U3CU3E8__locals43_1)); }
	inline U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * get_CSU24U3CU3E8__locals43_1() const { return ___CSU24U3CU3E8__locals43_1; }
	inline U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 ** get_address_of_CSU24U3CU3E8__locals43_1() { return &___CSU24U3CU3E8__locals43_1; }
	inline void set_CSU24U3CU3E8__locals43_1(U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * value)
	{
		___CSU24U3CU3E8__locals43_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals43_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_45
struct U3CU3Ec__DisplayClass162_45_t70DCB7E406707BAE8E9BFDBB570DCA5EDD820D45  : public RuntimeObject
{
public:
	// System.Byte NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_45::rval
	uint8_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_42 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_45::CS$<>8__locals44
	U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * ___CSU24U3CU3E8__locals44_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_45_t70DCB7E406707BAE8E9BFDBB570DCA5EDD820D45, ___rval_0)); }
	inline uint8_t get_rval_0() const { return ___rval_0; }
	inline uint8_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(uint8_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals44_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_45_t70DCB7E406707BAE8E9BFDBB570DCA5EDD820D45, ___CSU24U3CU3E8__locals44_1)); }
	inline U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * get_CSU24U3CU3E8__locals44_1() const { return ___CSU24U3CU3E8__locals44_1; }
	inline U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 ** get_address_of_CSU24U3CU3E8__locals44_1() { return &___CSU24U3CU3E8__locals44_1; }
	inline void set_CSU24U3CU3E8__locals44_1(U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * value)
	{
		___CSU24U3CU3E8__locals44_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals44_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_46
struct U3CU3Ec__DisplayClass162_46_tD9F730D5CFC47ABB3D2F497561CDF19A7E45107F  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_46::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_42 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_46::CS$<>8__locals45
	U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * ___CSU24U3CU3E8__locals45_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_46_tD9F730D5CFC47ABB3D2F497561CDF19A7E45107F, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals45_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_46_tD9F730D5CFC47ABB3D2F497561CDF19A7E45107F, ___CSU24U3CU3E8__locals45_1)); }
	inline U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * get_CSU24U3CU3E8__locals45_1() const { return ___CSU24U3CU3E8__locals45_1; }
	inline U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 ** get_address_of_CSU24U3CU3E8__locals45_1() { return &___CSU24U3CU3E8__locals45_1; }
	inline void set_CSU24U3CU3E8__locals45_1(U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * value)
	{
		___CSU24U3CU3E8__locals45_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals45_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_47
struct U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B  : public RuntimeObject
{
public:
	// System.Int64* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_47::ret_address
	int64_t* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_31 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_47::CS$<>8__locals46
	U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * ___CSU24U3CU3E8__locals46_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B, ___ret_address_0)); }
	inline int64_t* get_ret_address_0() const { return ___ret_address_0; }
	inline int64_t** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(int64_t* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals46_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B, ___CSU24U3CU3E8__locals46_1)); }
	inline U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * get_CSU24U3CU3E8__locals46_1() const { return ___CSU24U3CU3E8__locals46_1; }
	inline U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 ** get_address_of_CSU24U3CU3E8__locals46_1() { return &___CSU24U3CU3E8__locals46_1; }
	inline void set_CSU24U3CU3E8__locals46_1(U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * value)
	{
		___CSU24U3CU3E8__locals46_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals46_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_48
struct U3CU3Ec__DisplayClass162_48_t3E55E4FB0590AE824CA5D845D21F91B70565F253  : public RuntimeObject
{
public:
	// System.Byte NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_48::rval
	uint8_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_47 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_48::CS$<>8__locals47
	U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * ___CSU24U3CU3E8__locals47_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_48_t3E55E4FB0590AE824CA5D845D21F91B70565F253, ___rval_0)); }
	inline uint8_t get_rval_0() const { return ___rval_0; }
	inline uint8_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(uint8_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals47_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_48_t3E55E4FB0590AE824CA5D845D21F91B70565F253, ___CSU24U3CU3E8__locals47_1)); }
	inline U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * get_CSU24U3CU3E8__locals47_1() const { return ___CSU24U3CU3E8__locals47_1; }
	inline U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B ** get_address_of_CSU24U3CU3E8__locals47_1() { return &___CSU24U3CU3E8__locals47_1; }
	inline void set_CSU24U3CU3E8__locals47_1(U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * value)
	{
		___CSU24U3CU3E8__locals47_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals47_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_49
struct U3CU3Ec__DisplayClass162_49_t6CE63BF9AEE83F3DD2EE0747CB8D1BF8A2F5C763  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_49::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_47 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_49::CS$<>8__locals48
	U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * ___CSU24U3CU3E8__locals48_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_49_t6CE63BF9AEE83F3DD2EE0747CB8D1BF8A2F5C763, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals48_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_49_t6CE63BF9AEE83F3DD2EE0747CB8D1BF8A2F5C763, ___CSU24U3CU3E8__locals48_1)); }
	inline U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * get_CSU24U3CU3E8__locals48_1() const { return ___CSU24U3CU3E8__locals48_1; }
	inline U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B ** get_address_of_CSU24U3CU3E8__locals48_1() { return &___CSU24U3CU3E8__locals48_1; }
	inline void set_CSU24U3CU3E8__locals48_1(U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * value)
	{
		___CSU24U3CU3E8__locals48_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals48_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_5
struct U3CU3Ec__DisplayClass162_5_t2BE174055CD73F3D6A7A1EC36AA85C75FD613A56  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_5::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_1 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_5::CS$<>8__locals5
	U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * ___CSU24U3CU3E8__locals5_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_5_t2BE174055CD73F3D6A7A1EC36AA85C75FD613A56, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals5_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_5_t2BE174055CD73F3D6A7A1EC36AA85C75FD613A56, ___CSU24U3CU3E8__locals5_1)); }
	inline U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * get_CSU24U3CU3E8__locals5_1() const { return ___CSU24U3CU3E8__locals5_1; }
	inline U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E ** get_address_of_CSU24U3CU3E8__locals5_1() { return &___CSU24U3CU3E8__locals5_1; }
	inline void set_CSU24U3CU3E8__locals5_1(U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * value)
	{
		___CSU24U3CU3E8__locals5_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals5_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_50
struct U3CU3Ec__DisplayClass162_50_tB3EBF8C8C6AAA94EF9EF49F34DBFE12CF4DC21EE  : public RuntimeObject
{
public:
	// System.Byte NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_50::rval
	uint8_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_47 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_50::CS$<>8__locals49
	U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * ___CSU24U3CU3E8__locals49_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_50_tB3EBF8C8C6AAA94EF9EF49F34DBFE12CF4DC21EE, ___rval_0)); }
	inline uint8_t get_rval_0() const { return ___rval_0; }
	inline uint8_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(uint8_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals49_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_50_tB3EBF8C8C6AAA94EF9EF49F34DBFE12CF4DC21EE, ___CSU24U3CU3E8__locals49_1)); }
	inline U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * get_CSU24U3CU3E8__locals49_1() const { return ___CSU24U3CU3E8__locals49_1; }
	inline U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B ** get_address_of_CSU24U3CU3E8__locals49_1() { return &___CSU24U3CU3E8__locals49_1; }
	inline void set_CSU24U3CU3E8__locals49_1(U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * value)
	{
		___CSU24U3CU3E8__locals49_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals49_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_51
struct U3CU3Ec__DisplayClass162_51_t90A85758A65103265B110228BB3FFD22570BD06E  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_51::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_47 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_51::CS$<>8__locals50
	U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * ___CSU24U3CU3E8__locals50_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_51_t90A85758A65103265B110228BB3FFD22570BD06E, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals50_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_51_t90A85758A65103265B110228BB3FFD22570BD06E, ___CSU24U3CU3E8__locals50_1)); }
	inline U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * get_CSU24U3CU3E8__locals50_1() const { return ___CSU24U3CU3E8__locals50_1; }
	inline U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B ** get_address_of_CSU24U3CU3E8__locals50_1() { return &___CSU24U3CU3E8__locals50_1; }
	inline void set_CSU24U3CU3E8__locals50_1(U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * value)
	{
		___CSU24U3CU3E8__locals50_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals50_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_52
struct U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57  : public RuntimeObject
{
public:
	// System.Single* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_52::ret_address
	float* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_31 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_52::CS$<>8__locals51
	U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * ___CSU24U3CU3E8__locals51_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57, ___ret_address_0)); }
	inline float* get_ret_address_0() const { return ___ret_address_0; }
	inline float** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(float* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals51_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57, ___CSU24U3CU3E8__locals51_1)); }
	inline U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * get_CSU24U3CU3E8__locals51_1() const { return ___CSU24U3CU3E8__locals51_1; }
	inline U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 ** get_address_of_CSU24U3CU3E8__locals51_1() { return &___CSU24U3CU3E8__locals51_1; }
	inline void set_CSU24U3CU3E8__locals51_1(U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * value)
	{
		___CSU24U3CU3E8__locals51_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals51_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_53
struct U3CU3Ec__DisplayClass162_53_t3FE7ABB67D9F8EA8DC1C3A80CE1B1B22907A0DD0  : public RuntimeObject
{
public:
	// System.Byte NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_53::rval
	uint8_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_52 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_53::CS$<>8__locals52
	U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * ___CSU24U3CU3E8__locals52_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_53_t3FE7ABB67D9F8EA8DC1C3A80CE1B1B22907A0DD0, ___rval_0)); }
	inline uint8_t get_rval_0() const { return ___rval_0; }
	inline uint8_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(uint8_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals52_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_53_t3FE7ABB67D9F8EA8DC1C3A80CE1B1B22907A0DD0, ___CSU24U3CU3E8__locals52_1)); }
	inline U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * get_CSU24U3CU3E8__locals52_1() const { return ___CSU24U3CU3E8__locals52_1; }
	inline U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 ** get_address_of_CSU24U3CU3E8__locals52_1() { return &___CSU24U3CU3E8__locals52_1; }
	inline void set_CSU24U3CU3E8__locals52_1(U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * value)
	{
		___CSU24U3CU3E8__locals52_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals52_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_54
struct U3CU3Ec__DisplayClass162_54_tE5A6C10CC5FFCB3F8276B953EDA98CFE1E490957  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_54::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_52 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_54::CS$<>8__locals53
	U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * ___CSU24U3CU3E8__locals53_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_54_tE5A6C10CC5FFCB3F8276B953EDA98CFE1E490957, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals53_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_54_tE5A6C10CC5FFCB3F8276B953EDA98CFE1E490957, ___CSU24U3CU3E8__locals53_1)); }
	inline U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * get_CSU24U3CU3E8__locals53_1() const { return ___CSU24U3CU3E8__locals53_1; }
	inline U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 ** get_address_of_CSU24U3CU3E8__locals53_1() { return &___CSU24U3CU3E8__locals53_1; }
	inline void set_CSU24U3CU3E8__locals53_1(U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * value)
	{
		___CSU24U3CU3E8__locals53_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals53_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_55
struct U3CU3Ec__DisplayClass162_55_tEEC54B53CE458CB9328C4B28C8AAF8BA3A3EE7AC  : public RuntimeObject
{
public:
	// System.Byte NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_55::rval
	uint8_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_52 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_55::CS$<>8__locals54
	U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * ___CSU24U3CU3E8__locals54_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_55_tEEC54B53CE458CB9328C4B28C8AAF8BA3A3EE7AC, ___rval_0)); }
	inline uint8_t get_rval_0() const { return ___rval_0; }
	inline uint8_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(uint8_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals54_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_55_tEEC54B53CE458CB9328C4B28C8AAF8BA3A3EE7AC, ___CSU24U3CU3E8__locals54_1)); }
	inline U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * get_CSU24U3CU3E8__locals54_1() const { return ___CSU24U3CU3E8__locals54_1; }
	inline U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 ** get_address_of_CSU24U3CU3E8__locals54_1() { return &___CSU24U3CU3E8__locals54_1; }
	inline void set_CSU24U3CU3E8__locals54_1(U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * value)
	{
		___CSU24U3CU3E8__locals54_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals54_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_56
struct U3CU3Ec__DisplayClass162_56_t85E0658A5C8B3A4999484B284F742D205CA26F9B  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_56::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_52 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_56::CS$<>8__locals55
	U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * ___CSU24U3CU3E8__locals55_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_56_t85E0658A5C8B3A4999484B284F742D205CA26F9B, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals55_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_56_t85E0658A5C8B3A4999484B284F742D205CA26F9B, ___CSU24U3CU3E8__locals55_1)); }
	inline U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * get_CSU24U3CU3E8__locals55_1() const { return ___CSU24U3CU3E8__locals55_1; }
	inline U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 ** get_address_of_CSU24U3CU3E8__locals55_1() { return &___CSU24U3CU3E8__locals55_1; }
	inline void set_CSU24U3CU3E8__locals55_1(U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * value)
	{
		___CSU24U3CU3E8__locals55_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals55_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_57
struct U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527  : public RuntimeObject
{
public:
	// System.Double* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_57::ret_address
	double* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_31 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_57::CS$<>8__locals56
	U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * ___CSU24U3CU3E8__locals56_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527, ___ret_address_0)); }
	inline double* get_ret_address_0() const { return ___ret_address_0; }
	inline double** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(double* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals56_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527, ___CSU24U3CU3E8__locals56_1)); }
	inline U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * get_CSU24U3CU3E8__locals56_1() const { return ___CSU24U3CU3E8__locals56_1; }
	inline U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 ** get_address_of_CSU24U3CU3E8__locals56_1() { return &___CSU24U3CU3E8__locals56_1; }
	inline void set_CSU24U3CU3E8__locals56_1(U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * value)
	{
		___CSU24U3CU3E8__locals56_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals56_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_58
struct U3CU3Ec__DisplayClass162_58_tFE425BD75B11A3635663F71E3BA2A10466C1EEB9  : public RuntimeObject
{
public:
	// System.Byte NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_58::rval
	uint8_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_57 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_58::CS$<>8__locals57
	U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * ___CSU24U3CU3E8__locals57_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_58_tFE425BD75B11A3635663F71E3BA2A10466C1EEB9, ___rval_0)); }
	inline uint8_t get_rval_0() const { return ___rval_0; }
	inline uint8_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(uint8_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals57_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_58_tFE425BD75B11A3635663F71E3BA2A10466C1EEB9, ___CSU24U3CU3E8__locals57_1)); }
	inline U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * get_CSU24U3CU3E8__locals57_1() const { return ___CSU24U3CU3E8__locals57_1; }
	inline U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 ** get_address_of_CSU24U3CU3E8__locals57_1() { return &___CSU24U3CU3E8__locals57_1; }
	inline void set_CSU24U3CU3E8__locals57_1(U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * value)
	{
		___CSU24U3CU3E8__locals57_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals57_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_59
struct U3CU3Ec__DisplayClass162_59_tC747EE22DDC83B6B63875D9A3DD7FA1EC35214CF  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_59::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_57 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_59::CS$<>8__locals58
	U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * ___CSU24U3CU3E8__locals58_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_59_tC747EE22DDC83B6B63875D9A3DD7FA1EC35214CF, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals58_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_59_tC747EE22DDC83B6B63875D9A3DD7FA1EC35214CF, ___CSU24U3CU3E8__locals58_1)); }
	inline U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * get_CSU24U3CU3E8__locals58_1() const { return ___CSU24U3CU3E8__locals58_1; }
	inline U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 ** get_address_of_CSU24U3CU3E8__locals58_1() { return &___CSU24U3CU3E8__locals58_1; }
	inline void set_CSU24U3CU3E8__locals58_1(U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * value)
	{
		___CSU24U3CU3E8__locals58_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals58_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_6
struct U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5  : public RuntimeObject
{
public:
	// System.Byte* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_6::ret_address
	uint8_t* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_0 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_6::CS$<>8__locals6
	U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * ___CSU24U3CU3E8__locals6_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5, ___ret_address_0)); }
	inline uint8_t* get_ret_address_0() const { return ___ret_address_0; }
	inline uint8_t** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(uint8_t* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals6_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5, ___CSU24U3CU3E8__locals6_1)); }
	inline U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * get_CSU24U3CU3E8__locals6_1() const { return ___CSU24U3CU3E8__locals6_1; }
	inline U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B ** get_address_of_CSU24U3CU3E8__locals6_1() { return &___CSU24U3CU3E8__locals6_1; }
	inline void set_CSU24U3CU3E8__locals6_1(U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * value)
	{
		___CSU24U3CU3E8__locals6_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals6_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_60
struct U3CU3Ec__DisplayClass162_60_tAB3067C5EC6120B78BC3AC1360C8F6CDF1936B1B  : public RuntimeObject
{
public:
	// System.Byte NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_60::rval
	uint8_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_57 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_60::CS$<>8__locals59
	U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * ___CSU24U3CU3E8__locals59_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_60_tAB3067C5EC6120B78BC3AC1360C8F6CDF1936B1B, ___rval_0)); }
	inline uint8_t get_rval_0() const { return ___rval_0; }
	inline uint8_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(uint8_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals59_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_60_tAB3067C5EC6120B78BC3AC1360C8F6CDF1936B1B, ___CSU24U3CU3E8__locals59_1)); }
	inline U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * get_CSU24U3CU3E8__locals59_1() const { return ___CSU24U3CU3E8__locals59_1; }
	inline U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 ** get_address_of_CSU24U3CU3E8__locals59_1() { return &___CSU24U3CU3E8__locals59_1; }
	inline void set_CSU24U3CU3E8__locals59_1(U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * value)
	{
		___CSU24U3CU3E8__locals59_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals59_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_61
struct U3CU3Ec__DisplayClass162_61_t132150CC2771F2E8D0CC78C3E386F1EBCD5DCFA7  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_61::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_57 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_61::CS$<>8__locals60
	U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * ___CSU24U3CU3E8__locals60_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_61_t132150CC2771F2E8D0CC78C3E386F1EBCD5DCFA7, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals60_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_61_t132150CC2771F2E8D0CC78C3E386F1EBCD5DCFA7, ___CSU24U3CU3E8__locals60_1)); }
	inline U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * get_CSU24U3CU3E8__locals60_1() const { return ___CSU24U3CU3E8__locals60_1; }
	inline U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 ** get_address_of_CSU24U3CU3E8__locals60_1() { return &___CSU24U3CU3E8__locals60_1; }
	inline void set_CSU24U3CU3E8__locals60_1(U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * value)
	{
		___CSU24U3CU3E8__locals60_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals60_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_62
struct U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60  : public RuntimeObject
{
public:
	// System.Single* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_62::lhs_address
	float* ___lhs_address_0;
	// System.Int32* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_62::rhs_address
	int32_t* ___rhs_address_1;

public:
	inline static int32_t get_offset_of_lhs_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60, ___lhs_address_0)); }
	inline float* get_lhs_address_0() const { return ___lhs_address_0; }
	inline float** get_address_of_lhs_address_0() { return &___lhs_address_0; }
	inline void set_lhs_address_0(float* value)
	{
		___lhs_address_0 = value;
	}

	inline static int32_t get_offset_of_rhs_address_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60, ___rhs_address_1)); }
	inline int32_t* get_rhs_address_1() const { return ___rhs_address_1; }
	inline int32_t** get_address_of_rhs_address_1() { return &___rhs_address_1; }
	inline void set_rhs_address_1(int32_t* value)
	{
		___rhs_address_1 = value;
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_63
struct U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24  : public RuntimeObject
{
public:
	// System.Boolean* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_63::ret_address
	bool* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_62 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_63::CS$<>8__locals61
	U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * ___CSU24U3CU3E8__locals61_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24, ___ret_address_0)); }
	inline bool* get_ret_address_0() const { return ___ret_address_0; }
	inline bool** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(bool* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals61_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24, ___CSU24U3CU3E8__locals61_1)); }
	inline U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * get_CSU24U3CU3E8__locals61_1() const { return ___CSU24U3CU3E8__locals61_1; }
	inline U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 ** get_address_of_CSU24U3CU3E8__locals61_1() { return &___CSU24U3CU3E8__locals61_1; }
	inline void set_CSU24U3CU3E8__locals61_1(U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * value)
	{
		___CSU24U3CU3E8__locals61_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals61_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_64
struct U3CU3Ec__DisplayClass162_64_t041A0C51853D73C9ACA48D97AB950F8254406713  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_64::rval
	int32_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_63 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_64::CS$<>8__locals62
	U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * ___CSU24U3CU3E8__locals62_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_64_t041A0C51853D73C9ACA48D97AB950F8254406713, ___rval_0)); }
	inline int32_t get_rval_0() const { return ___rval_0; }
	inline int32_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int32_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals62_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_64_t041A0C51853D73C9ACA48D97AB950F8254406713, ___CSU24U3CU3E8__locals62_1)); }
	inline U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * get_CSU24U3CU3E8__locals62_1() const { return ___CSU24U3CU3E8__locals62_1; }
	inline U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 ** get_address_of_CSU24U3CU3E8__locals62_1() { return &___CSU24U3CU3E8__locals62_1; }
	inline void set_CSU24U3CU3E8__locals62_1(U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * value)
	{
		___CSU24U3CU3E8__locals62_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals62_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_65
struct U3CU3Ec__DisplayClass162_65_t6DCA1256FA236AB5A32E1F9AE44B6E3DE27D1D31  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_65::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_63 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_65::CS$<>8__locals63
	U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * ___CSU24U3CU3E8__locals63_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_65_t6DCA1256FA236AB5A32E1F9AE44B6E3DE27D1D31, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals63_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_65_t6DCA1256FA236AB5A32E1F9AE44B6E3DE27D1D31, ___CSU24U3CU3E8__locals63_1)); }
	inline U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * get_CSU24U3CU3E8__locals63_1() const { return ___CSU24U3CU3E8__locals63_1; }
	inline U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 ** get_address_of_CSU24U3CU3E8__locals63_1() { return &___CSU24U3CU3E8__locals63_1; }
	inline void set_CSU24U3CU3E8__locals63_1(U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * value)
	{
		___CSU24U3CU3E8__locals63_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals63_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_66
struct U3CU3Ec__DisplayClass162_66_t85A4559C251CA32175070F7D9F8AD722070911AB  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_66::rval
	int32_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_63 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_66::CS$<>8__locals64
	U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * ___CSU24U3CU3E8__locals64_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_66_t85A4559C251CA32175070F7D9F8AD722070911AB, ___rval_0)); }
	inline int32_t get_rval_0() const { return ___rval_0; }
	inline int32_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int32_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals64_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_66_t85A4559C251CA32175070F7D9F8AD722070911AB, ___CSU24U3CU3E8__locals64_1)); }
	inline U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * get_CSU24U3CU3E8__locals64_1() const { return ___CSU24U3CU3E8__locals64_1; }
	inline U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 ** get_address_of_CSU24U3CU3E8__locals64_1() { return &___CSU24U3CU3E8__locals64_1; }
	inline void set_CSU24U3CU3E8__locals64_1(U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * value)
	{
		___CSU24U3CU3E8__locals64_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals64_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_67
struct U3CU3Ec__DisplayClass162_67_tA855A65D81F22C9D9EAD51FDBAC37A83F62BF951  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_67::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_63 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_67::CS$<>8__locals65
	U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * ___CSU24U3CU3E8__locals65_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_67_tA855A65D81F22C9D9EAD51FDBAC37A83F62BF951, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals65_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_67_tA855A65D81F22C9D9EAD51FDBAC37A83F62BF951, ___CSU24U3CU3E8__locals65_1)); }
	inline U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * get_CSU24U3CU3E8__locals65_1() const { return ___CSU24U3CU3E8__locals65_1; }
	inline U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 ** get_address_of_CSU24U3CU3E8__locals65_1() { return &___CSU24U3CU3E8__locals65_1; }
	inline void set_CSU24U3CU3E8__locals65_1(U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * value)
	{
		___CSU24U3CU3E8__locals65_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals65_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_68
struct U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045  : public RuntimeObject
{
public:
	// System.Byte* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_68::ret_address
	uint8_t* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_62 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_68::CS$<>8__locals66
	U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * ___CSU24U3CU3E8__locals66_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045, ___ret_address_0)); }
	inline uint8_t* get_ret_address_0() const { return ___ret_address_0; }
	inline uint8_t** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(uint8_t* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals66_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045, ___CSU24U3CU3E8__locals66_1)); }
	inline U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * get_CSU24U3CU3E8__locals66_1() const { return ___CSU24U3CU3E8__locals66_1; }
	inline U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 ** get_address_of_CSU24U3CU3E8__locals66_1() { return &___CSU24U3CU3E8__locals66_1; }
	inline void set_CSU24U3CU3E8__locals66_1(U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * value)
	{
		___CSU24U3CU3E8__locals66_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals66_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_69
struct U3CU3Ec__DisplayClass162_69_tDBF1F40BF6A3810C3BB82A4D7D6B9AF8428DD0AA  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_69::rval
	int32_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_68 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_69::CS$<>8__locals67
	U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * ___CSU24U3CU3E8__locals67_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_69_tDBF1F40BF6A3810C3BB82A4D7D6B9AF8428DD0AA, ___rval_0)); }
	inline int32_t get_rval_0() const { return ___rval_0; }
	inline int32_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int32_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals67_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_69_tDBF1F40BF6A3810C3BB82A4D7D6B9AF8428DD0AA, ___CSU24U3CU3E8__locals67_1)); }
	inline U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * get_CSU24U3CU3E8__locals67_1() const { return ___CSU24U3CU3E8__locals67_1; }
	inline U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 ** get_address_of_CSU24U3CU3E8__locals67_1() { return &___CSU24U3CU3E8__locals67_1; }
	inline void set_CSU24U3CU3E8__locals67_1(U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * value)
	{
		___CSU24U3CU3E8__locals67_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals67_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_7
struct U3CU3Ec__DisplayClass162_7_t7286660C684B3D8C5AF080F044F31F68FE170C41  : public RuntimeObject
{
public:
	// System.Boolean NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_7::rval
	bool ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_6 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_7::CS$<>8__locals7
	U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * ___CSU24U3CU3E8__locals7_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_7_t7286660C684B3D8C5AF080F044F31F68FE170C41, ___rval_0)); }
	inline bool get_rval_0() const { return ___rval_0; }
	inline bool* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(bool value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals7_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_7_t7286660C684B3D8C5AF080F044F31F68FE170C41, ___CSU24U3CU3E8__locals7_1)); }
	inline U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * get_CSU24U3CU3E8__locals7_1() const { return ___CSU24U3CU3E8__locals7_1; }
	inline U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 ** get_address_of_CSU24U3CU3E8__locals7_1() { return &___CSU24U3CU3E8__locals7_1; }
	inline void set_CSU24U3CU3E8__locals7_1(U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * value)
	{
		___CSU24U3CU3E8__locals7_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals7_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_70
struct U3CU3Ec__DisplayClass162_70_tCCE24581F6A2BD074623A9CAC32493398D19E421  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_70::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_68 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_70::CS$<>8__locals68
	U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * ___CSU24U3CU3E8__locals68_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_70_tCCE24581F6A2BD074623A9CAC32493398D19E421, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals68_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_70_tCCE24581F6A2BD074623A9CAC32493398D19E421, ___CSU24U3CU3E8__locals68_1)); }
	inline U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * get_CSU24U3CU3E8__locals68_1() const { return ___CSU24U3CU3E8__locals68_1; }
	inline U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 ** get_address_of_CSU24U3CU3E8__locals68_1() { return &___CSU24U3CU3E8__locals68_1; }
	inline void set_CSU24U3CU3E8__locals68_1(U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * value)
	{
		___CSU24U3CU3E8__locals68_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals68_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_71
struct U3CU3Ec__DisplayClass162_71_tD0B9C8577D911D35BBF430E62A429F654BFC730D  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_71::rval
	int32_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_68 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_71::CS$<>8__locals69
	U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * ___CSU24U3CU3E8__locals69_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_71_tD0B9C8577D911D35BBF430E62A429F654BFC730D, ___rval_0)); }
	inline int32_t get_rval_0() const { return ___rval_0; }
	inline int32_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int32_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals69_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_71_tD0B9C8577D911D35BBF430E62A429F654BFC730D, ___CSU24U3CU3E8__locals69_1)); }
	inline U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * get_CSU24U3CU3E8__locals69_1() const { return ___CSU24U3CU3E8__locals69_1; }
	inline U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 ** get_address_of_CSU24U3CU3E8__locals69_1() { return &___CSU24U3CU3E8__locals69_1; }
	inline void set_CSU24U3CU3E8__locals69_1(U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * value)
	{
		___CSU24U3CU3E8__locals69_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals69_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_72
struct U3CU3Ec__DisplayClass162_72_t9660F2ACBB88747C7E4E024914C13DEAECC61B35  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_72::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_68 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_72::CS$<>8__locals70
	U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * ___CSU24U3CU3E8__locals70_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_72_t9660F2ACBB88747C7E4E024914C13DEAECC61B35, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals70_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_72_t9660F2ACBB88747C7E4E024914C13DEAECC61B35, ___CSU24U3CU3E8__locals70_1)); }
	inline U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * get_CSU24U3CU3E8__locals70_1() const { return ___CSU24U3CU3E8__locals70_1; }
	inline U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 ** get_address_of_CSU24U3CU3E8__locals70_1() { return &___CSU24U3CU3E8__locals70_1; }
	inline void set_CSU24U3CU3E8__locals70_1(U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * value)
	{
		___CSU24U3CU3E8__locals70_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals70_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_73
struct U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F  : public RuntimeObject
{
public:
	// System.Int32* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_73::ret_address
	int32_t* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_62 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_73::CS$<>8__locals71
	U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * ___CSU24U3CU3E8__locals71_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F, ___ret_address_0)); }
	inline int32_t* get_ret_address_0() const { return ___ret_address_0; }
	inline int32_t** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(int32_t* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals71_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F, ___CSU24U3CU3E8__locals71_1)); }
	inline U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * get_CSU24U3CU3E8__locals71_1() const { return ___CSU24U3CU3E8__locals71_1; }
	inline U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 ** get_address_of_CSU24U3CU3E8__locals71_1() { return &___CSU24U3CU3E8__locals71_1; }
	inline void set_CSU24U3CU3E8__locals71_1(U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * value)
	{
		___CSU24U3CU3E8__locals71_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals71_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_74
struct U3CU3Ec__DisplayClass162_74_t6DCD4C217D80798A737493B6CF50945F3374CD56  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_74::rval
	int32_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_73 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_74::CS$<>8__locals72
	U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * ___CSU24U3CU3E8__locals72_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_74_t6DCD4C217D80798A737493B6CF50945F3374CD56, ___rval_0)); }
	inline int32_t get_rval_0() const { return ___rval_0; }
	inline int32_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int32_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals72_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_74_t6DCD4C217D80798A737493B6CF50945F3374CD56, ___CSU24U3CU3E8__locals72_1)); }
	inline U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * get_CSU24U3CU3E8__locals72_1() const { return ___CSU24U3CU3E8__locals72_1; }
	inline U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F ** get_address_of_CSU24U3CU3E8__locals72_1() { return &___CSU24U3CU3E8__locals72_1; }
	inline void set_CSU24U3CU3E8__locals72_1(U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * value)
	{
		___CSU24U3CU3E8__locals72_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals72_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_75
struct U3CU3Ec__DisplayClass162_75_t8819505132BB6E1B34820F50EB6C2965C72B304A  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_75::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_73 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_75::CS$<>8__locals73
	U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * ___CSU24U3CU3E8__locals73_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_75_t8819505132BB6E1B34820F50EB6C2965C72B304A, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals73_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_75_t8819505132BB6E1B34820F50EB6C2965C72B304A, ___CSU24U3CU3E8__locals73_1)); }
	inline U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * get_CSU24U3CU3E8__locals73_1() const { return ___CSU24U3CU3E8__locals73_1; }
	inline U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F ** get_address_of_CSU24U3CU3E8__locals73_1() { return &___CSU24U3CU3E8__locals73_1; }
	inline void set_CSU24U3CU3E8__locals73_1(U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * value)
	{
		___CSU24U3CU3E8__locals73_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals73_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_76
struct U3CU3Ec__DisplayClass162_76_t123A4167E82D87E92E27DCA946198CAB17092AD5  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_76::rval
	int32_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_73 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_76::CS$<>8__locals74
	U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * ___CSU24U3CU3E8__locals74_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_76_t123A4167E82D87E92E27DCA946198CAB17092AD5, ___rval_0)); }
	inline int32_t get_rval_0() const { return ___rval_0; }
	inline int32_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int32_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals74_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_76_t123A4167E82D87E92E27DCA946198CAB17092AD5, ___CSU24U3CU3E8__locals74_1)); }
	inline U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * get_CSU24U3CU3E8__locals74_1() const { return ___CSU24U3CU3E8__locals74_1; }
	inline U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F ** get_address_of_CSU24U3CU3E8__locals74_1() { return &___CSU24U3CU3E8__locals74_1; }
	inline void set_CSU24U3CU3E8__locals74_1(U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * value)
	{
		___CSU24U3CU3E8__locals74_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals74_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_77
struct U3CU3Ec__DisplayClass162_77_tDED6AAA1C93A88B37A41F38C025B56372D4CD06D  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_77::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_73 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_77::CS$<>8__locals75
	U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * ___CSU24U3CU3E8__locals75_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_77_tDED6AAA1C93A88B37A41F38C025B56372D4CD06D, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals75_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_77_tDED6AAA1C93A88B37A41F38C025B56372D4CD06D, ___CSU24U3CU3E8__locals75_1)); }
	inline U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * get_CSU24U3CU3E8__locals75_1() const { return ___CSU24U3CU3E8__locals75_1; }
	inline U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F ** get_address_of_CSU24U3CU3E8__locals75_1() { return &___CSU24U3CU3E8__locals75_1; }
	inline void set_CSU24U3CU3E8__locals75_1(U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * value)
	{
		___CSU24U3CU3E8__locals75_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals75_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_78
struct U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A  : public RuntimeObject
{
public:
	// System.Int64* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_78::ret_address
	int64_t* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_62 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_78::CS$<>8__locals76
	U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * ___CSU24U3CU3E8__locals76_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A, ___ret_address_0)); }
	inline int64_t* get_ret_address_0() const { return ___ret_address_0; }
	inline int64_t** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(int64_t* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals76_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A, ___CSU24U3CU3E8__locals76_1)); }
	inline U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * get_CSU24U3CU3E8__locals76_1() const { return ___CSU24U3CU3E8__locals76_1; }
	inline U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 ** get_address_of_CSU24U3CU3E8__locals76_1() { return &___CSU24U3CU3E8__locals76_1; }
	inline void set_CSU24U3CU3E8__locals76_1(U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * value)
	{
		___CSU24U3CU3E8__locals76_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals76_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_79
struct U3CU3Ec__DisplayClass162_79_tF636CF640644D6E1BFD22269E332011A526E55DD  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_79::rval
	int32_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_78 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_79::CS$<>8__locals77
	U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * ___CSU24U3CU3E8__locals77_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_79_tF636CF640644D6E1BFD22269E332011A526E55DD, ___rval_0)); }
	inline int32_t get_rval_0() const { return ___rval_0; }
	inline int32_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int32_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals77_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_79_tF636CF640644D6E1BFD22269E332011A526E55DD, ___CSU24U3CU3E8__locals77_1)); }
	inline U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * get_CSU24U3CU3E8__locals77_1() const { return ___CSU24U3CU3E8__locals77_1; }
	inline U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A ** get_address_of_CSU24U3CU3E8__locals77_1() { return &___CSU24U3CU3E8__locals77_1; }
	inline void set_CSU24U3CU3E8__locals77_1(U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * value)
	{
		___CSU24U3CU3E8__locals77_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals77_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_8
struct U3CU3Ec__DisplayClass162_8_tA370969B9E4869D61D39A5E74886751CA5137E54  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_8::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_6 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_8::CS$<>8__locals8
	U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * ___CSU24U3CU3E8__locals8_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_8_tA370969B9E4869D61D39A5E74886751CA5137E54, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals8_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_8_tA370969B9E4869D61D39A5E74886751CA5137E54, ___CSU24U3CU3E8__locals8_1)); }
	inline U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * get_CSU24U3CU3E8__locals8_1() const { return ___CSU24U3CU3E8__locals8_1; }
	inline U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 ** get_address_of_CSU24U3CU3E8__locals8_1() { return &___CSU24U3CU3E8__locals8_1; }
	inline void set_CSU24U3CU3E8__locals8_1(U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * value)
	{
		___CSU24U3CU3E8__locals8_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals8_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_80
struct U3CU3Ec__DisplayClass162_80_t1B907B3DA42D4892FF9447144872F987FE345F3C  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_80::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_78 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_80::CS$<>8__locals78
	U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * ___CSU24U3CU3E8__locals78_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_80_t1B907B3DA42D4892FF9447144872F987FE345F3C, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals78_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_80_t1B907B3DA42D4892FF9447144872F987FE345F3C, ___CSU24U3CU3E8__locals78_1)); }
	inline U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * get_CSU24U3CU3E8__locals78_1() const { return ___CSU24U3CU3E8__locals78_1; }
	inline U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A ** get_address_of_CSU24U3CU3E8__locals78_1() { return &___CSU24U3CU3E8__locals78_1; }
	inline void set_CSU24U3CU3E8__locals78_1(U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * value)
	{
		___CSU24U3CU3E8__locals78_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals78_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_81
struct U3CU3Ec__DisplayClass162_81_t9D75FAA93DB882F279C4901BB200EDD0FF3F5DC8  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_81::rval
	int32_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_78 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_81::CS$<>8__locals79
	U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * ___CSU24U3CU3E8__locals79_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_81_t9D75FAA93DB882F279C4901BB200EDD0FF3F5DC8, ___rval_0)); }
	inline int32_t get_rval_0() const { return ___rval_0; }
	inline int32_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int32_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals79_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_81_t9D75FAA93DB882F279C4901BB200EDD0FF3F5DC8, ___CSU24U3CU3E8__locals79_1)); }
	inline U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * get_CSU24U3CU3E8__locals79_1() const { return ___CSU24U3CU3E8__locals79_1; }
	inline U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A ** get_address_of_CSU24U3CU3E8__locals79_1() { return &___CSU24U3CU3E8__locals79_1; }
	inline void set_CSU24U3CU3E8__locals79_1(U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * value)
	{
		___CSU24U3CU3E8__locals79_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals79_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_82
struct U3CU3Ec__DisplayClass162_82_t30A70AB9043D97DCB5594EFCB81D59C732A61A9B  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_82::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_78 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_82::CS$<>8__locals80
	U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * ___CSU24U3CU3E8__locals80_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_82_t30A70AB9043D97DCB5594EFCB81D59C732A61A9B, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals80_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_82_t30A70AB9043D97DCB5594EFCB81D59C732A61A9B, ___CSU24U3CU3E8__locals80_1)); }
	inline U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * get_CSU24U3CU3E8__locals80_1() const { return ___CSU24U3CU3E8__locals80_1; }
	inline U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A ** get_address_of_CSU24U3CU3E8__locals80_1() { return &___CSU24U3CU3E8__locals80_1; }
	inline void set_CSU24U3CU3E8__locals80_1(U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * value)
	{
		___CSU24U3CU3E8__locals80_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals80_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_83
struct U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1  : public RuntimeObject
{
public:
	// System.Single* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_83::ret_address
	float* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_62 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_83::CS$<>8__locals81
	U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * ___CSU24U3CU3E8__locals81_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1, ___ret_address_0)); }
	inline float* get_ret_address_0() const { return ___ret_address_0; }
	inline float** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(float* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals81_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1, ___CSU24U3CU3E8__locals81_1)); }
	inline U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * get_CSU24U3CU3E8__locals81_1() const { return ___CSU24U3CU3E8__locals81_1; }
	inline U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 ** get_address_of_CSU24U3CU3E8__locals81_1() { return &___CSU24U3CU3E8__locals81_1; }
	inline void set_CSU24U3CU3E8__locals81_1(U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * value)
	{
		___CSU24U3CU3E8__locals81_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals81_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_84
struct U3CU3Ec__DisplayClass162_84_tD2F1C9174F2F56FFFA6C63CF1575DAF24C210398  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_84::rval
	int32_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_83 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_84::CS$<>8__locals82
	U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * ___CSU24U3CU3E8__locals82_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_84_tD2F1C9174F2F56FFFA6C63CF1575DAF24C210398, ___rval_0)); }
	inline int32_t get_rval_0() const { return ___rval_0; }
	inline int32_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int32_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals82_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_84_tD2F1C9174F2F56FFFA6C63CF1575DAF24C210398, ___CSU24U3CU3E8__locals82_1)); }
	inline U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * get_CSU24U3CU3E8__locals82_1() const { return ___CSU24U3CU3E8__locals82_1; }
	inline U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 ** get_address_of_CSU24U3CU3E8__locals82_1() { return &___CSU24U3CU3E8__locals82_1; }
	inline void set_CSU24U3CU3E8__locals82_1(U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * value)
	{
		___CSU24U3CU3E8__locals82_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals82_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_85
struct U3CU3Ec__DisplayClass162_85_tDB948ACEAC46D7DF716AB3352146EBA2E8B860DE  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_85::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_83 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_85::CS$<>8__locals83
	U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * ___CSU24U3CU3E8__locals83_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_85_tDB948ACEAC46D7DF716AB3352146EBA2E8B860DE, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals83_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_85_tDB948ACEAC46D7DF716AB3352146EBA2E8B860DE, ___CSU24U3CU3E8__locals83_1)); }
	inline U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * get_CSU24U3CU3E8__locals83_1() const { return ___CSU24U3CU3E8__locals83_1; }
	inline U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 ** get_address_of_CSU24U3CU3E8__locals83_1() { return &___CSU24U3CU3E8__locals83_1; }
	inline void set_CSU24U3CU3E8__locals83_1(U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * value)
	{
		___CSU24U3CU3E8__locals83_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals83_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_86
struct U3CU3Ec__DisplayClass162_86_tB44CAA30BE73B781DD09BBC1C021806A66720194  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_86::rval
	int32_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_83 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_86::CS$<>8__locals84
	U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * ___CSU24U3CU3E8__locals84_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_86_tB44CAA30BE73B781DD09BBC1C021806A66720194, ___rval_0)); }
	inline int32_t get_rval_0() const { return ___rval_0; }
	inline int32_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int32_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals84_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_86_tB44CAA30BE73B781DD09BBC1C021806A66720194, ___CSU24U3CU3E8__locals84_1)); }
	inline U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * get_CSU24U3CU3E8__locals84_1() const { return ___CSU24U3CU3E8__locals84_1; }
	inline U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 ** get_address_of_CSU24U3CU3E8__locals84_1() { return &___CSU24U3CU3E8__locals84_1; }
	inline void set_CSU24U3CU3E8__locals84_1(U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * value)
	{
		___CSU24U3CU3E8__locals84_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals84_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_87
struct U3CU3Ec__DisplayClass162_87_t9DC053EF9053AD2AE488B586CC3C24BE274EC254  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_87::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_83 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_87::CS$<>8__locals85
	U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * ___CSU24U3CU3E8__locals85_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_87_t9DC053EF9053AD2AE488B586CC3C24BE274EC254, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals85_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_87_t9DC053EF9053AD2AE488B586CC3C24BE274EC254, ___CSU24U3CU3E8__locals85_1)); }
	inline U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * get_CSU24U3CU3E8__locals85_1() const { return ___CSU24U3CU3E8__locals85_1; }
	inline U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 ** get_address_of_CSU24U3CU3E8__locals85_1() { return &___CSU24U3CU3E8__locals85_1; }
	inline void set_CSU24U3CU3E8__locals85_1(U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * value)
	{
		___CSU24U3CU3E8__locals85_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals85_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_88
struct U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF  : public RuntimeObject
{
public:
	// System.Double* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_88::ret_address
	double* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_62 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_88::CS$<>8__locals86
	U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * ___CSU24U3CU3E8__locals86_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF, ___ret_address_0)); }
	inline double* get_ret_address_0() const { return ___ret_address_0; }
	inline double** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(double* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals86_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF, ___CSU24U3CU3E8__locals86_1)); }
	inline U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * get_CSU24U3CU3E8__locals86_1() const { return ___CSU24U3CU3E8__locals86_1; }
	inline U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 ** get_address_of_CSU24U3CU3E8__locals86_1() { return &___CSU24U3CU3E8__locals86_1; }
	inline void set_CSU24U3CU3E8__locals86_1(U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * value)
	{
		___CSU24U3CU3E8__locals86_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals86_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_89
struct U3CU3Ec__DisplayClass162_89_tAEF24B6899AA4E48B659B5676651AB938909366D  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_89::rval
	int32_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_88 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_89::CS$<>8__locals87
	U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * ___CSU24U3CU3E8__locals87_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_89_tAEF24B6899AA4E48B659B5676651AB938909366D, ___rval_0)); }
	inline int32_t get_rval_0() const { return ___rval_0; }
	inline int32_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int32_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals87_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_89_tAEF24B6899AA4E48B659B5676651AB938909366D, ___CSU24U3CU3E8__locals87_1)); }
	inline U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * get_CSU24U3CU3E8__locals87_1() const { return ___CSU24U3CU3E8__locals87_1; }
	inline U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF ** get_address_of_CSU24U3CU3E8__locals87_1() { return &___CSU24U3CU3E8__locals87_1; }
	inline void set_CSU24U3CU3E8__locals87_1(U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * value)
	{
		___CSU24U3CU3E8__locals87_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals87_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_9
struct U3CU3Ec__DisplayClass162_9_tE330AFA05A88A81A665E561059A55F1089A2AC3E  : public RuntimeObject
{
public:
	// System.Boolean NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_9::rval
	bool ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_6 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_9::CS$<>8__locals9
	U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * ___CSU24U3CU3E8__locals9_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_9_tE330AFA05A88A81A665E561059A55F1089A2AC3E, ___rval_0)); }
	inline bool get_rval_0() const { return ___rval_0; }
	inline bool* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(bool value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals9_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_9_tE330AFA05A88A81A665E561059A55F1089A2AC3E, ___CSU24U3CU3E8__locals9_1)); }
	inline U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * get_CSU24U3CU3E8__locals9_1() const { return ___CSU24U3CU3E8__locals9_1; }
	inline U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 ** get_address_of_CSU24U3CU3E8__locals9_1() { return &___CSU24U3CU3E8__locals9_1; }
	inline void set_CSU24U3CU3E8__locals9_1(U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * value)
	{
		___CSU24U3CU3E8__locals9_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals9_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_90
struct U3CU3Ec__DisplayClass162_90_t1A676C4128A9C58BC4B5C049A6B9B9C62D9925FE  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_90::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_88 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_90::CS$<>8__locals88
	U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * ___CSU24U3CU3E8__locals88_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_90_t1A676C4128A9C58BC4B5C049A6B9B9C62D9925FE, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals88_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_90_t1A676C4128A9C58BC4B5C049A6B9B9C62D9925FE, ___CSU24U3CU3E8__locals88_1)); }
	inline U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * get_CSU24U3CU3E8__locals88_1() const { return ___CSU24U3CU3E8__locals88_1; }
	inline U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF ** get_address_of_CSU24U3CU3E8__locals88_1() { return &___CSU24U3CU3E8__locals88_1; }
	inline void set_CSU24U3CU3E8__locals88_1(U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * value)
	{
		___CSU24U3CU3E8__locals88_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals88_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_91
struct U3CU3Ec__DisplayClass162_91_t94FB285AAAE9B39D80A86AA0B0652845925051D7  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_91::rval
	int32_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_88 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_91::CS$<>8__locals89
	U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * ___CSU24U3CU3E8__locals89_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_91_t94FB285AAAE9B39D80A86AA0B0652845925051D7, ___rval_0)); }
	inline int32_t get_rval_0() const { return ___rval_0; }
	inline int32_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int32_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals89_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_91_t94FB285AAAE9B39D80A86AA0B0652845925051D7, ___CSU24U3CU3E8__locals89_1)); }
	inline U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * get_CSU24U3CU3E8__locals89_1() const { return ___CSU24U3CU3E8__locals89_1; }
	inline U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF ** get_address_of_CSU24U3CU3E8__locals89_1() { return &___CSU24U3CU3E8__locals89_1; }
	inline void set_CSU24U3CU3E8__locals89_1(U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * value)
	{
		___CSU24U3CU3E8__locals89_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals89_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_92
struct U3CU3Ec__DisplayClass162_92_t58EA3799F2F91F5FC746D45D2649F1BA982D7CD9  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_92::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_88 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_92::CS$<>8__locals90
	U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * ___CSU24U3CU3E8__locals90_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_92_t58EA3799F2F91F5FC746D45D2649F1BA982D7CD9, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals90_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_92_t58EA3799F2F91F5FC746D45D2649F1BA982D7CD9, ___CSU24U3CU3E8__locals90_1)); }
	inline U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * get_CSU24U3CU3E8__locals90_1() const { return ___CSU24U3CU3E8__locals90_1; }
	inline U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF ** get_address_of_CSU24U3CU3E8__locals90_1() { return &___CSU24U3CU3E8__locals90_1; }
	inline void set_CSU24U3CU3E8__locals90_1(U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * value)
	{
		___CSU24U3CU3E8__locals90_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals90_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_93
struct U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF  : public RuntimeObject
{
public:
	// System.Single* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_93::lhs_address
	float* ___lhs_address_0;
	// System.Int64* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_93::rhs_address
	int64_t* ___rhs_address_1;

public:
	inline static int32_t get_offset_of_lhs_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF, ___lhs_address_0)); }
	inline float* get_lhs_address_0() const { return ___lhs_address_0; }
	inline float** get_address_of_lhs_address_0() { return &___lhs_address_0; }
	inline void set_lhs_address_0(float* value)
	{
		___lhs_address_0 = value;
	}

	inline static int32_t get_offset_of_rhs_address_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF, ___rhs_address_1)); }
	inline int64_t* get_rhs_address_1() const { return ___rhs_address_1; }
	inline int64_t** get_address_of_rhs_address_1() { return &___rhs_address_1; }
	inline void set_rhs_address_1(int64_t* value)
	{
		___rhs_address_1 = value;
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_94
struct U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF  : public RuntimeObject
{
public:
	// System.Boolean* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_94::ret_address
	bool* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_93 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_94::CS$<>8__locals91
	U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * ___CSU24U3CU3E8__locals91_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF, ___ret_address_0)); }
	inline bool* get_ret_address_0() const { return ___ret_address_0; }
	inline bool** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(bool* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals91_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF, ___CSU24U3CU3E8__locals91_1)); }
	inline U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * get_CSU24U3CU3E8__locals91_1() const { return ___CSU24U3CU3E8__locals91_1; }
	inline U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF ** get_address_of_CSU24U3CU3E8__locals91_1() { return &___CSU24U3CU3E8__locals91_1; }
	inline void set_CSU24U3CU3E8__locals91_1(U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * value)
	{
		___CSU24U3CU3E8__locals91_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals91_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_95
struct U3CU3Ec__DisplayClass162_95_t44C2CE80EC698B539FCB97AD6D879FEDDB58CC62  : public RuntimeObject
{
public:
	// System.Int64 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_95::rval
	int64_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_94 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_95::CS$<>8__locals92
	U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * ___CSU24U3CU3E8__locals92_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_95_t44C2CE80EC698B539FCB97AD6D879FEDDB58CC62, ___rval_0)); }
	inline int64_t get_rval_0() const { return ___rval_0; }
	inline int64_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int64_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals92_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_95_t44C2CE80EC698B539FCB97AD6D879FEDDB58CC62, ___CSU24U3CU3E8__locals92_1)); }
	inline U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * get_CSU24U3CU3E8__locals92_1() const { return ___CSU24U3CU3E8__locals92_1; }
	inline U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF ** get_address_of_CSU24U3CU3E8__locals92_1() { return &___CSU24U3CU3E8__locals92_1; }
	inline void set_CSU24U3CU3E8__locals92_1(U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * value)
	{
		___CSU24U3CU3E8__locals92_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals92_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_96
struct U3CU3Ec__DisplayClass162_96_t583336A7845D675E2A6E73EB68D9A78AF0D71D49  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_96::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_94 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_96::CS$<>8__locals93
	U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * ___CSU24U3CU3E8__locals93_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_96_t583336A7845D675E2A6E73EB68D9A78AF0D71D49, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals93_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_96_t583336A7845D675E2A6E73EB68D9A78AF0D71D49, ___CSU24U3CU3E8__locals93_1)); }
	inline U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * get_CSU24U3CU3E8__locals93_1() const { return ___CSU24U3CU3E8__locals93_1; }
	inline U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF ** get_address_of_CSU24U3CU3E8__locals93_1() { return &___CSU24U3CU3E8__locals93_1; }
	inline void set_CSU24U3CU3E8__locals93_1(U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * value)
	{
		___CSU24U3CU3E8__locals93_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals93_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_97
struct U3CU3Ec__DisplayClass162_97_tA3400A3C484EC276832E06A10D81802CE9F05B29  : public RuntimeObject
{
public:
	// System.Int64 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_97::rval
	int64_t ___rval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_94 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_97::CS$<>8__locals94
	U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * ___CSU24U3CU3E8__locals94_1;

public:
	inline static int32_t get_offset_of_rval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_97_tA3400A3C484EC276832E06A10D81802CE9F05B29, ___rval_0)); }
	inline int64_t get_rval_0() const { return ___rval_0; }
	inline int64_t* get_address_of_rval_0() { return &___rval_0; }
	inline void set_rval_0(int64_t value)
	{
		___rval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals94_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_97_tA3400A3C484EC276832E06A10D81802CE9F05B29, ___CSU24U3CU3E8__locals94_1)); }
	inline U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * get_CSU24U3CU3E8__locals94_1() const { return ___CSU24U3CU3E8__locals94_1; }
	inline U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF ** get_address_of_CSU24U3CU3E8__locals94_1() { return &___CSU24U3CU3E8__locals94_1; }
	inline void set_CSU24U3CU3E8__locals94_1(U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * value)
	{
		___CSU24U3CU3E8__locals94_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals94_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_98
struct U3CU3Ec__DisplayClass162_98_t16AE778E84D8AE37FD048CAFF439EE3CD0303781  : public RuntimeObject
{
public:
	// System.Single NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_98::lval
	float ___lval_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_94 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_98::CS$<>8__locals95
	U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * ___CSU24U3CU3E8__locals95_1;

public:
	inline static int32_t get_offset_of_lval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_98_t16AE778E84D8AE37FD048CAFF439EE3CD0303781, ___lval_0)); }
	inline float get_lval_0() const { return ___lval_0; }
	inline float* get_address_of_lval_0() { return &___lval_0; }
	inline void set_lval_0(float value)
	{
		___lval_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals95_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_98_t16AE778E84D8AE37FD048CAFF439EE3CD0303781, ___CSU24U3CU3E8__locals95_1)); }
	inline U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * get_CSU24U3CU3E8__locals95_1() const { return ___CSU24U3CU3E8__locals95_1; }
	inline U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF ** get_address_of_CSU24U3CU3E8__locals95_1() { return &___CSU24U3CU3E8__locals95_1; }
	inline void set_CSU24U3CU3E8__locals95_1(U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * value)
	{
		___CSU24U3CU3E8__locals95_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals95_1), (void*)value);
	}
};


// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_99
struct U3CU3Ec__DisplayClass162_99_tD95A2AFFF814B071FE8965A07F8A107BAF918F93  : public RuntimeObject
{
public:
	// System.Byte* NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_99::ret_address
	uint8_t* ___ret_address_0;
	// NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_93 NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_99::CS$<>8__locals96
	U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * ___CSU24U3CU3E8__locals96_1;

public:
	inline static int32_t get_offset_of_ret_address_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_99_tD95A2AFFF814B071FE8965A07F8A107BAF918F93, ___ret_address_0)); }
	inline uint8_t* get_ret_address_0() const { return ___ret_address_0; }
	inline uint8_t** get_address_of_ret_address_0() { return &___ret_address_0; }
	inline void set_ret_address_0(uint8_t* value)
	{
		___ret_address_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals96_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass162_99_tD95A2AFFF814B071FE8965A07F8A107BAF918F93, ___CSU24U3CU3E8__locals96_1)); }
	inline U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * get_CSU24U3CU3E8__locals96_1() const { return ___CSU24U3CU3E8__locals96_1; }
	inline U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF ** get_address_of_CSU24U3CU3E8__locals96_1() { return &___CSU24U3CU3E8__locals96_1; }
	inline void set_CSU24U3CU3E8__locals96_1(U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * value)
	{
		___CSU24U3CU3E8__locals96_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals96_1), (void*)value);
	}
};


// NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d
struct U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}
};


// NumSharp.NDArray/<>c
struct U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields
{
public:
	// NumSharp.NDArray/<>c NumSharp.NDArray/<>c::<>9
	U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Double> NumSharp.NDArray/<>c::<>9__118_0
	Func_2_tC82D5EEAF7778E76FC5FF406F425670B237A80D8 * ___U3CU3E9__118_0_1;
	// System.Func`2<System.String,System.String[]> NumSharp.NDArray/<>c::<>9__118_1
	Func_2_t5BC6467B0F0DE7D4A9047D9B593F2B70DE6ACE19 * ___U3CU3E9__118_1_2;
	// System.Func`2<System.String,System.String[]> NumSharp.NDArray/<>c::<>9__118_2
	Func_2_t5BC6467B0F0DE7D4A9047D9B593F2B70DE6ACE19 * ___U3CU3E9__118_2_3;
	// System.Func`2<System.Object,System.String> NumSharp.NDArray/<>c::<>9__148_0
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ___U3CU3E9__148_0_4;
	// System.Func`2<System.Object,System.String> NumSharp.NDArray/<>c::<>9__148_1
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ___U3CU3E9__148_1_5;
	// System.Func`2<System.Object,System.String> NumSharp.NDArray/<>c::<>9__148_2
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ___U3CU3E9__148_2_6;
	// System.Func`2<NumSharp.Slice,System.Boolean> NumSharp.NDArray/<>c::<>9__309_0
	Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * ___U3CU3E9__309_0_7;
	// System.Func`2<System.Int32,System.Int32> NumSharp.NDArray/<>c::<>9__312_0
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___U3CU3E9__312_0_8;
	// System.Func`2<System.Object,NumSharp.Slice> NumSharp.NDArray/<>c::<>9__314_0
	Func_2_t487F5607A8A3034ADEF5D061435C33E9AF1B096C * ___U3CU3E9__314_0_9;
	// System.Func`2<System.Object,NumSharp.Slice> NumSharp.NDArray/<>c::<>9__320_0
	Func_2_t487F5607A8A3034ADEF5D061435C33E9AF1B096C * ___U3CU3E9__320_0_10;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__118_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields, ___U3CU3E9__118_0_1)); }
	inline Func_2_tC82D5EEAF7778E76FC5FF406F425670B237A80D8 * get_U3CU3E9__118_0_1() const { return ___U3CU3E9__118_0_1; }
	inline Func_2_tC82D5EEAF7778E76FC5FF406F425670B237A80D8 ** get_address_of_U3CU3E9__118_0_1() { return &___U3CU3E9__118_0_1; }
	inline void set_U3CU3E9__118_0_1(Func_2_tC82D5EEAF7778E76FC5FF406F425670B237A80D8 * value)
	{
		___U3CU3E9__118_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__118_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__118_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields, ___U3CU3E9__118_1_2)); }
	inline Func_2_t5BC6467B0F0DE7D4A9047D9B593F2B70DE6ACE19 * get_U3CU3E9__118_1_2() const { return ___U3CU3E9__118_1_2; }
	inline Func_2_t5BC6467B0F0DE7D4A9047D9B593F2B70DE6ACE19 ** get_address_of_U3CU3E9__118_1_2() { return &___U3CU3E9__118_1_2; }
	inline void set_U3CU3E9__118_1_2(Func_2_t5BC6467B0F0DE7D4A9047D9B593F2B70DE6ACE19 * value)
	{
		___U3CU3E9__118_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__118_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__118_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields, ___U3CU3E9__118_2_3)); }
	inline Func_2_t5BC6467B0F0DE7D4A9047D9B593F2B70DE6ACE19 * get_U3CU3E9__118_2_3() const { return ___U3CU3E9__118_2_3; }
	inline Func_2_t5BC6467B0F0DE7D4A9047D9B593F2B70DE6ACE19 ** get_address_of_U3CU3E9__118_2_3() { return &___U3CU3E9__118_2_3; }
	inline void set_U3CU3E9__118_2_3(Func_2_t5BC6467B0F0DE7D4A9047D9B593F2B70DE6ACE19 * value)
	{
		___U3CU3E9__118_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__118_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__148_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields, ___U3CU3E9__148_0_4)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get_U3CU3E9__148_0_4() const { return ___U3CU3E9__148_0_4; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of_U3CU3E9__148_0_4() { return &___U3CU3E9__148_0_4; }
	inline void set_U3CU3E9__148_0_4(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		___U3CU3E9__148_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__148_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__148_1_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields, ___U3CU3E9__148_1_5)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get_U3CU3E9__148_1_5() const { return ___U3CU3E9__148_1_5; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of_U3CU3E9__148_1_5() { return &___U3CU3E9__148_1_5; }
	inline void set_U3CU3E9__148_1_5(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		___U3CU3E9__148_1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__148_1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__148_2_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields, ___U3CU3E9__148_2_6)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get_U3CU3E9__148_2_6() const { return ___U3CU3E9__148_2_6; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of_U3CU3E9__148_2_6() { return &___U3CU3E9__148_2_6; }
	inline void set_U3CU3E9__148_2_6(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		___U3CU3E9__148_2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__148_2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__309_0_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields, ___U3CU3E9__309_0_7)); }
	inline Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * get_U3CU3E9__309_0_7() const { return ___U3CU3E9__309_0_7; }
	inline Func_2_t82951254BC5366DC7343E8EF62B1955768995472 ** get_address_of_U3CU3E9__309_0_7() { return &___U3CU3E9__309_0_7; }
	inline void set_U3CU3E9__309_0_7(Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * value)
	{
		___U3CU3E9__309_0_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__309_0_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__312_0_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields, ___U3CU3E9__312_0_8)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_U3CU3E9__312_0_8() const { return ___U3CU3E9__312_0_8; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_U3CU3E9__312_0_8() { return &___U3CU3E9__312_0_8; }
	inline void set_U3CU3E9__312_0_8(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___U3CU3E9__312_0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__312_0_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__314_0_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields, ___U3CU3E9__314_0_9)); }
	inline Func_2_t487F5607A8A3034ADEF5D061435C33E9AF1B096C * get_U3CU3E9__314_0_9() const { return ___U3CU3E9__314_0_9; }
	inline Func_2_t487F5607A8A3034ADEF5D061435C33E9AF1B096C ** get_address_of_U3CU3E9__314_0_9() { return &___U3CU3E9__314_0_9; }
	inline void set_U3CU3E9__314_0_9(Func_2_t487F5607A8A3034ADEF5D061435C33E9AF1B096C * value)
	{
		___U3CU3E9__314_0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__314_0_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__320_0_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields, ___U3CU3E9__320_0_10)); }
	inline Func_2_t487F5607A8A3034ADEF5D061435C33E9AF1B096C * get_U3CU3E9__320_0_10() const { return ___U3CU3E9__320_0_10; }
	inline Func_2_t487F5607A8A3034ADEF5D061435C33E9AF1B096C ** get_address_of_U3CU3E9__320_0_10() { return &___U3CU3E9__320_0_10; }
	inline void set_U3CU3E9__320_0_10(Func_2_t487F5607A8A3034ADEF5D061435C33E9AF1B096C * value)
	{
		___U3CU3E9__320_0_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__320_0_10), (void*)value);
	}
};


// NumSharp.NDArray/<>c__DisplayClass312_0
struct U3CU3Ec__DisplayClass312_0_t8B53532CBB674C9C4A205E500AF75D8FD1211FD3  : public RuntimeObject
{
public:
	// System.Int32* NumSharp.NDArray/<>c__DisplayClass312_0::idxAddr
	int32_t* ___idxAddr_0;
	// System.Int32 NumSharp.NDArray/<>c__DisplayClass312_0::dimensionSize
	int32_t ___dimensionSize_1;

public:
	inline static int32_t get_offset_of_idxAddr_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass312_0_t8B53532CBB674C9C4A205E500AF75D8FD1211FD3, ___idxAddr_0)); }
	inline int32_t* get_idxAddr_0() const { return ___idxAddr_0; }
	inline int32_t** get_address_of_idxAddr_0() { return &___idxAddr_0; }
	inline void set_idxAddr_0(int32_t* value)
	{
		___idxAddr_0 = value;
	}

	inline static int32_t get_offset_of_dimensionSize_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass312_0_t8B53532CBB674C9C4A205E500AF75D8FD1211FD3, ___dimensionSize_1)); }
	inline int32_t get_dimensionSize_1() const { return ___dimensionSize_1; }
	inline int32_t* get_address_of_dimensionSize_1() { return &___dimensionSize_1; }
	inline void set_dimensionSize_1(int32_t value)
	{
		___dimensionSize_1 = value;
	}
};


// NumSharp.NDArray/<>c__DisplayClass312_1
struct U3CU3Ec__DisplayClass312_1_t1F1502C4CCC52DEA873E43FF12F3633DF65E8457  : public RuntimeObject
{
public:
	// System.Func`2<System.Int32,System.Int32> NumSharp.NDArray/<>c__DisplayClass312_1::offset
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___offset_0;
	// NumSharp.NDArray/<>c__DisplayClass312_0 NumSharp.NDArray/<>c__DisplayClass312_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass312_0_t8B53532CBB674C9C4A205E500AF75D8FD1211FD3 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass312_1_t1F1502C4CCC52DEA873E43FF12F3633DF65E8457, ___offset_0)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_offset_0() const { return ___offset_0; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___offset_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offset_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass312_1_t1F1502C4CCC52DEA873E43FF12F3633DF65E8457, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass312_0_t8B53532CBB674C9C4A205E500AF75D8FD1211FD3 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass312_0_t8B53532CBB674C9C4A205E500AF75D8FD1211FD3 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass312_0_t8B53532CBB674C9C4A205E500AF75D8FD1211FD3 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// NumSharp.NDArray/<>c__DisplayClass327_0
struct U3CU3Ec__DisplayClass327_0_t66C4F6B764D9188734774F0C5D90EEECF5C8244C  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerable`1<System.Int32> NumSharp.NDArray/<>c__DisplayClass327_0::previousStep
	RuntimeObject* ___previousStep_0;
	// System.Int32[] NumSharp.NDArray/<>c__DisplayClass327_0::originalIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___originalIndices_1;
	// System.Int32 NumSharp.NDArray/<>c__DisplayClass327_0::currentStep
	int32_t ___currentStep_2;

public:
	inline static int32_t get_offset_of_previousStep_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass327_0_t66C4F6B764D9188734774F0C5D90EEECF5C8244C, ___previousStep_0)); }
	inline RuntimeObject* get_previousStep_0() const { return ___previousStep_0; }
	inline RuntimeObject** get_address_of_previousStep_0() { return &___previousStep_0; }
	inline void set_previousStep_0(RuntimeObject* value)
	{
		___previousStep_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousStep_0), (void*)value);
	}

	inline static int32_t get_offset_of_originalIndices_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass327_0_t66C4F6B764D9188734774F0C5D90EEECF5C8244C, ___originalIndices_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_originalIndices_1() const { return ___originalIndices_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_originalIndices_1() { return &___originalIndices_1; }
	inline void set_originalIndices_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___originalIndices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalIndices_1), (void*)value);
	}

	inline static int32_t get_offset_of_currentStep_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass327_0_t66C4F6B764D9188734774F0C5D90EEECF5C8244C, ___currentStep_2)); }
	inline int32_t get_currentStep_2() const { return ___currentStep_2; }
	inline int32_t* get_address_of_currentStep_2() { return &___currentStep_2; }
	inline void set_currentStep_2(int32_t value)
	{
		___currentStep_2 = value;
	}
};


// NumSharp.NDArray/<ExpandEllipsis>d__309
struct U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.NDArray/<ExpandEllipsis>d__309::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NumSharp.NDArray/<ExpandEllipsis>d__309::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 NumSharp.NDArray/<ExpandEllipsis>d__309::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Object[] NumSharp.NDArray/<ExpandEllipsis>d__309::ndarrays
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___ndarrays_3;
	// System.Object[] NumSharp.NDArray/<ExpandEllipsis>d__309::<>3__ndarrays
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___U3CU3E3__ndarrays_4;
	// System.Int32 NumSharp.NDArray/<ExpandEllipsis>d__309::ndim
	int32_t ___ndim_5;
	// System.Int32 NumSharp.NDArray/<ExpandEllipsis>d__309::<>3__ndim
	int32_t ___U3CU3E3__ndim_6;
	// System.Int32 NumSharp.NDArray/<ExpandEllipsis>d__309::<count>5__2
	int32_t ___U3CcountU3E5__2_7;
	// System.Int32 NumSharp.NDArray/<ExpandEllipsis>d__309::<i>5__3
	int32_t ___U3CiU3E5__3_8;
	// System.Int32 NumSharp.NDArray/<ExpandEllipsis>d__309::<j>5__4
	int32_t ___U3CjU3E5__4_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_ndarrays_3() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251, ___ndarrays_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_ndarrays_3() const { return ___ndarrays_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_ndarrays_3() { return &___ndarrays_3; }
	inline void set_ndarrays_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___ndarrays_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ndarrays_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__ndarrays_4() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251, ___U3CU3E3__ndarrays_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_U3CU3E3__ndarrays_4() const { return ___U3CU3E3__ndarrays_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_U3CU3E3__ndarrays_4() { return &___U3CU3E3__ndarrays_4; }
	inline void set_U3CU3E3__ndarrays_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___U3CU3E3__ndarrays_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__ndarrays_4), (void*)value);
	}

	inline static int32_t get_offset_of_ndim_5() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251, ___ndim_5)); }
	inline int32_t get_ndim_5() const { return ___ndim_5; }
	inline int32_t* get_address_of_ndim_5() { return &___ndim_5; }
	inline void set_ndim_5(int32_t value)
	{
		___ndim_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__ndim_6() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251, ___U3CU3E3__ndim_6)); }
	inline int32_t get_U3CU3E3__ndim_6() const { return ___U3CU3E3__ndim_6; }
	inline int32_t* get_address_of_U3CU3E3__ndim_6() { return &___U3CU3E3__ndim_6; }
	inline void set_U3CU3E3__ndim_6(int32_t value)
	{
		___U3CU3E3__ndim_6 = value;
	}

	inline static int32_t get_offset_of_U3CcountU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251, ___U3CcountU3E5__2_7)); }
	inline int32_t get_U3CcountU3E5__2_7() const { return ___U3CcountU3E5__2_7; }
	inline int32_t* get_address_of_U3CcountU3E5__2_7() { return &___U3CcountU3E5__2_7; }
	inline void set_U3CcountU3E5__2_7(int32_t value)
	{
		___U3CcountU3E5__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251, ___U3CiU3E5__3_8)); }
	inline int32_t get_U3CiU3E5__3_8() const { return ___U3CiU3E5__3_8; }
	inline int32_t* get_address_of_U3CiU3E5__3_8() { return &___U3CiU3E5__3_8; }
	inline void set_U3CiU3E5__3_8(int32_t value)
	{
		___U3CiU3E5__3_8 = value;
	}

	inline static int32_t get_offset_of_U3CjU3E5__4_9() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251, ___U3CjU3E5__4_9)); }
	inline int32_t get_U3CjU3E5__4_9() const { return ___U3CjU3E5__4_9; }
	inline int32_t* get_address_of_U3CjU3E5__4_9() { return &___U3CjU3E5__4_9; }
	inline void set_U3CjU3E5__4_9(int32_t value)
	{
		___U3CjU3E5__4_9 = value;
	}
};


// NumSharp.NDArray/SortedData
struct SortedData_tCCCC53DC4B357101BA6148DBDB17F70FB3C41176  : public RuntimeObject
{
public:
	// System.Int32[] NumSharp.NDArray/SortedData::<DataAccessor>k__BackingField
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CDataAccessorU3Ek__BackingField_0;
	// System.Int32 NumSharp.NDArray/SortedData::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CDataAccessorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SortedData_tCCCC53DC4B357101BA6148DBDB17F70FB3C41176, ___U3CDataAccessorU3Ek__BackingField_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CDataAccessorU3Ek__BackingField_0() const { return ___U3CDataAccessorU3Ek__BackingField_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CDataAccessorU3Ek__BackingField_0() { return &___U3CDataAccessorU3Ek__BackingField_0; }
	inline void set_U3CDataAccessorU3Ek__BackingField_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CDataAccessorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataAccessorU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SortedData_tCCCC53DC4B357101BA6148DBDB17F70FB3C41176, ___U3CIndexU3Ek__BackingField_1)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_1() const { return ___U3CIndexU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_1() { return &___U3CIndexU3Ek__BackingField_1; }
	inline void set_U3CIndexU3Ek__BackingField_1(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_1 = value;
	}
};


// NumSharp.Utilities.NDOffsetIncrementorAutoresetting/<>c
struct U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6_StaticFields
{
public:
	// NumSharp.Utilities.NDOffsetIncrementorAutoresetting/<>c NumSharp.Utilities.NDOffsetIncrementorAutoresetting/<>c::<>9
	U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6 * ___U3CU3E9_0;
	// System.Action`1<NumSharp.Utilities.NDCoordinatesIncrementor> NumSharp.Utilities.NDOffsetIncrementorAutoresetting/<>c::<>9__3_0
	Action_1_t87DAD15E519AA96E656941B58137C0D6394DE29F * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Action_1_t87DAD15E519AA96E656941B58137C0D6394DE29F * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Action_1_t87DAD15E519AA96E656941B58137C0D6394DE29F ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Action_1_t87DAD15E519AA96E656941B58137C0D6394DE29F * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// NumSharp.Shape/<>c__DisplayClass65_0
struct U3CU3Ec__DisplayClass65_0_t474EC1690A768C6726AF2A3B143930744FE4CADB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<NumSharp.SliceDef> NumSharp.Shape/<>c__DisplayClass65_0::slices
	List_1_tD2C9719D045E8822B51CF40821A6EE5947727773 * ___slices_0;

public:
	inline static int32_t get_offset_of_slices_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass65_0_t474EC1690A768C6726AF2A3B143930744FE4CADB, ___slices_0)); }
	inline List_1_tD2C9719D045E8822B51CF40821A6EE5947727773 * get_slices_0() const { return ___slices_0; }
	inline List_1_tD2C9719D045E8822B51CF40821A6EE5947727773 ** get_address_of_slices_0() { return &___slices_0; }
	inline void set_slices_0(List_1_tD2C9719D045E8822B51CF40821A6EE5947727773 * value)
	{
		___slices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slices_0), (void*)value);
	}
};


// NumSharp.Slice/<>c
struct U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA_StaticFields
{
public:
	// NumSharp.Slice/<>c NumSharp.Slice/<>c::<>9
	U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> NumSharp.Slice/<>c::<>9__15_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__15_0_1;
	// System.Func`2<System.String,NumSharp.Slice> NumSharp.Slice/<>c::<>9__15_1
	Func_2_tE05337A1B3F9F8182B40F4986F48F11EA3C37473 * ___U3CU3E9__15_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA_StaticFields, ___U3CU3E9__15_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__15_0_1() const { return ___U3CU3E9__15_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__15_0_1() { return &___U3CU3E9__15_0_1; }
	inline void set_U3CU3E9__15_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__15_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA_StaticFields, ___U3CU3E9__15_1_2)); }
	inline Func_2_tE05337A1B3F9F8182B40F4986F48F11EA3C37473 * get_U3CU3E9__15_1_2() const { return ___U3CU3E9__15_1_2; }
	inline Func_2_tE05337A1B3F9F8182B40F4986F48F11EA3C37473 ** get_address_of_U3CU3E9__15_1_2() { return &___U3CU3E9__15_1_2; }
	inline void set_U3CU3E9__15_1_2(Func_2_tE05337A1B3F9F8182B40F4986F48F11EA3C37473 * value)
	{
		___U3CU3E9__15_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_1_2), (void*)value);
	}
};


// NumSharp.Unmanaged.Memory.StackedMemoryPool/<>c
struct U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537_StaticFields
{
public:
	// NumSharp.Unmanaged.Memory.StackedMemoryPool/<>c NumSharp.Unmanaged.Memory.StackedMemoryPool/<>c::<>9
	U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// NumSharp.Unmanaged.Memory.StackedMemoryPool/GCContext
struct GCContext_tD63C26352ECDB85962BA928959E7E570A61CD511  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Unmanaged.Memory.StackedMemoryPool/GCContext::LastAvailablePtrs
	int32_t ___LastAvailablePtrs_0;
	// System.Int32 NumSharp.Unmanaged.Memory.StackedMemoryPool/GCContext::Restarts
	int32_t ___Restarts_1;
	// System.Boolean NumSharp.Unmanaged.Memory.StackedMemoryPool/GCContext::Immediate
	bool ___Immediate_2;

public:
	inline static int32_t get_offset_of_LastAvailablePtrs_0() { return static_cast<int32_t>(offsetof(GCContext_tD63C26352ECDB85962BA928959E7E570A61CD511, ___LastAvailablePtrs_0)); }
	inline int32_t get_LastAvailablePtrs_0() const { return ___LastAvailablePtrs_0; }
	inline int32_t* get_address_of_LastAvailablePtrs_0() { return &___LastAvailablePtrs_0; }
	inline void set_LastAvailablePtrs_0(int32_t value)
	{
		___LastAvailablePtrs_0 = value;
	}

	inline static int32_t get_offset_of_Restarts_1() { return static_cast<int32_t>(offsetof(GCContext_tD63C26352ECDB85962BA928959E7E570A61CD511, ___Restarts_1)); }
	inline int32_t get_Restarts_1() const { return ___Restarts_1; }
	inline int32_t* get_address_of_Restarts_1() { return &___Restarts_1; }
	inline void set_Restarts_1(int32_t value)
	{
		___Restarts_1 = value;
	}

	inline static int32_t get_offset_of_Immediate_2() { return static_cast<int32_t>(offsetof(GCContext_tD63C26352ECDB85962BA928959E7E570A61CD511, ___Immediate_2)); }
	inline bool get_Immediate_2() const { return ___Immediate_2; }
	inline bool* get_address_of_Immediate_2() { return &___Immediate_2; }
	inline void set_Immediate_2(bool value)
	{
		___Immediate_2 = value;
	}
};


// NumSharp.Backends.UnmanagedStorage/<>c
struct U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562_StaticFields
{
public:
	// NumSharp.Backends.UnmanagedStorage/<>c NumSharp.Backends.UnmanagedStorage/<>c::<>9
	U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562 * ___U3CU3E9_0;
	// System.Func`2<NumSharp.Slice,System.Boolean> NumSharp.Backends.UnmanagedStorage/<>c::<>9__135_0
	Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * ___U3CU3E9__135_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__135_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562_StaticFields, ___U3CU3E9__135_0_1)); }
	inline Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * get_U3CU3E9__135_0_1() const { return ___U3CU3E9__135_0_1; }
	inline Func_2_t82951254BC5366DC7343E8EF62B1955768995472 ** get_address_of_U3CU3E9__135_0_1() { return &___U3CU3E9__135_0_1; }
	inline void set_U3CU3E9__135_0_1(Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * value)
	{
		___U3CU3E9__135_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__135_0_1), (void*)value);
	}
};


// NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136
struct U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F  : public RuntimeObject
{
public:
	// System.Int32 NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::<>1__state
	int32_t ___U3CU3E1__state_0;
	// NumSharp.Slice NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::<>2__current
	Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * ___U3CU3E2__current_1;
	// System.Int32 NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// NumSharp.Slice[] NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::slices
	SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* ___slices_3;
	// NumSharp.Slice[] NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::<>3__slices
	SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* ___U3CU3E3__slices_4;
	// NumSharp.Backends.UnmanagedStorage NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::<>4__this
	UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F * ___U3CU3E4__this_5;
	// System.Int32 NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::<count>5__2
	int32_t ___U3CcountU3E5__2_6;
	// NumSharp.Slice[] NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::<>7__wrap2
	SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* ___U3CU3E7__wrap2_7;
	// System.Int32 NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_8;
	// System.Int32 NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::<i>5__5
	int32_t ___U3CiU3E5__5_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F, ___U3CU3E2__current_1)); }
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_slices_3() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F, ___slices_3)); }
	inline SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* get_slices_3() const { return ___slices_3; }
	inline SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1** get_address_of_slices_3() { return &___slices_3; }
	inline void set_slices_3(SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* value)
	{
		___slices_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slices_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__slices_4() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F, ___U3CU3E3__slices_4)); }
	inline SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* get_U3CU3E3__slices_4() const { return ___U3CU3E3__slices_4; }
	inline SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1** get_address_of_U3CU3E3__slices_4() { return &___U3CU3E3__slices_4; }
	inline void set_U3CU3E3__slices_4(SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* value)
	{
		___U3CU3E3__slices_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__slices_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F, ___U3CU3E4__this_5)); }
	inline UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F, ___U3CcountU3E5__2_6)); }
	inline int32_t get_U3CcountU3E5__2_6() const { return ___U3CcountU3E5__2_6; }
	inline int32_t* get_address_of_U3CcountU3E5__2_6() { return &___U3CcountU3E5__2_6; }
	inline void set_U3CcountU3E5__2_6(int32_t value)
	{
		___U3CcountU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_7() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F, ___U3CU3E7__wrap2_7)); }
	inline SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* get_U3CU3E7__wrap2_7() const { return ___U3CU3E7__wrap2_7; }
	inline SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1** get_address_of_U3CU3E7__wrap2_7() { return &___U3CU3E7__wrap2_7; }
	inline void set_U3CU3E7__wrap2_7(SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* value)
	{
		___U3CU3E7__wrap2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_8() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F, ___U3CU3E7__wrap3_8)); }
	inline int32_t get_U3CU3E7__wrap3_8() const { return ___U3CU3E7__wrap3_8; }
	inline int32_t* get_address_of_U3CU3E7__wrap3_8() { return &___U3CU3E7__wrap3_8; }
	inline void set_U3CU3E7__wrap3_8(int32_t value)
	{
		___U3CU3E7__wrap3_8 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F, ___U3CiU3E5__5_9)); }
	inline int32_t get_U3CiU3E5__5_9() const { return ___U3CiU3E5__5_9; }
	inline int32_t* get_address_of_U3CiU3E5__5_9() { return &___U3CiU3E5__5_9; }
	inline void set_U3CiU3E5__5_9(int32_t value)
	{
		___U3CiU3E5__5_9 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<System.Boolean>
struct UnmanagedMemoryBlock_1_tE27806A4BDD914C5E213B1304BA255D685F11E97 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<T> NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::_disposer
	Disposer_t1378F6DA316BDBB918774531DFD00CAA57F8DC4D * ____disposer_0;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Count
	int64_t ___Count_1;
	// T* NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Address
	bool* ___Address_2;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::BytesCount
	int64_t ___BytesCount_3;

public:
	inline static int32_t get_offset_of__disposer_0() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_tE27806A4BDD914C5E213B1304BA255D685F11E97, ____disposer_0)); }
	inline Disposer_t1378F6DA316BDBB918774531DFD00CAA57F8DC4D * get__disposer_0() const { return ____disposer_0; }
	inline Disposer_t1378F6DA316BDBB918774531DFD00CAA57F8DC4D ** get_address_of__disposer_0() { return &____disposer_0; }
	inline void set__disposer_0(Disposer_t1378F6DA316BDBB918774531DFD00CAA57F8DC4D * value)
	{
		____disposer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_tE27806A4BDD914C5E213B1304BA255D685F11E97, ___Count_1)); }
	inline int64_t get_Count_1() const { return ___Count_1; }
	inline int64_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int64_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_tE27806A4BDD914C5E213B1304BA255D685F11E97, ___Address_2)); }
	inline bool* get_Address_2() const { return ___Address_2; }
	inline bool** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(bool* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_BytesCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_tE27806A4BDD914C5E213B1304BA255D685F11E97, ___BytesCount_3)); }
	inline int64_t get_BytesCount_3() const { return ___BytesCount_3; }
	inline int64_t* get_address_of_BytesCount_3() { return &___BytesCount_3; }
	inline void set_BytesCount_3(int64_t value)
	{
		___BytesCount_3 = value;
	}
};


// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<System.Byte>
struct UnmanagedMemoryBlock_1_t0AD2E10DE36B3372ADFA6CC2CB6D3C5256D090CC 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<T> NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::_disposer
	Disposer_tB4CC063B14648855C767E2CC209FC7A33DBA2C70 * ____disposer_0;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Count
	int64_t ___Count_1;
	// T* NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Address
	uint8_t* ___Address_2;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::BytesCount
	int64_t ___BytesCount_3;

public:
	inline static int32_t get_offset_of__disposer_0() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t0AD2E10DE36B3372ADFA6CC2CB6D3C5256D090CC, ____disposer_0)); }
	inline Disposer_tB4CC063B14648855C767E2CC209FC7A33DBA2C70 * get__disposer_0() const { return ____disposer_0; }
	inline Disposer_tB4CC063B14648855C767E2CC209FC7A33DBA2C70 ** get_address_of__disposer_0() { return &____disposer_0; }
	inline void set__disposer_0(Disposer_tB4CC063B14648855C767E2CC209FC7A33DBA2C70 * value)
	{
		____disposer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t0AD2E10DE36B3372ADFA6CC2CB6D3C5256D090CC, ___Count_1)); }
	inline int64_t get_Count_1() const { return ___Count_1; }
	inline int64_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int64_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t0AD2E10DE36B3372ADFA6CC2CB6D3C5256D090CC, ___Address_2)); }
	inline uint8_t* get_Address_2() const { return ___Address_2; }
	inline uint8_t** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(uint8_t* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_BytesCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t0AD2E10DE36B3372ADFA6CC2CB6D3C5256D090CC, ___BytesCount_3)); }
	inline int64_t get_BytesCount_3() const { return ___BytesCount_3; }
	inline int64_t* get_address_of_BytesCount_3() { return &___BytesCount_3; }
	inline void set_BytesCount_3(int64_t value)
	{
		___BytesCount_3 = value;
	}
};


// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<System.Char>
struct UnmanagedMemoryBlock_1_t56E325A9168909DFB634870FB2EC632F4C6061FE 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<T> NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::_disposer
	Disposer_t814AEA35F95BD889923F9940B42489FF9230C505 * ____disposer_0;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Count
	int64_t ___Count_1;
	// T* NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Address
	Il2CppChar* ___Address_2;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::BytesCount
	int64_t ___BytesCount_3;

public:
	inline static int32_t get_offset_of__disposer_0() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t56E325A9168909DFB634870FB2EC632F4C6061FE, ____disposer_0)); }
	inline Disposer_t814AEA35F95BD889923F9940B42489FF9230C505 * get__disposer_0() const { return ____disposer_0; }
	inline Disposer_t814AEA35F95BD889923F9940B42489FF9230C505 ** get_address_of__disposer_0() { return &____disposer_0; }
	inline void set__disposer_0(Disposer_t814AEA35F95BD889923F9940B42489FF9230C505 * value)
	{
		____disposer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t56E325A9168909DFB634870FB2EC632F4C6061FE, ___Count_1)); }
	inline int64_t get_Count_1() const { return ___Count_1; }
	inline int64_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int64_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t56E325A9168909DFB634870FB2EC632F4C6061FE, ___Address_2)); }
	inline Il2CppChar* get_Address_2() const { return ___Address_2; }
	inline Il2CppChar** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Il2CppChar* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_BytesCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t56E325A9168909DFB634870FB2EC632F4C6061FE, ___BytesCount_3)); }
	inline int64_t get_BytesCount_3() const { return ___BytesCount_3; }
	inline int64_t* get_address_of_BytesCount_3() { return &___BytesCount_3; }
	inline void set_BytesCount_3(int64_t value)
	{
		___BytesCount_3 = value;
	}
};


// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<System.Double>
struct UnmanagedMemoryBlock_1_tD105C9B18EBD4DF1529888BE9023BA088EE7D368 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<T> NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::_disposer
	Disposer_tFB1223A7390EACEFC738323A237F97E30C72344A * ____disposer_0;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Count
	int64_t ___Count_1;
	// T* NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Address
	double* ___Address_2;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::BytesCount
	int64_t ___BytesCount_3;

public:
	inline static int32_t get_offset_of__disposer_0() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_tD105C9B18EBD4DF1529888BE9023BA088EE7D368, ____disposer_0)); }
	inline Disposer_tFB1223A7390EACEFC738323A237F97E30C72344A * get__disposer_0() const { return ____disposer_0; }
	inline Disposer_tFB1223A7390EACEFC738323A237F97E30C72344A ** get_address_of__disposer_0() { return &____disposer_0; }
	inline void set__disposer_0(Disposer_tFB1223A7390EACEFC738323A237F97E30C72344A * value)
	{
		____disposer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_tD105C9B18EBD4DF1529888BE9023BA088EE7D368, ___Count_1)); }
	inline int64_t get_Count_1() const { return ___Count_1; }
	inline int64_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int64_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_tD105C9B18EBD4DF1529888BE9023BA088EE7D368, ___Address_2)); }
	inline double* get_Address_2() const { return ___Address_2; }
	inline double** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(double* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_BytesCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_tD105C9B18EBD4DF1529888BE9023BA088EE7D368, ___BytesCount_3)); }
	inline int64_t get_BytesCount_3() const { return ___BytesCount_3; }
	inline int64_t* get_address_of_BytesCount_3() { return &___BytesCount_3; }
	inline void set_BytesCount_3(int64_t value)
	{
		___BytesCount_3 = value;
	}
};


// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<System.Int32>
struct UnmanagedMemoryBlock_1_tE80266F90AA0609ADBBD1AC6780846208DD54163 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<T> NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::_disposer
	Disposer_t37481D22F4BA2AD9F6285C812BAE15329EA2BBB9 * ____disposer_0;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Count
	int64_t ___Count_1;
	// T* NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Address
	int32_t* ___Address_2;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::BytesCount
	int64_t ___BytesCount_3;

public:
	inline static int32_t get_offset_of__disposer_0() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_tE80266F90AA0609ADBBD1AC6780846208DD54163, ____disposer_0)); }
	inline Disposer_t37481D22F4BA2AD9F6285C812BAE15329EA2BBB9 * get__disposer_0() const { return ____disposer_0; }
	inline Disposer_t37481D22F4BA2AD9F6285C812BAE15329EA2BBB9 ** get_address_of__disposer_0() { return &____disposer_0; }
	inline void set__disposer_0(Disposer_t37481D22F4BA2AD9F6285C812BAE15329EA2BBB9 * value)
	{
		____disposer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_tE80266F90AA0609ADBBD1AC6780846208DD54163, ___Count_1)); }
	inline int64_t get_Count_1() const { return ___Count_1; }
	inline int64_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int64_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_tE80266F90AA0609ADBBD1AC6780846208DD54163, ___Address_2)); }
	inline int32_t* get_Address_2() const { return ___Address_2; }
	inline int32_t** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(int32_t* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_BytesCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_tE80266F90AA0609ADBBD1AC6780846208DD54163, ___BytesCount_3)); }
	inline int64_t get_BytesCount_3() const { return ___BytesCount_3; }
	inline int64_t* get_address_of_BytesCount_3() { return &___BytesCount_3; }
	inline void set_BytesCount_3(int64_t value)
	{
		___BytesCount_3 = value;
	}
};


// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<System.Int64>
struct UnmanagedMemoryBlock_1_t0FCDD561A708D414BBBAF35E756BEC417C8A3CD0 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<T> NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::_disposer
	Disposer_t010D6AEB2FE882E825597FB5E2613C1C700A82B8 * ____disposer_0;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Count
	int64_t ___Count_1;
	// T* NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Address
	int64_t* ___Address_2;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::BytesCount
	int64_t ___BytesCount_3;

public:
	inline static int32_t get_offset_of__disposer_0() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t0FCDD561A708D414BBBAF35E756BEC417C8A3CD0, ____disposer_0)); }
	inline Disposer_t010D6AEB2FE882E825597FB5E2613C1C700A82B8 * get__disposer_0() const { return ____disposer_0; }
	inline Disposer_t010D6AEB2FE882E825597FB5E2613C1C700A82B8 ** get_address_of__disposer_0() { return &____disposer_0; }
	inline void set__disposer_0(Disposer_t010D6AEB2FE882E825597FB5E2613C1C700A82B8 * value)
	{
		____disposer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t0FCDD561A708D414BBBAF35E756BEC417C8A3CD0, ___Count_1)); }
	inline int64_t get_Count_1() const { return ___Count_1; }
	inline int64_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int64_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t0FCDD561A708D414BBBAF35E756BEC417C8A3CD0, ___Address_2)); }
	inline int64_t* get_Address_2() const { return ___Address_2; }
	inline int64_t** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(int64_t* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_BytesCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t0FCDD561A708D414BBBAF35E756BEC417C8A3CD0, ___BytesCount_3)); }
	inline int64_t get_BytesCount_3() const { return ___BytesCount_3; }
	inline int64_t* get_address_of_BytesCount_3() { return &___BytesCount_3; }
	inline void set_BytesCount_3(int64_t value)
	{
		___BytesCount_3 = value;
	}
};


// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<System.Single>
struct UnmanagedMemoryBlock_1_t8CABF944C66E4CECFF865C637BD27B8DE0CCB97C 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1/Disposer<T> NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::_disposer
	Disposer_tCA2CC1E284D64F80F5130FE74C00BC517225DE00 * ____disposer_0;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Count
	int64_t ___Count_1;
	// T* NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::Address
	float* ___Address_2;
	// System.Int64 NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1::BytesCount
	int64_t ___BytesCount_3;

public:
	inline static int32_t get_offset_of__disposer_0() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t8CABF944C66E4CECFF865C637BD27B8DE0CCB97C, ____disposer_0)); }
	inline Disposer_tCA2CC1E284D64F80F5130FE74C00BC517225DE00 * get__disposer_0() const { return ____disposer_0; }
	inline Disposer_tCA2CC1E284D64F80F5130FE74C00BC517225DE00 ** get_address_of__disposer_0() { return &____disposer_0; }
	inline void set__disposer_0(Disposer_tCA2CC1E284D64F80F5130FE74C00BC517225DE00 * value)
	{
		____disposer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t8CABF944C66E4CECFF865C637BD27B8DE0CCB97C, ___Count_1)); }
	inline int64_t get_Count_1() const { return ___Count_1; }
	inline int64_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int64_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t8CABF944C66E4CECFF865C637BD27B8DE0CCB97C, ___Address_2)); }
	inline float* get_Address_2() const { return ___Address_2; }
	inline float** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(float* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_BytesCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemoryBlock_1_t8CABF944C66E4CECFF865C637BD27B8DE0CCB97C, ___BytesCount_3)); }
	inline int64_t get_BytesCount_3() const { return ___BytesCount_3; }
	inline int64_t* get_address_of_BytesCount_3() { return &___BytesCount_3; }
	inline void set_BytesCount_3(int64_t value)
	{
		___BytesCount_3 = value;
	}
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


// System.Numerics.Complex
struct Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C 
{
public:
	// System.Double System.Numerics.Complex::m_real
	double ___m_real_6;
	// System.Double System.Numerics.Complex::m_imaginary
	double ___m_imaginary_7;

public:
	inline static int32_t get_offset_of_m_real_6() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C, ___m_real_6)); }
	inline double get_m_real_6() const { return ___m_real_6; }
	inline double* get_address_of_m_real_6() { return &___m_real_6; }
	inline void set_m_real_6(double value)
	{
		___m_real_6 = value;
	}

	inline static int32_t get_offset_of_m_imaginary_7() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C, ___m_imaginary_7)); }
	inline double get_m_imaginary_7() const { return ___m_imaginary_7; }
	inline double* get_address_of_m_imaginary_7() { return &___m_imaginary_7; }
	inline void set_m_imaginary_7(double value)
	{
		___m_imaginary_7 = value;
	}
};

struct Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields
{
public:
	// System.Numerics.Complex System.Numerics.Complex::Zero
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___Zero_0;
	// System.Numerics.Complex System.Numerics.Complex::One
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___One_1;
	// System.Numerics.Complex System.Numerics.Complex::ImaginaryOne
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___ImaginaryOne_2;
	// System.Double System.Numerics.Complex::s_sqrtRescaleThreshold
	double ___s_sqrtRescaleThreshold_3;
	// System.Double System.Numerics.Complex::s_asinOverflowThreshold
	double ___s_asinOverflowThreshold_4;
	// System.Double System.Numerics.Complex::s_log2
	double ___s_log2_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields, ___Zero_0)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_Zero_0() const { return ___Zero_0; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_One_1() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields, ___One_1)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_One_1() const { return ___One_1; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_One_1() { return &___One_1; }
	inline void set_One_1(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___One_1 = value;
	}

	inline static int32_t get_offset_of_ImaginaryOne_2() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields, ___ImaginaryOne_2)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_ImaginaryOne_2() const { return ___ImaginaryOne_2; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_ImaginaryOne_2() { return &___ImaginaryOne_2; }
	inline void set_ImaginaryOne_2(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___ImaginaryOne_2 = value;
	}

	inline static int32_t get_offset_of_s_sqrtRescaleThreshold_3() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields, ___s_sqrtRescaleThreshold_3)); }
	inline double get_s_sqrtRescaleThreshold_3() const { return ___s_sqrtRescaleThreshold_3; }
	inline double* get_address_of_s_sqrtRescaleThreshold_3() { return &___s_sqrtRescaleThreshold_3; }
	inline void set_s_sqrtRescaleThreshold_3(double value)
	{
		___s_sqrtRescaleThreshold_3 = value;
	}

	inline static int32_t get_offset_of_s_asinOverflowThreshold_4() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields, ___s_asinOverflowThreshold_4)); }
	inline double get_s_asinOverflowThreshold_4() const { return ___s_asinOverflowThreshold_4; }
	inline double* get_address_of_s_asinOverflowThreshold_4() { return &___s_asinOverflowThreshold_4; }
	inline void set_s_asinOverflowThreshold_4(double value)
	{
		___s_asinOverflowThreshold_4 = value;
	}

	inline static int32_t get_offset_of_s_log2_5() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields, ___s_log2_5)); }
	inline double get_s_log2_5() const { return ___s_log2_5; }
	inline double* get_address_of_s_log2_5() { return &___s_log2_5; }
	inline void set_s_log2_5(double value)
	{
		___s_log2_5 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// NumSharp.Shape
struct Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E 
{
public:
	// NumSharp.ViewInfo NumSharp.Shape::ViewInfo
	ViewInfo_tEEA658FC0685403FAE44E4B6C61841FEA7B4757E * ___ViewInfo_0;
	// NumSharp.BroadcastInfo NumSharp.Shape::BroadcastInfo
	BroadcastInfo_t10BE37F5BCFC00F1FF022F7DAD5F86E4C2A66019 * ___BroadcastInfo_1;
	// System.Boolean NumSharp.Shape::ModifiedStrides
	bool ___ModifiedStrides_2;
	// System.Int32 NumSharp.Shape::_hashCode
	int32_t ____hashCode_3;
	// System.Int32 NumSharp.Shape::size
	int32_t ___size_4;
	// System.Int32[] NumSharp.Shape::dimensions
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___dimensions_5;
	// System.Int32[] NumSharp.Shape::strides
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___strides_6;
	// System.Boolean NumSharp.Shape::IsScalar
	bool ___IsScalar_7;

public:
	inline static int32_t get_offset_of_ViewInfo_0() { return static_cast<int32_t>(offsetof(Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E, ___ViewInfo_0)); }
	inline ViewInfo_tEEA658FC0685403FAE44E4B6C61841FEA7B4757E * get_ViewInfo_0() const { return ___ViewInfo_0; }
	inline ViewInfo_tEEA658FC0685403FAE44E4B6C61841FEA7B4757E ** get_address_of_ViewInfo_0() { return &___ViewInfo_0; }
	inline void set_ViewInfo_0(ViewInfo_tEEA658FC0685403FAE44E4B6C61841FEA7B4757E * value)
	{
		___ViewInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ViewInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_BroadcastInfo_1() { return static_cast<int32_t>(offsetof(Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E, ___BroadcastInfo_1)); }
	inline BroadcastInfo_t10BE37F5BCFC00F1FF022F7DAD5F86E4C2A66019 * get_BroadcastInfo_1() const { return ___BroadcastInfo_1; }
	inline BroadcastInfo_t10BE37F5BCFC00F1FF022F7DAD5F86E4C2A66019 ** get_address_of_BroadcastInfo_1() { return &___BroadcastInfo_1; }
	inline void set_BroadcastInfo_1(BroadcastInfo_t10BE37F5BCFC00F1FF022F7DAD5F86E4C2A66019 * value)
	{
		___BroadcastInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BroadcastInfo_1), (void*)value);
	}

	inline static int32_t get_offset_of_ModifiedStrides_2() { return static_cast<int32_t>(offsetof(Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E, ___ModifiedStrides_2)); }
	inline bool get_ModifiedStrides_2() const { return ___ModifiedStrides_2; }
	inline bool* get_address_of_ModifiedStrides_2() { return &___ModifiedStrides_2; }
	inline void set_ModifiedStrides_2(bool value)
	{
		___ModifiedStrides_2 = value;
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E, ___size_4)); }
	inline int32_t get_size_4() const { return ___size_4; }
	inline int32_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(int32_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_dimensions_5() { return static_cast<int32_t>(offsetof(Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E, ___dimensions_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_dimensions_5() const { return ___dimensions_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_dimensions_5() { return &___dimensions_5; }
	inline void set_dimensions_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___dimensions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dimensions_5), (void*)value);
	}

	inline static int32_t get_offset_of_strides_6() { return static_cast<int32_t>(offsetof(Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E, ___strides_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_strides_6() const { return ___strides_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_strides_6() { return &___strides_6; }
	inline void set_strides_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___strides_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strides_6), (void*)value);
	}

	inline static int32_t get_offset_of_IsScalar_7() { return static_cast<int32_t>(offsetof(Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E, ___IsScalar_7)); }
	inline bool get_IsScalar_7() const { return ___IsScalar_7; }
	inline bool* get_address_of_IsScalar_7() { return &___IsScalar_7; }
	inline void set_IsScalar_7(bool value)
	{
		___IsScalar_7 = value;
	}
};

struct Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E_StaticFields
{
public:
	// NumSharp.Shape NumSharp.Shape::Scalar
	Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E  ___Scalar_8;

public:
	inline static int32_t get_offset_of_Scalar_8() { return static_cast<int32_t>(offsetof(Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E_StaticFields, ___Scalar_8)); }
	inline Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E  get_Scalar_8() const { return ___Scalar_8; }
	inline Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E * get_address_of_Scalar_8() { return &___Scalar_8; }
	inline void set_Scalar_8(Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E  value)
	{
		___Scalar_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Scalar_8))->___ViewInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Scalar_8))->___BroadcastInfo_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Scalar_8))->___dimensions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Scalar_8))->___strides_6), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of NumSharp.Shape
struct Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E_marshaled_pinvoke
{
	ViewInfo_tEEA658FC0685403FAE44E4B6C61841FEA7B4757E * ___ViewInfo_0;
	BroadcastInfo_t10BE37F5BCFC00F1FF022F7DAD5F86E4C2A66019 * ___BroadcastInfo_1;
	int32_t ___ModifiedStrides_2;
	int32_t ____hashCode_3;
	int32_t ___size_4;
	Il2CppSafeArray/*NONE*/* ___dimensions_5;
	Il2CppSafeArray/*NONE*/* ___strides_6;
	int32_t ___IsScalar_7;
};
// Native definition for COM marshalling of NumSharp.Shape
struct Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E_marshaled_com
{
	ViewInfo_tEEA658FC0685403FAE44E4B6C61841FEA7B4757E * ___ViewInfo_0;
	BroadcastInfo_t10BE37F5BCFC00F1FF022F7DAD5F86E4C2A66019 * ___BroadcastInfo_1;
	int32_t ___ModifiedStrides_2;
	int32_t ____hashCode_3;
	int32_t ___size_4;
	Il2CppSafeArray/*NONE*/* ___dimensions_5;
	Il2CppSafeArray/*NONE*/* ___strides_6;
	int32_t ___IsScalar_7;
};

// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// NumSharp.SliceDef
struct SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF 
{
public:
	// System.Int32 NumSharp.SliceDef::Start
	int32_t ___Start_0;
	// System.Int32 NumSharp.SliceDef::Step
	int32_t ___Step_1;
	// System.Int32 NumSharp.SliceDef::Count
	int32_t ___Count_2;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_Step_1() { return static_cast<int32_t>(offsetof(SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF, ___Step_1)); }
	inline int32_t get_Step_1() const { return ___Step_1; }
	inline int32_t* get_address_of_Step_1() { return &___Step_1; }
	inline void set_Step_1(int32_t value)
	{
		___Step_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// NumSharp.NPTypeCode
struct NPTypeCode_t5BD44AF16F85E0B9A335D91C3745D9F96A455E19 
{
public:
	// System.Int32 NumSharp.NPTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NPTypeCode_t5BD44AF16F85E0B9A335D91C3745D9F96A455E19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// NumSharp.Slice
struct Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C  : public RuntimeObject
{
public:
	// System.Nullable`1<System.Int32> NumSharp.Slice::Start
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___Start_4;
	// System.Nullable`1<System.Int32> NumSharp.Slice::Stop
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___Stop_5;
	// System.Int32 NumSharp.Slice::Step
	int32_t ___Step_6;
	// System.Boolean NumSharp.Slice::IsIndex
	bool ___IsIndex_7;
	// System.Boolean NumSharp.Slice::IsEllipsis
	bool ___IsEllipsis_8;
	// System.Boolean NumSharp.Slice::IsNewAxis
	bool ___IsNewAxis_9;

public:
	inline static int32_t get_offset_of_Start_4() { return static_cast<int32_t>(offsetof(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C, ___Start_4)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_Start_4() const { return ___Start_4; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_Start_4() { return &___Start_4; }
	inline void set_Start_4(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___Start_4 = value;
	}

	inline static int32_t get_offset_of_Stop_5() { return static_cast<int32_t>(offsetof(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C, ___Stop_5)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_Stop_5() const { return ___Stop_5; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_Stop_5() { return &___Stop_5; }
	inline void set_Stop_5(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___Stop_5 = value;
	}

	inline static int32_t get_offset_of_Step_6() { return static_cast<int32_t>(offsetof(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C, ___Step_6)); }
	inline int32_t get_Step_6() const { return ___Step_6; }
	inline int32_t* get_address_of_Step_6() { return &___Step_6; }
	inline void set_Step_6(int32_t value)
	{
		___Step_6 = value;
	}

	inline static int32_t get_offset_of_IsIndex_7() { return static_cast<int32_t>(offsetof(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C, ___IsIndex_7)); }
	inline bool get_IsIndex_7() const { return ___IsIndex_7; }
	inline bool* get_address_of_IsIndex_7() { return &___IsIndex_7; }
	inline void set_IsIndex_7(bool value)
	{
		___IsIndex_7 = value;
	}

	inline static int32_t get_offset_of_IsEllipsis_8() { return static_cast<int32_t>(offsetof(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C, ___IsEllipsis_8)); }
	inline bool get_IsEllipsis_8() const { return ___IsEllipsis_8; }
	inline bool* get_address_of_IsEllipsis_8() { return &___IsEllipsis_8; }
	inline void set_IsEllipsis_8(bool value)
	{
		___IsEllipsis_8 = value;
	}

	inline static int32_t get_offset_of_IsNewAxis_9() { return static_cast<int32_t>(offsetof(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C, ___IsNewAxis_9)); }
	inline bool get_IsNewAxis_9() const { return ___IsNewAxis_9; }
	inline bool* get_address_of_IsNewAxis_9() { return &___IsNewAxis_9; }
	inline void set_IsNewAxis_9(bool value)
	{
		___IsNewAxis_9 = value;
	}
};

struct Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_StaticFields
{
public:
	// NumSharp.Slice NumSharp.Slice::All
	Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * ___All_0;
	// NumSharp.Slice NumSharp.Slice::None
	Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * ___None_1;
	// NumSharp.Slice NumSharp.Slice::Ellipsis
	Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * ___Ellipsis_2;
	// NumSharp.Slice NumSharp.Slice::NewAxis
	Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * ___NewAxis_3;

public:
	inline static int32_t get_offset_of_All_0() { return static_cast<int32_t>(offsetof(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_StaticFields, ___All_0)); }
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * get_All_0() const { return ___All_0; }
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C ** get_address_of_All_0() { return &___All_0; }
	inline void set_All_0(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * value)
	{
		___All_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___All_0), (void*)value);
	}

	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_StaticFields, ___None_1)); }
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * get_None_1() const { return ___None_1; }
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C ** get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * value)
	{
		___None_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_1), (void*)value);
	}

	inline static int32_t get_offset_of_Ellipsis_2() { return static_cast<int32_t>(offsetof(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_StaticFields, ___Ellipsis_2)); }
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * get_Ellipsis_2() const { return ___Ellipsis_2; }
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C ** get_address_of_Ellipsis_2() { return &___Ellipsis_2; }
	inline void set_Ellipsis_2(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * value)
	{
		___Ellipsis_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ellipsis_2), (void*)value);
	}

	inline static int32_t get_offset_of_NewAxis_3() { return static_cast<int32_t>(offsetof(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_StaticFields, ___NewAxis_3)); }
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * get_NewAxis_3() const { return ___NewAxis_3; }
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C ** get_address_of_NewAxis_3() { return &___NewAxis_3; }
	inline void set_NewAxis_3(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * value)
	{
		___NewAxis_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewAxis_3), (void*)value);
	}
};


// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Boolean>
struct ArraySlice_1_tF0A699233DBEFA20C5CFAA929FE7B42F76F27A36 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<T> NumSharp.Backends.Unmanaged.ArraySlice`1::MemoryBlock
	UnmanagedMemoryBlock_1_tE27806A4BDD914C5E213B1304BA255D685F11E97  ___MemoryBlock_1;
	// T* NumSharp.Backends.Unmanaged.ArraySlice`1::Address
	bool* ___Address_2;
	// System.Void* NumSharp.Backends.Unmanaged.ArraySlice`1::VoidAddress
	void* ___VoidAddress_3;
	// System.Int32 NumSharp.Backends.Unmanaged.ArraySlice`1::Count
	int32_t ___Count_4;
	// System.Boolean NumSharp.Backends.Unmanaged.ArraySlice`1::IsSlice
	bool ___IsSlice_5;

public:
	inline static int32_t get_offset_of_MemoryBlock_1() { return static_cast<int32_t>(offsetof(ArraySlice_1_tF0A699233DBEFA20C5CFAA929FE7B42F76F27A36, ___MemoryBlock_1)); }
	inline UnmanagedMemoryBlock_1_tE27806A4BDD914C5E213B1304BA255D685F11E97  get_MemoryBlock_1() const { return ___MemoryBlock_1; }
	inline UnmanagedMemoryBlock_1_tE27806A4BDD914C5E213B1304BA255D685F11E97 * get_address_of_MemoryBlock_1() { return &___MemoryBlock_1; }
	inline void set_MemoryBlock_1(UnmanagedMemoryBlock_1_tE27806A4BDD914C5E213B1304BA255D685F11E97  value)
	{
		___MemoryBlock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(ArraySlice_1_tF0A699233DBEFA20C5CFAA929FE7B42F76F27A36, ___Address_2)); }
	inline bool* get_Address_2() const { return ___Address_2; }
	inline bool** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(bool* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_VoidAddress_3() { return static_cast<int32_t>(offsetof(ArraySlice_1_tF0A699233DBEFA20C5CFAA929FE7B42F76F27A36, ___VoidAddress_3)); }
	inline void* get_VoidAddress_3() const { return ___VoidAddress_3; }
	inline void** get_address_of_VoidAddress_3() { return &___VoidAddress_3; }
	inline void set_VoidAddress_3(void* value)
	{
		___VoidAddress_3 = value;
	}

	inline static int32_t get_offset_of_Count_4() { return static_cast<int32_t>(offsetof(ArraySlice_1_tF0A699233DBEFA20C5CFAA929FE7B42F76F27A36, ___Count_4)); }
	inline int32_t get_Count_4() const { return ___Count_4; }
	inline int32_t* get_address_of_Count_4() { return &___Count_4; }
	inline void set_Count_4(int32_t value)
	{
		___Count_4 = value;
	}

	inline static int32_t get_offset_of_IsSlice_5() { return static_cast<int32_t>(offsetof(ArraySlice_1_tF0A699233DBEFA20C5CFAA929FE7B42F76F27A36, ___IsSlice_5)); }
	inline bool get_IsSlice_5() const { return ___IsSlice_5; }
	inline bool* get_address_of_IsSlice_5() { return &___IsSlice_5; }
	inline void set_IsSlice_5(bool value)
	{
		___IsSlice_5 = value;
	}
};

struct ArraySlice_1_tF0A699233DBEFA20C5CFAA929FE7B42F76F27A36_StaticFields
{
public:
	// NumSharp.NPTypeCode NumSharp.Backends.Unmanaged.ArraySlice`1::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ArraySlice_1_tF0A699233DBEFA20C5CFAA929FE7B42F76F27A36_StaticFields, ___U3CTypeCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_0() const { return ___U3CTypeCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_0() { return &___U3CTypeCodeU3Ek__BackingField_0; }
	inline void set_U3CTypeCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_0 = value;
	}
};


// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Byte>
struct ArraySlice_1_t48D36CD750AD2239180B8034F22F9195152FC3E4 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<T> NumSharp.Backends.Unmanaged.ArraySlice`1::MemoryBlock
	UnmanagedMemoryBlock_1_t0AD2E10DE36B3372ADFA6CC2CB6D3C5256D090CC  ___MemoryBlock_1;
	// T* NumSharp.Backends.Unmanaged.ArraySlice`1::Address
	uint8_t* ___Address_2;
	// System.Void* NumSharp.Backends.Unmanaged.ArraySlice`1::VoidAddress
	void* ___VoidAddress_3;
	// System.Int32 NumSharp.Backends.Unmanaged.ArraySlice`1::Count
	int32_t ___Count_4;
	// System.Boolean NumSharp.Backends.Unmanaged.ArraySlice`1::IsSlice
	bool ___IsSlice_5;

public:
	inline static int32_t get_offset_of_MemoryBlock_1() { return static_cast<int32_t>(offsetof(ArraySlice_1_t48D36CD750AD2239180B8034F22F9195152FC3E4, ___MemoryBlock_1)); }
	inline UnmanagedMemoryBlock_1_t0AD2E10DE36B3372ADFA6CC2CB6D3C5256D090CC  get_MemoryBlock_1() const { return ___MemoryBlock_1; }
	inline UnmanagedMemoryBlock_1_t0AD2E10DE36B3372ADFA6CC2CB6D3C5256D090CC * get_address_of_MemoryBlock_1() { return &___MemoryBlock_1; }
	inline void set_MemoryBlock_1(UnmanagedMemoryBlock_1_t0AD2E10DE36B3372ADFA6CC2CB6D3C5256D090CC  value)
	{
		___MemoryBlock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(ArraySlice_1_t48D36CD750AD2239180B8034F22F9195152FC3E4, ___Address_2)); }
	inline uint8_t* get_Address_2() const { return ___Address_2; }
	inline uint8_t** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(uint8_t* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_VoidAddress_3() { return static_cast<int32_t>(offsetof(ArraySlice_1_t48D36CD750AD2239180B8034F22F9195152FC3E4, ___VoidAddress_3)); }
	inline void* get_VoidAddress_3() const { return ___VoidAddress_3; }
	inline void** get_address_of_VoidAddress_3() { return &___VoidAddress_3; }
	inline void set_VoidAddress_3(void* value)
	{
		___VoidAddress_3 = value;
	}

	inline static int32_t get_offset_of_Count_4() { return static_cast<int32_t>(offsetof(ArraySlice_1_t48D36CD750AD2239180B8034F22F9195152FC3E4, ___Count_4)); }
	inline int32_t get_Count_4() const { return ___Count_4; }
	inline int32_t* get_address_of_Count_4() { return &___Count_4; }
	inline void set_Count_4(int32_t value)
	{
		___Count_4 = value;
	}

	inline static int32_t get_offset_of_IsSlice_5() { return static_cast<int32_t>(offsetof(ArraySlice_1_t48D36CD750AD2239180B8034F22F9195152FC3E4, ___IsSlice_5)); }
	inline bool get_IsSlice_5() const { return ___IsSlice_5; }
	inline bool* get_address_of_IsSlice_5() { return &___IsSlice_5; }
	inline void set_IsSlice_5(bool value)
	{
		___IsSlice_5 = value;
	}
};

struct ArraySlice_1_t48D36CD750AD2239180B8034F22F9195152FC3E4_StaticFields
{
public:
	// NumSharp.NPTypeCode NumSharp.Backends.Unmanaged.ArraySlice`1::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ArraySlice_1_t48D36CD750AD2239180B8034F22F9195152FC3E4_StaticFields, ___U3CTypeCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_0() const { return ___U3CTypeCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_0() { return &___U3CTypeCodeU3Ek__BackingField_0; }
	inline void set_U3CTypeCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_0 = value;
	}
};


// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Char>
struct ArraySlice_1_t1D9D3220C7B73DE48A56547BA3EE6F8398C8B8C1 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<T> NumSharp.Backends.Unmanaged.ArraySlice`1::MemoryBlock
	UnmanagedMemoryBlock_1_t56E325A9168909DFB634870FB2EC632F4C6061FE  ___MemoryBlock_1;
	// T* NumSharp.Backends.Unmanaged.ArraySlice`1::Address
	Il2CppChar* ___Address_2;
	// System.Void* NumSharp.Backends.Unmanaged.ArraySlice`1::VoidAddress
	void* ___VoidAddress_3;
	// System.Int32 NumSharp.Backends.Unmanaged.ArraySlice`1::Count
	int32_t ___Count_4;
	// System.Boolean NumSharp.Backends.Unmanaged.ArraySlice`1::IsSlice
	bool ___IsSlice_5;

public:
	inline static int32_t get_offset_of_MemoryBlock_1() { return static_cast<int32_t>(offsetof(ArraySlice_1_t1D9D3220C7B73DE48A56547BA3EE6F8398C8B8C1, ___MemoryBlock_1)); }
	inline UnmanagedMemoryBlock_1_t56E325A9168909DFB634870FB2EC632F4C6061FE  get_MemoryBlock_1() const { return ___MemoryBlock_1; }
	inline UnmanagedMemoryBlock_1_t56E325A9168909DFB634870FB2EC632F4C6061FE * get_address_of_MemoryBlock_1() { return &___MemoryBlock_1; }
	inline void set_MemoryBlock_1(UnmanagedMemoryBlock_1_t56E325A9168909DFB634870FB2EC632F4C6061FE  value)
	{
		___MemoryBlock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(ArraySlice_1_t1D9D3220C7B73DE48A56547BA3EE6F8398C8B8C1, ___Address_2)); }
	inline Il2CppChar* get_Address_2() const { return ___Address_2; }
	inline Il2CppChar** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Il2CppChar* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_VoidAddress_3() { return static_cast<int32_t>(offsetof(ArraySlice_1_t1D9D3220C7B73DE48A56547BA3EE6F8398C8B8C1, ___VoidAddress_3)); }
	inline void* get_VoidAddress_3() const { return ___VoidAddress_3; }
	inline void** get_address_of_VoidAddress_3() { return &___VoidAddress_3; }
	inline void set_VoidAddress_3(void* value)
	{
		___VoidAddress_3 = value;
	}

	inline static int32_t get_offset_of_Count_4() { return static_cast<int32_t>(offsetof(ArraySlice_1_t1D9D3220C7B73DE48A56547BA3EE6F8398C8B8C1, ___Count_4)); }
	inline int32_t get_Count_4() const { return ___Count_4; }
	inline int32_t* get_address_of_Count_4() { return &___Count_4; }
	inline void set_Count_4(int32_t value)
	{
		___Count_4 = value;
	}

	inline static int32_t get_offset_of_IsSlice_5() { return static_cast<int32_t>(offsetof(ArraySlice_1_t1D9D3220C7B73DE48A56547BA3EE6F8398C8B8C1, ___IsSlice_5)); }
	inline bool get_IsSlice_5() const { return ___IsSlice_5; }
	inline bool* get_address_of_IsSlice_5() { return &___IsSlice_5; }
	inline void set_IsSlice_5(bool value)
	{
		___IsSlice_5 = value;
	}
};

struct ArraySlice_1_t1D9D3220C7B73DE48A56547BA3EE6F8398C8B8C1_StaticFields
{
public:
	// NumSharp.NPTypeCode NumSharp.Backends.Unmanaged.ArraySlice`1::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ArraySlice_1_t1D9D3220C7B73DE48A56547BA3EE6F8398C8B8C1_StaticFields, ___U3CTypeCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_0() const { return ___U3CTypeCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_0() { return &___U3CTypeCodeU3Ek__BackingField_0; }
	inline void set_U3CTypeCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_0 = value;
	}
};


// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Double>
struct ArraySlice_1_tCD8BC72EA3819B9904C2C8EBF811BA4AEFF3E5B9 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<T> NumSharp.Backends.Unmanaged.ArraySlice`1::MemoryBlock
	UnmanagedMemoryBlock_1_tD105C9B18EBD4DF1529888BE9023BA088EE7D368  ___MemoryBlock_1;
	// T* NumSharp.Backends.Unmanaged.ArraySlice`1::Address
	double* ___Address_2;
	// System.Void* NumSharp.Backends.Unmanaged.ArraySlice`1::VoidAddress
	void* ___VoidAddress_3;
	// System.Int32 NumSharp.Backends.Unmanaged.ArraySlice`1::Count
	int32_t ___Count_4;
	// System.Boolean NumSharp.Backends.Unmanaged.ArraySlice`1::IsSlice
	bool ___IsSlice_5;

public:
	inline static int32_t get_offset_of_MemoryBlock_1() { return static_cast<int32_t>(offsetof(ArraySlice_1_tCD8BC72EA3819B9904C2C8EBF811BA4AEFF3E5B9, ___MemoryBlock_1)); }
	inline UnmanagedMemoryBlock_1_tD105C9B18EBD4DF1529888BE9023BA088EE7D368  get_MemoryBlock_1() const { return ___MemoryBlock_1; }
	inline UnmanagedMemoryBlock_1_tD105C9B18EBD4DF1529888BE9023BA088EE7D368 * get_address_of_MemoryBlock_1() { return &___MemoryBlock_1; }
	inline void set_MemoryBlock_1(UnmanagedMemoryBlock_1_tD105C9B18EBD4DF1529888BE9023BA088EE7D368  value)
	{
		___MemoryBlock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(ArraySlice_1_tCD8BC72EA3819B9904C2C8EBF811BA4AEFF3E5B9, ___Address_2)); }
	inline double* get_Address_2() const { return ___Address_2; }
	inline double** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(double* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_VoidAddress_3() { return static_cast<int32_t>(offsetof(ArraySlice_1_tCD8BC72EA3819B9904C2C8EBF811BA4AEFF3E5B9, ___VoidAddress_3)); }
	inline void* get_VoidAddress_3() const { return ___VoidAddress_3; }
	inline void** get_address_of_VoidAddress_3() { return &___VoidAddress_3; }
	inline void set_VoidAddress_3(void* value)
	{
		___VoidAddress_3 = value;
	}

	inline static int32_t get_offset_of_Count_4() { return static_cast<int32_t>(offsetof(ArraySlice_1_tCD8BC72EA3819B9904C2C8EBF811BA4AEFF3E5B9, ___Count_4)); }
	inline int32_t get_Count_4() const { return ___Count_4; }
	inline int32_t* get_address_of_Count_4() { return &___Count_4; }
	inline void set_Count_4(int32_t value)
	{
		___Count_4 = value;
	}

	inline static int32_t get_offset_of_IsSlice_5() { return static_cast<int32_t>(offsetof(ArraySlice_1_tCD8BC72EA3819B9904C2C8EBF811BA4AEFF3E5B9, ___IsSlice_5)); }
	inline bool get_IsSlice_5() const { return ___IsSlice_5; }
	inline bool* get_address_of_IsSlice_5() { return &___IsSlice_5; }
	inline void set_IsSlice_5(bool value)
	{
		___IsSlice_5 = value;
	}
};

struct ArraySlice_1_tCD8BC72EA3819B9904C2C8EBF811BA4AEFF3E5B9_StaticFields
{
public:
	// NumSharp.NPTypeCode NumSharp.Backends.Unmanaged.ArraySlice`1::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ArraySlice_1_tCD8BC72EA3819B9904C2C8EBF811BA4AEFF3E5B9_StaticFields, ___U3CTypeCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_0() const { return ___U3CTypeCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_0() { return &___U3CTypeCodeU3Ek__BackingField_0; }
	inline void set_U3CTypeCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_0 = value;
	}
};


// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Int32>
struct ArraySlice_1_t6797F8AB028DAD462B9DFD73032B56DF1D9C6A90 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<T> NumSharp.Backends.Unmanaged.ArraySlice`1::MemoryBlock
	UnmanagedMemoryBlock_1_tE80266F90AA0609ADBBD1AC6780846208DD54163  ___MemoryBlock_1;
	// T* NumSharp.Backends.Unmanaged.ArraySlice`1::Address
	int32_t* ___Address_2;
	// System.Void* NumSharp.Backends.Unmanaged.ArraySlice`1::VoidAddress
	void* ___VoidAddress_3;
	// System.Int32 NumSharp.Backends.Unmanaged.ArraySlice`1::Count
	int32_t ___Count_4;
	// System.Boolean NumSharp.Backends.Unmanaged.ArraySlice`1::IsSlice
	bool ___IsSlice_5;

public:
	inline static int32_t get_offset_of_MemoryBlock_1() { return static_cast<int32_t>(offsetof(ArraySlice_1_t6797F8AB028DAD462B9DFD73032B56DF1D9C6A90, ___MemoryBlock_1)); }
	inline UnmanagedMemoryBlock_1_tE80266F90AA0609ADBBD1AC6780846208DD54163  get_MemoryBlock_1() const { return ___MemoryBlock_1; }
	inline UnmanagedMemoryBlock_1_tE80266F90AA0609ADBBD1AC6780846208DD54163 * get_address_of_MemoryBlock_1() { return &___MemoryBlock_1; }
	inline void set_MemoryBlock_1(UnmanagedMemoryBlock_1_tE80266F90AA0609ADBBD1AC6780846208DD54163  value)
	{
		___MemoryBlock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(ArraySlice_1_t6797F8AB028DAD462B9DFD73032B56DF1D9C6A90, ___Address_2)); }
	inline int32_t* get_Address_2() const { return ___Address_2; }
	inline int32_t** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(int32_t* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_VoidAddress_3() { return static_cast<int32_t>(offsetof(ArraySlice_1_t6797F8AB028DAD462B9DFD73032B56DF1D9C6A90, ___VoidAddress_3)); }
	inline void* get_VoidAddress_3() const { return ___VoidAddress_3; }
	inline void** get_address_of_VoidAddress_3() { return &___VoidAddress_3; }
	inline void set_VoidAddress_3(void* value)
	{
		___VoidAddress_3 = value;
	}

	inline static int32_t get_offset_of_Count_4() { return static_cast<int32_t>(offsetof(ArraySlice_1_t6797F8AB028DAD462B9DFD73032B56DF1D9C6A90, ___Count_4)); }
	inline int32_t get_Count_4() const { return ___Count_4; }
	inline int32_t* get_address_of_Count_4() { return &___Count_4; }
	inline void set_Count_4(int32_t value)
	{
		___Count_4 = value;
	}

	inline static int32_t get_offset_of_IsSlice_5() { return static_cast<int32_t>(offsetof(ArraySlice_1_t6797F8AB028DAD462B9DFD73032B56DF1D9C6A90, ___IsSlice_5)); }
	inline bool get_IsSlice_5() const { return ___IsSlice_5; }
	inline bool* get_address_of_IsSlice_5() { return &___IsSlice_5; }
	inline void set_IsSlice_5(bool value)
	{
		___IsSlice_5 = value;
	}
};

struct ArraySlice_1_t6797F8AB028DAD462B9DFD73032B56DF1D9C6A90_StaticFields
{
public:
	// NumSharp.NPTypeCode NumSharp.Backends.Unmanaged.ArraySlice`1::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ArraySlice_1_t6797F8AB028DAD462B9DFD73032B56DF1D9C6A90_StaticFields, ___U3CTypeCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_0() const { return ___U3CTypeCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_0() { return &___U3CTypeCodeU3Ek__BackingField_0; }
	inline void set_U3CTypeCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_0 = value;
	}
};


// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Int64>
struct ArraySlice_1_tEDE203995EEDF2900FADFB4629C0C8C9C8B8825B 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<T> NumSharp.Backends.Unmanaged.ArraySlice`1::MemoryBlock
	UnmanagedMemoryBlock_1_t0FCDD561A708D414BBBAF35E756BEC417C8A3CD0  ___MemoryBlock_1;
	// T* NumSharp.Backends.Unmanaged.ArraySlice`1::Address
	int64_t* ___Address_2;
	// System.Void* NumSharp.Backends.Unmanaged.ArraySlice`1::VoidAddress
	void* ___VoidAddress_3;
	// System.Int32 NumSharp.Backends.Unmanaged.ArraySlice`1::Count
	int32_t ___Count_4;
	// System.Boolean NumSharp.Backends.Unmanaged.ArraySlice`1::IsSlice
	bool ___IsSlice_5;

public:
	inline static int32_t get_offset_of_MemoryBlock_1() { return static_cast<int32_t>(offsetof(ArraySlice_1_tEDE203995EEDF2900FADFB4629C0C8C9C8B8825B, ___MemoryBlock_1)); }
	inline UnmanagedMemoryBlock_1_t0FCDD561A708D414BBBAF35E756BEC417C8A3CD0  get_MemoryBlock_1() const { return ___MemoryBlock_1; }
	inline UnmanagedMemoryBlock_1_t0FCDD561A708D414BBBAF35E756BEC417C8A3CD0 * get_address_of_MemoryBlock_1() { return &___MemoryBlock_1; }
	inline void set_MemoryBlock_1(UnmanagedMemoryBlock_1_t0FCDD561A708D414BBBAF35E756BEC417C8A3CD0  value)
	{
		___MemoryBlock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(ArraySlice_1_tEDE203995EEDF2900FADFB4629C0C8C9C8B8825B, ___Address_2)); }
	inline int64_t* get_Address_2() const { return ___Address_2; }
	inline int64_t** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(int64_t* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_VoidAddress_3() { return static_cast<int32_t>(offsetof(ArraySlice_1_tEDE203995EEDF2900FADFB4629C0C8C9C8B8825B, ___VoidAddress_3)); }
	inline void* get_VoidAddress_3() const { return ___VoidAddress_3; }
	inline void** get_address_of_VoidAddress_3() { return &___VoidAddress_3; }
	inline void set_VoidAddress_3(void* value)
	{
		___VoidAddress_3 = value;
	}

	inline static int32_t get_offset_of_Count_4() { return static_cast<int32_t>(offsetof(ArraySlice_1_tEDE203995EEDF2900FADFB4629C0C8C9C8B8825B, ___Count_4)); }
	inline int32_t get_Count_4() const { return ___Count_4; }
	inline int32_t* get_address_of_Count_4() { return &___Count_4; }
	inline void set_Count_4(int32_t value)
	{
		___Count_4 = value;
	}

	inline static int32_t get_offset_of_IsSlice_5() { return static_cast<int32_t>(offsetof(ArraySlice_1_tEDE203995EEDF2900FADFB4629C0C8C9C8B8825B, ___IsSlice_5)); }
	inline bool get_IsSlice_5() const { return ___IsSlice_5; }
	inline bool* get_address_of_IsSlice_5() { return &___IsSlice_5; }
	inline void set_IsSlice_5(bool value)
	{
		___IsSlice_5 = value;
	}
};

struct ArraySlice_1_tEDE203995EEDF2900FADFB4629C0C8C9C8B8825B_StaticFields
{
public:
	// NumSharp.NPTypeCode NumSharp.Backends.Unmanaged.ArraySlice`1::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ArraySlice_1_tEDE203995EEDF2900FADFB4629C0C8C9C8B8825B_StaticFields, ___U3CTypeCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_0() const { return ___U3CTypeCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_0() { return &___U3CTypeCodeU3Ek__BackingField_0; }
	inline void set_U3CTypeCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_0 = value;
	}
};


// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Single>
struct ArraySlice_1_tF8A960AFEC638F6BF9FDDED8E552B5D6E00F9520 
{
public:
	// NumSharp.Backends.Unmanaged.UnmanagedMemoryBlock`1<T> NumSharp.Backends.Unmanaged.ArraySlice`1::MemoryBlock
	UnmanagedMemoryBlock_1_t8CABF944C66E4CECFF865C637BD27B8DE0CCB97C  ___MemoryBlock_1;
	// T* NumSharp.Backends.Unmanaged.ArraySlice`1::Address
	float* ___Address_2;
	// System.Void* NumSharp.Backends.Unmanaged.ArraySlice`1::VoidAddress
	void* ___VoidAddress_3;
	// System.Int32 NumSharp.Backends.Unmanaged.ArraySlice`1::Count
	int32_t ___Count_4;
	// System.Boolean NumSharp.Backends.Unmanaged.ArraySlice`1::IsSlice
	bool ___IsSlice_5;

public:
	inline static int32_t get_offset_of_MemoryBlock_1() { return static_cast<int32_t>(offsetof(ArraySlice_1_tF8A960AFEC638F6BF9FDDED8E552B5D6E00F9520, ___MemoryBlock_1)); }
	inline UnmanagedMemoryBlock_1_t8CABF944C66E4CECFF865C637BD27B8DE0CCB97C  get_MemoryBlock_1() const { return ___MemoryBlock_1; }
	inline UnmanagedMemoryBlock_1_t8CABF944C66E4CECFF865C637BD27B8DE0CCB97C * get_address_of_MemoryBlock_1() { return &___MemoryBlock_1; }
	inline void set_MemoryBlock_1(UnmanagedMemoryBlock_1_t8CABF944C66E4CECFF865C637BD27B8DE0CCB97C  value)
	{
		___MemoryBlock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(ArraySlice_1_tF8A960AFEC638F6BF9FDDED8E552B5D6E00F9520, ___Address_2)); }
	inline float* get_Address_2() const { return ___Address_2; }
	inline float** get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(float* value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_VoidAddress_3() { return static_cast<int32_t>(offsetof(ArraySlice_1_tF8A960AFEC638F6BF9FDDED8E552B5D6E00F9520, ___VoidAddress_3)); }
	inline void* get_VoidAddress_3() const { return ___VoidAddress_3; }
	inline void** get_address_of_VoidAddress_3() { return &___VoidAddress_3; }
	inline void set_VoidAddress_3(void* value)
	{
		___VoidAddress_3 = value;
	}

	inline static int32_t get_offset_of_Count_4() { return static_cast<int32_t>(offsetof(ArraySlice_1_tF8A960AFEC638F6BF9FDDED8E552B5D6E00F9520, ___Count_4)); }
	inline int32_t get_Count_4() const { return ___Count_4; }
	inline int32_t* get_address_of_Count_4() { return &___Count_4; }
	inline void set_Count_4(int32_t value)
	{
		___Count_4 = value;
	}

	inline static int32_t get_offset_of_IsSlice_5() { return static_cast<int32_t>(offsetof(ArraySlice_1_tF8A960AFEC638F6BF9FDDED8E552B5D6E00F9520, ___IsSlice_5)); }
	inline bool get_IsSlice_5() const { return ___IsSlice_5; }
	inline bool* get_address_of_IsSlice_5() { return &___IsSlice_5; }
	inline void set_IsSlice_5(bool value)
	{
		___IsSlice_5 = value;
	}
};

struct ArraySlice_1_tF8A960AFEC638F6BF9FDDED8E552B5D6E00F9520_StaticFields
{
public:
	// NumSharp.NPTypeCode NumSharp.Backends.Unmanaged.ArraySlice`1::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ArraySlice_1_tF8A960AFEC638F6BF9FDDED8E552B5D6E00F9520_StaticFields, ___U3CTypeCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_0() const { return ___U3CTypeCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_0() { return &___U3CTypeCodeU3Ek__BackingField_0; }
	inline void set_U3CTypeCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_0 = value;
	}
};


// NumSharp.Utilities.InfoOf`1<System.Numerics.Complex>
struct InfoOf_1_t24E67DC833655AC53CB5D0D4DAFA4D26C8AFF6C4  : public RuntimeObject
{
public:

public:
};

struct InfoOf_1_t24E67DC833655AC53CB5D0D4DAFA4D26C8AFF6C4_StaticFields
{
public:
	// System.Int32 NumSharp.Utilities.InfoOf`1::Size
	int32_t ___Size_0;
	// NumSharp.NPTypeCode NumSharp.Utilities.InfoOf`1::NPTypeCode
	int32_t ___NPTypeCode_1;
	// T NumSharp.Utilities.InfoOf`1::Zero
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___Zero_2;
	// T NumSharp.Utilities.InfoOf`1::MaxValue
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___MaxValue_3;
	// T NumSharp.Utilities.InfoOf`1::MinValue
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___MinValue_4;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(InfoOf_1_t24E67DC833655AC53CB5D0D4DAFA4D26C8AFF6C4_StaticFields, ___Size_0)); }
	inline int32_t get_Size_0() const { return ___Size_0; }
	inline int32_t* get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(int32_t value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_NPTypeCode_1() { return static_cast<int32_t>(offsetof(InfoOf_1_t24E67DC833655AC53CB5D0D4DAFA4D26C8AFF6C4_StaticFields, ___NPTypeCode_1)); }
	inline int32_t get_NPTypeCode_1() const { return ___NPTypeCode_1; }
	inline int32_t* get_address_of_NPTypeCode_1() { return &___NPTypeCode_1; }
	inline void set_NPTypeCode_1(int32_t value)
	{
		___NPTypeCode_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(InfoOf_1_t24E67DC833655AC53CB5D0D4DAFA4D26C8AFF6C4_StaticFields, ___Zero_2)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_Zero_2() const { return ___Zero_2; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___Zero_2 = value;
	}

	inline static int32_t get_offset_of_MaxValue_3() { return static_cast<int32_t>(offsetof(InfoOf_1_t24E67DC833655AC53CB5D0D4DAFA4D26C8AFF6C4_StaticFields, ___MaxValue_3)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_MaxValue_3() const { return ___MaxValue_3; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_MaxValue_3() { return &___MaxValue_3; }
	inline void set_MaxValue_3(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___MaxValue_3 = value;
	}

	inline static int32_t get_offset_of_MinValue_4() { return static_cast<int32_t>(offsetof(InfoOf_1_t24E67DC833655AC53CB5D0D4DAFA4D26C8AFF6C4_StaticFields, ___MinValue_4)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_MinValue_4() const { return ___MinValue_4; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_MinValue_4() { return &___MinValue_4; }
	inline void set_MinValue_4(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___MinValue_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// NumSharp.NumSharpException
struct NumSharpException_t40D073757BE64EA74244BB8A21CAC4A2625BB5E7  : public Exception_t
{
public:

public:
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


// System.Func`2<System.Int32,System.Int32>
struct Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<NumSharp.Slice,System.Boolean>
struct Func_2_t82951254BC5366DC7343E8EF62B1955768995472  : public MulticastDelegate_t
{
public:

public:
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// NumSharp.Backends.UnmanagedStorage
struct UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F  : public RuntimeObject
{
public:
	// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Boolean> NumSharp.Backends.UnmanagedStorage::_arrayBoolean
	ArraySlice_1_tF0A699233DBEFA20C5CFAA929FE7B42F76F27A36  ____arrayBoolean_0;
	// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Byte> NumSharp.Backends.UnmanagedStorage::_arrayByte
	ArraySlice_1_t48D36CD750AD2239180B8034F22F9195152FC3E4  ____arrayByte_1;
	// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Char> NumSharp.Backends.UnmanagedStorage::_arrayChar
	ArraySlice_1_t1D9D3220C7B73DE48A56547BA3EE6F8398C8B8C1  ____arrayChar_2;
	// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Int32> NumSharp.Backends.UnmanagedStorage::_arrayInt32
	ArraySlice_1_t6797F8AB028DAD462B9DFD73032B56DF1D9C6A90  ____arrayInt32_3;
	// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Int64> NumSharp.Backends.UnmanagedStorage::_arrayInt64
	ArraySlice_1_tEDE203995EEDF2900FADFB4629C0C8C9C8B8825B  ____arrayInt64_4;
	// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Single> NumSharp.Backends.UnmanagedStorage::_arraySingle
	ArraySlice_1_tF8A960AFEC638F6BF9FDDED8E552B5D6E00F9520  ____arraySingle_5;
	// NumSharp.Backends.Unmanaged.ArraySlice`1<System.Double> NumSharp.Backends.UnmanagedStorage::_arrayDouble
	ArraySlice_1_tCD8BC72EA3819B9904C2C8EBF811BA4AEFF3E5B9  ____arrayDouble_6;
	// NumSharp.Backends.Unmanaged.IArraySlice NumSharp.Backends.UnmanagedStorage::InternalArray
	RuntimeObject* ___InternalArray_7;
	// System.Byte* NumSharp.Backends.UnmanagedStorage::Address
	uint8_t* ___Address_8;
	// System.Int32 NumSharp.Backends.UnmanagedStorage::Count
	int32_t ___Count_9;
	// System.Type NumSharp.Backends.UnmanagedStorage::_dtype
	Type_t * ____dtype_10;
	// NumSharp.NPTypeCode NumSharp.Backends.UnmanagedStorage::_typecode
	int32_t ____typecode_11;
	// NumSharp.Shape NumSharp.Backends.UnmanagedStorage::_shape
	Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E  ____shape_12;
	// NumSharp.TensorEngine NumSharp.Backends.UnmanagedStorage::<Engine>k__BackingField
	TensorEngine_t92D5F6CB55AF8DFBAF7C6106B3E01E2E9EADABC9 * ___U3CEngineU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of__arrayBoolean_0() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ____arrayBoolean_0)); }
	inline ArraySlice_1_tF0A699233DBEFA20C5CFAA929FE7B42F76F27A36  get__arrayBoolean_0() const { return ____arrayBoolean_0; }
	inline ArraySlice_1_tF0A699233DBEFA20C5CFAA929FE7B42F76F27A36 * get_address_of__arrayBoolean_0() { return &____arrayBoolean_0; }
	inline void set__arrayBoolean_0(ArraySlice_1_tF0A699233DBEFA20C5CFAA929FE7B42F76F27A36  value)
	{
		____arrayBoolean_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____arrayBoolean_0))->___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__arrayByte_1() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ____arrayByte_1)); }
	inline ArraySlice_1_t48D36CD750AD2239180B8034F22F9195152FC3E4  get__arrayByte_1() const { return ____arrayByte_1; }
	inline ArraySlice_1_t48D36CD750AD2239180B8034F22F9195152FC3E4 * get_address_of__arrayByte_1() { return &____arrayByte_1; }
	inline void set__arrayByte_1(ArraySlice_1_t48D36CD750AD2239180B8034F22F9195152FC3E4  value)
	{
		____arrayByte_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____arrayByte_1))->___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__arrayChar_2() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ____arrayChar_2)); }
	inline ArraySlice_1_t1D9D3220C7B73DE48A56547BA3EE6F8398C8B8C1  get__arrayChar_2() const { return ____arrayChar_2; }
	inline ArraySlice_1_t1D9D3220C7B73DE48A56547BA3EE6F8398C8B8C1 * get_address_of__arrayChar_2() { return &____arrayChar_2; }
	inline void set__arrayChar_2(ArraySlice_1_t1D9D3220C7B73DE48A56547BA3EE6F8398C8B8C1  value)
	{
		____arrayChar_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____arrayChar_2))->___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__arrayInt32_3() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ____arrayInt32_3)); }
	inline ArraySlice_1_t6797F8AB028DAD462B9DFD73032B56DF1D9C6A90  get__arrayInt32_3() const { return ____arrayInt32_3; }
	inline ArraySlice_1_t6797F8AB028DAD462B9DFD73032B56DF1D9C6A90 * get_address_of__arrayInt32_3() { return &____arrayInt32_3; }
	inline void set__arrayInt32_3(ArraySlice_1_t6797F8AB028DAD462B9DFD73032B56DF1D9C6A90  value)
	{
		____arrayInt32_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____arrayInt32_3))->___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__arrayInt64_4() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ____arrayInt64_4)); }
	inline ArraySlice_1_tEDE203995EEDF2900FADFB4629C0C8C9C8B8825B  get__arrayInt64_4() const { return ____arrayInt64_4; }
	inline ArraySlice_1_tEDE203995EEDF2900FADFB4629C0C8C9C8B8825B * get_address_of__arrayInt64_4() { return &____arrayInt64_4; }
	inline void set__arrayInt64_4(ArraySlice_1_tEDE203995EEDF2900FADFB4629C0C8C9C8B8825B  value)
	{
		____arrayInt64_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____arrayInt64_4))->___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__arraySingle_5() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ____arraySingle_5)); }
	inline ArraySlice_1_tF8A960AFEC638F6BF9FDDED8E552B5D6E00F9520  get__arraySingle_5() const { return ____arraySingle_5; }
	inline ArraySlice_1_tF8A960AFEC638F6BF9FDDED8E552B5D6E00F9520 * get_address_of__arraySingle_5() { return &____arraySingle_5; }
	inline void set__arraySingle_5(ArraySlice_1_tF8A960AFEC638F6BF9FDDED8E552B5D6E00F9520  value)
	{
		____arraySingle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____arraySingle_5))->___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__arrayDouble_6() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ____arrayDouble_6)); }
	inline ArraySlice_1_tCD8BC72EA3819B9904C2C8EBF811BA4AEFF3E5B9  get__arrayDouble_6() const { return ____arrayDouble_6; }
	inline ArraySlice_1_tCD8BC72EA3819B9904C2C8EBF811BA4AEFF3E5B9 * get_address_of__arrayDouble_6() { return &____arrayDouble_6; }
	inline void set__arrayDouble_6(ArraySlice_1_tCD8BC72EA3819B9904C2C8EBF811BA4AEFF3E5B9  value)
	{
		____arrayDouble_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____arrayDouble_6))->___MemoryBlock_1))->____disposer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_InternalArray_7() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ___InternalArray_7)); }
	inline RuntimeObject* get_InternalArray_7() const { return ___InternalArray_7; }
	inline RuntimeObject** get_address_of_InternalArray_7() { return &___InternalArray_7; }
	inline void set_InternalArray_7(RuntimeObject* value)
	{
		___InternalArray_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalArray_7), (void*)value);
	}

	inline static int32_t get_offset_of_Address_8() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ___Address_8)); }
	inline uint8_t* get_Address_8() const { return ___Address_8; }
	inline uint8_t** get_address_of_Address_8() { return &___Address_8; }
	inline void set_Address_8(uint8_t* value)
	{
		___Address_8 = value;
	}

	inline static int32_t get_offset_of_Count_9() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ___Count_9)); }
	inline int32_t get_Count_9() const { return ___Count_9; }
	inline int32_t* get_address_of_Count_9() { return &___Count_9; }
	inline void set_Count_9(int32_t value)
	{
		___Count_9 = value;
	}

	inline static int32_t get_offset_of__dtype_10() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ____dtype_10)); }
	inline Type_t * get__dtype_10() const { return ____dtype_10; }
	inline Type_t ** get_address_of__dtype_10() { return &____dtype_10; }
	inline void set__dtype_10(Type_t * value)
	{
		____dtype_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dtype_10), (void*)value);
	}

	inline static int32_t get_offset_of__typecode_11() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ____typecode_11)); }
	inline int32_t get__typecode_11() const { return ____typecode_11; }
	inline int32_t* get_address_of__typecode_11() { return &____typecode_11; }
	inline void set__typecode_11(int32_t value)
	{
		____typecode_11 = value;
	}

	inline static int32_t get_offset_of__shape_12() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ____shape_12)); }
	inline Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E  get__shape_12() const { return ____shape_12; }
	inline Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E * get_address_of__shape_12() { return &____shape_12; }
	inline void set__shape_12(Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E  value)
	{
		____shape_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____shape_12))->___ViewInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____shape_12))->___BroadcastInfo_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____shape_12))->___dimensions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____shape_12))->___strides_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CEngineU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F, ___U3CEngineU3Ek__BackingField_13)); }
	inline TensorEngine_t92D5F6CB55AF8DFBAF7C6106B3E01E2E9EADABC9 * get_U3CEngineU3Ek__BackingField_13() const { return ___U3CEngineU3Ek__BackingField_13; }
	inline TensorEngine_t92D5F6CB55AF8DFBAF7C6106B3E01E2E9EADABC9 ** get_address_of_U3CEngineU3Ek__BackingField_13() { return &___U3CEngineU3Ek__BackingField_13; }
	inline void set_U3CEngineU3Ek__BackingField_13(TensorEngine_t92D5F6CB55AF8DFBAF7C6106B3E01E2E9EADABC9 * value)
	{
		___U3CEngineU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEngineU3Ek__BackingField_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
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
// NumSharp.Slice[]
struct SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * m_Items[1];

public:
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// NumSharp.SliceDef[]
struct SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF  m_Items[1];

public:
	inline SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF  value)
	{
		m_Items[index] = value;
	}
};


// !1 System.Func`2<System.Int32,System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m58030D4C46B2E2CF24D65E8F67ED03A72A5AA17F_gshared (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * __this, int32_t ___arg0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<T> NumSharp.Extensions.LinqExtensions::Yield<System.Int32>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinqExtensions_Yield_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6D5ED2B2DA2C0C6B6F3345A699348E2E80EC0FD5_gshared (int32_t ___item0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDDB1BFE9A8B33542584DCA999E2026B94EE02E9F_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_mD248DD20C01000944006DA903D282009D2524A9E_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::OfType<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OfType_TisRuntimeObject_m0D3DAECE3EDD779470DC0976C2C8D1F0CA799975_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_m41EE394B6AFF9F9442116EBC66C4DFD93D69409F_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<NumSharp.SliceDef>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF  List_1_get_Item_m95F94C82B362473B7EC0FFD67CD9BE863964AE40_gshared_inline (List_1_tD2C9719D045E8822B51CF40821A6EE5947727773 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Double NumSharp.Utilities.Maths.Operator::Subtract(System.Single,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline (float ___lhs0, double ___rhs1, const RuntimeMethod* method);
// System.Single NumSharp.Utilities.Maths.Operator::Subtract(System.Single,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline (float ___lhs0, bool ___rhs1, const RuntimeMethod* method);
// System.Boolean NumSharp.Utilities.Converts::ToBoolean(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Converts_ToBoolean_mBA395E40885CD27B965C0D2B8EE1D3E4FF5764A8_inline (float ___value0, const RuntimeMethod* method);
// System.Single NumSharp.Utilities.Maths.Operator::Subtract(System.Single,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline (float ___lhs0, uint8_t ___rhs1, const RuntimeMethod* method);
// System.Double NumSharp.Utilities.Maths.Operator::Subtract(System.Single,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline (float ___lhs0, int32_t ___rhs1, const RuntimeMethod* method);
// System.Boolean NumSharp.Utilities.Converts::ToBoolean(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Converts_ToBoolean_m074FF94EB8657BE8B924CFCDD3F20F29B59CE76A_inline (double ___value0, const RuntimeMethod* method);
// System.Double NumSharp.Utilities.Maths.Operator::Subtract(System.Single,System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Operator_Subtract_mF66043025359383772702F35404058E5034B0594_inline (float ___lhs0, int64_t ___rhs1, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed__ctor_mC2B57603F4F89EDAB64B1354BA03212E43BF7915 (U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Object> NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m96DD899AA296611CB37E33806DC035A7FB362BE8 (U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * __this, const RuntimeMethod* method);
// System.Void NumSharp.NDArray/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9B1F5FD13917B5A5502445ACEF01956ADB21AABB (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * __this, const RuntimeMethod* method);
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mFF5B29ED0585A4847BFE654ABB9E915DFE21B63E (String_t* ___s0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// NumSharp.Slice NumSharp.Slice::Index(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * Slice_Index_m1B159CE58C278657F12D2CA311156E33457B0EBD_inline (int32_t ___index0, const RuntimeMethod* method);
// System.Void NumSharp.Slice::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slice__ctor_m9F3ADE3AD5DD03F9219863121E10B9ED3AA79DB6 (Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * __this, String_t* ___slice_notation0, const RuntimeMethod* method);
// System.Void NumSharp.NumSharpException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumSharpException__ctor_m653035CCDC93D4171F12C615529A07DC5B3840B9 (NumSharpException_t40D073757BE64EA74244BB8A21CAC4A2625BB5E7 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// !1 System.Func`2<System.Int32,System.Int32>::Invoke(!0)
inline int32_t Func_2_Invoke_m58030D4C46B2E2CF24D65E8F67ED03A72A5AA17F (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * __this, int32_t ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, int32_t, const RuntimeMethod*))Func_2_Invoke_m58030D4C46B2E2CF24D65E8F67ED03A72A5AA17F_gshared)(__this, ___arg0, method);
}
// System.Collections.Generic.IEnumerable`1<T> NumSharp.Extensions.LinqExtensions::Yield<System.Int32>(T)
inline RuntimeObject* LinqExtensions_Yield_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6D5ED2B2DA2C0C6B6F3345A699348E2E80EC0FD5 (int32_t ___item0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (int32_t, const RuntimeMethod*))LinqExtensions_Yield_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6D5ED2B2DA2C0C6B6F3345A699348E2E80EC0FD5_gshared)(___item0, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Concat_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDDB1BFE9A8B33542584DCA999E2026B94EE02E9F (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDDB1BFE9A8B33542584DCA999E2026B94EE02E9F_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IEnumerable`1<System.Int32>> NumSharp.NDArray::AccessorCreator(System.Int32[],System.Collections.Generic.IEnumerable`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NDArray_AccessorCreator_m8F5FD4AE441BC058FA034DDA86AC9C6DA6215038 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___originalIndices0, RuntimeObject* ___previousStep1, int32_t ___currentStep2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<System.Collections.Generic.IEnumerable`1<System.Int32>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Concat_TisIEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_mB571792445344F6366A87C7AF9CEA3A6809D53EB (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_mD248DD20C01000944006DA903D282009D2524A9E_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::OfType<NumSharp.Slice>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisSlice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_mB7CD6D94EA22D8821F5A8C00E461341E426B8DFC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m0D3DAECE3EDD779470DC0976C2C8D1F0CA799975_gshared)(___source0, method);
}
// System.Void System.Func`2<NumSharp.Slice,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6CB605437C492728071D7463BB748C325A74FB55 (Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t82951254BC5366DC7343E8EF62B1955768995472 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Linq.Enumerable::Count<NumSharp.Slice>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline int32_t Enumerable_Count_TisSlice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_m0FC85A0E58ECD23DBB2A9A7F322E6ECE3E63F3AE (RuntimeObject* ___source0, Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * ___predicate1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_t82951254BC5366DC7343E8EF62B1955768995472 *, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_m41EE394B6AFF9F9442116EBC66C4DFD93D69409F_gshared)(___source0, ___predicate1, method);
}
// System.Void NumSharp.NDArray/<ExpandEllipsis>d__309::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExpandEllipsisU3Ed__309__ctor_mA8D728D8F075FE6381A0B42B95C0479AB1DC9389 (U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Object> NumSharp.NDArray/<ExpandEllipsis>d__309::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExpandEllipsisU3Ed__309_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m31D9B6E3A553ADBE05FFFE4F783891F0BFF843EB (U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * __this, const RuntimeMethod* method);
// System.Void NumSharp.Utilities.NDOffsetIncrementorAutoresetting/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m73E3D3569F4473770B300FB818BB422CD6B8E4E6 (U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6 * __this, const RuntimeMethod* method);
// System.Void NumSharp.Utilities.NDCoordinatesIncrementor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NDCoordinatesIncrementor_Reset_mDC90DC3B41DE782307EFF495C0A328E49A9F1E80 (NDCoordinatesIncrementor_t5279EE4E2B66AE56B57E1D3CC6B3F2C5CAC97880 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<NumSharp.SliceDef>::get_Item(System.Int32)
inline SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF  List_1_get_Item_m95F94C82B362473B7EC0FFD67CD9BE863964AE40_inline (List_1_tD2C9719D045E8822B51CF40821A6EE5947727773 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF  (*) (List_1_tD2C9719D045E8822B51CF40821A6EE5947727773 *, int32_t, const RuntimeMethod*))List_1_get_Item_m95F94C82B362473B7EC0FFD67CD9BE863964AE40_gshared_inline)(__this, ___index0, method);
}
// System.Boolean NumSharp.SliceDef::get_IsIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SliceDef_get_IsIndex_m991F51013EDF6A955D78BDA48531F3AD18790587_inline (SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF * __this, const RuntimeMethod* method);
// System.Void NumSharp.Slice/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDD04A4D049C4D455238011155D1AAE394AB1D073 (U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6 (String_t* ___value0, const RuntimeMethod* method);
// System.Void NumSharp.Unmanaged.Memory.StackedMemoryPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m365C1388284473CA82216C5D90F9995393F84924 (U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537 * __this, const RuntimeMethod* method);
// System.Int32 NumSharp.NPTypeCodeExtensions::SizeOf(NumSharp.NPTypeCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NPTypeCodeExtensions_SizeOf_m7DF2C278C9BCA83E5D16C6E6C8DE4BBE5E79AEA7_inline (int32_t ___typeCode0, const RuntimeMethod* method);
// System.Void NumSharp.Backends.UnmanagedStorage/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5039B317D1DEC9C52F6685A91FA5638A52FCEBA3 (U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562 * __this, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// NumSharp.Shape NumSharp.Backends.UnmanagedStorage::get_Shape()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E  UnmanagedStorage_get_Shape_mFEBDD4814CE490BD27C934A2539EEFAE429CEA2B_inline (UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F * __this, const RuntimeMethod* method);
// System.Int32 NumSharp.Shape::get_NDim()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Shape_get_NDim_mE15F56DA12890AC255A1E57FE21EE9FF31DDBF04_inline (Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E * __this, const RuntimeMethod* method);
// System.Void NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExpandEllipsisU3Ed__136__ctor_mD0F6AA7A8996267012DF17729CDEDB7F7992DB2E (U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<NumSharp.Slice> NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::System.Collections.Generic.IEnumerable<NumSharp.Slice>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExpandEllipsisU3Ed__136_System_Collections_Generic_IEnumerableU3CNumSharp_SliceU3E_GetEnumerator_mBAE9C14CA4CB15493B1A76C54227ADF7B55620E8 (U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// System.Void NumSharp.Slice::.ctor(System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slice__ctor_m41B3DC80522CEAB2F42BC86F3F2F3DF987777352 (Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___start0, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___stop1, int32_t ___step2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_169::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_169__ctor_m32A6E7DED9E9B0B58AFC24C43957140FF919FE85 (U3CU3Ec__DisplayClass162_169_t7BFA2C2084A957F2D070FB4A4B32A10F99E54387 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_169::<SubtractSingle>b__163(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_169_U3CSubtractSingleU3Eb__163_m9149FEF40C04C64D7B1DDF72155B83CF418FF076 (U3CU3Ec__DisplayClass162_169_t7BFA2C2084A957F2D070FB4A4B32A10F99E54387 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27 * L_0 = __this->get_CSU24U3CU3E8__locals164_1();
		int32_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27 * L_3 = __this->get_CSU24U3CU3E8__locals164_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_4 = L_3->get_CSU24U3CU3E8__locals161_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		double L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_17::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_17__ctor_mF42E3501BC23466EB19BDA5DA24F1E79F535B999 (U3CU3Ec__DisplayClass162_17_tCC100F4B4E7525B6C429615A828E4FDF1E1480B2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_17::<SubtractSingle>b__16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_17_U3CSubtractSingleU3Eb__16_m77DFB46A249781DB1F5A2CC35C23E2F7E1B736C7 (U3CU3Ec__DisplayClass162_17_tCC100F4B4E7525B6C429615A828E4FDF1E1480B2 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * L_0 = __this->get_CSU24U3CU3E8__locals17_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * L_3 = __this->get_CSU24U3CU3E8__locals17_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_4 = L_3->get_CSU24U3CU3E8__locals16_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		bool L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_170::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_170__ctor_m000D528498990596B55B1A22EA1E43BCA0592C58 (U3CU3Ec__DisplayClass162_170_tE0E02142F36F1DA1C2D140AABFDB0BDD1FECDE58 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_170::<SubtractSingle>b__164(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_170_U3CSubtractSingleU3Eb__164_m241540FC6D81A147ED7B6D7A8CBE0105EDAD1AB6 (U3CU3Ec__DisplayClass162_170_tE0E02142F36F1DA1C2D140AABFDB0BDD1FECDE58 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27 * L_0 = __this->get_CSU24U3CU3E8__locals165_1();
		int32_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_166_tA6D26BF2DDD1C363D66237A2BEE466F8E6BFCD27 * L_4 = __this->get_CSU24U3CU3E8__locals165_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_5 = L_4->get_CSU24U3CU3E8__locals161_1();
		double* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		double L_8 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)8)))));
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_3, L_8, /*hidden argument*/NULL);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_171::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_171__ctor_mEA8E52C8363B817601AC2023B0991B06417F33E4 (U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_171::<SubtractSingle>b__165(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_171_U3CSubtractSingleU3Eb__165_mA4AEA2E454BF93C1CF0193747F42E83F1576A907 (U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		int64_t* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_2 = __this->get_CSU24U3CU3E8__locals166_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_6 = __this->get_CSU24U3CU3E8__locals166_1();
		double* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		double L_9 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)8)))));
		double L_10;
		L_10 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_5, L_9, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_10);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_172::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_172__ctor_mA46A593A8EAF3FE895CD48224B67C672B2A3F4E8 (U3CU3Ec__DisplayClass162_172_t39D800C0AD647DBA10770A497E9936F80B4094FD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_172::<SubtractSingle>b__166(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_172_U3CSubtractSingleU3Eb__166_m6158EE784D49FAAD9A979DB743F573928D6C4900 (U3CU3Ec__DisplayClass162_172_t39D800C0AD647DBA10770A497E9936F80B4094FD * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * L_0 = __this->get_CSU24U3CU3E8__locals167_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * L_3 = __this->get_CSU24U3CU3E8__locals167_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_4 = L_3->get_CSU24U3CU3E8__locals166_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		double L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_173::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_173__ctor_m0E85ADB8D4025C39FF898EF596DAFEBEB3B84608 (U3CU3Ec__DisplayClass162_173_tD5418E13C0D7B4DC2D4E94027EA70E8687F73E05 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_173::<SubtractSingle>b__167(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_173_U3CSubtractSingleU3Eb__167_mE96FD6AA206B01868BD7EB1705091243832AA39D (U3CU3Ec__DisplayClass162_173_tD5418E13C0D7B4DC2D4E94027EA70E8687F73E05 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * L_0 = __this->get_CSU24U3CU3E8__locals168_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * L_4 = __this->get_CSU24U3CU3E8__locals168_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_5 = L_4->get_CSU24U3CU3E8__locals166_1();
		double* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		double L_8 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)8)))));
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_3, L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_174::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_174__ctor_mF6F9D15D5C1121F312AA1AE1B0AE4C4F48DC43B2 (U3CU3Ec__DisplayClass162_174_tDCC34579C8003C7A93409DC675FA5CCD19155B80 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_174::<SubtractSingle>b__168(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_174_U3CSubtractSingleU3Eb__168_m9EBE556137623AFF9F1B950496E8AD315E536190 (U3CU3Ec__DisplayClass162_174_tDCC34579C8003C7A93409DC675FA5CCD19155B80 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * L_0 = __this->get_CSU24U3CU3E8__locals169_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * L_3 = __this->get_CSU24U3CU3E8__locals169_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_4 = L_3->get_CSU24U3CU3E8__locals166_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		double L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_175::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_175__ctor_m8A756172F6FA71B86C7325674E22C5A5FA174AA0 (U3CU3Ec__DisplayClass162_175_tC542B85A215ED69AA71911388090AB6EE21DCE78 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_175::<SubtractSingle>b__169(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_175_U3CSubtractSingleU3Eb__169_mBF17EA6AE4A1B7CA248745995B72EFF0B7B736D7 (U3CU3Ec__DisplayClass162_175_tC542B85A215ED69AA71911388090AB6EE21DCE78 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * L_0 = __this->get_CSU24U3CU3E8__locals170_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_171_t95762660F6DAA4019E1D99EECDD2DDC4E0059B98 * L_4 = __this->get_CSU24U3CU3E8__locals170_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_5 = L_4->get_CSU24U3CU3E8__locals166_1();
		double* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		double L_8 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)8)))));
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_3, L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_176::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_176__ctor_m28C59743527EF6A023CAA6769E6630E4A5A56558 (U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_176::<SubtractSingle>b__170(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_176_U3CSubtractSingleU3Eb__170_m3527D2033EC0BC8D108521191A0966E65E67F31E (U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		float* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_2 = __this->get_CSU24U3CU3E8__locals171_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_6 = __this->get_CSU24U3CU3E8__locals171_1();
		double* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		double L_9 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)8)))));
		double L_10;
		L_10 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_5, L_9, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)4))))) = (float)((float)((float)L_10));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_177::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_177__ctor_mFB1C904A5EB01A56DDF50E0F25EC0BB3C30428F1 (U3CU3Ec__DisplayClass162_177_tF3C20299B9922C2EA7FE6F3E18234854F15E284F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_177::<SubtractSingle>b__171(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_177_U3CSubtractSingleU3Eb__171_m72DEA114AAD892B12B8626A7FB430DC0AFB5BAB0 (U3CU3Ec__DisplayClass162_177_tF3C20299B9922C2EA7FE6F3E18234854F15E284F * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * L_0 = __this->get_CSU24U3CU3E8__locals172_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * L_3 = __this->get_CSU24U3CU3E8__locals172_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_4 = L_3->get_CSU24U3CU3E8__locals171_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		double L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_7, L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_178::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_178__ctor_m480DFDE8613268924C211098413EDADA150F141D (U3CU3Ec__DisplayClass162_178_t2D89425A46F518287F3FAFC693E9C8A4CC7D9ADD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_178::<SubtractSingle>b__172(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_178_U3CSubtractSingleU3Eb__172_m4D403CC69C3D7B80CEEFF681D82ECEF4A84C0631 (U3CU3Ec__DisplayClass162_178_t2D89425A46F518287F3FAFC693E9C8A4CC7D9ADD * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * L_0 = __this->get_CSU24U3CU3E8__locals173_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * L_4 = __this->get_CSU24U3CU3E8__locals173_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_5 = L_4->get_CSU24U3CU3E8__locals171_1();
		double* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		double L_8 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)8)))));
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_3, L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_179::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_179__ctor_mE4E164DD2E048A024F088A05ABD6530E21E70403 (U3CU3Ec__DisplayClass162_179_t3FBDA50F84FA39FFC31E60A24A34870EB0758857 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_179::<SubtractSingle>b__173(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_179_U3CSubtractSingleU3Eb__173_m288E6AD6DC83AC27678F7CE1B50C4EC97D2336BC (U3CU3Ec__DisplayClass162_179_t3FBDA50F84FA39FFC31E60A24A34870EB0758857 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * L_0 = __this->get_CSU24U3CU3E8__locals174_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * L_3 = __this->get_CSU24U3CU3E8__locals174_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_4 = L_3->get_CSU24U3CU3E8__locals171_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		double L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_7, L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_18::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_18__ctor_m7E885350DB2E577B3E23E1611443B86A09451276 (U3CU3Ec__DisplayClass162_18_tE94C46E623E6EDA867F2766856EA5BC1F731B918 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_18::<SubtractSingle>b__17(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_18_U3CSubtractSingleU3Eb__17_mD6AEE5A6AA9786D268CD1323CDEB8F87F56DFD75 (U3CU3Ec__DisplayClass162_18_tE94C46E623E6EDA867F2766856EA5BC1F731B918 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * L_0 = __this->get_CSU24U3CU3E8__locals18_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * L_4 = __this->get_CSU24U3CU3E8__locals18_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_5 = L_4->get_CSU24U3CU3E8__locals16_1();
		bool* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_3, (bool)L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_180::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_180__ctor_mCF34A972995BB521E848D43F55A91030E4F6D641 (U3CU3Ec__DisplayClass162_180_t3F687E016352AC0AE05191B7EA82733528C9B37F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_180::<SubtractSingle>b__174(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_180_U3CSubtractSingleU3Eb__174_mD284ED6F0DC56982E1E82402117F80A4E24F9513 (U3CU3Ec__DisplayClass162_180_t3F687E016352AC0AE05191B7EA82733528C9B37F * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * L_0 = __this->get_CSU24U3CU3E8__locals175_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_176_t900D2F37E25330CB02DFB7D67271361C3C8777D7 * L_4 = __this->get_CSU24U3CU3E8__locals175_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_5 = L_4->get_CSU24U3CU3E8__locals171_1();
		double* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		double L_8 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)8)))));
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_3, L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_181::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_181__ctor_m2E09861650C2498725C96FE1ADA16B22F839928B (U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_181::<SubtractSingle>b__175(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_181_U3CSubtractSingleU3Eb__175_m5BA303D43D6466ABF4B7C8B283FD446F63488E3E (U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		double* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_2 = __this->get_CSU24U3CU3E8__locals176_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_6 = __this->get_CSU24U3CU3E8__locals176_1();
		double* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		double L_9 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)8)))));
		double L_10;
		L_10 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_5, L_9, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)8))))) = (double)((double)((double)L_10));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_182::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_182__ctor_mDF9F7927BBB9BBD6EB43136CF9F576A48EFAE016 (U3CU3Ec__DisplayClass162_182_tEEBE83EB513FAB11373EB4F55B7C0A8A00AF13D0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_182::<SubtractSingle>b__176(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_182_U3CSubtractSingleU3Eb__176_m95CDC4D7C33C0C231896683991CF39C096876455 (U3CU3Ec__DisplayClass162_182_tEEBE83EB513FAB11373EB4F55B7C0A8A00AF13D0 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * L_0 = __this->get_CSU24U3CU3E8__locals177_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * L_3 = __this->get_CSU24U3CU3E8__locals177_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_4 = L_3->get_CSU24U3CU3E8__locals176_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		double L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_7, L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_183::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_183__ctor_m1847152632649D08DACD9693F264B08716C199A9 (U3CU3Ec__DisplayClass162_183_tF7B640E7F2780C5C30E593D9EC4C3952AC6D89CA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_183::<SubtractSingle>b__177(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_183_U3CSubtractSingleU3Eb__177_m4CFA61D3C1FD6223CD5D328FD4F0439465F5201F (U3CU3Ec__DisplayClass162_183_tF7B640E7F2780C5C30E593D9EC4C3952AC6D89CA * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * L_0 = __this->get_CSU24U3CU3E8__locals178_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * L_4 = __this->get_CSU24U3CU3E8__locals178_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_5 = L_4->get_CSU24U3CU3E8__locals176_1();
		double* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		double L_8 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)8)))));
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_3, L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_184::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_184__ctor_mE826ECDB4C836E7FDBBB3CE666074BCE5A05ACEE (U3CU3Ec__DisplayClass162_184_t6BD840333A7DCAB5260CB082E265BF2DD4780EF0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_184::<SubtractSingle>b__178(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_184_U3CSubtractSingleU3Eb__178_mBA4C548B08476400C2E462CBA648F0E6BA9E5A5F (U3CU3Ec__DisplayClass162_184_t6BD840333A7DCAB5260CB082E265BF2DD4780EF0 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * L_0 = __this->get_CSU24U3CU3E8__locals179_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * L_3 = __this->get_CSU24U3CU3E8__locals179_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_4 = L_3->get_CSU24U3CU3E8__locals176_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		double L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_7, L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_185::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_185__ctor_m99CB577F64DE8FFDE94DB9DE18F9E71F4084E7E5 (U3CU3Ec__DisplayClass162_185_t9FD43A10738606C139D79D34E8D09D336E7B442D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_185::<SubtractSingle>b__179(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_185_U3CSubtractSingleU3Eb__179_mE384A4C8CA2FE37CA9EA2BF24955F75F904C302F (U3CU3Ec__DisplayClass162_185_t9FD43A10738606C139D79D34E8D09D336E7B442D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * L_0 = __this->get_CSU24U3CU3E8__locals180_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_181_tABCE5BD1A92687525234D8D016868B76628132DF * L_4 = __this->get_CSU24U3CU3E8__locals180_1();
		U3CU3Ec__DisplayClass162_155_tD9EEAF36725AF9865E67335EB4E06640E39DD90A * L_5 = L_4->get_CSU24U3CU3E8__locals176_1();
		double* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		double L_8 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)8)))));
		double L_9;
		L_9 = Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline(L_3, L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_19::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_19__ctor_mEF5CE511871A2AD1BF1291B6AE74C43551CB17A9 (U3CU3Ec__DisplayClass162_19_t95E05829E5CCD83D9866A21B6C94DE9A10F2475A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_19::<SubtractSingle>b__18(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_19_U3CSubtractSingleU3Eb__18_m9F5AC1BB895B55D3B717F69322FAC279A61E7D58 (U3CU3Ec__DisplayClass162_19_t95E05829E5CCD83D9866A21B6C94DE9A10F2475A * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * L_0 = __this->get_CSU24U3CU3E8__locals19_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * L_3 = __this->get_CSU24U3CU3E8__locals19_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_4 = L_3->get_CSU24U3CU3E8__locals16_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		bool L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_2__ctor_m58135F8AF4C6847B5EE9CE601093C0E711666C6C (U3CU3Ec__DisplayClass162_2_t926F799B6950C3CD40A05F3C219B1A20475B4418 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_2::<SubtractSingle>b__1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_2_U3CSubtractSingleU3Eb__1_mD946C05D45500B92ABFA33D1B6230190FFE95579 (U3CU3Ec__DisplayClass162_2_t926F799B6950C3CD40A05F3C219B1A20475B4418 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * L_0 = __this->get_CSU24U3CU3E8__locals2_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * L_3 = __this->get_CSU24U3CU3E8__locals2_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_4 = L_3->get_CSU24U3CU3E8__locals1_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		bool L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_mBA395E40885CD27B965C0D2B8EE1D3E4FF5764A8_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_20::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_20__ctor_mBBDE4E45EE234E0CEDD923F15438C8A090920D0B (U3CU3Ec__DisplayClass162_20_tC5C255E04F14EA6EF43A225E4FDC51354576B9B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_20::<SubtractSingle>b__19(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_20_U3CSubtractSingleU3Eb__19_mB2AC92448603C50AECD3108C5CE271427E51AEBE (U3CU3Ec__DisplayClass162_20_tC5C255E04F14EA6EF43A225E4FDC51354576B9B6 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * L_0 = __this->get_CSU24U3CU3E8__locals20_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_16_tEF6D7B1E6EAE39FD59DB7E60996D69564D7C9963 * L_4 = __this->get_CSU24U3CU3E8__locals20_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_5 = L_4->get_CSU24U3CU3E8__locals16_1();
		bool* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_3, (bool)L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_21::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_21__ctor_m0E09FCEA3833615A9B758B83A26E2F93F7218FE5 (U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_21::<SubtractSingle>b__20(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_21_U3CSubtractSingleU3Eb__20_mE396F6A58BCCAA2486B2408D21B00C7760E65805 (U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		float* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_2 = __this->get_CSU24U3CU3E8__locals21_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_6 = __this->get_CSU24U3CU3E8__locals21_1();
		bool* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)));
		float L_10;
		L_10 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_5, (bool)L_9, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)4))))) = (float)((float)((float)L_10));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_22::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_22__ctor_m6A90BDF6ADD1B05692F992CAEE2F5BCA1743B7AC (U3CU3Ec__DisplayClass162_22_t9D25728098D38C5AC02FE0245DEAFB9ADF345F37 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_22::<SubtractSingle>b__21(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_22_U3CSubtractSingleU3Eb__21_m3B55F150432A62DF36AEBA7BBA1AEBE1EA477802 (U3CU3Ec__DisplayClass162_22_t9D25728098D38C5AC02FE0245DEAFB9ADF345F37 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * L_0 = __this->get_CSU24U3CU3E8__locals22_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * L_3 = __this->get_CSU24U3CU3E8__locals22_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_4 = L_3->get_CSU24U3CU3E8__locals21_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		bool L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_7, L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_23::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_23__ctor_m6E0BB3A36E70B5A7A48BEEFB38495CDA67F804FE (U3CU3Ec__DisplayClass162_23_tF1FA44C0CD3F0AE6F4B951F953C8293A9D928428 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_23::<SubtractSingle>b__22(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_23_U3CSubtractSingleU3Eb__22_mC2C71AC0E5D2A54E6EDA1BB9C909C076CB8CED67 (U3CU3Ec__DisplayClass162_23_tF1FA44C0CD3F0AE6F4B951F953C8293A9D928428 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * L_0 = __this->get_CSU24U3CU3E8__locals23_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * L_4 = __this->get_CSU24U3CU3E8__locals23_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_5 = L_4->get_CSU24U3CU3E8__locals21_1();
		bool* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_3, (bool)L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_24::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_24__ctor_mAF4CE44E7D078130B81A2CD7FAEB0B9E5D6A9EBD (U3CU3Ec__DisplayClass162_24_t60430D5C5859EE6C24B2874E940C13202AD027C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_24::<SubtractSingle>b__23(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_24_U3CSubtractSingleU3Eb__23_mFEC00EAA216E5C65FC6C2A4362B71F95FE286020 (U3CU3Ec__DisplayClass162_24_t60430D5C5859EE6C24B2874E940C13202AD027C5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * L_0 = __this->get_CSU24U3CU3E8__locals24_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * L_3 = __this->get_CSU24U3CU3E8__locals24_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_4 = L_3->get_CSU24U3CU3E8__locals21_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		bool L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_7, L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_25::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_25__ctor_m038B90F49B586B2344909EC0E081B92D83F14F49 (U3CU3Ec__DisplayClass162_25_t2491043510E33B949B1C80C471EF6FCFCA86BE70 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_25::<SubtractSingle>b__24(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_25_U3CSubtractSingleU3Eb__24_m75C0DEE0F99DA6C7A8EE1D22B7CE32BE28FD69CC (U3CU3Ec__DisplayClass162_25_t2491043510E33B949B1C80C471EF6FCFCA86BE70 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * L_0 = __this->get_CSU24U3CU3E8__locals25_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_21_tDF0B0938A132B25C7EA9F49FA25A54208851E4B2 * L_4 = __this->get_CSU24U3CU3E8__locals25_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_5 = L_4->get_CSU24U3CU3E8__locals21_1();
		bool* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_3, (bool)L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_26::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_26__ctor_m46CC13DAD007400D99B743E5E134844FF0952B10 (U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_26::<SubtractSingle>b__25(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_26_U3CSubtractSingleU3Eb__25_m54B7A6259C31B3CA9C25B8198044B82184B97B4D (U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		double* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_2 = __this->get_CSU24U3CU3E8__locals26_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_6 = __this->get_CSU24U3CU3E8__locals26_1();
		bool* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)));
		float L_10;
		L_10 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_5, (bool)L_9, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)8))))) = (double)((double)((double)L_10));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_27::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_27__ctor_mEF2A66EC8F0DDD62C2C0CC86C21564D9EB551288 (U3CU3Ec__DisplayClass162_27_t8A4F5E8E8AAAB63B867729CA26A37E99D18157C8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_27::<SubtractSingle>b__26(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_27_U3CSubtractSingleU3Eb__26_mB52EBA72EA83C2104454F6B2398DCA65EA268953 (U3CU3Ec__DisplayClass162_27_t8A4F5E8E8AAAB63B867729CA26A37E99D18157C8 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * L_0 = __this->get_CSU24U3CU3E8__locals27_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * L_3 = __this->get_CSU24U3CU3E8__locals27_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_4 = L_3->get_CSU24U3CU3E8__locals26_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		bool L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_7, L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_28::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_28__ctor_mA7A409989A5C1DE17781212951E2CC273BBA6AE2 (U3CU3Ec__DisplayClass162_28_t4F29A0EAECA16FC92BBD6B00D501CA939EB44F62 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_28::<SubtractSingle>b__27(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_28_U3CSubtractSingleU3Eb__27_m4A8BB41E68A18C177E74FD23F087953DAF8AF29F (U3CU3Ec__DisplayClass162_28_t4F29A0EAECA16FC92BBD6B00D501CA939EB44F62 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * L_0 = __this->get_CSU24U3CU3E8__locals28_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * L_4 = __this->get_CSU24U3CU3E8__locals28_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_5 = L_4->get_CSU24U3CU3E8__locals26_1();
		bool* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_3, (bool)L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_29::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_29__ctor_mCF6EC1BC42253E387B6D58421DD8EDFC9EBD25B2 (U3CU3Ec__DisplayClass162_29_t2F64C77BC8F204DDB064C7F8C6A61899BF7D9C8B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_29::<SubtractSingle>b__28(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_29_U3CSubtractSingleU3Eb__28_mB3526C8EA595DD453654CB4B41A0F905F989F545 (U3CU3Ec__DisplayClass162_29_t2F64C77BC8F204DDB064C7F8C6A61899BF7D9C8B * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * L_0 = __this->get_CSU24U3CU3E8__locals29_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * L_3 = __this->get_CSU24U3CU3E8__locals29_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_4 = L_3->get_CSU24U3CU3E8__locals26_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		bool L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_7, L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_3__ctor_mCF54286120D6CD3E90821EA51029974E73B00755 (U3CU3Ec__DisplayClass162_3_tF4EF8EE02B342D0163987BD9BD9364B1EF29F35A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_3::<SubtractSingle>b__2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_3_U3CSubtractSingleU3Eb__2_mF8768ACB86FB56570081154413F345A6E159AB53 (U3CU3Ec__DisplayClass162_3_tF4EF8EE02B342D0163987BD9BD9364B1EF29F35A * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * L_0 = __this->get_CSU24U3CU3E8__locals3_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * L_4 = __this->get_CSU24U3CU3E8__locals3_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_5 = L_4->get_CSU24U3CU3E8__locals1_1();
		bool* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_3, (bool)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_mBA395E40885CD27B965C0D2B8EE1D3E4FF5764A8_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_30::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_30__ctor_mFC411EA88EDF59072C3819E78C70A43D8335EDCF (U3CU3Ec__DisplayClass162_30_t2F7B111DAE64B3A21A2D9D9399B1C86D3B28F9A5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_30::<SubtractSingle>b__29(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_30_U3CSubtractSingleU3Eb__29_mDC30924DFA40FA9CC2D05AEBDD7573306E32227F (U3CU3Ec__DisplayClass162_30_t2F7B111DAE64B3A21A2D9D9399B1C86D3B28F9A5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * L_0 = __this->get_CSU24U3CU3E8__locals30_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_26_t57ADA1D37A606DEB94ADBFB47B74A6D2DD411214 * L_4 = __this->get_CSU24U3CU3E8__locals30_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_5 = L_4->get_CSU24U3CU3E8__locals26_1();
		bool* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_3, (bool)L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_31::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_31__ctor_m4B9C3A4275061D1B0D2C272FCE9300573E72CFAA (U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_32__ctor_m9F2D77C35DA8FA4D7C50C14E0CAD1FD3362931A7 (U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_32::<SubtractSingle>b__30(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_32_U3CSubtractSingleU3Eb__30_m30084B3B0A5E0C974C786AAF97B1BFB3CDBB3017 (U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_2 = __this->get_CSU24U3CU3E8__locals31_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_6 = __this->get_CSU24U3CU3E8__locals31_1();
		uint8_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)));
		float L_10;
		L_10 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_5, (uint8_t)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Converts_ToBoolean_mBA395E40885CD27B965C0D2B8EE1D3E4FF5764A8_inline(L_10, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)L_1))) = (int8_t)L_11;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_33::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_33__ctor_mD7928B96AD7EF8A875DAD516C552EF3E62E6E251 (U3CU3Ec__DisplayClass162_33_t92D048FD1A7E0AABC476BCC2D2EE8B5778D2F975 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_33::<SubtractSingle>b__31(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_33_U3CSubtractSingleU3Eb__31_m9169AC30F7DE0D9810BAED3BD4F51E99418B2AF6 (U3CU3Ec__DisplayClass162_33_t92D048FD1A7E0AABC476BCC2D2EE8B5778D2F975 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * L_0 = __this->get_CSU24U3CU3E8__locals32_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * L_3 = __this->get_CSU24U3CU3E8__locals32_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_4 = L_3->get_CSU24U3CU3E8__locals31_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		uint8_t L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_mBA395E40885CD27B965C0D2B8EE1D3E4FF5764A8_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_34::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_34__ctor_mE257FFD1D78B3889BCA2902DC2E9D4A748C6B941 (U3CU3Ec__DisplayClass162_34_tFC411BB16EA80DF5005D3B338E141367EEEAD5AE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_34::<SubtractSingle>b__32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_34_U3CSubtractSingleU3Eb__32_m116D1A38795D537FBECE66BDFBB8CC74ADB2C5BC (U3CU3Ec__DisplayClass162_34_tFC411BB16EA80DF5005D3B338E141367EEEAD5AE * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * L_0 = __this->get_CSU24U3CU3E8__locals33_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * L_4 = __this->get_CSU24U3CU3E8__locals33_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_5 = L_4->get_CSU24U3CU3E8__locals31_1();
		uint8_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_3, (uint8_t)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_mBA395E40885CD27B965C0D2B8EE1D3E4FF5764A8_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_35::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_35__ctor_mED628E9B0B989E8BB2D6E281E6ED1C52EB7F5915 (U3CU3Ec__DisplayClass162_35_t4D9EA021B37C55EA459166C0F362E1630EB2B826 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_35::<SubtractSingle>b__33(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_35_U3CSubtractSingleU3Eb__33_m75DAB6842A144124AC78EB26C6098E4248AF1555 (U3CU3Ec__DisplayClass162_35_t4D9EA021B37C55EA459166C0F362E1630EB2B826 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * L_0 = __this->get_CSU24U3CU3E8__locals34_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * L_3 = __this->get_CSU24U3CU3E8__locals34_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_4 = L_3->get_CSU24U3CU3E8__locals31_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		uint8_t L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_mBA395E40885CD27B965C0D2B8EE1D3E4FF5764A8_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_36::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_36__ctor_m555654A6677E2D8D6EF2340BF271BA446D0DA58A (U3CU3Ec__DisplayClass162_36_t916B75F615F0754F9BF6520008DDFED13AE735BE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_36::<SubtractSingle>b__34(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_36_U3CSubtractSingleU3Eb__34_m9CE638FA40619DDF2826BC93907A9E57C19A4036 (U3CU3Ec__DisplayClass162_36_t916B75F615F0754F9BF6520008DDFED13AE735BE * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * L_0 = __this->get_CSU24U3CU3E8__locals35_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_32_t533D6CCD5CA6AE86F1D5E5E3E53CC72380DED22A * L_4 = __this->get_CSU24U3CU3E8__locals35_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_5 = L_4->get_CSU24U3CU3E8__locals31_1();
		uint8_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_3, (uint8_t)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_mBA395E40885CD27B965C0D2B8EE1D3E4FF5764A8_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_37::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_37__ctor_mDAF6B3CC790ED7F3AAD121F4842DB42F491350FC (U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_37::<SubtractSingle>b__35(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_37_U3CSubtractSingleU3Eb__35_m765A38AD880AACE67F79BE4225804877E3BB6766 (U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_2 = __this->get_CSU24U3CU3E8__locals36_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_6 = __this->get_CSU24U3CU3E8__locals36_1();
		uint8_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)));
		float L_10;
		L_10 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_5, (uint8_t)L_9, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)L_1))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_10);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_38::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_38__ctor_mDC6FFFB7E57C66AE5997E0AB66196FDCBE0FE7BA (U3CU3Ec__DisplayClass162_38_t9AEAD30594AEAF30D9036955A5690DF4C1BB5418 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_38::<SubtractSingle>b__36(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_38_U3CSubtractSingleU3Eb__36_m2AACE39FF41AABB260D113D80DD6D3A925C2B1B4 (U3CU3Ec__DisplayClass162_38_t9AEAD30594AEAF30D9036955A5690DF4C1BB5418 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * L_0 = __this->get_CSU24U3CU3E8__locals37_1();
		uint8_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * L_3 = __this->get_CSU24U3CU3E8__locals37_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_4 = L_3->get_CSU24U3CU3E8__locals36_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		uint8_t L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_39::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_39__ctor_mCF3FC233EE7FBC0487FE53E3D2D340491F1FE4AF (U3CU3Ec__DisplayClass162_39_tB4C95A85CC27472D4A8C80161AD7F76374E794E1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_39::<SubtractSingle>b__37(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_39_U3CSubtractSingleU3Eb__37_mA41342CD0BC8742E048ECD1A0D2DED1A0A40B344 (U3CU3Ec__DisplayClass162_39_tB4C95A85CC27472D4A8C80161AD7F76374E794E1 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * L_0 = __this->get_CSU24U3CU3E8__locals38_1();
		uint8_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * L_4 = __this->get_CSU24U3CU3E8__locals38_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_5 = L_4->get_CSU24U3CU3E8__locals36_1();
		uint8_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_3, (uint8_t)L_8, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_4__ctor_m3C6F72BA1DB3EABE88A00FA3BBBAE40DA05B9B49 (U3CU3Ec__DisplayClass162_4_tA5BBDE74E1643A5F15D4A36B263D7F3CAD4D816F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_4::<SubtractSingle>b__3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_4_U3CSubtractSingleU3Eb__3_m05100E1D59BAE778EAC804C1ABCAF9C8E66AD0A2 (U3CU3Ec__DisplayClass162_4_tA5BBDE74E1643A5F15D4A36B263D7F3CAD4D816F * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * L_0 = __this->get_CSU24U3CU3E8__locals4_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * L_3 = __this->get_CSU24U3CU3E8__locals4_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_4 = L_3->get_CSU24U3CU3E8__locals1_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		bool L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_mBA395E40885CD27B965C0D2B8EE1D3E4FF5764A8_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_40::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_40__ctor_m8F85A8C4C31133F6ADA06D07315549D8A9713ABE (U3CU3Ec__DisplayClass162_40_t3F82A73FD1F6671A92A426816986A3E0C17E28CD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_40::<SubtractSingle>b__38(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_40_U3CSubtractSingleU3Eb__38_mC6F0ACA7DC4ED5A6C8B5134239865609BBBF1159 (U3CU3Ec__DisplayClass162_40_t3F82A73FD1F6671A92A426816986A3E0C17E28CD * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * L_0 = __this->get_CSU24U3CU3E8__locals39_1();
		uint8_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * L_3 = __this->get_CSU24U3CU3E8__locals39_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_4 = L_3->get_CSU24U3CU3E8__locals36_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		uint8_t L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_41::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_41__ctor_m5CA70AE935E3233A711069F566D09E3639885CDF (U3CU3Ec__DisplayClass162_41_t2887437E920B8B5B459C0F522AEE85EF1D743A6E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_41::<SubtractSingle>b__39(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_41_U3CSubtractSingleU3Eb__39_m84AA1B37F3F6193B49FF73B7C62158B4A6AECD42 (U3CU3Ec__DisplayClass162_41_t2887437E920B8B5B459C0F522AEE85EF1D743A6E * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * L_0 = __this->get_CSU24U3CU3E8__locals40_1();
		uint8_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_37_t78199681C2CEE9918D93FDFD2AC6EDB6051054CF * L_4 = __this->get_CSU24U3CU3E8__locals40_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_5 = L_4->get_CSU24U3CU3E8__locals36_1();
		uint8_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_3, (uint8_t)L_8, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_42::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_42__ctor_mBAF9C2729C292319DEBE7D3C7C083F86C5EA7EB5 (U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_42::<SubtractSingle>b__40(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_42_U3CSubtractSingleU3Eb__40_m41A2F7BC1C68D6A8A6C584C9EC9F1730EBDB499B (U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_2 = __this->get_CSU24U3CU3E8__locals41_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_6 = __this->get_CSU24U3CU3E8__locals41_1();
		uint8_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)));
		float L_10;
		L_10 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_5, (uint8_t)L_9, /*hidden argument*/NULL);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)4))))) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_10);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_43::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_43__ctor_m8C466487C7FDE70EDEDC377212ADDB0B840C0595 (U3CU3Ec__DisplayClass162_43_t011DD92A0CC5E42CFCCE92414919F3DEEC1D9837 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_43::<SubtractSingle>b__41(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_43_U3CSubtractSingleU3Eb__41_m897678501287C43E5894215627EB5F46C37DE50F (U3CU3Ec__DisplayClass162_43_t011DD92A0CC5E42CFCCE92414919F3DEEC1D9837 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * L_0 = __this->get_CSU24U3CU3E8__locals42_1();
		int32_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * L_3 = __this->get_CSU24U3CU3E8__locals42_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_4 = L_3->get_CSU24U3CU3E8__locals41_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		uint8_t L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_44::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_44__ctor_m4E371F7F4FEA2025F76815391D87029F15EF0412 (U3CU3Ec__DisplayClass162_44_tD0E07FE05FA8FABFC654A199E4B0B24C5F8096BE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_44::<SubtractSingle>b__42(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_44_U3CSubtractSingleU3Eb__42_m9058C32F7A6A759DFD080146E20FF0140430B0C3 (U3CU3Ec__DisplayClass162_44_tD0E07FE05FA8FABFC654A199E4B0B24C5F8096BE * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * L_0 = __this->get_CSU24U3CU3E8__locals43_1();
		int32_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * L_4 = __this->get_CSU24U3CU3E8__locals43_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_5 = L_4->get_CSU24U3CU3E8__locals41_1();
		uint8_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_3, (uint8_t)L_8, /*hidden argument*/NULL);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_45::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_45__ctor_m4CB37BBB56238122B6AAB1013DEC869FBBF61479 (U3CU3Ec__DisplayClass162_45_t70DCB7E406707BAE8E9BFDBB570DCA5EDD820D45 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_45::<SubtractSingle>b__43(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_45_U3CSubtractSingleU3Eb__43_mFABD9C54770BE83E5AC54BCF096FE145DEA4D42E (U3CU3Ec__DisplayClass162_45_t70DCB7E406707BAE8E9BFDBB570DCA5EDD820D45 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * L_0 = __this->get_CSU24U3CU3E8__locals44_1();
		int32_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * L_3 = __this->get_CSU24U3CU3E8__locals44_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_4 = L_3->get_CSU24U3CU3E8__locals41_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		uint8_t L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_46::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_46__ctor_mB887D7CCE399CFADDE6BC38836E3034197E117D8 (U3CU3Ec__DisplayClass162_46_tD9F730D5CFC47ABB3D2F497561CDF19A7E45107F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_46::<SubtractSingle>b__44(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_46_U3CSubtractSingleU3Eb__44_mC735055862E9FFB761A1AADA0F1471958F900E28 (U3CU3Ec__DisplayClass162_46_tD9F730D5CFC47ABB3D2F497561CDF19A7E45107F * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * L_0 = __this->get_CSU24U3CU3E8__locals45_1();
		int32_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_42_t6FCFB6912F761A8C2E91D2EF3284ED464A84CC27 * L_4 = __this->get_CSU24U3CU3E8__locals45_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_5 = L_4->get_CSU24U3CU3E8__locals41_1();
		uint8_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_3, (uint8_t)L_8, /*hidden argument*/NULL);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_47::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_47__ctor_mB9E31AA6F68D95CE5109D0BD104419FE2043D690 (U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_47::<SubtractSingle>b__45(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_47_U3CSubtractSingleU3Eb__45_m4A209E83B65D4F25A9F0FFA68D6547F03B4C64B1 (U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		int64_t* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_2 = __this->get_CSU24U3CU3E8__locals46_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_6 = __this->get_CSU24U3CU3E8__locals46_1();
		uint8_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)));
		float L_10;
		L_10 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_5, (uint8_t)L_9, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_10);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_48::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_48__ctor_m1200830CB6F91752EFEC2A1A78B464E5A9EACC06 (U3CU3Ec__DisplayClass162_48_t3E55E4FB0590AE824CA5D845D21F91B70565F253 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_48::<SubtractSingle>b__46(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_48_U3CSubtractSingleU3Eb__46_m51C7D47787804C726F4AF06A22ECC1D61D396598 (U3CU3Ec__DisplayClass162_48_t3E55E4FB0590AE824CA5D845D21F91B70565F253 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * L_0 = __this->get_CSU24U3CU3E8__locals47_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * L_3 = __this->get_CSU24U3CU3E8__locals47_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_4 = L_3->get_CSU24U3CU3E8__locals46_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		uint8_t L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_49::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_49__ctor_m355D95CEC4D94944B619B3475279C8E365A35D33 (U3CU3Ec__DisplayClass162_49_t6CE63BF9AEE83F3DD2EE0747CB8D1BF8A2F5C763 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_49::<SubtractSingle>b__47(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_49_U3CSubtractSingleU3Eb__47_mC2FCF468AAAFF1AB170FFA284EFEF36B2130E099 (U3CU3Ec__DisplayClass162_49_t6CE63BF9AEE83F3DD2EE0747CB8D1BF8A2F5C763 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * L_0 = __this->get_CSU24U3CU3E8__locals48_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * L_4 = __this->get_CSU24U3CU3E8__locals48_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_5 = L_4->get_CSU24U3CU3E8__locals46_1();
		uint8_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_3, (uint8_t)L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_5__ctor_m3C6D68B9C823A8F96CBBE365645C0815A279F05C (U3CU3Ec__DisplayClass162_5_t2BE174055CD73F3D6A7A1EC36AA85C75FD613A56 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_5::<SubtractSingle>b__4(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_5_U3CSubtractSingleU3Eb__4_m4FB28639E6B97799E4F1D71B2C28B1617D835730 (U3CU3Ec__DisplayClass162_5_t2BE174055CD73F3D6A7A1EC36AA85C75FD613A56 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * L_0 = __this->get_CSU24U3CU3E8__locals5_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_1_tEDA828CBFABA00AB28BFD2677539B765EA5B1E3E * L_4 = __this->get_CSU24U3CU3E8__locals5_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_5 = L_4->get_CSU24U3CU3E8__locals1_1();
		bool* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_3, (bool)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_mBA395E40885CD27B965C0D2B8EE1D3E4FF5764A8_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_50::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_50__ctor_m9C9DA44FDC478C41DE4E05446E721FF5CFF1DB83 (U3CU3Ec__DisplayClass162_50_tB3EBF8C8C6AAA94EF9EF49F34DBFE12CF4DC21EE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_50::<SubtractSingle>b__48(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_50_U3CSubtractSingleU3Eb__48_m5811E03C4FF062D3277C8B78B3E2E1EF30C811BA (U3CU3Ec__DisplayClass162_50_tB3EBF8C8C6AAA94EF9EF49F34DBFE12CF4DC21EE * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * L_0 = __this->get_CSU24U3CU3E8__locals49_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * L_3 = __this->get_CSU24U3CU3E8__locals49_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_4 = L_3->get_CSU24U3CU3E8__locals46_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		uint8_t L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_51::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_51__ctor_m17981D2A6486C580551A995EA07057F06AF05257 (U3CU3Ec__DisplayClass162_51_t90A85758A65103265B110228BB3FFD22570BD06E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_51::<SubtractSingle>b__49(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_51_U3CSubtractSingleU3Eb__49_m0A54ED0A3573A55ED9174D2E9F4FBBEB3A64E84E (U3CU3Ec__DisplayClass162_51_t90A85758A65103265B110228BB3FFD22570BD06E * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * L_0 = __this->get_CSU24U3CU3E8__locals50_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_47_t0D5697E76BA847ECAD38F317DFCF91BC8EAC1D6B * L_4 = __this->get_CSU24U3CU3E8__locals50_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_5 = L_4->get_CSU24U3CU3E8__locals46_1();
		uint8_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_3, (uint8_t)L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_52::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_52__ctor_m487CC8ED8FBB30A264753C8416110979B01B0D33 (U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_52::<SubtractSingle>b__50(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_52_U3CSubtractSingleU3Eb__50_m6612810117AF737DBD008EAC86B28C7FAADD8173 (U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		float* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_2 = __this->get_CSU24U3CU3E8__locals51_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_6 = __this->get_CSU24U3CU3E8__locals51_1();
		uint8_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)));
		float L_10;
		L_10 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_5, (uint8_t)L_9, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)4))))) = (float)((float)((float)L_10));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_53::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_53__ctor_mD3D21897C2ADC08E7A44641FD6076C02C743E3B0 (U3CU3Ec__DisplayClass162_53_t3FE7ABB67D9F8EA8DC1C3A80CE1B1B22907A0DD0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_53::<SubtractSingle>b__51(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_53_U3CSubtractSingleU3Eb__51_m3D9109AA9D5E3BEDA49DC33CE65A802E80066FF4 (U3CU3Ec__DisplayClass162_53_t3FE7ABB67D9F8EA8DC1C3A80CE1B1B22907A0DD0 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * L_0 = __this->get_CSU24U3CU3E8__locals52_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * L_3 = __this->get_CSU24U3CU3E8__locals52_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_4 = L_3->get_CSU24U3CU3E8__locals51_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		uint8_t L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_7, L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_54::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_54__ctor_mF2BA970BF1EA6E0F807B693D8F351B85C0826907 (U3CU3Ec__DisplayClass162_54_tE5A6C10CC5FFCB3F8276B953EDA98CFE1E490957 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_54::<SubtractSingle>b__52(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_54_U3CSubtractSingleU3Eb__52_mE1A9B56C9729A45C1E7D3CBDCE3F6D48354417D8 (U3CU3Ec__DisplayClass162_54_tE5A6C10CC5FFCB3F8276B953EDA98CFE1E490957 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * L_0 = __this->get_CSU24U3CU3E8__locals53_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * L_4 = __this->get_CSU24U3CU3E8__locals53_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_5 = L_4->get_CSU24U3CU3E8__locals51_1();
		uint8_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_3, (uint8_t)L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_55::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_55__ctor_m6FC5FAE8F75E7056FE681C9DE132C2DF0ADB273B (U3CU3Ec__DisplayClass162_55_tEEC54B53CE458CB9328C4B28C8AAF8BA3A3EE7AC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_55::<SubtractSingle>b__53(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_55_U3CSubtractSingleU3Eb__53_m4D17DF59838F378EAE80A1D6FF65A887F78AE016 (U3CU3Ec__DisplayClass162_55_tEEC54B53CE458CB9328C4B28C8AAF8BA3A3EE7AC * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * L_0 = __this->get_CSU24U3CU3E8__locals54_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * L_3 = __this->get_CSU24U3CU3E8__locals54_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_4 = L_3->get_CSU24U3CU3E8__locals51_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		uint8_t L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_7, L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_56::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_56__ctor_m39D292FEF6BB7F12700BE383F05C38294C7FD4BF (U3CU3Ec__DisplayClass162_56_t85E0658A5C8B3A4999484B284F742D205CA26F9B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_56::<SubtractSingle>b__54(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_56_U3CSubtractSingleU3Eb__54_mEF6C2EFD79BD760A25899C70CEFA8489B74E5503 (U3CU3Ec__DisplayClass162_56_t85E0658A5C8B3A4999484B284F742D205CA26F9B * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * L_0 = __this->get_CSU24U3CU3E8__locals55_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_52_t520CE3AE3FE18C4A66AAA9E09A558ABA34DFCE57 * L_4 = __this->get_CSU24U3CU3E8__locals55_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_5 = L_4->get_CSU24U3CU3E8__locals51_1();
		uint8_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_3, (uint8_t)L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_57::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_57__ctor_m3794E35EB2850B31242789A49BAD0E1AD65F6DAB (U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_57::<SubtractSingle>b__55(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_57_U3CSubtractSingleU3Eb__55_m12D4219966C97E79BFCE99AA216ABFAB20422D91 (U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		double* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_2 = __this->get_CSU24U3CU3E8__locals56_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_6 = __this->get_CSU24U3CU3E8__locals56_1();
		uint8_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)));
		float L_10;
		L_10 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_5, (uint8_t)L_9, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)8))))) = (double)((double)((double)L_10));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_58::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_58__ctor_m26CAF69D2CF52990496C4F9D561E230B037F72B8 (U3CU3Ec__DisplayClass162_58_tFE425BD75B11A3635663F71E3BA2A10466C1EEB9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_58::<SubtractSingle>b__56(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_58_U3CSubtractSingleU3Eb__56_m8458100A652B8670BA8C3816EB275BD6D180B8E0 (U3CU3Ec__DisplayClass162_58_tFE425BD75B11A3635663F71E3BA2A10466C1EEB9 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * L_0 = __this->get_CSU24U3CU3E8__locals57_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * L_3 = __this->get_CSU24U3CU3E8__locals57_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_4 = L_3->get_CSU24U3CU3E8__locals56_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		uint8_t L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_7, L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_59::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_59__ctor_mDA409890B5B7EF7644E3F520A1593B2B098BCC1A (U3CU3Ec__DisplayClass162_59_tC747EE22DDC83B6B63875D9A3DD7FA1EC35214CF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_59::<SubtractSingle>b__57(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_59_U3CSubtractSingleU3Eb__57_mDFB05ADB0622607B030F6989B81A04D5239A7C1A (U3CU3Ec__DisplayClass162_59_tC747EE22DDC83B6B63875D9A3DD7FA1EC35214CF * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * L_0 = __this->get_CSU24U3CU3E8__locals58_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * L_4 = __this->get_CSU24U3CU3E8__locals58_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_5 = L_4->get_CSU24U3CU3E8__locals56_1();
		uint8_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_3, (uint8_t)L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_6::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_6__ctor_m4417C13D6CA205EBCF9BC0D280909283000D94B9 (U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_6::<SubtractSingle>b__5(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_6_U3CSubtractSingleU3Eb__5_m46D4BB0F97C4290FADE782C0E698F7CF961A9885 (U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_2 = __this->get_CSU24U3CU3E8__locals6_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_6 = __this->get_CSU24U3CU3E8__locals6_1();
		bool* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)));
		float L_10;
		L_10 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_5, (bool)L_9, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)L_1))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_10);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_60::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_60__ctor_m33A9F287F70EE03B49557DC5C466477DBD0FC90A (U3CU3Ec__DisplayClass162_60_tAB3067C5EC6120B78BC3AC1360C8F6CDF1936B1B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_60::<SubtractSingle>b__58(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_60_U3CSubtractSingleU3Eb__58_m779F3575F29A2A364BB32D8F61D097B992352396 (U3CU3Ec__DisplayClass162_60_tAB3067C5EC6120B78BC3AC1360C8F6CDF1936B1B * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * L_0 = __this->get_CSU24U3CU3E8__locals59_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * L_3 = __this->get_CSU24U3CU3E8__locals59_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_4 = L_3->get_CSU24U3CU3E8__locals56_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		uint8_t L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_7, L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_61::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_61__ctor_mA2A6695A75E3201C608BDF6A43E0A8C880B2C4B4 (U3CU3Ec__DisplayClass162_61_t132150CC2771F2E8D0CC78C3E386F1EBCD5DCFA7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_61::<SubtractSingle>b__59(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_61_U3CSubtractSingleU3Eb__59_mCA23897907071F0A60E5B26E7FD7592BF6A85AFE (U3CU3Ec__DisplayClass162_61_t132150CC2771F2E8D0CC78C3E386F1EBCD5DCFA7 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * L_0 = __this->get_CSU24U3CU3E8__locals60_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_57_t9D9DE130748456A94CB72E55CF89BADAD2FCC527 * L_4 = __this->get_CSU24U3CU3E8__locals60_1();
		U3CU3Ec__DisplayClass162_31_t7F5D158D6E00DEDD859A84D690A19C3A70968657 * L_5 = L_4->get_CSU24U3CU3E8__locals56_1();
		uint8_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline(L_3, (uint8_t)L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_62::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_62__ctor_mDB5DE045A0B10B8F363473DE43D9F360C8704650 (U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_63::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_63__ctor_mB5CC0A11495635B4A10021CDEAF7F786DBAE1B21 (U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_63::<SubtractSingle>b__60(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_63_U3CSubtractSingleU3Eb__60_m7B22BBD2FFA70BB2C3782EE359EC322C6ACEE1C8 (U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_2 = __this->get_CSU24U3CU3E8__locals61_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_6 = __this->get_CSU24U3CU3E8__locals61_1();
		int32_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)4)))));
		double L_10;
		L_10 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_5, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Converts_ToBoolean_m074FF94EB8657BE8B924CFCDD3F20F29B59CE76A_inline(L_10, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)L_1))) = (int8_t)L_11;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_64__ctor_mF40F029335076A6E70E5ACDBDBFD47B5DA2C5981 (U3CU3Ec__DisplayClass162_64_t041A0C51853D73C9ACA48D97AB950F8254406713 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_64::<SubtractSingle>b__61(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_64_U3CSubtractSingleU3Eb__61_m59C7D89920A00A5F0F46B34997BB0BD1534436A0 (U3CU3Ec__DisplayClass162_64_t041A0C51853D73C9ACA48D97AB950F8254406713 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * L_0 = __this->get_CSU24U3CU3E8__locals62_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * L_3 = __this->get_CSU24U3CU3E8__locals62_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_4 = L_3->get_CSU24U3CU3E8__locals61_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int32_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_m074FF94EB8657BE8B924CFCDD3F20F29B59CE76A_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_65::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_65__ctor_m36B687725E4BA023B77365B60A7CDB8BF47B7396 (U3CU3Ec__DisplayClass162_65_t6DCA1256FA236AB5A32E1F9AE44B6E3DE27D1D31 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_65::<SubtractSingle>b__62(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_65_U3CSubtractSingleU3Eb__62_m55BAB89E6B2B8D00BD9F6B96C4E81D6B5BFC2795 (U3CU3Ec__DisplayClass162_65_t6DCA1256FA236AB5A32E1F9AE44B6E3DE27D1D31 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * L_0 = __this->get_CSU24U3CU3E8__locals63_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * L_4 = __this->get_CSU24U3CU3E8__locals63_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_5 = L_4->get_CSU24U3CU3E8__locals61_1();
		int32_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_3, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_m074FF94EB8657BE8B924CFCDD3F20F29B59CE76A_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_66::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_66__ctor_mDB55B611606F2DE879E80C04F834DE819FBE66B2 (U3CU3Ec__DisplayClass162_66_t85A4559C251CA32175070F7D9F8AD722070911AB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_66::<SubtractSingle>b__63(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_66_U3CSubtractSingleU3Eb__63_m4A0719794CEC41B5113580F46A74D3174635BA84 (U3CU3Ec__DisplayClass162_66_t85A4559C251CA32175070F7D9F8AD722070911AB * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * L_0 = __this->get_CSU24U3CU3E8__locals64_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * L_3 = __this->get_CSU24U3CU3E8__locals64_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_4 = L_3->get_CSU24U3CU3E8__locals61_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int32_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_m074FF94EB8657BE8B924CFCDD3F20F29B59CE76A_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_67::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_67__ctor_mB530BC0942DD3379D44A5EB8123B328F967608F4 (U3CU3Ec__DisplayClass162_67_tA855A65D81F22C9D9EAD51FDBAC37A83F62BF951 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_67::<SubtractSingle>b__64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_67_U3CSubtractSingleU3Eb__64_mC23E5D2136C41AA968B55BF9685AD0FAE06673DF (U3CU3Ec__DisplayClass162_67_tA855A65D81F22C9D9EAD51FDBAC37A83F62BF951 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * L_0 = __this->get_CSU24U3CU3E8__locals65_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_63_tD0D13A69393499619FE6FAECCAFBC1D98AD00D24 * L_4 = __this->get_CSU24U3CU3E8__locals65_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_5 = L_4->get_CSU24U3CU3E8__locals61_1();
		int32_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_3, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_m074FF94EB8657BE8B924CFCDD3F20F29B59CE76A_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_68::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_68__ctor_m0AC8162329B61DE7F01A6CC7C034DEB5A636F05B (U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_68::<SubtractSingle>b__65(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_68_U3CSubtractSingleU3Eb__65_mCDAF5E1DB3AD4B091C58C926C713B49A116051FC (U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_2 = __this->get_CSU24U3CU3E8__locals66_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_6 = __this->get_CSU24U3CU3E8__locals66_1();
		int32_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)4)))));
		double L_10;
		L_10 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_5, L_9, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)L_1))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(L_10);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_69::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_69__ctor_mDEB741318B2393860072D095F4FCB0380D488DDC (U3CU3Ec__DisplayClass162_69_tDBF1F40BF6A3810C3BB82A4D7D6B9AF8428DD0AA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_69::<SubtractSingle>b__66(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_69_U3CSubtractSingleU3Eb__66_mA441057D0BC827F5B9309CF23B7CBED7D33C6A86 (U3CU3Ec__DisplayClass162_69_tDBF1F40BF6A3810C3BB82A4D7D6B9AF8428DD0AA * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * L_0 = __this->get_CSU24U3CU3E8__locals67_1();
		uint8_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * L_3 = __this->get_CSU24U3CU3E8__locals67_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_4 = L_3->get_CSU24U3CU3E8__locals66_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int32_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_7__ctor_m484F23DE129E717375046519B8978EBF2E52BC6D (U3CU3Ec__DisplayClass162_7_t7286660C684B3D8C5AF080F044F31F68FE170C41 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_7::<SubtractSingle>b__6(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_7_U3CSubtractSingleU3Eb__6_m3F305D193CA01E56737272D204D34B0DE429336F (U3CU3Ec__DisplayClass162_7_t7286660C684B3D8C5AF080F044F31F68FE170C41 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * L_0 = __this->get_CSU24U3CU3E8__locals7_1();
		uint8_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * L_3 = __this->get_CSU24U3CU3E8__locals7_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_4 = L_3->get_CSU24U3CU3E8__locals6_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		bool L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_70::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_70__ctor_m1D90A8F0ED5C50E32B473542F39174452EE9A87A (U3CU3Ec__DisplayClass162_70_tCCE24581F6A2BD074623A9CAC32493398D19E421 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_70::<SubtractSingle>b__67(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_70_U3CSubtractSingleU3Eb__67_mE86FFCA68E70593F8563082BF8A586715C405A76 (U3CU3Ec__DisplayClass162_70_tCCE24581F6A2BD074623A9CAC32493398D19E421 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * L_0 = __this->get_CSU24U3CU3E8__locals68_1();
		uint8_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * L_4 = __this->get_CSU24U3CU3E8__locals68_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_5 = L_4->get_CSU24U3CU3E8__locals66_1();
		int32_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_3, L_8, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_71::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_71__ctor_mF22DB9205472A5DCB8E8DE2C216F9589B924FCA8 (U3CU3Ec__DisplayClass162_71_tD0B9C8577D911D35BBF430E62A429F654BFC730D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_71::<SubtractSingle>b__68(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_71_U3CSubtractSingleU3Eb__68_m2E2C66481A21CC6DA57027F166C259B12395DF17 (U3CU3Ec__DisplayClass162_71_tD0B9C8577D911D35BBF430E62A429F654BFC730D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * L_0 = __this->get_CSU24U3CU3E8__locals69_1();
		uint8_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * L_3 = __this->get_CSU24U3CU3E8__locals69_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_4 = L_3->get_CSU24U3CU3E8__locals66_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int32_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_72::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_72__ctor_mC97BD3FA2A50762B4CCC4883043FC88E2DD0A4E5 (U3CU3Ec__DisplayClass162_72_t9660F2ACBB88747C7E4E024914C13DEAECC61B35 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_72::<SubtractSingle>b__69(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_72_U3CSubtractSingleU3Eb__69_m8B5B5022CCF85BA9BDDA570299B1E134703B5F0B (U3CU3Ec__DisplayClass162_72_t9660F2ACBB88747C7E4E024914C13DEAECC61B35 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * L_0 = __this->get_CSU24U3CU3E8__locals70_1();
		uint8_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_68_tBA8763018F6188872ABCD4CCD066785EE9A61045 * L_4 = __this->get_CSU24U3CU3E8__locals70_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_5 = L_4->get_CSU24U3CU3E8__locals66_1();
		int32_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_3, L_8, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_73::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_73__ctor_mEA863BFA985A09E80866BA59676EDC3D86A72C94 (U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_73::<SubtractSingle>b__70(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_73_U3CSubtractSingleU3Eb__70_m1B53A64ACECE5D4DBB2078624DB31F7BA47F0841 (U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_2 = __this->get_CSU24U3CU3E8__locals71_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_6 = __this->get_CSU24U3CU3E8__locals71_1();
		int32_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)4)))));
		double L_10;
		L_10 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_5, L_9, /*hidden argument*/NULL);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)4))))) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_10);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_74::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_74__ctor_m1D4F50FB7CB6BCACC442261583B22E12951750F6 (U3CU3Ec__DisplayClass162_74_t6DCD4C217D80798A737493B6CF50945F3374CD56 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_74::<SubtractSingle>b__71(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_74_U3CSubtractSingleU3Eb__71_mA88643800CFF42873DC1143A7ECD7B4D66A7BD90 (U3CU3Ec__DisplayClass162_74_t6DCD4C217D80798A737493B6CF50945F3374CD56 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * L_0 = __this->get_CSU24U3CU3E8__locals72_1();
		int32_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * L_3 = __this->get_CSU24U3CU3E8__locals72_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_4 = L_3->get_CSU24U3CU3E8__locals71_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int32_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_75::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_75__ctor_mD2F89E5BCBFD6807898EBBD7E3AAC40537965E7D (U3CU3Ec__DisplayClass162_75_t8819505132BB6E1B34820F50EB6C2965C72B304A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_75::<SubtractSingle>b__72(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_75_U3CSubtractSingleU3Eb__72_m62AA346C17306A2756BC33F832D2B8282C2E534B (U3CU3Ec__DisplayClass162_75_t8819505132BB6E1B34820F50EB6C2965C72B304A * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * L_0 = __this->get_CSU24U3CU3E8__locals73_1();
		int32_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * L_4 = __this->get_CSU24U3CU3E8__locals73_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_5 = L_4->get_CSU24U3CU3E8__locals71_1();
		int32_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_3, L_8, /*hidden argument*/NULL);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_76::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_76__ctor_mB338842CFF095923B53484E3B29257B8C1231789 (U3CU3Ec__DisplayClass162_76_t123A4167E82D87E92E27DCA946198CAB17092AD5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_76::<SubtractSingle>b__73(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_76_U3CSubtractSingleU3Eb__73_m7A6DB8430A6664770A53998EC3AABECC5A605A07 (U3CU3Ec__DisplayClass162_76_t123A4167E82D87E92E27DCA946198CAB17092AD5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * L_0 = __this->get_CSU24U3CU3E8__locals74_1();
		int32_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * L_3 = __this->get_CSU24U3CU3E8__locals74_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_4 = L_3->get_CSU24U3CU3E8__locals71_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int32_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_77::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_77__ctor_mA9C6F6E04CD37E04B23F5B78785072E86D7699AC (U3CU3Ec__DisplayClass162_77_tDED6AAA1C93A88B37A41F38C025B56372D4CD06D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_77::<SubtractSingle>b__74(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_77_U3CSubtractSingleU3Eb__74_mCC8CE070B0950E61F5336A2A9E56B13C8F520FF7 (U3CU3Ec__DisplayClass162_77_tDED6AAA1C93A88B37A41F38C025B56372D4CD06D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * L_0 = __this->get_CSU24U3CU3E8__locals75_1();
		int32_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_73_t41416CE12448BE31A07EAD4948A3306E38CAC37F * L_4 = __this->get_CSU24U3CU3E8__locals75_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_5 = L_4->get_CSU24U3CU3E8__locals71_1();
		int32_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_3, L_8, /*hidden argument*/NULL);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_78::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_78__ctor_mD7B4A5506969054A2309C39BA693FEF799CE049E (U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_78::<SubtractSingle>b__75(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_78_U3CSubtractSingleU3Eb__75_m9CCE8CFFB4DB27D3FA58CEF9C941B49467E18870 (U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		int64_t* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_2 = __this->get_CSU24U3CU3E8__locals76_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_6 = __this->get_CSU24U3CU3E8__locals76_1();
		int32_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)4)))));
		double L_10;
		L_10 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_5, L_9, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_10);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_79::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_79__ctor_m457ACF7914FE2A4388733640F273E59781A87796 (U3CU3Ec__DisplayClass162_79_tF636CF640644D6E1BFD22269E332011A526E55DD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_79::<SubtractSingle>b__76(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_79_U3CSubtractSingleU3Eb__76_m39791EB5EB3AF3416B2D31AFC024D9DD58B10D1D (U3CU3Ec__DisplayClass162_79_tF636CF640644D6E1BFD22269E332011A526E55DD * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * L_0 = __this->get_CSU24U3CU3E8__locals77_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * L_3 = __this->get_CSU24U3CU3E8__locals77_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_4 = L_3->get_CSU24U3CU3E8__locals76_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int32_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_8::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_8__ctor_m49CC371AF4B1723917B60E0CEE5D106C4A118D8A (U3CU3Ec__DisplayClass162_8_tA370969B9E4869D61D39A5E74886751CA5137E54 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_8::<SubtractSingle>b__7(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_8_U3CSubtractSingleU3Eb__7_m070961C6D584D4E4EA0BCCA90C797A44B08762D0 (U3CU3Ec__DisplayClass162_8_tA370969B9E4869D61D39A5E74886751CA5137E54 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * L_0 = __this->get_CSU24U3CU3E8__locals8_1();
		uint8_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * L_4 = __this->get_CSU24U3CU3E8__locals8_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_5 = L_4->get_CSU24U3CU3E8__locals6_1();
		bool* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)));
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_3, (bool)L_8, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_80::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_80__ctor_m227BA1802E0E1A905F555BEE3F76BDB43050C156 (U3CU3Ec__DisplayClass162_80_t1B907B3DA42D4892FF9447144872F987FE345F3C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_80::<SubtractSingle>b__77(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_80_U3CSubtractSingleU3Eb__77_m2A26994C59122E8B41F318EA86B393378237D0D2 (U3CU3Ec__DisplayClass162_80_t1B907B3DA42D4892FF9447144872F987FE345F3C * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * L_0 = __this->get_CSU24U3CU3E8__locals78_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * L_4 = __this->get_CSU24U3CU3E8__locals78_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_5 = L_4->get_CSU24U3CU3E8__locals76_1();
		int32_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_3, L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_81::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_81__ctor_mE702F55211A5AA69D0B7A8EFE2774F0077E7BF07 (U3CU3Ec__DisplayClass162_81_t9D75FAA93DB882F279C4901BB200EDD0FF3F5DC8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_81::<SubtractSingle>b__78(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_81_U3CSubtractSingleU3Eb__78_mA872AC58D03C888D058CCC18933CDDB24443BE62 (U3CU3Ec__DisplayClass162_81_t9D75FAA93DB882F279C4901BB200EDD0FF3F5DC8 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * L_0 = __this->get_CSU24U3CU3E8__locals79_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * L_3 = __this->get_CSU24U3CU3E8__locals79_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_4 = L_3->get_CSU24U3CU3E8__locals76_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int32_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_82::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_82__ctor_m53A2824B93BCCEEE90BBF73210C14B1A07E22D57 (U3CU3Ec__DisplayClass162_82_t30A70AB9043D97DCB5594EFCB81D59C732A61A9B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_82::<SubtractSingle>b__79(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_82_U3CSubtractSingleU3Eb__79_mFB37AF84894EC4BBB14D485ACC3F072C5DEE6651 (U3CU3Ec__DisplayClass162_82_t30A70AB9043D97DCB5594EFCB81D59C732A61A9B * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * L_0 = __this->get_CSU24U3CU3E8__locals80_1();
		int64_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_78_tAE97954051EAA919DDD8B65A232170F18854C52A * L_4 = __this->get_CSU24U3CU3E8__locals80_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_5 = L_4->get_CSU24U3CU3E8__locals76_1();
		int32_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_3, L_8, /*hidden argument*/NULL);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_83::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_83__ctor_m4B74BA5A9E9033ECF73D12BC11468F9B2A559966 (U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_83::<SubtractSingle>b__80(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_83_U3CSubtractSingleU3Eb__80_m1EFAD1E3F1998C993B7AFA6C625ECFA885CCCE15 (U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		float* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_2 = __this->get_CSU24U3CU3E8__locals81_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_6 = __this->get_CSU24U3CU3E8__locals81_1();
		int32_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)4)))));
		double L_10;
		L_10 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_5, L_9, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)4))))) = (float)((float)((float)L_10));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_84::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_84__ctor_m0A206000256EDFF72D3C8B3EEEB0BC12A0AF8FF7 (U3CU3Ec__DisplayClass162_84_tD2F1C9174F2F56FFFA6C63CF1575DAF24C210398 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_84::<SubtractSingle>b__81(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_84_U3CSubtractSingleU3Eb__81_m9158D5DA447595467F5244E101A803C566063489 (U3CU3Ec__DisplayClass162_84_tD2F1C9174F2F56FFFA6C63CF1575DAF24C210398 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * L_0 = __this->get_CSU24U3CU3E8__locals82_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * L_3 = __this->get_CSU24U3CU3E8__locals82_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_4 = L_3->get_CSU24U3CU3E8__locals81_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int32_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_7, L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_85::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_85__ctor_m1FF059ADC299F7BFD56728FAFB38DE6B3CD21B8B (U3CU3Ec__DisplayClass162_85_tDB948ACEAC46D7DF716AB3352146EBA2E8B860DE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_85::<SubtractSingle>b__82(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_85_U3CSubtractSingleU3Eb__82_m36AABA354090A91FA18600550B7565009B030B2F (U3CU3Ec__DisplayClass162_85_tDB948ACEAC46D7DF716AB3352146EBA2E8B860DE * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * L_0 = __this->get_CSU24U3CU3E8__locals83_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * L_4 = __this->get_CSU24U3CU3E8__locals83_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_5 = L_4->get_CSU24U3CU3E8__locals81_1();
		int32_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_3, L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_86::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_86__ctor_m925411AC762050BD2B5824BADF8D1E5C04440184 (U3CU3Ec__DisplayClass162_86_tB44CAA30BE73B781DD09BBC1C021806A66720194 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_86::<SubtractSingle>b__83(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_86_U3CSubtractSingleU3Eb__83_m0DE1FAE1DA1AFECA5161593B33E765C0B44D430B (U3CU3Ec__DisplayClass162_86_tB44CAA30BE73B781DD09BBC1C021806A66720194 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * L_0 = __this->get_CSU24U3CU3E8__locals84_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * L_3 = __this->get_CSU24U3CU3E8__locals84_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_4 = L_3->get_CSU24U3CU3E8__locals81_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int32_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_7, L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_87::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_87__ctor_mFAE14F97526FA47B320FF1D9C661D238CA4A11BF (U3CU3Ec__DisplayClass162_87_t9DC053EF9053AD2AE488B586CC3C24BE274EC254 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_87::<SubtractSingle>b__84(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_87_U3CSubtractSingleU3Eb__84_mA2BD683D34660EE7D112B1E2C269383352655524 (U3CU3Ec__DisplayClass162_87_t9DC053EF9053AD2AE488B586CC3C24BE274EC254 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * L_0 = __this->get_CSU24U3CU3E8__locals85_1();
		float* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_83_t4227B8AD476D645201A4212BE5CDF9583D4106F1 * L_4 = __this->get_CSU24U3CU3E8__locals85_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_5 = L_4->get_CSU24U3CU3E8__locals81_1();
		int32_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_3, L_8, /*hidden argument*/NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)4))))) = (float)((float)((float)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_88::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_88__ctor_m07D4D970D481334F4FB9A5B941EDA26D0F323CED (U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_88::<SubtractSingle>b__85(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_88_U3CSubtractSingleU3Eb__85_m662CDFEFF11ACD6AE9B9C7187A6DC13709028503 (U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		double* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_2 = __this->get_CSU24U3CU3E8__locals86_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_6 = __this->get_CSU24U3CU3E8__locals86_1();
		int32_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)4)))));
		double L_10;
		L_10 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_5, L_9, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)8))))) = (double)((double)((double)L_10));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_89::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_89__ctor_mACF61618C2CDAB257C2D21781DA7C17A034D9806 (U3CU3Ec__DisplayClass162_89_tAEF24B6899AA4E48B659B5676651AB938909366D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_89::<SubtractSingle>b__86(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_89_U3CSubtractSingleU3Eb__86_mA36D88763DBDB780358755A1F1F745B7B7FF70BC (U3CU3Ec__DisplayClass162_89_tAEF24B6899AA4E48B659B5676651AB938909366D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * L_0 = __this->get_CSU24U3CU3E8__locals87_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * L_3 = __this->get_CSU24U3CU3E8__locals87_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_4 = L_3->get_CSU24U3CU3E8__locals86_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int32_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_7, L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_9::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_9__ctor_mBDB2E8B9C8CE41C9571028A08CB25538F7D7E3BD (U3CU3Ec__DisplayClass162_9_tE330AFA05A88A81A665E561059A55F1089A2AC3E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_9::<SubtractSingle>b__8(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_9_U3CSubtractSingleU3Eb__8_m4415791BA7E423C2450D0E59CF6C4B4AEFC7F5B5 (U3CU3Ec__DisplayClass162_9_tE330AFA05A88A81A665E561059A55F1089A2AC3E * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * L_0 = __this->get_CSU24U3CU3E8__locals9_1();
		uint8_t* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_6_tCB264FFABD5C211F666E4A9BE67985B4A44496C5 * L_3 = __this->get_CSU24U3CU3E8__locals9_1();
		U3CU3Ec__DisplayClass162_0_t8362AA302E4DAB376F5CB1F01FD74EC2135F984B * L_4 = L_3->get_CSU24U3CU3E8__locals6_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		bool L_8 = __this->get_rval_0();
		float L_9;
		L_9 = Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline(L_7, L_8, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_9);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_90::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_90__ctor_mCE86F39EE0FDFBDEF5ED6036A4AAA334A070C57D (U3CU3Ec__DisplayClass162_90_t1A676C4128A9C58BC4B5C049A6B9B9C62D9925FE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_90::<SubtractSingle>b__87(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_90_U3CSubtractSingleU3Eb__87_m1E70FB31DD240D62A8BB7A5F404EB252604FE534 (U3CU3Ec__DisplayClass162_90_t1A676C4128A9C58BC4B5C049A6B9B9C62D9925FE * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * L_0 = __this->get_CSU24U3CU3E8__locals88_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * L_4 = __this->get_CSU24U3CU3E8__locals88_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_5 = L_4->get_CSU24U3CU3E8__locals86_1();
		int32_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_3, L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_91::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_91__ctor_mB5E2D674AFE1DC6EAE3122A035FC1130F63D1560 (U3CU3Ec__DisplayClass162_91_t94FB285AAAE9B39D80A86AA0B0652845925051D7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_91::<SubtractSingle>b__88(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_91_U3CSubtractSingleU3Eb__88_mB6E856DA7898A919FE73EA458847634647F07545 (U3CU3Ec__DisplayClass162_91_t94FB285AAAE9B39D80A86AA0B0652845925051D7 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * L_0 = __this->get_CSU24U3CU3E8__locals89_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * L_3 = __this->get_CSU24U3CU3E8__locals89_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_4 = L_3->get_CSU24U3CU3E8__locals86_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int32_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_7, L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_92::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_92__ctor_m01B96F04933D79F333464B973FD7EDDD91EA298D (U3CU3Ec__DisplayClass162_92_t58EA3799F2F91F5FC746D45D2649F1BA982D7CD9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_92::<SubtractSingle>b__89(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_92_U3CSubtractSingleU3Eb__89_mC00AE6D7BBE2C86C280B2ACDA99F2140E69F6B60 (U3CU3Ec__DisplayClass162_92_t58EA3799F2F91F5FC746D45D2649F1BA982D7CD9 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * L_0 = __this->get_CSU24U3CU3E8__locals90_1();
		double* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_88_t071558CDBD7FABD56AF5AD82787B8E41AF16C0EF * L_4 = __this->get_CSU24U3CU3E8__locals90_1();
		U3CU3Ec__DisplayClass162_62_t691F923D136EA63A075DD926CDAD6F38ABC06D60 * L_5 = L_4->get_CSU24U3CU3E8__locals86_1();
		int32_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int32_t L_8 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)4)))));
		double L_9;
		L_9 = Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline(L_3, L_8, /*hidden argument*/NULL);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)8))))) = (double)((double)((double)L_9));
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_93::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_93__ctor_mE965BE762B46BB7B9425A85C893C6C05B4FE0437 (U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_94::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_94__ctor_mD42B3EC15CA3C2272400B1241ED43641D1BDADE4 (U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_94::<SubtractSingle>b__90(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_94_U3CSubtractSingleU3Eb__90_m7175AA7F84C67FD1E39D02764261E537ED5A8910 (U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * L_2 = __this->get_CSU24U3CU3E8__locals91_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * L_6 = __this->get_CSU24U3CU3E8__locals91_1();
		int64_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int64_t L_9 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)8)))));
		double L_10;
		L_10 = Operator_Subtract_mF66043025359383772702F35404058E5034B0594_inline(L_5, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Converts_ToBoolean_m074FF94EB8657BE8B924CFCDD3F20F29B59CE76A_inline(L_10, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)L_1))) = (int8_t)L_11;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_95::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_95__ctor_m9BE8A4C024CC449C5600F4763C259DFD319C8127 (U3CU3Ec__DisplayClass162_95_t44C2CE80EC698B539FCB97AD6D879FEDDB58CC62 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_95::<SubtractSingle>b__91(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_95_U3CSubtractSingleU3Eb__91_m272F7BE5D05AAE3A35C3EAD504212258A7F8416E (U3CU3Ec__DisplayClass162_95_t44C2CE80EC698B539FCB97AD6D879FEDDB58CC62 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * L_0 = __this->get_CSU24U3CU3E8__locals92_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * L_3 = __this->get_CSU24U3CU3E8__locals92_1();
		U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * L_4 = L_3->get_CSU24U3CU3E8__locals91_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int64_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mF66043025359383772702F35404058E5034B0594_inline(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_m074FF94EB8657BE8B924CFCDD3F20F29B59CE76A_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_96::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_96__ctor_m2C44CE59B4C146E920C6AE80BCB080A3ED90DD6F (U3CU3Ec__DisplayClass162_96_t583336A7845D675E2A6E73EB68D9A78AF0D71D49 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_96::<SubtractSingle>b__92(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_96_U3CSubtractSingleU3Eb__92_m1719098FD25F68E0AEE60BBE17170F1E4A7B98B6 (U3CU3Ec__DisplayClass162_96_t583336A7845D675E2A6E73EB68D9A78AF0D71D49 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * L_0 = __this->get_CSU24U3CU3E8__locals93_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * L_4 = __this->get_CSU24U3CU3E8__locals93_1();
		U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * L_5 = L_4->get_CSU24U3CU3E8__locals91_1();
		int64_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int64_t L_8 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)8)))));
		double L_9;
		L_9 = Operator_Subtract_mF66043025359383772702F35404058E5034B0594_inline(L_3, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_m074FF94EB8657BE8B924CFCDD3F20F29B59CE76A_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_97::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_97__ctor_m878C0ED05B1D4E861348C2D7948A4A14E8337735 (U3CU3Ec__DisplayClass162_97_tA3400A3C484EC276832E06A10D81802CE9F05B29 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_97::<SubtractSingle>b__93(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_97_U3CSubtractSingleU3Eb__93_mDC33A1E24625E1A3E23D103F911DAEA100C6A2D5 (U3CU3Ec__DisplayClass162_97_tA3400A3C484EC276832E06A10D81802CE9F05B29 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * L_0 = __this->get_CSU24U3CU3E8__locals94_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * L_3 = __this->get_CSU24U3CU3E8__locals94_1();
		U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * L_4 = L_3->get_CSU24U3CU3E8__locals91_1();
		float* L_5 = L_4->get_lhs_address_0();
		int32_t L_6 = ___i0;
		float L_7 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)4)))));
		int64_t L_8 = __this->get_rval_0();
		double L_9;
		L_9 = Operator_Subtract_mF66043025359383772702F35404058E5034B0594_inline(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_m074FF94EB8657BE8B924CFCDD3F20F29B59CE76A_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_98::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_98__ctor_mABB97085B28EB6AC0E51CC3F07836FD95DBBF9B0 (U3CU3Ec__DisplayClass162_98_t16AE778E84D8AE37FD048CAFF439EE3CD0303781 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_98::<SubtractSingle>b__94(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_98_U3CSubtractSingleU3Eb__94_mDB7F551CD26D1C9C81655CE27899775E42DF139D (U3CU3Ec__DisplayClass162_98_t16AE778E84D8AE37FD048CAFF439EE3CD0303781 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * L_0 = __this->get_CSU24U3CU3E8__locals95_1();
		bool* L_1 = L_0->get_ret_address_0();
		int32_t L_2 = ___i0;
		float L_3 = __this->get_lval_0();
		U3CU3Ec__DisplayClass162_94_t18D814467A5C7BCE2CF45B06FEF4FE151F9414FF * L_4 = __this->get_CSU24U3CU3E8__locals95_1();
		U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * L_5 = L_4->get_CSU24U3CU3E8__locals91_1();
		int64_t* L_6 = L_5->get_rhs_address_1();
		int32_t L_7 = ___i0;
		int64_t L_8 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)8)))));
		double L_9;
		L_9 = Operator_Subtract_mF66043025359383772702F35404058E5034B0594_inline(L_3, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Converts_t7BAE7195CC0EE7ECBF22381A34815398BD533D6A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Converts_ToBoolean_m074FF94EB8657BE8B924CFCDD3F20F29B59CE76A_inline(L_9, /*hidden argument*/NULL);
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2))) = (int8_t)L_10;
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
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_99::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_99__ctor_m8FDF815450B9C274B15A8D45776F27E18CBAC418 (U3CU3Ec__DisplayClass162_99_tD95A2AFFF814B071FE8965A07F8A107BAF918F93 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Backends.DefaultEngine/<>c__DisplayClass162_99::<SubtractSingle>b__95(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass162_99_U3CSubtractSingleU3Eb__95_m49CBDD095D9530960B181C9671D586FB24FAB99F (U3CU3Ec__DisplayClass162_99_tD95A2AFFF814B071FE8965A07F8A107BAF918F93 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = __this->get_ret_address_0();
		int32_t L_1 = ___i0;
		U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * L_2 = __this->get_CSU24U3CU3E8__locals96_1();
		float* L_3 = L_2->get_lhs_address_0();
		int32_t L_4 = ___i0;
		float L_5 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		U3CU3Ec__DisplayClass162_93_tF0D4E7810ABE25AB0B942D217A7EDBA3CCAB2CFF * L_6 = __this->get_CSU24U3CU3E8__locals96_1();
		int64_t* L_7 = L_6->get_rhs_address_1();
		int32_t L_8 = ___i0;
		int64_t L_9 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)8)))));
		double L_10;
		L_10 = Operator_Subtract_mF66043025359383772702F35404058E5034B0594_inline(L_5, L_9, /*hidden argument*/NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)L_1))) = (int8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(L_10);
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
// System.Void NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed__ctor_mC2B57603F4F89EDAB64B1354BA03212E43BF7915 (U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_System_IDisposable_Dispose_m080C6B658E93999E1325A86CEC86C90823F608A1 (U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_MoveNext_m2C5F489D3F6D61A62EC30E0072225AE85AE085A9 (U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		__this->set_U3CU3E1__state_0((-1));
		return (bool)0;
	}
}
// System.Object NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2E0948EDBEC920C3D9F5A423653D581804040012 (U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_System_Collections_IEnumerator_Reset_m27CF665F3A2DD52B3D5E4E6403D9B207EBA6A751 (U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_System_Collections_IEnumerator_Reset_m27CF665F3A2DD52B3D5E4E6403D9B207EBA6A751_RuntimeMethod_var)));
	}
}
// System.Object NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_System_Collections_IEnumerator_get_Current_m5A30EA8D7BB72D2DB362120426A8B9E8D45024FF (U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m96DD899AA296611CB37E33806DC035A7FB362BE8 (U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * L_3 = (U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 *)il2cpp_codegen_object_new(U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1_il2cpp_TypeInfo_var);
		U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed__ctor_mC2B57603F4F89EDAB64B1354BA03212E43BF7915(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator NumSharp.NDArray/<<GetEnumerator>g___empty|67_0>d::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_System_Collections_IEnumerable_GetEnumerator_mF1485FE064DD2622D43796948A70097A08DF4ECB (U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_t2316B082C5BA1C8A13633F90B8BC850C77CF1CA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CU3CGetEnumeratorU3Eg___emptyU7C67_0U3Ed_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m96DD899AA296611CB37E33806DC035A7FB362BE8(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void NumSharp.NDArray/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE211D383514FB9734B9E791F7D52B5CF9F1A0B56 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * L_0 = (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD *)il2cpp_codegen_object_new(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9B1F5FD13917B5A5502445ACEF01956ADB21AABB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void NumSharp.NDArray/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9B1F5FD13917B5A5502445ACEF01956ADB21AABB (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Double NumSharp.NDArray/<>c::<op_Explicit>b__118_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3Cop_ExplicitU3Eb__118_0_m3966C159DE1387EDA722FB32CDF313F59A4F7E41 (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Double_Parse_mFF5B29ED0585A4847BFE654ABB9E915DFE21B63E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String[] NumSharp.NDArray/<>c::<op_Explicit>b__118_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* U3CU3Ec_U3Cop_ExplicitU3Eb__118_1_mE61FE4F1B2264105DCD5B4998CE6873F1EA7E422 (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___x0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String[] NumSharp.NDArray/<>c::<op_Explicit>b__118_2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* U3CU3Ec_U3Cop_ExplicitU3Eb__118_2_mFA813C89D826A9C9B8AC575852893C76405F96BA (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___x0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String NumSharp.NDArray/<>c::<PrettyPrint>b__148_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CPrettyPrintU3Eb__148_0_m55AD4F6890F1F8F587AEE505B6344691ED81B979 (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * __this, RuntimeObject * ___v0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___v0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// System.String NumSharp.NDArray/<>c::<PrettyPrint>b__148_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CPrettyPrintU3Eb__148_1_m117BB7979FFA04BFE1C62FACE3643DC5DA0C3662 (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * __this, RuntimeObject * ___v0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___v0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// System.String NumSharp.NDArray/<>c::<PrettyPrint>b__148_2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CPrettyPrintU3Eb__148_2_m8B0452ED487282BA10BC98B73EB1F68ED37AAECC (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * __this, RuntimeObject * ___v0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___v0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// System.Boolean NumSharp.NDArray/<>c::<ExpandEllipsis>b__309_0(NumSharp.Slice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CExpandEllipsisU3Eb__309_0_m886B476B5B5E9A9A99B45D3B35C55E323A8E32C9 (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * __this, Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * ___slice0, const RuntimeMethod* method)
{
	{
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_0 = ___slice0;
		bool L_1 = L_0->get_IsNewAxis_9();
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_2 = ___slice0;
		bool L_3 = L_2->get_IsEllipsis_8();
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 NumSharp.NDArray/<>c::<PrepareIndexGetters>b__312_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CPrepareIndexGettersU3Eb__312_0_m0A65E131D818CE349D163884CF6B1D1EB1473441 (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___idx0;
		return L_0;
	}
}
// NumSharp.Slice NumSharp.NDArray/<>c::<FetchIndices>b__314_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * U3CU3Ec_U3CFetchIndicesU3Eb__314_0_mE334B1D7817B6515E56E69B2AE09817A1C66467A (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * __this, RuntimeObject * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	Type_t * G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	Type_t * G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	String_t* G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	String_t* G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	{
		RuntimeObject * L_0 = ___x0;
		V_0 = ((Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C *)IsInstClass((RuntimeObject*)L_0, Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var));
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_1 = V_0;
		if (L_1)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_3 = ___x0;
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_3, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		goto IL_0046;
	}

IL_001b:
	{
		RuntimeObject * L_4 = ___x0;
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject * L_6 = ___x0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject * L_7 = ___x0;
		V_3 = ((*(bool*)((bool*)UnBox(L_7, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
		goto IL_0054;
	}

IL_0036:
	{
		RuntimeObject * L_8 = ___x0;
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_4;
		if (L_9)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007a;
	}

IL_0044:
	{
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_10 = V_0;
		return L_10;
	}

IL_0046:
	{
		int32_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_12;
		L_12 = Slice_Index_m1B159CE58C278657F12D2CA311156E33457B0EBD_inline(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_004d:
	{
		String_t* L_13 = V_2;
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_14 = (Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C *)il2cpp_codegen_object_new(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice__ctor_m9F3ADE3AD5DD03F9219863121E10B9ED3AA79DB6(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0054:
	{
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0062;
		}
	}
	{
		NumSharpException_t40D073757BE64EA74244BB8A21CAC4A2625BB5E7 * L_16 = (NumSharpException_t40D073757BE64EA74244BB8A21CAC4A2625BB5E7 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NumSharpException_t40D073757BE64EA74244BB8A21CAC4A2625BB5E7_il2cpp_TypeInfo_var)));
		NumSharpException__ctor_m653035CCDC93D4171F12C615529A07DC5B3840B9(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05DBC0DA4EFA8310174A8CEBA036F4A3D02AB3E8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CFetchIndicesU3Eb__314_0_mE334B1D7817B6515E56E69B2AE09817A1C66467A_RuntimeMethod_var)));
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_17 = ((Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_StaticFields*)il2cpp_codegen_static_fields_for(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var))->get_NewAxis_3();
		return L_17;
	}

IL_0068:
	{
		RuntimeObject* L_18 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_19;
		L_19 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var, L_18, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_21;
		L_21 = Slice_Index_m1B159CE58C278657F12D2CA311156E33457B0EBD_inline(L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_007a:
	{
		RuntimeObject * L_22 = ___x0;
		G_B16_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC295975F206CE732CB22C1D3DC0CD0ECF528F837));
		if (L_22)
		{
			G_B17_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC295975F206CE732CB22C1D3DC0CD0ECF528F837));
			goto IL_0085;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B16_0;
		goto IL_0097;
	}

IL_0085:
	{
		RuntimeObject * L_23 = ___x0;
		Type_t * L_24;
		L_24 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_23, /*hidden argument*/NULL);
		Type_t * L_25 = L_24;
		G_B18_0 = L_25;
		G_B18_1 = G_B17_0;
		if (L_25)
		{
			G_B19_0 = L_25;
			G_B19_1 = G_B17_0;
			goto IL_0092;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		goto IL_0097;
	}

IL_0092:
	{
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, G_B19_0);
		G_B20_0 = L_26;
		G_B20_1 = G_B19_1;
	}

IL_0097:
	{
		String_t* L_27 = G_B20_0;
		G_B21_0 = L_27;
		G_B21_1 = G_B20_1;
		if (L_27)
		{
			G_B22_0 = L_27;
			G_B22_1 = G_B20_1;
			goto IL_00a0;
		}
	}
	{
		G_B22_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174));
		G_B22_1 = G_B21_1;
	}

IL_00a0:
	{
		String_t* L_28;
		L_28 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B22_1, G_B22_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_29 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CFetchIndicesU3Eb__314_0_mE334B1D7817B6515E56E69B2AE09817A1C66467A_RuntimeMethod_var)));
	}
}
// NumSharp.Slice NumSharp.NDArray/<>c::<SetIndices>b__320_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * U3CU3Ec_U3CSetIndicesU3Eb__320_0_m1DFF60385984BBF549AE3D0B8A34CE6DEBD9B209 (U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * __this, RuntimeObject * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	Type_t * G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	Type_t * G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	String_t* G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	String_t* G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	{
		RuntimeObject * L_0 = ___x0;
		V_0 = ((Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C *)IsInstClass((RuntimeObject*)L_0, Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var));
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_1 = V_0;
		if (L_1)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_3 = ___x0;
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_3, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		goto IL_0046;
	}

IL_001b:
	{
		RuntimeObject * L_4 = ___x0;
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject * L_6 = ___x0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject * L_7 = ___x0;
		V_3 = ((*(bool*)((bool*)UnBox(L_7, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
		goto IL_0054;
	}

IL_0036:
	{
		RuntimeObject * L_8 = ___x0;
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_4;
		if (L_9)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007a;
	}

IL_0044:
	{
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_10 = V_0;
		return L_10;
	}

IL_0046:
	{
		int32_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_12;
		L_12 = Slice_Index_m1B159CE58C278657F12D2CA311156E33457B0EBD_inline(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_004d:
	{
		String_t* L_13 = V_2;
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_14 = (Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C *)il2cpp_codegen_object_new(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice__ctor_m9F3ADE3AD5DD03F9219863121E10B9ED3AA79DB6(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0054:
	{
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0062;
		}
	}
	{
		NumSharpException_t40D073757BE64EA74244BB8A21CAC4A2625BB5E7 * L_16 = (NumSharpException_t40D073757BE64EA74244BB8A21CAC4A2625BB5E7 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NumSharpException_t40D073757BE64EA74244BB8A21CAC4A2625BB5E7_il2cpp_TypeInfo_var)));
		NumSharpException__ctor_m653035CCDC93D4171F12C615529A07DC5B3840B9(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05DBC0DA4EFA8310174A8CEBA036F4A3D02AB3E8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CSetIndicesU3Eb__320_0_m1DFF60385984BBF549AE3D0B8A34CE6DEBD9B209_RuntimeMethod_var)));
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_17 = ((Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_StaticFields*)il2cpp_codegen_static_fields_for(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var))->get_NewAxis_3();
		return L_17;
	}

IL_0068:
	{
		RuntimeObject* L_18 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_19;
		L_19 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_il2cpp_TypeInfo_var, L_18, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_21;
		L_21 = Slice_Index_m1B159CE58C278657F12D2CA311156E33457B0EBD_inline(L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_007a:
	{
		RuntimeObject * L_22 = ___x0;
		G_B16_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC295975F206CE732CB22C1D3DC0CD0ECF528F837));
		if (L_22)
		{
			G_B17_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC295975F206CE732CB22C1D3DC0CD0ECF528F837));
			goto IL_0085;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B16_0;
		goto IL_0097;
	}

IL_0085:
	{
		RuntimeObject * L_23 = ___x0;
		Type_t * L_24;
		L_24 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_23, /*hidden argument*/NULL);
		Type_t * L_25 = L_24;
		G_B18_0 = L_25;
		G_B18_1 = G_B17_0;
		if (L_25)
		{
			G_B19_0 = L_25;
			G_B19_1 = G_B17_0;
			goto IL_0092;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		goto IL_0097;
	}

IL_0092:
	{
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, G_B19_0);
		G_B20_0 = L_26;
		G_B20_1 = G_B19_1;
	}

IL_0097:
	{
		String_t* L_27 = G_B20_0;
		G_B21_0 = L_27;
		G_B21_1 = G_B20_1;
		if (L_27)
		{
			G_B22_0 = L_27;
			G_B22_1 = G_B20_1;
			goto IL_00a0;
		}
	}
	{
		G_B22_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174));
		G_B22_1 = G_B21_1;
	}

IL_00a0:
	{
		String_t* L_28;
		L_28 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B22_1, G_B22_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_29 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CSetIndicesU3Eb__320_0_m1DFF60385984BBF549AE3D0B8A34CE6DEBD9B209_RuntimeMethod_var)));
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
// System.Void NumSharp.NDArray/<>c__DisplayClass312_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass312_0__ctor_m0459D85C8EA90BB517486131C1970B517DD24583 (U3CU3Ec__DisplayClass312_0_t8B53532CBB674C9C4A205E500AF75D8FD1211FD3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 NumSharp.NDArray/<>c__DisplayClass312_0::<PrepareIndexGetters>b__1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass312_0_U3CPrepareIndexGettersU3Eb__1_mF0F6F9499A335AE05EEB934808E61930A4908812 (U3CU3Ec__DisplayClass312_0_t8B53532CBB674C9C4A205E500AF75D8FD1211FD3 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = __this->get_idxAddr_0();
		int32_t L_1 = ___idx0;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)4)))));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = __this->get_dimensionSize_1();
		int32_t L_5 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
	}

IL_001a:
	{
		int32_t L_6 = V_0;
		return L_6;
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
// System.Void NumSharp.NDArray/<>c__DisplayClass312_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass312_1__ctor_mBB0FA2E896A044A9BA37D5496B4E0DEC1A251250 (U3CU3Ec__DisplayClass312_1_t1F1502C4CCC52DEA873E43FF12F3633DF65E8457 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 NumSharp.NDArray/<>c__DisplayClass312_1::<PrepareIndexGetters>b__2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass312_1_U3CPrepareIndexGettersU3Eb__2_m4E7BB2D9AAB375636E9CA76CE2F9199CFEF7FABA (U3CU3Ec__DisplayClass312_1_t1F1502C4CCC52DEA873E43FF12F3633DF65E8457 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m58030D4C46B2E2CF24D65E8F67ED03A72A5AA17F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		U3CU3Ec__DisplayClass312_0_t8B53532CBB674C9C4A205E500AF75D8FD1211FD3 * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		int32_t* L_1 = L_0->get_idxAddr_0();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = __this->get_offset_0();
		int32_t L_3 = ___idx0;
		int32_t L_4;
		L_4 = Func_2_Invoke_m58030D4C46B2E2CF24D65E8F67ED03A72A5AA17F(L_2, L_3, /*hidden argument*/Func_2_Invoke_m58030D4C46B2E2CF24D65E8F67ED03A72A5AA17F_RuntimeMethod_var);
		int32_t L_5 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		U3CU3Ec__DisplayClass312_0_t8B53532CBB674C9C4A205E500AF75D8FD1211FD3 * L_7 = __this->get_CSU24U3CU3E8__locals1_1();
		int32_t L_8 = L_7->get_dimensionSize_1();
		int32_t L_9 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		return L_10;
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
// System.Void NumSharp.NDArray/<>c__DisplayClass327_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass327_0__ctor_mA47657D6069AC665B0B8F799AB5A4E9DB03EAB54 (U3CU3Ec__DisplayClass327_0_t66C4F6B764D9188734774F0C5D90EEECF5C8244C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Int32> NumSharp.NDArray/<>c__DisplayClass327_0::<AccessorCreator>b__1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass327_0_U3CAccessorCreatorU3Eb__1_m6D41540F87DC57EC33A31728CBAEB0F2CDA8E2F8 (U3CU3Ec__DisplayClass327_0_t66C4F6B764D9188734774F0C5D90EEECF5C8244C * __this, int32_t ____0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDDB1BFE9A8B33542584DCA999E2026B94EE02E9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_Yield_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6D5ED2B2DA2C0C6B6F3345A699348E2E80EC0FD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_previousStep_0();
		int32_t L_1 = ____0;
		RuntimeObject* L_2;
		L_2 = LinqExtensions_Yield_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6D5ED2B2DA2C0C6B6F3345A699348E2E80EC0FD5(L_1, /*hidden argument*/LinqExtensions_Yield_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6D5ED2B2DA2C0C6B6F3345A699348E2E80EC0FD5_RuntimeMethod_var);
		RuntimeObject* L_3;
		L_3 = Enumerable_Concat_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDDB1BFE9A8B33542584DCA999E2026B94EE02E9F(L_0, L_2, /*hidden argument*/Enumerable_Concat_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDDB1BFE9A8B33542584DCA999E2026B94EE02E9F_RuntimeMethod_var);
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IEnumerable`1<System.Int32>> NumSharp.NDArray/<>c__DisplayClass327_0::<AccessorCreator>b__0(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IEnumerable`1<System.Int32>>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass327_0_U3CAccessorCreatorU3Eb__0_mC795B0BB58F61D49A8C376FC6B0C7A8CB7AC08D4 (U3CU3Ec__DisplayClass327_0_t66C4F6B764D9188734774F0C5D90EEECF5C8244C * __this, RuntimeObject* ___current0, int32_t ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisIEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_mB571792445344F6366A87C7AF9CEA3A6809D53EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDDB1BFE9A8B33542584DCA999E2026B94EE02E9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_Yield_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6D5ED2B2DA2C0C6B6F3345A699348E2E80EC0FD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___current0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_originalIndices_1();
		RuntimeObject* L_2 = __this->get_previousStep_0();
		int32_t L_3 = ___val1;
		RuntimeObject* L_4;
		L_4 = LinqExtensions_Yield_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6D5ED2B2DA2C0C6B6F3345A699348E2E80EC0FD5(L_3, /*hidden argument*/LinqExtensions_Yield_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6D5ED2B2DA2C0C6B6F3345A699348E2E80EC0FD5_RuntimeMethod_var);
		RuntimeObject* L_5;
		L_5 = Enumerable_Concat_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDDB1BFE9A8B33542584DCA999E2026B94EE02E9F(L_2, L_4, /*hidden argument*/Enumerable_Concat_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDDB1BFE9A8B33542584DCA999E2026B94EE02E9F_RuntimeMethod_var);
		int32_t L_6 = __this->get_currentStep_2();
		RuntimeObject* L_7;
		L_7 = NDArray_AccessorCreator_m8F5FD4AE441BC058FA034DDA86AC9C6DA6215038(L_1, L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_Concat_TisIEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_mB571792445344F6366A87C7AF9CEA3A6809D53EB(L_0, L_7, /*hidden argument*/Enumerable_Concat_TisIEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_mB571792445344F6366A87C7AF9CEA3A6809D53EB_RuntimeMethod_var);
		return L_8;
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
// System.Void NumSharp.NDArray/<ExpandEllipsis>d__309::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExpandEllipsisU3Ed__309__ctor_mA8D728D8F075FE6381A0B42B95C0479AB1DC9389 (U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void NumSharp.NDArray/<ExpandEllipsis>d__309::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExpandEllipsisU3Ed__309_System_IDisposable_Dispose_mD1522BC6CB6DE63C02A2A7B674D9A6A6859E7E62 (U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean NumSharp.NDArray/<ExpandEllipsis>d__309::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExpandEllipsisU3Ed__309_MoveNext_m396214EBB5A1ADB2420EE37F9AA77B8F22B24F12 (U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisSlice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_m0FC85A0E58ECD23DBB2A9A7F322E6ECE3E63F3AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisSlice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_mB7CD6D94EA22D8821F5A8C00E461341E426B8DFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m6CB605437C492728071D7463BB748C325A74FB55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t82951254BC5366DC7343E8EF62B1955768995472_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExpandEllipsisU3Eb__309_0_m886B476B5B5E9A9A99B45D3B35C55E323A8E32C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * V_2 = NULL;
	int32_t V_3 = 0;
	Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * G_B4_2 = NULL;
	Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * G_B3_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_00de;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = __this->get_ndarrays_3();
		RuntimeObject* L_3;
		L_3 = Enumerable_OfType_TisSlice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_mB7CD6D94EA22D8821F5A8C00E461341E426B8DFC((RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/Enumerable_OfType_TisSlice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_mB7CD6D94EA22D8821F5A8C00E461341E426B8DFC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_il2cpp_TypeInfo_var);
		Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * L_4 = ((U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_il2cpp_TypeInfo_var))->get_U3CU3E9__309_0_7();
		Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = L_3;
		G_B3_2 = __this;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = L_3;
			G_B4_2 = __this;
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD * L_6 = ((U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * L_7 = (Func_2_t82951254BC5366DC7343E8EF62B1955768995472 *)il2cpp_codegen_object_new(Func_2_t82951254BC5366DC7343E8EF62B1955768995472_il2cpp_TypeInfo_var);
		Func_2__ctor_m6CB605437C492728071D7463BB748C325A74FB55(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3CExpandEllipsisU3Eb__309_0_m886B476B5B5E9A9A99B45D3B35C55E323A8E32C9_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6CB605437C492728071D7463BB748C325A74FB55_RuntimeMethod_var);
		Func_2_t82951254BC5366DC7343E8EF62B1955768995472 * L_8 = L_7;
		((U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AA3223A247D97465BF0A420DBDA88755FC8ADDD_il2cpp_TypeInfo_var))->set_U3CU3E9__309_0_7(L_8);
		G_B4_0 = L_8;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_004d:
	{
		int32_t L_9;
		L_9 = Enumerable_Count_TisSlice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_m0FC85A0E58ECD23DBB2A9A7F322E6ECE3E63F3AE(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Count_TisSlice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_m0FC85A0E58ECD23DBB2A9A7F322E6ECE3E63F3AE_RuntimeMethod_var);
		G_B4_2->set_U3CcountU3E5__2_7(L_9);
		__this->set_U3CiU3E5__3_8(0);
		goto IL_00f5;
	}

IL_0063:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = __this->get_ndarrays_3();
		int32_t L_11 = __this->get_U3CiU3E5__3_8();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		RuntimeObject * L_14 = V_1;
		V_2 = ((Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C *)IsInstClass((RuntimeObject*)L_14, Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var));
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_15 = V_2;
		if (!L_15)
		{
			goto IL_00ce;
		}
	}
	{
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_16 = V_2;
		bool L_17 = L_16->get_IsEllipsis_8();
		if (!L_17)
		{
			goto IL_00ce;
		}
	}
	{
		__this->set_U3CjU3E5__4_9(0);
		goto IL_00b7;
	}

IL_008c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_18 = ((Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_StaticFields*)il2cpp_codegen_static_fields_for(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var))->get_All_0();
		__this->set_U3CU3E2__current_1(L_18);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a0:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_19 = __this->get_U3CjU3E5__4_9();
		V_3 = L_19;
		int32_t L_20 = V_3;
		__this->set_U3CjU3E5__4_9(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
	}

IL_00b7:
	{
		int32_t L_21 = __this->get_U3CjU3E5__4_9();
		int32_t L_22 = __this->get_ndim_5();
		int32_t L_23 = __this->get_U3CcountU3E5__2_7();
		if ((((int32_t)L_21) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)))))
		{
			goto IL_008c;
		}
	}
	{
		goto IL_00e5;
	}

IL_00ce:
	{
		RuntimeObject * L_24 = V_1;
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00de:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00e5:
	{
		int32_t L_25 = __this->get_U3CiU3E5__3_8();
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->set_U3CiU3E5__3_8(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
	}

IL_00f5:
	{
		int32_t L_27 = __this->get_U3CiU3E5__3_8();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = __this->get_ndarrays_3();
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_0063;
		}
	}
	{
		return (bool)0;
	}
}
// System.Object NumSharp.NDArray/<ExpandEllipsis>d__309::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExpandEllipsisU3Ed__309_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m481BB7874EE5CED2BE767A09F6A04E08CD740016 (U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void NumSharp.NDArray/<ExpandEllipsis>d__309::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExpandEllipsisU3Ed__309_System_Collections_IEnumerator_Reset_m716D05CF4D52584241D9A61F848A9EDB72EE2E69 (U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExpandEllipsisU3Ed__309_System_Collections_IEnumerator_Reset_m716D05CF4D52584241D9A61F848A9EDB72EE2E69_RuntimeMethod_var)));
	}
}
// System.Object NumSharp.NDArray/<ExpandEllipsis>d__309::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExpandEllipsisU3Ed__309_System_Collections_IEnumerator_get_Current_m07EFC5E15D2860EF2A62EF03D7BF51CF7BBF0426 (U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> NumSharp.NDArray/<ExpandEllipsis>d__309::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExpandEllipsisU3Ed__309_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m31D9B6E3A553ADBE05FFFE4F783891F0BFF843EB (U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * L_3 = (U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 *)il2cpp_codegen_object_new(U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251_il2cpp_TypeInfo_var);
		U3CExpandEllipsisU3Ed__309__ctor_mA8D728D8F075FE6381A0B42B95C0479AB1DC9389(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * L_4 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = __this->get_U3CU3E3__ndarrays_4();
		L_4->set_ndarrays_3(L_5);
		U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * L_6 = V_0;
		int32_t L_7 = __this->get_U3CU3E3__ndim_6();
		L_6->set_ndim_5(L_7);
		U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator NumSharp.NDArray/<ExpandEllipsis>d__309::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExpandEllipsisU3Ed__309_System_Collections_IEnumerable_GetEnumerator_m6CD80A7BA1BB5A6A646A7057556BBDCEFCF57C91 (U3CExpandEllipsisU3Ed__309_t28405E985E33E177ADBF76DD33739B72F6898251 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExpandEllipsisU3Ed__309_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m31D9B6E3A553ADBE05FFFE4F783891F0BFF843EB(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Int32[] NumSharp.NDArray/SortedData::get_DataAccessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* SortedData_get_DataAccessor_mBCF4B2227A0D323152FB3109BF86888FCD1E3DC3 (SortedData_tCCCC53DC4B357101BA6148DBDB17F70FB3C41176 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_U3CDataAccessorU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Int32 NumSharp.NDArray/SortedData::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedData_get_Index_m651655CDEF4CDC0FD57EBBD5D3F48F7ED4AD200E (SortedData_tCCCC53DC4B357101BA6148DBDB17F70FB3C41176 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CIndexU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void NumSharp.NDArray/SortedData::.ctor(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedData__ctor_mCD8E58BA700D958B4A47A7F04553F245963BFE3A (SortedData_tCCCC53DC4B357101BA6148DBDB17F70FB3C41176 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___dataAccessor0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___dataAccessor0;
		__this->set_U3CDataAccessorU3Ek__BackingField_0(L_0);
		int32_t L_1 = ___index1;
		__this->set_U3CIndexU3Ek__BackingField_1(L_1);
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
// System.Void NumSharp.Utilities.NDOffsetIncrementorAutoresetting/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3A66A5A4DF7C4091D5899EAACD67178080CCA072 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6 * L_0 = (U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6 *)il2cpp_codegen_object_new(U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m73E3D3569F4473770B300FB818BB422CD6B8E4E6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void NumSharp.Utilities.NDOffsetIncrementorAutoresetting/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m73E3D3569F4473770B300FB818BB422CD6B8E4E6 (U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumSharp.Utilities.NDOffsetIncrementorAutoresetting/<>c::<.ctor>b__3_0(NumSharp.Utilities.NDCoordinatesIncrementor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__3_0_mB92A530EC7B6070C487FDA28DEAA59DADB17EB35 (U3CU3Ec_t1CE7995735D48A369330716ACFE3E2A58AD3DEB6 * __this, NDCoordinatesIncrementor_t5279EE4E2B66AE56B57E1D3CC6B3F2C5CAC97880 * ___incrementor0, const RuntimeMethod* method)
{
	{
		NDCoordinatesIncrementor_t5279EE4E2B66AE56B57E1D3CC6B3F2C5CAC97880 * L_0 = ___incrementor0;
		NDCoordinatesIncrementor_Reset_mDC90DC3B41DE782307EFF495C0A328E49A9F1E80(L_0, /*hidden argument*/NULL);
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
// System.Void NumSharp.Shape/<>c__DisplayClass65_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass65_0__ctor_m9248A0A09A0B7B9F080B7BE8B301BB2A2C5D74D8 (U3CU3Ec__DisplayClass65_0_t474EC1690A768C6726AF2A3B143930744FE4CADB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean NumSharp.Shape/<>c__DisplayClass65_0::<Slice>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass65_0_U3CSliceU3Eb__0_m01E0EB48ED400F11FA34DD680EE1EA9BD5CE212C (U3CU3Ec__DisplayClass65_0_t474EC1690A768C6726AF2A3B143930744FE4CADB * __this, int32_t ___dim0, int32_t ___i1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m95F94C82B362473B7EC0FFD67CD9BE863964AE40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		List_1_tD2C9719D045E8822B51CF40821A6EE5947727773 * L_0 = __this->get_slices_0();
		int32_t L_1 = ___i1;
		SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF  L_2;
		L_2 = List_1_get_Item_m95F94C82B362473B7EC0FFD67CD9BE863964AE40_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m95F94C82B362473B7EC0FFD67CD9BE863964AE40_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3;
		L_3 = SliceDef_get_IsIndex_m991F51013EDF6A955D78BDA48531F3AD18790587_inline((SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF *)(&V_0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
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
// System.Void NumSharp.Slice/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mACDA86509D01852DBA138697491F9802693FA687 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA * L_0 = (U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA *)il2cpp_codegen_object_new(U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDD04A4D049C4D455238011155D1AAE394AB1D073(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void NumSharp.Slice/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDD04A4D049C4D455238011155D1AAE394AB1D073 (U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean NumSharp.Slice/<>c::<ParseSlices>b__15_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CParseSlicesU3Eb__15_0_m7DA823E322EFB787B45A1A65D5F27918CCFBF37B (U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// NumSharp.Slice NumSharp.Slice/<>c::<ParseSlices>b__15_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * U3CU3Ec_U3CParseSlicesU3Eb__15_1_m2F2377A6DAD30ADB199529BD293F36AFC67379FE (U3CU3Ec_t31E93AF415D7B53CA36B6C7BF1148F6F13D4FDBA * __this, String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___token0;
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_1 = (Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C *)il2cpp_codegen_object_new(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice__ctor_m9F3ADE3AD5DD03F9219863121E10B9ED3AA79DB6(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void NumSharp.Unmanaged.Memory.StackedMemoryPool/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m03330F8DF4C185711CADE8A94316AB6D0C819A27 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537 * L_0 = (U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537 *)il2cpp_codegen_object_new(U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m365C1388284473CA82216C5D90F9995393F84924(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void NumSharp.Unmanaged.Memory.StackedMemoryPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m365C1388284473CA82216C5D90F9995393F84924 (U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean NumSharp.Unmanaged.Memory.StackedMemoryPool/<>c::<.cctor>b__32_0(NumSharp.NPTypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__32_0_m49EE82CD1A6CB10D82FFE7BE81FEE1DF6EBD7FAE (U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537 * __this, int32_t ___v0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___v0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Int32 NumSharp.Unmanaged.Memory.StackedMemoryPool/<>c::<.cctor>b__32_1(NumSharp.NPTypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__32_1_m705F3FC3B71C6F9CA1769EB487E88A70BD0267F7 (U3CU3Ec_t3D9810DBFF3DF7784A3131C58B954981D5F4F537 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___n0;
		int32_t L_1;
		L_1 = NPTypeCodeExtensions_SizeOf_m7DF2C278C9BCA83E5D16C6E6C8DE4BBE5E79AEA7_inline(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void NumSharp.Unmanaged.Memory.StackedMemoryPool/GCContext::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCContext__ctor_m9C823607F011FA3B76F2EE0ECA9B57B69D7B881E (GCContext_tD63C26352ECDB85962BA928959E7E570A61CD511 * __this, int32_t ___lastAvailablePtrs0, int32_t ___restarts1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___lastAvailablePtrs0;
		__this->set_LastAvailablePtrs_0(L_0);
		int32_t L_1 = ___restarts1;
		__this->set_Restarts_1(L_1);
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
// System.Void NumSharp.Backends.UnmanagedStorage/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFE70BE7F86ED99FA182EAEB99C792D388FB0775F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562 * L_0 = (U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562 *)il2cpp_codegen_object_new(U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5039B317D1DEC9C52F6685A91FA5638A52FCEBA3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void NumSharp.Backends.UnmanagedStorage/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5039B317D1DEC9C52F6685A91FA5638A52FCEBA3 (U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean NumSharp.Backends.UnmanagedStorage/<>c::<GetViewInternal>b__135_0(NumSharp.Slice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetViewInternalU3Eb__135_0_m27C3B05A41E2F67FE2E0384C5D9C71B144E95F09 (U3CU3Ec_t31D6B6CC59479D320D55B0C7BDB8B1060D82F562 * __this, Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_0 = ((Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_StaticFields*)il2cpp_codegen_static_fields_for(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var))->get_All_0();
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_1 = ___s0;
		bool L_2;
		L_2 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExpandEllipsisU3Ed__136__ctor_mD0F6AA7A8996267012DF17729CDEDB7F7992DB2E (U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExpandEllipsisU3Ed__136_System_IDisposable_Dispose_m5FA90FC8799AD46E7346417A284D1BC6885A28FA (U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExpandEllipsisU3Ed__136_MoveNext_m2F13DB4AAC3DDF00C64049FAE42A9D83B8BC8FC7 (U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F * V_1 = NULL;
	SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* V_2 = NULL;
	int32_t V_3 = 0;
	Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * V_4 = NULL;
	int32_t V_5 = 0;
	Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * V_6 = NULL;
	Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F * L_1 = __this->get_U3CU3E4__this_5();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00bb;
			}
			case 2:
			{
				goto IL_0103;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		__this->set_U3CcountU3E5__2_6(0);
		SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* L_3 = __this->get_slices_3();
		V_2 = L_3;
		V_3 = 0;
		goto IL_0068;
	}

IL_003b:
	{
		SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* L_4 = V_2;
		int32_t L_5 = V_3;
		int32_t L_6 = L_5;
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_8 = V_4;
		bool L_9 = L_8->get_IsNewAxis_9();
		if (L_9)
		{
			goto IL_0064;
		}
	}
	{
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_10 = V_4;
		bool L_11 = L_10->get_IsEllipsis_8();
		if (L_11)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_12 = __this->get_U3CcountU3E5__2_6();
		V_5 = L_12;
		int32_t L_13 = V_5;
		__this->set_U3CcountU3E5__2_6(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_0064:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_15 = V_3;
		SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* L_16 = V_2;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* L_17 = __this->get_slices_3();
		__this->set_U3CU3E7__wrap2_7(L_17);
		__this->set_U3CU3E7__wrap3_8(0);
		goto IL_0118;
	}

IL_0086:
	{
		SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* L_18 = __this->get_U3CU3E7__wrap2_7();
		int32_t L_19 = __this->get_U3CU3E7__wrap3_8();
		int32_t L_20 = L_19;
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_6 = L_21;
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_22 = V_6;
		bool L_23 = L_22->get_IsEllipsis_8();
		if (!L_23)
		{
			goto IL_00f2;
		}
	}
	{
		__this->set_U3CiU3E5__5_9(0);
		goto IL_00d2;
	}

IL_00a7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_24 = ((Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_StaticFields*)il2cpp_codegen_static_fields_for(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var))->get_All_0();
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00bb:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_25 = __this->get_U3CiU3E5__5_9();
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->set_U3CiU3E5__5_9(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
	}

IL_00d2:
	{
		int32_t L_27 = __this->get_U3CiU3E5__5_9();
		UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F * L_28 = V_1;
		Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E  L_29;
		L_29 = UnmanagedStorage_get_Shape_mFEBDD4814CE490BD27C934A2539EEFAE429CEA2B_inline(L_28, /*hidden argument*/NULL);
		V_7 = L_29;
		int32_t L_30;
		L_30 = Shape_get_NDim_mE15F56DA12890AC255A1E57FE21EE9FF31DDBF04_inline((Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E *)(&V_7), /*hidden argument*/NULL);
		int32_t L_31 = __this->get_U3CcountU3E5__2_6();
		if ((((int32_t)L_27) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)))))
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_010a;
	}

IL_00f2:
	{
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_32 = V_6;
		__this->set_U3CU3E2__current_1(L_32);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0103:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_010a:
	{
		int32_t L_33 = __this->get_U3CU3E7__wrap3_8();
		__this->set_U3CU3E7__wrap3_8(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1)));
	}

IL_0118:
	{
		int32_t L_34 = __this->get_U3CU3E7__wrap3_8();
		SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* L_35 = __this->get_U3CU3E7__wrap2_7();
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_0086;
		}
	}
	{
		__this->set_U3CU3E7__wrap2_7((SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1*)NULL);
		return (bool)0;
	}
}
// NumSharp.Slice NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::System.Collections.Generic.IEnumerator<NumSharp.Slice>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * U3CExpandEllipsisU3Ed__136_System_Collections_Generic_IEnumeratorU3CNumSharp_SliceU3E_get_Current_mF21EAFA6600A0681B1C3DD0CEAA75C476DD0A9AF (U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * __this, const RuntimeMethod* method)
{
	{
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExpandEllipsisU3Ed__136_System_Collections_IEnumerator_Reset_mC90FFACFE82A2A3BF823634DB43D20D32B3DBB36 (U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExpandEllipsisU3Ed__136_System_Collections_IEnumerator_Reset_mC90FFACFE82A2A3BF823634DB43D20D32B3DBB36_RuntimeMethod_var)));
	}
}
// System.Object NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExpandEllipsisU3Ed__136_System_Collections_IEnumerator_get_Current_m4A40FFDBE619606B8C31CA111434FAC915CBECD4 (U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * __this, const RuntimeMethod* method)
{
	{
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<NumSharp.Slice> NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::System.Collections.Generic.IEnumerable<NumSharp.Slice>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExpandEllipsisU3Ed__136_System_Collections_Generic_IEnumerableU3CNumSharp_SliceU3E_GetEnumerator_mBAE9C14CA4CB15493B1A76C54227ADF7B55620E8 (U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * L_3 = (U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F *)il2cpp_codegen_object_new(U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F_il2cpp_TypeInfo_var);
		U3CExpandEllipsisU3Ed__136__ctor_mD0F6AA7A8996267012DF17729CDEDB7F7992DB2E(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * L_4 = V_0;
		UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F * L_5 = __this->get_U3CU3E4__this_5();
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * L_6 = V_0;
		SliceU5BU5D_tEEBDB892398BF7F2CB3085620946A40CCCF5DEC1* L_7 = __this->get_U3CU3E3__slices_4();
		L_6->set_slices_3(L_7);
		U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator NumSharp.Backends.UnmanagedStorage/<ExpandEllipsis>d__136::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExpandEllipsisU3Ed__136_System_Collections_IEnumerable_GetEnumerator_m63F94C4ED3AA9BCA31F2D12A4AFDAC1A5AA83D34 (U3CExpandEllipsisU3Ed__136_t6532B0F21B41BC79B0D2316DE85294FC2FEEBC2F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExpandEllipsisU3Ed__136_System_Collections_Generic_IEnumerableU3CNumSharp_SliceU3E_GetEnumerator_mBAE9C14CA4CB15493B1A76C54227ADF7B55620E8(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Operator_Subtract_m7F7A392A44DC5A779CEDC4A729E609727882CBAE_inline (float ___lhs0, double ___rhs1, const RuntimeMethod* method)
{
	{
		float L_0 = ___lhs0;
		double L_1 = ___rhs1;
		return ((double)il2cpp_codegen_subtract((double)((double)((double)L_0)), (double)L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Operator_Subtract_m5B59B8AC6DCC0801B4FCA59889AB0B9D818D3DC7_inline (float ___lhs0, bool ___rhs1, const RuntimeMethod* method)
{
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	{
		float L_0 = ___lhs0;
		bool L_1 = ___rhs1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		return ((float)il2cpp_codegen_subtract((float)G_B3_1, (float)G_B3_0));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Converts_ToBoolean_mBA395E40885CD27B965C0D2B8EE1D3E4FF5764A8_inline (float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		return (bool)((((int32_t)((((float)L_0) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Operator_Subtract_m5DA6B05E5E0FDC0C9640AFB073F151BA604B4E0D_inline (float ___lhs0, uint8_t ___rhs1, const RuntimeMethod* method)
{
	{
		float L_0 = ___lhs0;
		uint8_t L_1 = ___rhs1;
		return ((float)il2cpp_codegen_subtract((float)L_0, (float)((float)((float)L_1))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Operator_Subtract_mA96EEC9B0C485488B95003BF54AF5D6FF6DBDC4E_inline (float ___lhs0, int32_t ___rhs1, const RuntimeMethod* method)
{
	{
		float L_0 = ___lhs0;
		int32_t L_1 = ___rhs1;
		return ((double)((double)((float)il2cpp_codegen_subtract((float)L_0, (float)((float)((float)L_1))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Converts_ToBoolean_m074FF94EB8657BE8B924CFCDD3F20F29B59CE76A_inline (double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		return (bool)((((int32_t)((((double)L_0) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Operator_Subtract_mF66043025359383772702F35404058E5034B0594_inline (float ___lhs0, int64_t ___rhs1, const RuntimeMethod* method)
{
	{
		float L_0 = ___lhs0;
		int64_t L_1 = ___rhs1;
		return ((double)((double)((float)il2cpp_codegen_subtract((float)L_0, (float)((float)((float)L_1))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * Slice_Index_m1B159CE58C278657F12D2CA311156E33457B0EBD_inline (int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		int32_t L_2 = ___index0;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_3), ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_4 = (Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C *)il2cpp_codegen_object_new(Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C_il2cpp_TypeInfo_var);
		Slice__ctor_m41B3DC80522CEAB2F42BC86F3F2F3DF987777352(L_4, L_1, L_3, 1, /*hidden argument*/NULL);
		Slice_t39DCEDD1D16C1182833DC905394B9CF48A84E01C * L_5 = L_4;
		L_5->set_IsIndex_7((bool)1);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SliceDef_get_IsIndex_m991F51013EDF6A955D78BDA48531F3AD18790587_inline (SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Count_2();
		return (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NPTypeCodeExtensions_SizeOf_m7DF2C278C9BCA83E5D16C6E6C8DE4BBE5E79AEA7_inline (int32_t ___typeCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfoOf_1_t24E67DC833655AC53CB5D0D4DAFA4D26C8AFF6C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___typeCode0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)3)))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_0071;
			}
			case 3:
			{
				goto IL_0058;
			}
			case 4:
			{
				goto IL_005a;
			}
			case 5:
			{
				goto IL_005c;
			}
			case 6:
			{
				goto IL_005e;
			}
			case 7:
			{
				goto IL_0060;
			}
			case 8:
			{
				goto IL_0062;
			}
			case 9:
			{
				goto IL_0064;
			}
			case 10:
			{
				goto IL_006a;
			}
			case 11:
			{
				goto IL_0068;
			}
			case 12:
			{
				goto IL_006c;
			}
			case 13:
			{
				goto IL_0071;
			}
			case 14:
			{
				goto IL_0071;
			}
			case 15:
			{
				goto IL_006f;
			}
		}
	}
	{
		int32_t L_1 = ___typeCode0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0071;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InfoOf_1_t24E67DC833655AC53CB5D0D4DAFA4D26C8AFF6C4_il2cpp_TypeInfo_var);
		int32_t L_2 = ((InfoOf_1_t24E67DC833655AC53CB5D0D4DAFA4D26C8AFF6C4_StaticFields*)il2cpp_codegen_static_fields_for(InfoOf_1_t24E67DC833655AC53CB5D0D4DAFA4D26C8AFF6C4_il2cpp_TypeInfo_var))->get_Size_0();
		return L_2;
	}

IL_0056:
	{
		return 1;
	}

IL_0058:
	{
		return 1;
	}

IL_005a:
	{
		return 2;
	}

IL_005c:
	{
		return 2;
	}

IL_005e:
	{
		return 4;
	}

IL_0060:
	{
		return 4;
	}

IL_0062:
	{
		return 8;
	}

IL_0064:
	{
		return 8;
	}

IL_0066:
	{
		return 1;
	}

IL_0068:
	{
		return 8;
	}

IL_006a:
	{
		return 4;
	}

IL_006c:
	{
		return ((int32_t)32);
	}

IL_006f:
	{
		return 1;
	}

IL_0071:
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_3 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NPTypeCodeExtensions_SizeOf_m7DF2C278C9BCA83E5D16C6E6C8DE4BBE5E79AEA7_RuntimeMethod_var)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E  UnmanagedStorage_get_Shape_mFEBDD4814CE490BD27C934A2539EEFAE429CEA2B_inline (UnmanagedStorage_t3DC209381B92470E35B86C2E4EC64C0DE60DFC4F * __this, const RuntimeMethod* method)
{
	{
		Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E  L_0 = __this->get__shape_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Shape_get_NDim_mE15F56DA12890AC255A1E57FE21EE9FF31DDBF04_inline (Shape_t2A6AC2D1FF58335D92321EAA0FEADDFF39CF850E * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_dimensions_5();
		return ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF  List_1_get_Item_m95F94C82B362473B7EC0FFD67CD9BE863964AE40_gshared_inline (List_1_tD2C9719D045E8822B51CF40821A6EE5947727773 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9* L_2 = (SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9*)__this->get__items_1();
		int32_t L_3 = ___index0;
		SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((SliceDefU5BU5D_tA9EB7AACD7D02A77FB49B2C3F79B01285CF9A3D9*)L_2, (int32_t)L_3);
		return (SliceDef_t61349BB361BF7D167AA339ACC509F5452CAEE2BF )L_4;
	}
}
