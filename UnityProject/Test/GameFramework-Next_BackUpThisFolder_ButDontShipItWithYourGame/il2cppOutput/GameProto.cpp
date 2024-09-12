#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<Luban.ByteBuf>
struct Action_1_t281B585597EADCE2ABDED071861F517C70F63102;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,GameConfig.Item>
struct Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Type,UnityGameFramework.Runtime.GameFrameworkComponent>
struct Dictionary_2_t3110D75B1F09C242771014285FAA31F36F348AF5;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.String,Luban.ByteBuf>
struct Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5;
// System.Func`4<System.Byte[],System.Int32,System.Int32,System.String>
struct Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515;
// System.Func`4<System.Object,System.Int32,System.Int32,System.Object>
struct Func_4_t7AAB63173BD5193F0BDA308DCB0D4ADC2674D9C2;
// System.Collections.Generic.IEnumerable`1<GameConfig.item.ItemExchange>
struct IEnumerable_1_t22E13089CBF5BF5BC11866F291F146E30A08207F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,GameConfig.Item>
struct KeyCollection_tB459E555C2232138AB85070EB15247AD3D19B319;
// System.Collections.Generic.List`1<GameConfig.Item>
struct List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964;
// System.Collections.Generic.List`1<GameConfig.item.ItemExchange>
struct List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// GameBase.Singleton`1<GameProto.ConfigSystem>
struct Singleton_1_t3EB2ED77DC46B6729EA5AA61DFE51FC048910D44;
// GameBase.Singleton`1<System.Object>
struct Singleton_1_tDEE065C3A1F43CE874B5CB5A2787C6C9D98BF962;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GameConfig.Item>
struct ValueCollection_tECB7A0CE80DBCF91D91DCBE8F6492B682D0CC53C;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,GameConfig.Item>[]
struct EntryU5BU5D_tB17BC234F3E885E56D1BD5D630B91372DB94A98E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// GameConfig.Item[]
struct ItemU5BU5D_t72087B8E06D09D9B0D95A731558211131B4C3D92;
// GameConfig.item.ItemExchange[]
struct ItemExchangeU5BU5D_t2DF5131D795DEE2F7073EB722B22D6E75A0027CF;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityGameFramework.Runtime.BaseComponent
struct BaseComponent_tC4326399891E43599C443B0AB9D118603A9EC382;
// Luban.BeanBase
struct BeanBase_t423D8FE88D9C2EBC49422E2D949A981C408BD1DB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Luban.ByteBuf
struct ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// GameProto.ConfigSystem
struct ConfigSystem_tE70067C20B3396168831C82F61D60D32A7499976;
// UnityGameFramework.Runtime.DebuggerComponent
struct DebuggerComponent_t78774E1B3617FCB4ABCDB0EA71A3605051BD3372;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityGameFramework.Runtime.DownloadComponent
struct DownloadComponent_t24D67291AAA58ABF4AC27818B971A53D20DA7CC6;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityGameFramework.Runtime.EntityComponent
struct EntityComponent_tC7F0342BF9543CCB9B13CC8479B97BCCF045B2AF;
// UnityGameFramework.Runtime.EventComponent
struct EventComponent_tC64EC68C01E104E02EA9999F3D426A38BA64A73E;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityGameFramework.Runtime.FileSystemComponent
struct FileSystemComponent_t392CAE021C86B0D76EE46CF6B620B378F942366A;
// UnityGameFramework.Runtime.FsmComponent
struct FsmComponent_tDAE57FD286DBCF889BCF5CFE84B2D4F18D4D1FE4;
// GameFramework.GameFrameworkException
struct GameFrameworkException_tAA68E718189104D5849AD226E3BAF0CAE4ACEFDD;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// GameFramework.Resource.IResourceManager
struct IResourceManager_t93CCF3F6B49FCEB2669EA5297590116D2515D524;
// GameConfig.Item
struct Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C;
// GameConfig.item.ItemExchange
struct ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0;
// UnityGameFramework.Runtime.LocalizationComponent
struct LocalizationComponent_t1E18901BF9F3AAC8ADDF9689C06ADB3A955E45BA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityGameFramework.Runtime.NetworkComponent
struct NetworkComponent_t6EECC101A70ADF4AD2DBE897BAB71AFBAC331B9F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityGameFramework.Runtime.ObjectPoolComponent
struct ObjectPoolComponent_t3760245BA1073E0C2980B7D2D2687376573D026A;
// UnityGameFramework.Runtime.ProcedureComponent
struct ProcedureComponent_t6FB491669249603A40DB62501CA05D7D28CC1DBB;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// UnityGameFramework.Runtime.ResourceComponent
struct ResourceComponent_t2F1295F7E7966C716A7FF47956EB39EDA28800A9;
// YooAsset.ResourceDownloaderOperation
struct ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3;
// UnityGameFramework.Runtime.ResourceExtComponent
struct ResourceExtComponent_tA570B8192805BE14368FDD1DDB5064D59F319E7E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityGameFramework.Runtime.SceneComponent
struct SceneComponent_t37D265FC9BA27E1E34111D061522EFCFF220BB57;
// Luban.SerializationException
struct SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1;
// UnityGameFramework.Runtime.SettingComponent
struct SettingComponent_t1FD02BB7F2C6B3747BB716EB20609E3005A951F3;
// UnityGameFramework.Runtime.SoundComponent
struct SoundComponent_t137A0F1E7F49E769C3F3CDCE976CF4F1C4006C6F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// GameConfig.Tables
struct Tables_t35773C3103D70358757BC6456666B056781615B7;
// GameConfig.item.TbItem
struct TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UGFExtensions.Texture.TextureSetComponent
struct TextureSetComponent_t732703BA108BE2EF31D934450740EF9F0992AF1B;
// TimerComponent
struct TimerComponent_tAB1647565AEED31F4D3F4DB1D823618C4FF14240;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityGameFramework.Runtime.WebRequestComponent
struct WebRequestComponent_tB3F378C7473B6C4F04279172DEE34CB844360613;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameFrameworkException_tAA68E718189104D5849AD226E3BAF0CAE4ACEFDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameModule_t4C450B2DEB2007924D63373656181DD0F7B6AA0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tables_t35773C3103D70358757BC6456666B056781615B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral033E135DDD14C9CA790EFB0305FB2787165DC9C1;
IL2CPP_EXTERN_C String_t* _stringLiteral0E90C646F42478AC8BC81200FEEF0B79CF03C9CD;
IL2CPP_EXTERN_C String_t* _stringLiteral10543BAD3EDBF8858079F1CF8D7157685FEB1405;
IL2CPP_EXTERN_C String_t* _stringLiteral2950AEF64F668D3A5DDD36A1FF9C7708F3662C99;
IL2CPP_EXTERN_C String_t* _stringLiteral4F6E244647F2520E2D4F567B798C3A7A0A2A4C92;
IL2CPP_EXTERN_C String_t* _stringLiteral67BF5C975DB38979FA158FE4A48922DE1881A3AE;
IL2CPP_EXTERN_C String_t* _stringLiteral7FE48C1F38AF0438C0F507CEDBABFE7650B1DE49;
IL2CPP_EXTERN_C String_t* _stringLiteral84EB7C8735C3D4B90710CDE305A398AD9236D507;
IL2CPP_EXTERN_C String_t* _stringLiteral869B065168CF4032A467F8C7ED37B59E8747334B;
IL2CPP_EXTERN_C String_t* _stringLiteral9EE92A9BD17A9CB9A1A6DFE2F11EE15BF6816E61;
IL2CPP_EXTERN_C String_t* _stringLiteralB3D92E28503AA9601C94CA75217269DC631C1108;
IL2CPP_EXTERN_C String_t* _stringLiteralB45749BC865DAA67DE5DDF656241741B88ADF436;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD;
IL2CPP_EXTERN_C String_t* _stringLiteralC23EECD2AA40BC4EDC1A8F5DD9214EA9AEBAC72C;
IL2CPP_EXTERN_C String_t* _stringLiteralCEDF3EB63C6454A741A1C94150C1E332BCFFC35D;
IL2CPP_EXTERN_C String_t* _stringLiteralD0D901F727BD6661E6CE5949BC2FE44C0D044F69;
IL2CPP_EXTERN_C String_t* _stringLiteralD1BABF3BBBB0647E8EFF7FD1661C867144223C85;
IL2CPP_EXTERN_C String_t* _stringLiteralD4918AB6569CD01DAC5F3AC589E92903DFC2930D;
IL2CPP_EXTERN_C String_t* _stringLiteralD89300623A1221B45D961C421A0064C5871C4B44;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteBuf_EndWriteSegment_mE7E9D7FE656D837EDA0913C70F5A461CF9E1D1D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteBuf_ReadSegment_m25B51E3F3058493453C8F5AAEDF8FFA9CA6E0443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteBuf_ReadShort_m3F71DC82884B005DD6936BF91404E584FE19542E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigSystem_LoadByteBuf_m3D837D881D1D61A4F3C7E67B6810EB4370BA1675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m611412FA17FAAB1E4CCF2CCF9486E0660C0D61BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC991B1B57DDB371F33B87C6C3F2C27EE3113414E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3C25F36E0F71E6A2B3E439A94F2C8537FEAE941F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m314C5E94ED13952A0694FEAF8E4EF0C31960CBCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m335568CCD954CF263AA745D7CCC5C0635CB37ABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m702FD2CA0CC79A918CD431118C9556D156D02A34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m107EFB0924D8FD2A9C1E0B18F395AC8CD519248A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3F30525CE9490E605C7EABB9AEEDAF45CFE28344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1B1D13538C94179BFC7D92EB9E320A06086F250A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8DF71C8252D17ED2BA47F643F875E17534DE7613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m51DF29B02C96994ADD230FFC0F82123ED27E2BE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m845D35B3FCD5CBDF6A822A2E1B658AC9F27BE36E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4990B761ACBEF639A37E2DB3DD3BD1A32C635039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB76C5F74F93A59A74F36249B8875C12E2F13B0F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m01B2A1663D19BEA69C0B628C810A729B2E37AFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFE14F4D566AC2347FA351E1D564F0C07EA2225C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceComponent_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m996DC04180C3245394E8C0C45E7168F840166D76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m4C415D12B5CBF69C32917B40AEABCC0A78E54691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtil_CollectionToString_TisItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0_mDABEB3B2A5FCB497F9158A0E402CAE2D87F6B12B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t879C2E2D455E4319EB3D88CDB991999824AB3CE0 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,GameConfig.Item>
struct Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB17BC234F3E885E56D1BD5D630B91372DB94A98E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB459E555C2232138AB85070EB15247AD3D19B319* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tECB7A0CE80DBCF91D91DCBE8F6492B682D0CC53C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Byte>
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<GameConfig.Item>
struct List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ItemU5BU5D_t72087B8E06D09D9B0D95A731558211131B4C3D92* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<GameConfig.item.ItemExchange>
struct List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ItemExchangeU5BU5D_t2DF5131D795DEE2F7073EB722B22D6E75A0027CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// GameBase.Singleton`1<GameProto.ConfigSystem>
struct Singleton_1_t3EB2ED77DC46B6729EA5AA61DFE51FC048910D44  : public RuntimeObject
{
};

// Luban.BeanBase
struct BeanBase_t423D8FE88D9C2EBC49422E2D949A981C408BD1DB  : public RuntimeObject
{
};

// Luban.ByteBuf
struct ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B  : public RuntimeObject
{
	// System.Int32 Luban.ByteBuf::<ReaderIndex>k__BackingField
	int32_t ___U3CReaderIndexU3Ek__BackingField_0;
	// System.Int32 Luban.ByteBuf::<WriterIndex>k__BackingField
	int32_t ___U3CWriterIndexU3Ek__BackingField_1;
	// System.Action`1<Luban.ByteBuf> Luban.ByteBuf::_releaser
	Action_1_t281B585597EADCE2ABDED071861F517C70F63102* ____releaser_2;
	// System.Byte[] Luban.ByteBuf::<Bytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CBytesU3Ek__BackingField_3;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Luban.StringUtil
struct StringUtil_t8F6D7370C4003C83A570659BF6312608CF55EE5E  : public RuntimeObject
{
};

// GameConfig.Tables
struct Tables_t35773C3103D70358757BC6456666B056781615B7  : public RuntimeObject
{
	// GameConfig.item.TbItem GameConfig.Tables::m_TbItem
	TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* ___m_TbItem_0;
	// System.Func`2<System.String,Luban.ByteBuf> GameConfig.Tables::defaultLoader
	Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5* ___defaultLoader_1;
};

// GameConfig.item.TbItem
struct TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,GameConfig.Item> GameConfig.item.TbItem::_dataMap
	Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3* ____dataMap_0;
	// System.Collections.Generic.List`1<GameConfig.Item> GameConfig.item.TbItem::_dataList
	List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964* ____dataList_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<GameConfig.Item>
struct Enumerator_t7D7F0AD02192AEE78E5E616AE8CC1713748957C1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<GameConfig.item.ItemExchange>
struct Enumerator_tC5CB80200709AA06BEA83C3F37087E1D4236BE73 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Numerics.Complex
struct Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 
{
	// System.Double System.Numerics.Complex::m_real
	double ___m_real_7;
	// System.Double System.Numerics.Complex::m_imaginary
	double ___m_imaginary_8;
};

// GameProto.ConfigSystem
struct ConfigSystem_tE70067C20B3396168831C82F61D60D32A7499976  : public Singleton_1_t3EB2ED77DC46B6729EA5AA61DFE51FC048910D44
{
	// System.Boolean GameProto.ConfigSystem::_init
	bool ____init_1;
	// GameConfig.Tables GameProto.ConfigSystem::_tables
	Tables_t35773C3103D70358757BC6456666B056781615B7* ____tables_2;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// GameConfig.item.ItemExchange
struct ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0  : public BeanBase_t423D8FE88D9C2EBC49422E2D949A981C408BD1DB
{
	// System.Int32 GameConfig.item.ItemExchange::Id
	int32_t ___Id_0;
	// System.Int32 GameConfig.item.ItemExchange::Num
	int32_t ___Num_1;
};

// System.Numerics.Matrix4x4
struct Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 
{
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Numerics.Quaternion
struct Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F 
{
	// System.Single System.Numerics.Quaternion::X
	float ___X_0;
	// System.Single System.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single System.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single System.Numerics.Quaternion::W
	float ___W_3;
};

// Luban.SegmentSaveState
struct SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C 
{
	// System.Int32 Luban.SegmentSaveState::<ReaderIndex>k__BackingField
	int32_t ___U3CReaderIndexU3Ek__BackingField_0;
	// System.Int32 Luban.SegmentSaveState::<WriterIndex>k__BackingField
	int32_t ___U3CWriterIndexU3Ek__BackingField_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Numerics.Vector2
struct Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575 
{
	// System.Single System.Numerics.Vector2::X
	float ___X_0;
	// System.Single System.Numerics.Vector2::Y
	float ___Y_1;
};

// System.Numerics.Vector3
struct Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D 
{
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;
};

// System.Numerics.Vector4
struct Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6 
{
	// System.Single System.Numerics.Vector4::X
	float ___X_0;
	// System.Single System.Numerics.Vector4::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector4::Z
	float ___Z_2;
	// System.Single System.Numerics.Vector4::W
	float ___W_3;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// GameConfig.Item
struct Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C  : public BeanBase_t423D8FE88D9C2EBC49422E2D949A981C408BD1DB
{
	// System.Int32 GameConfig.Item::Id
	int32_t ___Id_0;
	// System.String GameConfig.Item::Name
	String_t* ___Name_1;
	// System.String GameConfig.Item::Desc
	String_t* ___Desc_2;
	// System.Int32 GameConfig.Item::Price
	int32_t ___Price_3;
	// System.Int32 GameConfig.Item::UpgradeToItemId
	int32_t ___UpgradeToItemId_4;
	// GameConfig.Item GameConfig.Item::UpgradeToItemId_Ref
	Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* ___UpgradeToItemId_Ref_5;
	// System.Nullable`1<System.Int64> GameConfig.Item::ExpireTime
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___ExpireTime_6;
	// System.Boolean GameConfig.Item::BatchUseable
	bool ___BatchUseable_7;
	// GameConfig.item.ItemExchange GameConfig.Item::ExchangeStream
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* ___ExchangeStream_8;
	// System.Collections.Generic.List`1<GameConfig.item.ItemExchange> GameConfig.Item::ExchangeList
	List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C* ___ExchangeList_9;
	// GameConfig.item.ItemExchange GameConfig.Item::ExchangeColumn
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* ___ExchangeColumn_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// GameFramework.GameFrameworkException
struct GameFrameworkException_tAA68E718189104D5849AD226E3BAF0CAE4ACEFDD  : public Exception_t
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Luban.SerializationException
struct SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1  : public Exception_t
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<Luban.ByteBuf>
struct Action_1_t281B585597EADCE2ABDED071861F517C70F63102  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,Luban.ByteBuf>
struct Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5  : public MulticastDelegate_t
{
};

// System.Func`4<System.Byte[],System.Int32,System.Int32,System.String>
struct Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515  : public MulticastDelegate_t
{
};

// System.Func`4<System.Object,System.Int32,System.Int32,System.Object>
struct Func_4_t7AAB63173BD5193F0BDA308DCB0D4ADC2674D9C2  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityGameFramework.Runtime.GameFrameworkComponent
struct GameFrameworkComponent_t10CE5681A72447D3C3BC89CC426A6E2EA32B2C26  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameModule
struct GameModule_t4C450B2DEB2007924D63373656181DD0F7B6AA0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityGameFramework.Runtime.ResourceComponent
struct ResourceComponent_t2F1295F7E7966C716A7FF47956EB39EDA28800A9  : public GameFrameworkComponent_t10CE5681A72447D3C3BC89CC426A6E2EA32B2C26
{
	// GameFramework.Resource.IResourceManager UnityGameFramework.Runtime.ResourceComponent::m_ResourceManager
	RuntimeObject* ___m_ResourceManager_5;
	// System.Boolean UnityGameFramework.Runtime.ResourceComponent::m_ForceUnloadUnusedAssets
	bool ___m_ForceUnloadUnusedAssets_6;
	// System.Boolean UnityGameFramework.Runtime.ResourceComponent::m_PreorderUnloadUnusedAssets
	bool ___m_PreorderUnloadUnusedAssets_7;
	// System.Boolean UnityGameFramework.Runtime.ResourceComponent::m_PerformGCCollect
	bool ___m_PerformGCCollect_8;
	// UnityEngine.AsyncOperation UnityGameFramework.Runtime.ResourceComponent::m_AsyncOperation
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___m_AsyncOperation_9;
	// System.Single UnityGameFramework.Runtime.ResourceComponent::m_LastUnloadUnusedAssetsOperationElapseSeconds
	float ___m_LastUnloadUnusedAssetsOperationElapseSeconds_10;
	// System.Single UnityGameFramework.Runtime.ResourceComponent::m_MinUnloadUnusedAssetsInterval
	float ___m_MinUnloadUnusedAssetsInterval_11;
	// System.Single UnityGameFramework.Runtime.ResourceComponent::m_MaxUnloadUnusedAssetsInterval
	float ___m_MaxUnloadUnusedAssetsInterval_12;
	// System.Boolean UnityGameFramework.Runtime.ResourceComponent::m_UseSystemUnloadUnusedAssets
	bool ___m_UseSystemUnloadUnusedAssets_13;
	// System.String UnityGameFramework.Runtime.ResourceComponent::<PackageVersion>k__BackingField
	String_t* ___U3CPackageVersionU3Ek__BackingField_14;
	// System.String UnityGameFramework.Runtime.ResourceComponent::PackageName
	String_t* ___PackageName_15;
	// YooAsset.EPlayMode UnityGameFramework.Runtime.ResourceComponent::playMode
	int32_t ___playMode_16;
	// System.Boolean UnityGameFramework.Runtime.ResourceComponent::m_UpdatableWhilePlaying
	bool ___m_UpdatableWhilePlaying_17;
	// YooAsset.EVerifyLevel UnityGameFramework.Runtime.ResourceComponent::VerifyLevel
	int32_t ___VerifyLevel_18;
	// UnityGameFramework.Runtime.ReadWritePathType UnityGameFramework.Runtime.ResourceComponent::m_ReadWritePathType
	uint8_t ___m_ReadWritePathType_19;
	// System.Int64 UnityGameFramework.Runtime.ResourceComponent::Milliseconds
	int64_t ___Milliseconds_20;
	// System.Int32 UnityGameFramework.Runtime.ResourceComponent::m_DownloadingMaxNum
	int32_t ___m_DownloadingMaxNum_21;
	// System.Int32 UnityGameFramework.Runtime.ResourceComponent::m_FailedTryAgain
	int32_t ___m_FailedTryAgain_22;
	// System.Single UnityGameFramework.Runtime.ResourceComponent::m_AssetAutoReleaseInterval
	float ___m_AssetAutoReleaseInterval_23;
	// System.Int32 UnityGameFramework.Runtime.ResourceComponent::m_AssetCapacity
	int32_t ___m_AssetCapacity_24;
	// System.Single UnityGameFramework.Runtime.ResourceComponent::m_AssetExpireTime
	float ___m_AssetExpireTime_25;
	// System.Int32 UnityGameFramework.Runtime.ResourceComponent::m_AssetPriority
	int32_t ___m_AssetPriority_26;
	// YooAsset.ResourceDownloaderOperation UnityGameFramework.Runtime.ResourceComponent::<Downloader>k__BackingField
	ResourceDownloaderOperation_t022BAEC63FD9C86C18D0B517E14CA5568160C8C3* ___U3CDownloaderU3Ek__BackingField_27;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,GameConfig.Item>

// System.Collections.Generic.Dictionary`2<System.Int32,GameConfig.Item>

// System.EmptyArray`1<System.Byte>
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value_0;
};

// System.EmptyArray`1<System.Byte>

// System.Collections.Generic.List`1<GameConfig.Item>
struct List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ItemU5BU5D_t72087B8E06D09D9B0D95A731558211131B4C3D92* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GameConfig.Item>

// System.Collections.Generic.List`1<GameConfig.item.ItemExchange>
struct List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ItemExchangeU5BU5D_t2DF5131D795DEE2F7073EB722B22D6E75A0027CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GameConfig.item.ItemExchange>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// GameBase.Singleton`1<GameProto.ConfigSystem>
struct Singleton_1_t3EB2ED77DC46B6729EA5AA61DFE51FC048910D44_StaticFields
{
	// T GameBase.Singleton`1::_instance
	ConfigSystem_tE70067C20B3396168831C82F61D60D32A7499976* ____instance_0;
};

// GameBase.Singleton`1<GameProto.ConfigSystem>

// Luban.BeanBase

// Luban.BeanBase

// Luban.ByteBuf
struct ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_StaticFields
{
	// System.Func`4<System.Byte[],System.Int32,System.Int32,System.String> Luban.ByteBuf::<StringCacheFinder>k__BackingField
	Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515* ___U3CStringCacheFinderU3Ek__BackingField_5;
};

// Luban.ByteBuf

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// System.Text.Encoding

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Luban.StringUtil

// Luban.StringUtil

// GameConfig.Tables

// GameConfig.Tables

// GameConfig.item.TbItem

// GameConfig.item.TbItem

// System.Collections.Generic.List`1/Enumerator<GameConfig.Item>

// System.Collections.Generic.List`1/Enumerator<GameConfig.Item>

// System.Collections.Generic.List`1/Enumerator<GameConfig.item.ItemExchange>

// System.Collections.Generic.List`1/Enumerator<GameConfig.item.ItemExchange>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Int64>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Numerics.Complex
struct Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_StaticFields
{
	// System.Numerics.Complex System.Numerics.Complex::Zero
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___Zero_0;
	// System.Numerics.Complex System.Numerics.Complex::One
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___One_1;
	// System.Numerics.Complex System.Numerics.Complex::ImaginaryOne
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___ImaginaryOne_2;
	// System.Double System.Numerics.Complex::s_sqrtRescaleThreshold
	double ___s_sqrtRescaleThreshold_4;
	// System.Double System.Numerics.Complex::s_asinOverflowThreshold
	double ___s_asinOverflowThreshold_5;
	// System.Double System.Numerics.Complex::s_log2
	double ___s_log2_6;
};

// System.Numerics.Complex

// GameProto.ConfigSystem

// GameProto.ConfigSystem

// System.Double

// System.Double

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// GameConfig.item.ItemExchange

// GameConfig.item.ItemExchange

// System.Numerics.Matrix4x4
struct Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_StaticFields
{
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 ____identity_16;
};

// System.Numerics.Matrix4x4

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// System.Numerics.Quaternion

// System.Numerics.Quaternion

// Luban.SegmentSaveState

// Luban.SegmentSaveState

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Numerics.Vector2

// System.Numerics.Vector2

// System.Numerics.Vector3

// System.Numerics.Vector3

// System.Numerics.Vector4

// System.Numerics.Vector4

// System.Void

// System.Void

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// GameConfig.Item

// GameConfig.Item

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// GameFramework.GameFrameworkException

// GameFramework.GameFrameworkException

// Luban.SerializationException

// Luban.SerializationException

// UnityEngine.TextAsset

// UnityEngine.TextAsset

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<Luban.ByteBuf>

// System.Action`1<Luban.ByteBuf>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.String,Luban.ByteBuf>

// System.Func`2<System.String,Luban.ByteBuf>

// System.Func`4<System.Byte[],System.Int32,System.Int32,System.String>

// System.Func`4<System.Byte[],System.Int32,System.Int32,System.String>

// System.Func`4<System.Object,System.Int32,System.Int32,System.Object>

// System.Func`4<System.Object,System.Int32,System.Int32,System.Object>

// GameModule
struct GameModule_t4C450B2DEB2007924D63373656181DD0F7B6AA0A_StaticFields
{
	// UnityGameFramework.Runtime.BaseComponent GameModule::<Base>k__BackingField
	BaseComponent_tC4326399891E43599C443B0AB9D118603A9EC382* ___U3CBaseU3Ek__BackingField_4;
	// UnityGameFramework.Runtime.DebuggerComponent GameModule::<Debugger>k__BackingField
	DebuggerComponent_t78774E1B3617FCB4ABCDB0EA71A3605051BD3372* ___U3CDebuggerU3Ek__BackingField_5;
	// UnityGameFramework.Runtime.DownloadComponent GameModule::<Download>k__BackingField
	DownloadComponent_t24D67291AAA58ABF4AC27818B971A53D20DA7CC6* ___U3CDownloadU3Ek__BackingField_6;
	// UnityGameFramework.Runtime.EntityComponent GameModule::<Entity>k__BackingField
	EntityComponent_tC7F0342BF9543CCB9B13CC8479B97BCCF045B2AF* ___U3CEntityU3Ek__BackingField_7;
	// UnityGameFramework.Runtime.EventComponent GameModule::<Event>k__BackingField
	EventComponent_tC64EC68C01E104E02EA9999F3D426A38BA64A73E* ___U3CEventU3Ek__BackingField_8;
	// UnityGameFramework.Runtime.FileSystemComponent GameModule::<FileSystem>k__BackingField
	FileSystemComponent_t392CAE021C86B0D76EE46CF6B620B378F942366A* ___U3CFileSystemU3Ek__BackingField_9;
	// UnityGameFramework.Runtime.FsmComponent GameModule::<Fsm>k__BackingField
	FsmComponent_tDAE57FD286DBCF889BCF5CFE84B2D4F18D4D1FE4* ___U3CFsmU3Ek__BackingField_10;
	// UnityGameFramework.Runtime.LocalizationComponent GameModule::<Localization>k__BackingField
	LocalizationComponent_t1E18901BF9F3AAC8ADDF9689C06ADB3A955E45BA* ___U3CLocalizationU3Ek__BackingField_11;
	// UnityGameFramework.Runtime.NetworkComponent GameModule::<Network>k__BackingField
	NetworkComponent_t6EECC101A70ADF4AD2DBE897BAB71AFBAC331B9F* ___U3CNetworkU3Ek__BackingField_12;
	// UnityGameFramework.Runtime.ObjectPoolComponent GameModule::<ObjectPool>k__BackingField
	ObjectPoolComponent_t3760245BA1073E0C2980B7D2D2687376573D026A* ___U3CObjectPoolU3Ek__BackingField_13;
	// UnityGameFramework.Runtime.ProcedureComponent GameModule::<Procedure>k__BackingField
	ProcedureComponent_t6FB491669249603A40DB62501CA05D7D28CC1DBB* ___U3CProcedureU3Ek__BackingField_14;
	// UnityGameFramework.Runtime.ResourceComponent GameModule::<Resource>k__BackingField
	ResourceComponent_t2F1295F7E7966C716A7FF47956EB39EDA28800A9* ___U3CResourceU3Ek__BackingField_15;
	// UnityGameFramework.Runtime.SceneComponent GameModule::<Scene>k__BackingField
	SceneComponent_t37D265FC9BA27E1E34111D061522EFCFF220BB57* ___U3CSceneU3Ek__BackingField_16;
	// UnityGameFramework.Runtime.SettingComponent GameModule::<Setting>k__BackingField
	SettingComponent_t1FD02BB7F2C6B3747BB716EB20609E3005A951F3* ___U3CSettingU3Ek__BackingField_17;
	// UnityGameFramework.Runtime.SoundComponent GameModule::<Sound>k__BackingField
	SoundComponent_t137A0F1E7F49E769C3F3CDCE976CF4F1C4006C6F* ___U3CSoundU3Ek__BackingField_18;
	// UnityGameFramework.Runtime.WebRequestComponent GameModule::<WebRequest>k__BackingField
	WebRequestComponent_tB3F378C7473B6C4F04279172DEE34CB844360613* ___U3CWebRequestU3Ek__BackingField_19;
	// TimerComponent GameModule::<Timer>k__BackingField
	TimerComponent_tAB1647565AEED31F4D3F4DB1D823618C4FF14240* ___U3CTimerU3Ek__BackingField_20;
	// UGFExtensions.Texture.TextureSetComponent GameModule::<TextureSet>k__BackingField
	TextureSetComponent_t732703BA108BE2EF31D934450740EF9F0992AF1B* ___U3CTextureSetU3Ek__BackingField_21;
	// UnityGameFramework.Runtime.ResourceExtComponent GameModule::<ResourceExt>k__BackingField
	ResourceExtComponent_tA570B8192805BE14368FDD1DDB5064D59F319E7E* ___U3CResourceExtU3Ek__BackingField_22;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityGameFramework.Runtime.GameFrameworkComponent> GameModule::s_Components
	Dictionary_2_t3110D75B1F09C242771014285FAA31F36F348AF5* ___s_Components_23;
};

// GameModule

// UnityGameFramework.Runtime.ResourceComponent

// UnityGameFramework.Runtime.ResourceComponent
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Byte>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) ;
// TResult System.Func`4<System.Object,System.Int32,System.Int32,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_4_Invoke_mEDA4DDC7AACEA584E35124A791DA2E7E5A497CDA_gshared_inline (Func_4_t7AAB63173BD5193F0BDA308DCB0D4ADC2674D9C2* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.String System.Nullable`1<System.Int64>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// System.String Luban.StringUtil::CollectionToString<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtil_CollectionToString_TisRuntimeObject_m90C5CEAE89F9CBEE16540CFF4044FC400EDD6F26_gshared (RuntimeObject* ___0_arr, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityGameFramework.Runtime.ResourceComponent::LoadAsset<System.Object>(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResourceComponent_LoadAsset_TisRuntimeObject_mEDEA8019C2AF0894E7BA393EC17B007B9B4E58B2_gshared (ResourceComponent_t2F1295F7E7966C716A7FF47956EB39EDA28800A9* __this, String_t* ___0_location, String_t* ___1_packageName, const RuntimeMethod* method) ;
// System.Void GameBase.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m327F2585BB8709D4DB1C45D3ED1BB2606F82D8F0_gshared (Singleton_1_tDEE065C3A1F43CE874B5CB5A2787C6C9D98BF962* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void Luban.SegmentSaveState::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SegmentSaveState__ctor_m64429FDEFC71B56FEDD506E0112936BB570C3B1F (SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* __this, int32_t ___0_readerIndex, int32_t ___1_writerIndex, const RuntimeMethod* method) ;
// System.Int32 Luban.SegmentSaveState::get_ReaderIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SegmentSaveState_get_ReaderIndex_m4DB708B17D4C9289BC0606F58E7478DBC38F1A9E_inline (SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* __this, const RuntimeMethod* method) ;
// System.Int32 Luban.SegmentSaveState::get_WriterIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SegmentSaveState_get_WriterIndex_mC5ACABABC5C3BD0E47A6B12DDB2FF467FDC881B8_inline (SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Byte>()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline)(method);
}
// System.Void Luban.ByteBuf::set_Bytes(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBuf_set_Bytes_m64361BB03D153DEAF186DF5F93B95D7B8B6FDF22_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::set_WriterIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::set_ReaderIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Luban.ByteBuf::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_get_Capacity_mB2E2EC5C7997B188DACA79E51F38BDF4287EBFA0 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf__ctor_mC7637900630A18B3E65527848B0D16862C345546 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf__ctor_m012D0F6C01D2033B96F0ED3EE0FB6A7E8699224B (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_readIndex, int32_t ___2_writeIndex, const RuntimeMethod* method) ;
// System.Byte[] Luban.ByteBuf::get_Bytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Int32 Luban.ByteBuf::get_WriterIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Int32 Luban.ByteBuf::get_ReaderIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Int32 Luban.ByteBuf::get_Remaining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_get_Remaining_m0D7CDB0B9FFCA68E7D21039C006F3894CF1F1500 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::WriteBytesWithoutSize(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteBytesWithoutSize_m1F637E0CE128672A74B3E51F0337593ECC268AB6 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_offset, int32_t ___2_len, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::EnsureWrite(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 Luban.ByteBuf::PropSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_PropSize_m3F3DFA0DE29EF8C8581D9EFD0DE8ED641F1AE08B (int32_t ___0_initSize, int32_t ___1_needSize, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::EnsureWrite0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_EnsureWrite0_m6DF2C43FCAD932C32BDB6DD80B803A18C70D96C2 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void Luban.SerializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m1672766A270C635ADECF5DE3C34B3CC30BEAB636 (SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1* __this, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::EnsureRead(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::WriteUint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteUint_mF33A57E706E2EE9D489C82650508D9CA29972CB2 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, uint32_t ___0_x, const RuntimeMethod* method) ;
// System.UInt32 Luban.ByteBuf::ReadUint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ByteBuf_ReadUint_mF5EE4F4613290105069477FC76CBE1CF31A5A2FF (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::WriteUlong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteUlong_m0C3E19EC9B7097B58EFF9637C07A2E038D476687 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, uint64_t ___0_x, const RuntimeMethod* method) ;
// System.UInt64 Luban.ByteBuf::ReadUlong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ByteBuf_ReadUlong_m4E7766F411AF418A2CF7C1009CA6AD4BB2AE9211 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::WriteLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteLong_m3E6E1BF0C390D5E55CCC0DD8C4A4807C10522BD1 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int64_t ___0_x, const RuntimeMethod* method) ;
// System.Int64 Luban.ByteBuf::ReadLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ByteBuf_ReadLong_mA51C1BF9F4A6C6F6AA5B6B5AACFD75A86E1F563C (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::Copy4(System.Byte*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_Copy4_mBD49F2227F861425D9A73402028A0996060C5D49 (uint8_t* ___0_dst, uint8_t* ___1_src, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::Copy8(System.Byte*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_Copy8_m7A7DDEA9630F6EDC375384E8F43F84554AB39D19 (uint8_t* ___0_dst, uint8_t* ___1_src, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::WriteSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteSize_mB73B10D1184B173C815639017E63257DEB818F2B (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_n, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 Luban.ByteBuf::ReadSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_ReadSize_m1D8B3F112DFB0777FA8AC1DF37047B804EB4DB4E (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Func`4<System.Byte[],System.Int32,System.Int32,System.String> Luban.ByteBuf::get_StringCacheFinder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515* ByteBuf_get_StringCacheFinder_mEEBAABD8CA7D69492483952469AE1207CB839314_inline (const RuntimeMethod* method) ;
// TResult System.Func`4<System.Byte[],System.Int32,System.Int32,System.String>::Invoke(T1,T2,T3)
inline String_t* Func_4_Invoke_mE1E4642DBB6D7360E47BDC6E3A20B14FC4A4D9FD_inline (Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Func_4_Invoke_mEDA4DDC7AACEA584E35124A791DA2E7E5A497CDA_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Double System.Numerics.Complex::get_Real()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Complex_get_Real_m98291D3606A2D33FB2A4AFD94C5A6B594C4C8554_inline (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::WriteDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteDouble_m389D73BF8C7EDE7F42BC37C181654C8FABC1E5DD (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, double ___0_x, const RuntimeMethod* method) ;
// System.Double System.Numerics.Complex::get_Imaginary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Complex_get_Imaginary_m55DD546C177307031449E6814F9AE1671097FABD_inline (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, const RuntimeMethod* method) ;
// System.Double Luban.ByteBuf::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ByteBuf_ReadDouble_m6566935EB854AD50FC16102365BE6E56E4C06D3E (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Void System.Numerics.Complex::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, double ___0_real, double ___1_imaginary, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::WriteFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, float ___0_x, const RuntimeMethod* method) ;
// System.Single Luban.ByteBuf::ReadFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_m167E12FB2DAEC328D01935DDEB879A36034AB6EF (Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m7C7B6A0DD0B1E729ECE05CD46AAD62DC2B71BD86 (Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m22210D6F83F4B5D6CFA82DF01AA1435A4121AC8C (Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void System.Numerics.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m5E368299988E51F83A3F4DDEBD57C62D047305E6 (Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void System.Numerics.Matrix4x4::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4__ctor_m4044D15D7E84A1D30E038A963DF0FB0EB6736C1D (Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072* __this, float ___0_m11, float ___1_m12, float ___2_m13, float ___3_m14, float ___4_m21, float ___5_m22, float ___6_m23, float ___7_m24, float ___8_m31, float ___9_m32, float ___10_m33, float ___11_m34, float ___12_m41, float ___13_m42, float ___14_m43, float ___15_m44, const RuntimeMethod* method) ;
// System.Int32 Luban.ByteBuf::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_get_Size_m2762E14DC0E559382FFB8E4CE913372E7B2C9C34 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteByte_mF987F7CFA4070BDF58D049929D1B6142424ADA89 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, uint8_t ___0_x, const RuntimeMethod* method) ;
// System.Boolean Luban.ByteBuf::CanRead(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ByteBuf_CanRead_m4EF6108564C0B638CFE7F9D1DC5BEEE5736E5929_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::Replace(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_Replace_mE84901C7F342BF841288AA61C6542147501D715B (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_beginPos, int32_t ___2_endPos, const RuntimeMethod* method) ;
// System.Void Luban.SerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m1AF2D3B502713ADE7B0AE33BA6CBEBB610934270 (SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::ReadSegment(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_ReadSegment_m25B51E3F3058493453C8F5AAEDF8FFA9CA6E0443 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t* ___0_startIndex, int32_t* ___1_segmentSize, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.Boolean Luban.ByteBuf::Equals(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteBuf_Equals_m5FCA14CDF36F15359583C9E4F11C08877BC9CB13 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0_other, const RuntimeMethod* method) ;
// System.Byte[] Luban.ByteBuf::CopyData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuf_CopyData_mBC814D88C5944D7A89098D3690537577CD6DF165 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Void Luban.ByteBuf::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf__ctor_mA588D29C106F02C2551D6BB28C41AD3F3C551E16 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Byte System.Byte::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Byte_Parse_m9ECDF4D955A0A3C47392308CF9DBD50CDFE4F417 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.Action`1<Luban.ByteBuf>::Invoke(T)
inline void Action_1_Invoke_m02D42B2F2C80E828DFF16A33C61157E9208EAC73_inline (Action_1_t281B585597EADCE2ABDED071861F517C70F63102* __this, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t281B585597EADCE2ABDED071861F517C70F63102*, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String Luban.StringUtil::ToStr(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtil_ToStr_m41BEBC11D58F320A2F1970607F5DC513B1759374 (RuntimeObject* ___0_o, StringBuilder_t* ___1_sb, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6 (Type_t* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088 (PropertyInfo_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void Luban.BeanBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeanBase__ctor_mD176CC671940DD678DC8C04DB65020560E32A8C8 (BeanBase_t423D8FE88D9C2EBC49422E2D949A981C408BD1DB* __this, const RuntimeMethod* method) ;
// System.Int32 Luban.ByteBuf::ReadInt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteBuf_ReadInt_m73F64A02434B047BF3C5322BD83E94CC769E3532_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.String Luban.ByteBuf::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ByteBuf_ReadString_mFBDD78B0ED139BA6221B4096D05A0D70F1804261 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Boolean Luban.ByteBuf::ReadBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteBuf_ReadBool_mCF7B03484DF5B7840977619107C04B1FBF758C2D (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
inline void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, int64_t, const RuntimeMethod*))Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared)(__this, ___0_value, method);
}
// GameConfig.item.ItemExchange GameConfig.item.ItemExchange::DeserializeItemExchange(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* ItemExchange_DeserializeItemExchange_m79DBB0E67570CD5057702D8E0F10B2DEC0584BB3 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0__buf, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GameConfig.item.ItemExchange>::.ctor(System.Int32)
inline void List_1__ctor_m01B2A1663D19BEA69C0B628C810A729B2E37AFAC (List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<GameConfig.item.ItemExchange>::Add(T)
inline void List_1_Add_m51DF29B02C96994ADD230FFC0F82123ED27E2BE2_inline (List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C* __this, ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C*, ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void GameConfig.Item::.ctor(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m5E32A98E21253F28586984D687ED47305D5D2995 (Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* __this, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0__buf, const RuntimeMethod* method) ;
// GameConfig.item.TbItem GameConfig.Tables::get_TbItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* Tables_get_TbItem_m3F044E82EED07BBBBD4DCAE3DACDB584BA29ECA6 (Tables_t35773C3103D70358757BC6456666B056781615B7* __this, const RuntimeMethod* method) ;
// GameConfig.Item GameConfig.item.TbItem::GetOrDefault(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* TbItem_GetOrDefault_m04BB10D0F83D213D888BB92713EA80A0E1C45BB1 (TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void GameConfig.item.ItemExchange::ResolveRef(GameConfig.Tables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemExchange_ResolveRef_mF33890B35A0C497F444F3247EBEB0931041AB230 (ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* __this, Tables_t35773C3103D70358757BC6456666B056781615B7* ___0_tables, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GameConfig.item.ItemExchange>::GetEnumerator()
inline Enumerator_tC5CB80200709AA06BEA83C3F37087E1D4236BE73 List_1_GetEnumerator_mB76C5F74F93A59A74F36249B8875C12E2F13B0F5 (List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC5CB80200709AA06BEA83C3F37087E1D4236BE73 (*) (List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<GameConfig.item.ItemExchange>::Dispose()
inline void Enumerator_Dispose_m335568CCD954CF263AA745D7CCC5C0635CB37ABA (Enumerator_tC5CB80200709AA06BEA83C3F37087E1D4236BE73* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC5CB80200709AA06BEA83C3F37087E1D4236BE73*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<GameConfig.item.ItemExchange>::get_Current()
inline ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* Enumerator_get_Current_m8DF71C8252D17ED2BA47F643F875E17534DE7613_inline (Enumerator_tC5CB80200709AA06BEA83C3F37087E1D4236BE73* __this, const RuntimeMethod* method)
{
	return ((  ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* (*) (Enumerator_tC5CB80200709AA06BEA83C3F37087E1D4236BE73*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<GameConfig.item.ItemExchange>::MoveNext()
inline bool Enumerator_MoveNext_m107EFB0924D8FD2A9C1E0B18F395AC8CD519248A (Enumerator_tC5CB80200709AA06BEA83C3F37087E1D4236BE73* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC5CB80200709AA06BEA83C3F37087E1D4236BE73*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Nullable`1<System.Int64>::ToString()
inline String_t* Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_gshared)(__this, method);
}
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String Luban.StringUtil::CollectionToString<GameConfig.item.ItemExchange>(System.Collections.Generic.IEnumerable`1<T>)
inline String_t* StringUtil_CollectionToString_TisItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0_mDABEB3B2A5FCB497F9158A0E402CAE2D87F6B12B (RuntimeObject* ___0_arr, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))StringUtil_CollectionToString_TisRuntimeObject_m90C5CEAE89F9CBEE16540CFF4044FC400EDD6F26_gshared)(___0_arr, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// TResult System.Func`2<System.String,Luban.ByteBuf>::Invoke(T)
inline ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* Func_2_Invoke_m624CDC32BC54F5FC31F9A5B640621D75D643860D_inline (Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5* __this, String_t* ___0_arg, const RuntimeMethod* method)
{
	return ((  ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* (*) (Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5*, String_t*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___0_arg, method);
}
// System.Void GameConfig.item.TbItem::.ctor(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TbItem__ctor_m44C47FEF48871522755025FA36FA1A80206853EA (TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* __this, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0__buf, const RuntimeMethod* method) ;
// System.Void GameConfig.item.TbItem::ResolveRef(GameConfig.Tables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TbItem_ResolveRef_mFAF7246F26F109C9793A5D0EFE50E48B6CA023D0 (TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* __this, Tables_t35773C3103D70358757BC6456666B056781615B7* ___0_tables, const RuntimeMethod* method) ;
// System.Void GameConfig.Tables::SetDefaultLoader(System.Func`2<System.String,Luban.ByteBuf>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables_SetDefaultLoader_m938CE7183BF92D0B871F8321BE78D6CC014E569E (Tables_t35773C3103D70358757BC6456666B056781615B7* __this, Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5* ___0_loader, const RuntimeMethod* method) ;
// System.Void GameConfig.Tables::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables_Init_mFAE1489A272088D2F6C16453551608C0A561F7EB (Tables_t35773C3103D70358757BC6456666B056781615B7* __this, const RuntimeMethod* method) ;
// System.Void GameConfig.item.ItemExchange::.ctor(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemExchange__ctor_m7AEFFFACA7BAAAACBB1C325E08D8F5599CAC7C0B (ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* __this, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0__buf, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GameConfig.Item>::.ctor()
inline void Dictionary_2__ctor_m3C25F36E0F71E6A2B3E439A94F2C8537FEAE941F (Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GameConfig.Item>::.ctor()
inline void List_1__ctor_mFE14F4D566AC2347FA351E1D564F0C07EA2225C7 (List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// GameConfig.Item GameConfig.Item::DeserializeItem(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* Item_DeserializeItem_m2A44B2D6DD7B6B4F814F7FB4030CC267D8586D13 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0__buf, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GameConfig.Item>::Add(T)
inline void List_1_Add_m845D35B3FCD5CBDF6A822A2E1B658AC9F27BE36E_inline (List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964* __this, Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964*, Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GameConfig.Item>::Add(TKey,TValue)
inline void Dictionary_2_Add_m611412FA17FAAB1E4CCF2CCF9486E0660C0D61BA (Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3* __this, int32_t ___0_key, Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3*, int32_t, Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GameConfig.Item>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC991B1B57DDB371F33B87C6C3F2C27EE3113414E (Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3* __this, int32_t ___0_key, Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3*, int32_t, Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GameConfig.Item>::get_Item(TKey)
inline Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* Dictionary_2_get_Item_m314C5E94ED13952A0694FEAF8E4EF0C31960CBCF (Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* (*) (Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___0_key, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GameConfig.Item>::GetEnumerator()
inline Enumerator_t7D7F0AD02192AEE78E5E616AE8CC1713748957C1 List_1_GetEnumerator_m4990B761ACBEF639A37E2DB3DD3BD1A32C635039 (List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7D7F0AD02192AEE78E5E616AE8CC1713748957C1 (*) (List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<GameConfig.Item>::Dispose()
inline void Enumerator_Dispose_m702FD2CA0CC79A918CD431118C9556D156D02A34 (Enumerator_t7D7F0AD02192AEE78E5E616AE8CC1713748957C1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7D7F0AD02192AEE78E5E616AE8CC1713748957C1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<GameConfig.Item>::get_Current()
inline Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* Enumerator_get_Current_m1B1D13538C94179BFC7D92EB9E320A06086F250A_inline (Enumerator_t7D7F0AD02192AEE78E5E616AE8CC1713748957C1* __this, const RuntimeMethod* method)
{
	return ((  Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* (*) (Enumerator_t7D7F0AD02192AEE78E5E616AE8CC1713748957C1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void GameConfig.Item::ResolveRef(GameConfig.Tables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_ResolveRef_m0703F4920CF90F9E62611C08BEAA3CF26EE70855 (Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* __this, Tables_t35773C3103D70358757BC6456666B056781615B7* ___0_tables, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<GameConfig.Item>::MoveNext()
inline bool Enumerator_MoveNext_m3F30525CE9490E605C7EABB9AEEDAF45CFE28344 (Enumerator_t7D7F0AD02192AEE78E5E616AE8CC1713748957C1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7D7F0AD02192AEE78E5E616AE8CC1713748957C1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void GameProto.ConfigSystem::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSystem_Load_m912561A67B9B2AB58432F0BAEF2F3CA8504BAC87 (ConfigSystem_tE70067C20B3396168831C82F61D60D32A7499976* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,Luban.ByteBuf>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m65E7D5F8275324F7DFAB67DCB19A08AD3FB7EEA0 (Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void GameConfig.Tables::.ctor(System.Func`2<System.String,Luban.ByteBuf>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables__ctor_mECD34D448F818D2C71C3B37C33C5F9027624AA2E (Tables_t35773C3103D70358757BC6456666B056781615B7* __this, Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5* ___0_loader, const RuntimeMethod* method) ;
// UnityGameFramework.Runtime.ResourceComponent GameModule::get_Resource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResourceComponent_t2F1295F7E7966C716A7FF47956EB39EDA28800A9* GameModule_get_Resource_mFE8E488AE1AC176DF1727AA307A6311D7450DEE4_inline (const RuntimeMethod* method) ;
// T UnityGameFramework.Runtime.ResourceComponent::LoadAsset<UnityEngine.TextAsset>(System.String,System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ResourceComponent_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m996DC04180C3245394E8C0C45E7168F840166D76 (ResourceComponent_t2F1295F7E7966C716A7FF47956EB39EDA28800A9* __this, String_t* ___0_location, String_t* ___1_packageName, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (ResourceComponent_t2F1295F7E7966C716A7FF47956EB39EDA28800A9*, String_t*, String_t*, const RuntimeMethod*))ResourceComponent_LoadAsset_TisRuntimeObject_mEDEA8019C2AF0894E7BA393EC17B007B9B4E58B2_gshared)(__this, ___0_location, ___1_packageName, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.TextAsset::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void GameFramework.GameFrameworkException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFrameworkException__ctor_m42231D19C547DF04E289099B1792F90B3482A870 (GameFrameworkException_tAA68E718189104D5849AD226E3BAF0CAE4ACEFDD* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityGameFramework.Runtime.ResourceComponent::UnloadAsset(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceComponent_UnloadAsset_mC0C0A6CBAC55CE595EA2C857A522B556251F0FE7 (ResourceComponent_t2F1295F7E7966C716A7FF47956EB39EDA28800A9* __this, RuntimeObject* ___0_asset, const RuntimeMethod* method) ;
// System.Void GameBase.Singleton`1<GameProto.ConfigSystem>::.ctor()
inline void Singleton_1__ctor_m4C415D12B5CBF69C32917B40AEABCC0A78E54691 (Singleton_1_t3EB2ED77DC46B6729EA5AA61DFE51FC048910D44* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t3EB2ED77DC46B6729EA5AA61DFE51FC048910D44*, const RuntimeMethod*))Singleton_1__ctor_m327F2585BB8709D4DB1C45D3ED1BB2606F82D8F0_gshared)(__this, method);
}
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
// System.Void Luban.BeanBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BeanBase__ctor_mD176CC671940DD678DC8C04DB65020560E32A8C8 (BeanBase_t423D8FE88D9C2EBC49422E2D949A981C408BD1DB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Luban.SerializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m1672766A270C635ADECF5DE3C34B3CC30BEAB636 (SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SerializationException() { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public SerializationException() { }
		return;
	}
}
// System.Void Luban.SerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m1AF2D3B502713ADE7B0AE33BA6CBEBB610934270 (SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SerializationException(string msg) : base(msg) { }
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public SerializationException(string msg) : base(msg) { }
		return;
	}
}
// System.Void Luban.SerializationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m887EEC5B03B64FC24E1681BAF98CF8485EBA074F (SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SerializationException(string message, Exception innerException) : base(message, innerException)
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_innerException;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// }
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
// System.Void Luban.SegmentSaveState::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SegmentSaveState__ctor_m64429FDEFC71B56FEDD506E0112936BB570C3B1F (SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* __this, int32_t ___0_readerIndex, int32_t ___1_writerIndex, const RuntimeMethod* method) 
{
	{
		// ReaderIndex = readerIndex;
		int32_t L_0 = ___0_readerIndex;
		__this->___U3CReaderIndexU3Ek__BackingField_0 = L_0;
		// WriterIndex = writerIndex;
		int32_t L_1 = ___1_writerIndex;
		__this->___U3CWriterIndexU3Ek__BackingField_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SegmentSaveState__ctor_m64429FDEFC71B56FEDD506E0112936BB570C3B1F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_readerIndex, int32_t ___1_writerIndex, const RuntimeMethod* method)
{
	SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C*>(__this + _offset);
	SegmentSaveState__ctor_m64429FDEFC71B56FEDD506E0112936BB570C3B1F(_thisAdjusted, ___0_readerIndex, ___1_writerIndex, method);
}
// System.Int32 Luban.SegmentSaveState::get_ReaderIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SegmentSaveState_get_ReaderIndex_m4DB708B17D4C9289BC0606F58E7478DBC38F1A9E (SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* __this, const RuntimeMethod* method) 
{
	{
		// public int ReaderIndex { get; }
		int32_t L_0 = __this->___U3CReaderIndexU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SegmentSaveState_get_ReaderIndex_m4DB708B17D4C9289BC0606F58E7478DBC38F1A9E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SegmentSaveState_get_ReaderIndex_m4DB708B17D4C9289BC0606F58E7478DBC38F1A9E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Luban.SegmentSaveState::get_WriterIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SegmentSaveState_get_WriterIndex_mC5ACABABC5C3BD0E47A6B12DDB2FF467FDC881B8 (SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* __this, const RuntimeMethod* method) 
{
	{
		// public int WriterIndex { get; }
		int32_t L_0 = __this->___U3CWriterIndexU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SegmentSaveState_get_WriterIndex_mC5ACABABC5C3BD0E47A6B12DDB2FF467FDC881B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SegmentSaveState_get_WriterIndex_mC5ACABABC5C3BD0E47A6B12DDB2FF467FDC881B8_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Luban.ByteBuf::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf__ctor_m731FB55033E13EB73B3F81ABFAE773845AFB4F73 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public ByteBuf()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Bytes = Array.Empty<byte>();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		ByteBuf_set_Bytes_m64361BB03D153DEAF186DF5F93B95D7B8B6FDF22_inline(__this, L_0, NULL);
		// ReaderIndex = WriterIndex = 0;
		int32_t L_1 = 0;
		V_0 = L_1;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, L_1, NULL);
		int32_t L_2 = V_0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf__ctor_mC7637900630A18B3E65527848B0D16862C345546 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* G_B2_0 = NULL;
	ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* G_B3_1 = NULL;
	{
		// public ByteBuf(int capacity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Bytes = capacity > 0 ? new byte[capacity] : Array.Empty<byte>();
		int32_t L_0 = ___0_capacity;
		G_B1_0 = __this;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0012:
	{
		int32_t L_2 = ___0_capacity;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		ByteBuf_set_Bytes_m64361BB03D153DEAF186DF5F93B95D7B8B6FDF22_inline(G_B3_1, G_B3_0, NULL);
		// ReaderIndex = 0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, 0, NULL);
		// WriterIndex = 0;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf__ctor_mA588D29C106F02C2551D6BB28C41AD3F3C551E16 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) 
{
	{
		// public ByteBuf(byte[] bytes)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Bytes = bytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bytes;
		ByteBuf_set_Bytes_m64361BB03D153DEAF186DF5F93B95D7B8B6FDF22_inline(__this, L_0, NULL);
		// ReaderIndex = 0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, 0, NULL);
		// WriterIndex = Capacity;
		int32_t L_1;
		L_1 = ByteBuf_get_Capacity_mB2E2EC5C7997B188DACA79E51F38BDF4287EBFA0(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf__ctor_m012D0F6C01D2033B96F0ED3EE0FB6A7E8699224B (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_readIndex, int32_t ___2_writeIndex, const RuntimeMethod* method) 
{
	{
		// public ByteBuf(byte[] bytes, int readIndex, int writeIndex)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Bytes = bytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bytes;
		ByteBuf_set_Bytes_m64361BB03D153DEAF186DF5F93B95D7B8B6FDF22_inline(__this, L_0, NULL);
		// ReaderIndex = readIndex;
		int32_t L_1 = ___1_readIndex;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, L_1, NULL);
		// WriterIndex = writeIndex;
		int32_t L_2 = ___2_writeIndex;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::.ctor(System.Int32,System.Action`1<Luban.ByteBuf>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf__ctor_mB32A8FCD005045C0B22DE06942558A6E007BF79D (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_capacity, Action_1_t281B585597EADCE2ABDED071861F517C70F63102* ___1_releaser, const RuntimeMethod* method) 
{
	{
		// public ByteBuf(int capacity, Action<ByteBuf> releaser) : this(capacity)
		int32_t L_0 = ___0_capacity;
		ByteBuf__ctor_mC7637900630A18B3E65527848B0D16862C345546(__this, L_0, NULL);
		// _releaser = releaser;
		Action_1_t281B585597EADCE2ABDED071861F517C70F63102* L_1 = ___1_releaser;
		__this->____releaser_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____releaser_2), (void*)L_1);
		// }
		return;
	}
}
// Luban.ByteBuf Luban.ByteBuf::Wrap(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ByteBuf_Wrap_mFFC50E12DDBFC3542250E834CEE47C53C518AEB6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ByteBuf(bytes, 0, bytes.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bytes;
		NullCheck(L_1);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_2 = (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B*)il2cpp_codegen_object_new(ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ByteBuf__ctor_m012D0F6C01D2033B96F0ED3EE0FB6A7E8699224B(L_2, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		return L_2;
	}
}
// System.Void Luban.ByteBuf::Replace(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_Replace_m0F9C1E15433D3CF038E4CE883A8AAE29452802FA (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) 
{
	{
		// Bytes = bytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bytes;
		ByteBuf_set_Bytes_m64361BB03D153DEAF186DF5F93B95D7B8B6FDF22_inline(__this, L_0, NULL);
		// ReaderIndex = 0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, 0, NULL);
		// WriterIndex = Capacity;
		int32_t L_1;
		L_1 = ByteBuf_get_Capacity_mB2E2EC5C7997B188DACA79E51F38BDF4287EBFA0(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::Replace(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_Replace_mE84901C7F342BF841288AA61C6542147501D715B (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_beginPos, int32_t ___2_endPos, const RuntimeMethod* method) 
{
	{
		// Bytes = bytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bytes;
		ByteBuf_set_Bytes_m64361BB03D153DEAF186DF5F93B95D7B8B6FDF22_inline(__this, L_0, NULL);
		// ReaderIndex = beginPos;
		int32_t L_1 = ___1_beginPos;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, L_1, NULL);
		// WriterIndex = endPos;
		int32_t L_2 = ___2_endPos;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Int32 Luban.ByteBuf::get_ReaderIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// public int ReaderIndex { get; set; }
		int32_t L_0 = __this->___U3CReaderIndexU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Luban.ByteBuf::set_ReaderIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int ReaderIndex { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CReaderIndexU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 Luban.ByteBuf::get_WriterIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// public int WriterIndex { get; set; }
		int32_t L_0 = __this->___U3CWriterIndexU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Luban.ByteBuf::set_WriterIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int WriterIndex { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CWriterIndexU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 Luban.ByteBuf::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_get_Capacity_mB2E2EC5C7997B188DACA79E51F38BDF4287EBFA0 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// public int Capacity => Bytes.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// System.Int32 Luban.ByteBuf::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_get_Size_m2762E14DC0E559382FFB8E4CE913372E7B2C9C34 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// public int Size { get { return WriterIndex - ReaderIndex; } }
		int32_t L_0;
		L_0 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Boolean Luban.ByteBuf::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteBuf_get_Empty_mB64954F200047AF0568E1FF443973BDAD8B46914 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// public bool Empty => WriterIndex <= ReaderIndex;
		int32_t L_0;
		L_0 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Luban.ByteBuf::get_NotEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteBuf_get_NotEmpty_m78F3A592A47EFFECBBA51BCEC59409D0FE94E4D5 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// public bool NotEmpty => WriterIndex > ReaderIndex;
		int32_t L_0;
		L_0 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
	}
}
// System.Void Luban.ByteBuf::AddWriteIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_AddWriteIndex_mE78A6DAFDD02122A8203D946FEC8994D13022469 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_add, const RuntimeMethod* method) 
{
	{
		// WriterIndex += add;
		int32_t L_0;
		L_0 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_1 = ___0_add;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::AddReadIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_AddReadIndex_m69D04FDD4B60B5980EA36C0EA83D8D97530DF4C2 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_add, const RuntimeMethod* method) 
{
	{
		// ReaderIndex += add;
		int32_t L_0;
		L_0 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_1 = ___0_add;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		// }
		return;
	}
}
// System.Byte[] Luban.ByteBuf::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Bytes { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CBytesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Luban.ByteBuf::set_Bytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_set_Bytes_m64361BB03D153DEAF186DF5F93B95D7B8B6FDF22 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		// public byte[] Bytes { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CBytesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBytesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Byte[] Luban.ByteBuf::CopyData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuf_CopyData_mBC814D88C5944D7A89098D3690537577CD6DF165 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// var n = Remaining;
		int32_t L_0;
		L_0 = ByteBuf_get_Remaining_m0D7CDB0B9FFCA68E7D21039C006F3894CF1F1500(__this, NULL);
		V_0 = L_0;
		// if (n > 0)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// var arr = new byte[n];
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		// Buffer.BlockCopy(Bytes, ReaderIndex, arr, 0, n);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_5;
		L_5 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		int32_t L_7 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_4, L_5, (RuntimeArray*)L_6, 0, L_7, NULL);
		// return arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		return L_8;
	}

IL_0028:
	{
		// return Array.Empty<byte>();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		return L_9;
	}
}
// System.Int32 Luban.ByteBuf::get_Remaining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_get_Remaining_m0D7CDB0B9FFCA68E7D21039C006F3894CF1F1500 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// public int Remaining { get { return WriterIndex - ReaderIndex; } }
		int32_t L_0;
		L_0 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Void Luban.ByteBuf::DiscardReadBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_DiscardReadBytes_m8EE57B3F65833B52163F4C86924D9983029B3E3D (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// WriterIndex -= ReaderIndex;
		int32_t L_0;
		L_0 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_0, L_1)), NULL);
		// Array.Copy(Bytes, ReaderIndex, Bytes, 0, WriterIndex);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_3;
		L_3 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_5;
		L_5 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, 0, L_5, NULL);
		// ReaderIndex = 0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, 0, NULL);
		// }
		return;
	}
}
// System.Int32 Luban.ByteBuf::get_NotCompactWritable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_get_NotCompactWritable_m35F8A78A06837F9FF5DD5E1244EF9DEAF53F2E2C (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// public int NotCompactWritable { get { return Capacity - WriterIndex; } }
		int32_t L_0;
		L_0 = ByteBuf_get_Capacity_mB2E2EC5C7997B188DACA79E51F38BDF4287EBFA0(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Void Luban.ByteBuf::WriteBytesWithoutSize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteBytesWithoutSize_m1081B8EABCCE407A4E452D4FB057EA1B8A922F04 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, const RuntimeMethod* method) 
{
	{
		// WriteBytesWithoutSize(bs, 0, bs.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bs;
		NullCheck(L_1);
		ByteBuf_WriteBytesWithoutSize_m1F637E0CE128672A74B3E51F0337593ECC268AB6(__this, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::WriteBytesWithoutSize(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteBytesWithoutSize_m1F637E0CE128672A74B3E51F0337593ECC268AB6 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_offset, int32_t ___2_len, const RuntimeMethod* method) 
{
	{
		// EnsureWrite(len);
		int32_t L_0 = ___2_len;
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, L_0, NULL);
		// Buffer.BlockCopy(bs, offset, Bytes, WriterIndex, len);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bs;
		int32_t L_2 = ___1_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_4;
		L_4 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_5 = ___2_len;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_1, L_2, (RuntimeArray*)L_3, L_4, L_5, NULL);
		// WriterIndex += len;
		int32_t L_6;
		L_6 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_7 = ___2_len;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_Clear_m46F35C60154C313115D6E5DE3FE4CF5CAD5451DF (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// ReaderIndex = WriterIndex = 0;
		int32_t L_0 = 0;
		V_0 = L_0;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, L_0, NULL);
		int32_t L_1 = V_0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Int32 Luban.ByteBuf::PropSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_PropSize_m3F3DFA0DE29EF8C8581D9EFD0DE8ED641F1AE08B (int32_t ___0_initSize, int32_t ___1_needSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = Math.Max(initSize, MIN_CAPACITY); ; i <<= 1)
		int32_t L_0 = ___0_initSize;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_0, ((int32_t)16), NULL);
		V_0 = L_1;
	}

IL_0009:
	{
		// if (i >= needSize)
		int32_t L_2 = V_0;
		int32_t L_3 = ___1_needSize;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_000f;
		}
	}
	{
		// return i;
		int32_t L_4 = V_0;
		return L_4;
	}

IL_000f:
	{
		// for (int i = Math.Max(initSize, MIN_CAPACITY); ; i <<= 1)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)(L_5<<1));
		goto IL_0009;
	}
}
// System.Void Luban.ByteBuf::EnsureWrite0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_EnsureWrite0_m6DF2C43FCAD932C32BDB6DD80B803A18C70D96C2 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// var needSize = WriterIndex + size - ReaderIndex;
		int32_t L_0;
		L_0 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_1 = ___0_size;
		int32_t L_2;
		L_2 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_0, L_1)), L_2));
		// if (needSize < Capacity)
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = ByteBuf_get_Capacity_mB2E2EC5C7997B188DACA79E51F38BDF4287EBFA0(__this, NULL);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0052;
		}
	}
	{
		// WriterIndex -= ReaderIndex;
		int32_t L_5;
		L_5 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_6;
		L_6 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_5, L_6)), NULL);
		// Array.Copy(Bytes, ReaderIndex, Bytes, 0, WriterIndex);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_8;
		L_8 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_10;
		L_10 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, 0, L_10, NULL);
		// ReaderIndex = 0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, 0, NULL);
		return;
	}

IL_0052:
	{
		// int newCapacity = PropSize(Capacity, needSize);
		int32_t L_11;
		L_11 = ByteBuf_get_Capacity_mB2E2EC5C7997B188DACA79E51F38BDF4287EBFA0(__this, NULL);
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = ByteBuf_PropSize_m3F3DFA0DE29EF8C8581D9EFD0DE8ED641F1AE08B(L_11, L_12, NULL);
		// var newBytes = new byte[newCapacity];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_1 = L_14;
		// WriterIndex -= ReaderIndex;
		int32_t L_15;
		L_15 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_16;
		L_16 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_15, L_16)), NULL);
		// Buffer.BlockCopy(Bytes, ReaderIndex, newBytes, 0, WriterIndex);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_18;
		L_18 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		int32_t L_20;
		L_20 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_17, L_18, (RuntimeArray*)L_19, 0, L_20, NULL);
		// ReaderIndex = 0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, 0, NULL);
		// Bytes = newBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		ByteBuf_set_Bytes_m64361BB03D153DEAF186DF5F93B95D7B8B6FDF22_inline(__this, L_21, NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::EnsureWrite(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		// if (WriterIndex + size > Capacity)
		int32_t L_0;
		L_0 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_1 = ___0_size;
		int32_t L_2;
		L_2 = ByteBuf_get_Capacity_mB2E2EC5C7997B188DACA79E51F38BDF4287EBFA0(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		// EnsureWrite0(size);
		int32_t L_3 = ___0_size;
		ByteBuf_EnsureWrite0_m6DF2C43FCAD932C32BDB6DD80B803A18C70D96C2(__this, L_3, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::EnsureRead(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		// if (ReaderIndex + size > WriterIndex)
		int32_t L_0;
		L_0 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_1 = ___0_size;
		int32_t L_2;
		L_2 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		// throw new SerializationException();
		SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1* L_3 = (SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		SerializationException__ctor_m1672766A270C635ADECF5DE3C34B3CC30BEAB636(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_RuntimeMethod_var)));
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Boolean Luban.ByteBuf::CanRead(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteBuf_CanRead_m4EF6108564C0B638CFE7F9D1DC5BEEE5736E5929 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		// return (ReaderIndex + size <= WriterIndex);
		int32_t L_0;
		L_0 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_1 = ___0_size;
		int32_t L_2;
		L_2 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		return (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) > ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Luban.ByteBuf::Append(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_Append_m5AF1FFB9DD7C3D624A4AFB2B9E18C62FD49C8BBB (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, uint8_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// EnsureWrite(1);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 1, NULL);
		// Bytes[WriterIndex++] = x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		int32_t L_3 = V_0;
		uint8_t L_4 = ___0_x;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::WriteBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteBool_mEB9C0F85E47360AF36A478859B22C97925307836 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, bool ___0_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_2 = NULL;
	{
		// EnsureWrite(1);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 1, NULL);
		// Bytes[WriterIndex++] = (byte)(b ? 1 : 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		int32_t L_3 = V_0;
		bool L_4 = ___0_b;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0025:
	{
		NullCheck(G_B3_2);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (uint8_t)((int32_t)(uint8_t)G_B3_0));
		// }
		return;
	}
}
// System.Boolean Luban.ByteBuf::ReadBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteBuf_ReadBool_mCF7B03484DF5B7840977619107C04B1FBF758C2D (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// EnsureRead(1);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 1, NULL);
		// return Bytes[ReaderIndex++] != 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		int32_t L_3 = V_0;
		NullCheck(L_0);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Luban.ByteBuf::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteByte_mF987F7CFA4070BDF58D049929D1B6142424ADA89 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, uint8_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// EnsureWrite(1);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 1, NULL);
		// Bytes[WriterIndex++] = x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		int32_t L_3 = V_0;
		uint8_t L_4 = ___0_x;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		// }
		return;
	}
}
// System.Byte Luban.ByteBuf::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ByteBuf_ReadByte_mEC17BB556C85721678184BC9573CE3F2336FD4C8 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// EnsureRead(1);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 1, NULL);
		// return Bytes[ReaderIndex++];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		int32_t L_3 = V_0;
		NullCheck(L_0);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Void Luban.ByteBuf::WriteShort(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteShort_mAAA0D2B282A1C70F13EE4754C34642F7BA913B29 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int16_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (x >= 0)
		int16_t L_0 = ___0_x;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		// if (x < 0x80)
		int16_t L_1 = ___0_x;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)128))))
		{
			goto IL_002e;
		}
	}
	{
		// EnsureWrite(1);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 1, NULL);
		// Bytes[WriterIndex++] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_3;
		L_3 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		int32_t L_5 = V_0;
		int16_t L_6 = ___0_x;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)L_6));
		// return;
		return;
	}

IL_002e:
	{
		// else if (x < 0x4000)
		int16_t L_7 = ___0_x;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)16384))))
		{
			goto IL_0074;
		}
	}
	{
		// EnsureWrite(2);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 2, NULL);
		// Bytes[WriterIndex + 1] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_9;
		L_9 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int16_t L_10 = ___0_x;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_9, 1))), (uint8_t)((int32_t)(uint8_t)L_10));
		// Bytes[WriterIndex] = (byte)((x >> 8) | 0x80);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_12;
		L_12 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int16_t L_13 = ___0_x;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_13>>8))|((int32_t)128)))));
		// WriterIndex += 2;
		int32_t L_14;
		L_14 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 2)), NULL);
		// return;
		return;
	}

IL_0074:
	{
		// EnsureWrite(3);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 3, NULL);
		// Bytes[WriterIndex] = 0xff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_16;
		L_16 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)((int32_t)255));
		// Bytes[WriterIndex + 2] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_18;
		L_18 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int16_t L_19 = ___0_x;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, 2))), (uint8_t)((int32_t)(uint8_t)L_19));
		// Bytes[WriterIndex + 1] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_21;
		L_21 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int16_t L_22 = ___0_x;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_21, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_22>>8))));
		// WriterIndex += 3;
		int32_t L_23;
		L_23 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_23, 3)), NULL);
		// }
		return;
	}
}
// System.Int16 Luban.ByteBuf::ReadShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ByteBuf_ReadShort_m3F71DC82884B005DD6936BF91404E584FE19542E (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// EnsureRead(1);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 1, NULL);
		// int h = Bytes[ReaderIndex];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// if (h < 0x80)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0030;
		}
	}
	{
		// ReaderIndex++;
		int32_t L_5;
		L_5 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		// return (short)h;
		int32_t L_7 = V_0;
		return ((int16_t)L_7);
	}

IL_0030:
	{
		// else if (h < 0xc0)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)192))))
		{
			goto IL_0065;
		}
	}
	{
		// EnsureRead(2);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 2, NULL);
		// int x = ((h & 0x3f) << 8) | Bytes[ReaderIndex + 1];
		int32_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_11;
		L_11 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// ReaderIndex += 2;
		int32_t L_14;
		L_14 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 2)), NULL);
		// return (short)x;
		return ((int16_t)((int32_t)(((int32_t)(((int32_t)(L_9&((int32_t)63)))<<8))|(int32_t)L_13)));
	}

IL_0065:
	{
		// else if ((h == 0xff))
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00a5;
		}
	}
	{
		// EnsureRead(3);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 3, NULL);
		// int x = (Bytes[ReaderIndex + 1] << 8) | Bytes[ReaderIndex + 2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_17;
		L_17 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_21;
		L_21 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 2));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		// ReaderIndex += 3;
		int32_t L_24;
		L_24 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 3)), NULL);
		// return (short)x;
		return ((int16_t)((int32_t)(((int32_t)((int32_t)L_19<<8))|(int32_t)L_23)));
	}

IL_00a5:
	{
		// throw new SerializationException();
		SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1* L_25 = (SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		SerializationException__ctor_m1672766A270C635ADECF5DE3C34B3CC30BEAB636(L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteBuf_ReadShort_m3F71DC82884B005DD6936BF91404E584FE19542E_RuntimeMethod_var)));
	}
}
// System.Int16 Luban.ByteBuf::ReadFshort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ByteBuf_ReadFshort_m90F6248366DA89A9756A6B3D8D91CA63A8DB48E6 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// EnsureRead(2);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 2, NULL);
		// x = (short)((Bytes[ReaderIndex + 1] << 8) | Bytes[ReaderIndex]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_5;
		L_5 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// ReaderIndex += 2;
		int32_t L_8;
		L_8 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_8, 2)), NULL);
		// return x;
		return ((int16_t)((int32_t)(((int32_t)((int32_t)L_3<<8))|(int32_t)L_7)));
	}
}
// System.Void Luban.ByteBuf::WriteFshort(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteFshort_mD7D90012F8B859F5B7EE97116E107C9A6FD931B5 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int16_t ___0_x, const RuntimeMethod* method) 
{
	{
		// EnsureWrite(2);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 2, NULL);
		// Bytes[WriterIndex] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int16_t L_2 = ___0_x;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		// Bytes[WriterIndex + 1] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_4;
		L_4 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int16_t L_5 = ___0_x;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_5>>8))));
		// WriterIndex += 2;
		int32_t L_6;
		L_6 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_6, 2)), NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::WriteInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteInt_m8891BFFEB4D53B0462734C01E41155DCB9FBDA2C (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// WriteUint((uint)x);
		int32_t L_0 = ___0_x;
		ByteBuf_WriteUint_mF33A57E706E2EE9D489C82650508D9CA29972CB2(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Int32 Luban.ByteBuf::ReadInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_ReadInt_m73F64A02434B047BF3C5322BD83E94CC769E3532 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// return (int)ReadUint();
		uint32_t L_0;
		L_0 = ByteBuf_ReadUint_mF5EE4F4613290105069477FC76CBE1CF31A5A2FF(__this, NULL);
		return L_0;
	}
}
// System.Void Luban.ByteBuf::WriteUint(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteUint_mF33A57E706E2EE9D489C82650508D9CA29972CB2 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, uint32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (x < 0x80)
		uint32_t L_0 = ___0_x;
		if ((!(((uint32_t)L_0) < ((uint32_t)((int32_t)128)))))
		{
			goto IL_002a;
		}
	}
	{
		// EnsureWrite(1);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 1, NULL);
		// Bytes[WriterIndex++] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_2;
		L_2 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		int32_t L_4 = V_0;
		uint32_t L_5 = ___0_x;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)L_5));
		return;
	}

IL_002a:
	{
		// else if (x < 0x4000) // 10 11 1111, -
		uint32_t L_6 = ___0_x;
		if ((!(((uint32_t)L_6) < ((uint32_t)((int32_t)16384)))))
		{
			goto IL_0070;
		}
	}
	{
		// EnsureWrite(2);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 2, NULL);
		// Bytes[WriterIndex + 1] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_8;
		L_8 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_9 = ___0_x;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1))), (uint8_t)((int32_t)(uint8_t)L_9));
		// Bytes[WriterIndex] = (byte)((x >> 8) | 0x80);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_11;
		L_11 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_12 = ___0_x;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_12>>8))|((int32_t)128)))));
		// WriterIndex += 2;
		int32_t L_13;
		L_13 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_13, 2)), NULL);
		return;
	}

IL_0070:
	{
		// else if (x < 0x200000) // 110 1 1111, -,-
		uint32_t L_14 = ___0_x;
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)2097152)))))
		{
			goto IL_00ca;
		}
	}
	{
		// EnsureWrite(3);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 3, NULL);
		// Bytes[WriterIndex + 2] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_16;
		L_16 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_17 = ___0_x;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, 2))), (uint8_t)((int32_t)(uint8_t)L_17));
		// Bytes[WriterIndex + 1] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_19;
		L_19 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_20 = ___0_x;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_20>>8))));
		// Bytes[WriterIndex] = (byte)((x >> 16) | 0xc0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_22;
		L_22 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_23 = ___0_x;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_23>>((int32_t)16)))|((int32_t)192)))));
		// WriterIndex += 3;
		int32_t L_24;
		L_24 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 3)), NULL);
		return;
	}

IL_00ca:
	{
		// else if (x < 0x10000000) // 1110 1111,-,-,-
		uint32_t L_25 = ___0_x;
		if ((!(((uint32_t)L_25) < ((uint32_t)((int32_t)268435456)))))
		{
			goto IL_0138;
		}
	}
	{
		// EnsureWrite(4);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 4, NULL);
		// Bytes[WriterIndex + 3] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_27;
		L_27 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_28 = ___0_x;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 3))), (uint8_t)((int32_t)(uint8_t)L_28));
		// Bytes[WriterIndex + 2] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_30;
		L_30 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_31 = ___0_x;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_30, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_31>>8))));
		// Bytes[WriterIndex + 1] = (byte)(x >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_33;
		L_33 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_34 = ___0_x;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_34>>((int32_t)16)))));
		// Bytes[WriterIndex] = (byte)((x >> 24) | 0xe0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_36;
		L_36 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_37 = ___0_x;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_37>>((int32_t)24)))|((int32_t)224)))));
		// WriterIndex += 4;
		int32_t L_38;
		L_38 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_38, 4)), NULL);
		return;
	}

IL_0138:
	{
		// EnsureWrite(5);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 5, NULL);
		// Bytes[WriterIndex] = 0xf0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_40;
		L_40 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint8_t)((int32_t)240));
		// Bytes[WriterIndex + 4] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_42;
		L_42 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_43 = ___0_x;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 4))), (uint8_t)((int32_t)(uint8_t)L_43));
		// Bytes[WriterIndex + 3] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44;
		L_44 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_45;
		L_45 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_46 = ___0_x;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_46>>8))));
		// Bytes[WriterIndex + 2] = (byte)(x >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47;
		L_47 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_48;
		L_48 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_49 = ___0_x;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_48, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_49>>((int32_t)16)))));
		// Bytes[WriterIndex + 1] = (byte)(x >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_51;
		L_51 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint32_t L_52 = ___0_x;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_51, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_52>>((int32_t)24)))));
		// WriterIndex += 5;
		int32_t L_53;
		L_53 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_53, 5)), NULL);
		// }
		return;
	}
}
// System.UInt32 Luban.ByteBuf::ReadUint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ByteBuf_ReadUint_mF5EE4F4613290105069477FC76CBE1CF31A5A2FF (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// EnsureRead(1);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 1, NULL);
		// uint h = Bytes[ReaderIndex];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// if (h < 0x80)
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) < ((uint32_t)((int32_t)128)))))
		{
			goto IL_002f;
		}
	}
	{
		// ReaderIndex++;
		int32_t L_5;
		L_5 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		// return h;
		uint32_t L_7 = V_0;
		return L_7;
	}

IL_002f:
	{
		// else if (h < 0xc0)
		uint32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)((int32_t)192)))))
		{
			goto IL_0063;
		}
	}
	{
		// EnsureRead(2);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 2, NULL);
		// uint x = ((h & 0x3f) << 8) | Bytes[ReaderIndex + 1];
		uint32_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_11;
		L_11 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// ReaderIndex += 2;
		int32_t L_14;
		L_14 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 2)), NULL);
		// return x;
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_9&((int32_t)63)))<<8))|(int32_t)L_13));
	}

IL_0063:
	{
		// else if (h < 0xe0)
		uint32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) < ((uint32_t)((int32_t)224)))))
		{
			goto IL_00aa;
		}
	}
	{
		// EnsureRead(3);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 3, NULL);
		// uint x = ((h & 0x1f) << 16) | ((uint)Bytes[ReaderIndex + 1] << 8) | Bytes[ReaderIndex + 2];
		uint32_t L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_18;
		L_18 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_22;
		L_22 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 2));
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		// ReaderIndex += 3;
		int32_t L_25;
		L_25 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_25, 3)), NULL);
		// return x;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_16&((int32_t)31)))<<((int32_t)16)))|((int32_t)((int32_t)L_20<<8))))|(int32_t)L_24));
	}

IL_00aa:
	{
		// else if (h < 0xf0)
		uint32_t L_26 = V_0;
		if ((!(((uint32_t)L_26) < ((uint32_t)((int32_t)240)))))
		{
			goto IL_0104;
		}
	}
	{
		// EnsureRead(4);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 4, NULL);
		// uint x = ((h & 0x0f) << 24) | ((uint)Bytes[ReaderIndex + 1] << 16) | ((uint)Bytes[ReaderIndex + 2] << 8) | Bytes[ReaderIndex + 3];
		uint32_t L_27 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_29;
		L_29 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_33;
		L_33 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_37;
		L_37 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 3));
		uint8_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		// ReaderIndex += 4;
		int32_t L_40;
		L_40 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_40, 4)), NULL);
		// return x;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_27&((int32_t)15)))<<((int32_t)24)))|((int32_t)((int32_t)L_31<<((int32_t)16)))))|((int32_t)((int32_t)L_35<<8))))|(int32_t)L_39));
	}

IL_0104:
	{
		// EnsureRead(5);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 5, NULL);
		// uint x = ((uint)Bytes[ReaderIndex + 1] << 24) | ((uint)(Bytes[ReaderIndex + 2] << 16)) | ((uint)Bytes[ReaderIndex + 3] << 8) | Bytes[ReaderIndex + 4];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_42;
		L_42 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45;
		L_45 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_46;
		L_46 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 2));
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49;
		L_49 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_50;
		L_50 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 3));
		uint8_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53;
		L_53 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_54;
		L_54 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 4));
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		// ReaderIndex += 5;
		int32_t L_57;
		L_57 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_57, 5)), NULL);
		// return x;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_44<<((int32_t)24)))|((int32_t)((int32_t)L_48<<((int32_t)16)))))|((int32_t)((int32_t)L_52<<8))))|(int32_t)L_56));
	}
}
// System.Void Luban.ByteBuf::WriteUint_Unsafe(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteUint_Unsafe_mB476B487B65189222539C4A714C2D309107BB9B6 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, uint32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	{
		// if (x < 0x80)
		uint32_t L_0 = ___0_x;
		if ((!(((uint32_t)L_0) < ((uint32_t)((int32_t)128)))))
		{
			goto IL_002c;
		}
	}
	{
		// EnsureWrite(1);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 1, NULL);
		// Bytes[WriterIndex++] = (byte)(x << 1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_2;
		L_2 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		int32_t L_4 = V_0;
		uint32_t L_5 = ___0_x;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_5<<1))));
		return;
	}

IL_002c:
	{
		// else if (x < 0x4000)// 10 11 1111, -
		uint32_t L_6 = ___0_x;
		if ((!(((uint32_t)L_6) < ((uint32_t)((int32_t)16384)))))
		{
			goto IL_0067;
		}
	}
	{
		// EnsureWrite(2);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_8;
		L_8 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		NullCheck(L_7);
		V_1 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)));
		// fixed (byte* wb = &Bytes[WriterIndex])
		uint8_t* L_9 = V_1;
		// *(uint*)(wb) = (x << 2 | 0b01);
		uint32_t L_10 = ___0_x;
		*((int32_t*)((uintptr_t)L_9)) = (int32_t)((int32_t)(((int32_t)((int32_t)L_10<<2))|1));
		V_1 = (uint8_t*)((uintptr_t)0);
		// WriterIndex += 2;
		int32_t L_11;
		L_11 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_11, 2)), NULL);
		return;
	}

IL_0067:
	{
		// else if (x < 0x200000) // 110 1 1111, -,-
		uint32_t L_12 = ___0_x;
		if ((!(((uint32_t)L_12) < ((uint32_t)((int32_t)2097152)))))
		{
			goto IL_00a2;
		}
	}
	{
		// EnsureWrite(3);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_14;
		L_14 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		NullCheck(L_13);
		V_1 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		// fixed (byte* wb = &Bytes[WriterIndex])
		uint8_t* L_15 = V_1;
		// *(uint*)(wb) = (x << 3 | 0b011);
		uint32_t L_16 = ___0_x;
		*((int32_t*)((uintptr_t)L_15)) = (int32_t)((int32_t)(((int32_t)((int32_t)L_16<<3))|3));
		V_1 = (uint8_t*)((uintptr_t)0);
		// WriterIndex += 3;
		int32_t L_17;
		L_17 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_17, 3)), NULL);
		return;
	}

IL_00a2:
	{
		// else if (x < 0x10000000) // 1110 1111,-,-,-
		uint32_t L_18 = ___0_x;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)268435456)))))
		{
			goto IL_00dd;
		}
	}
	{
		// EnsureWrite(4);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_20;
		L_20 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		NullCheck(L_19);
		V_1 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		// fixed (byte* wb = &Bytes[WriterIndex])
		uint8_t* L_21 = V_1;
		// *(uint*)(wb) = (x << 4 | 0b0111);
		uint32_t L_22 = ___0_x;
		*((int32_t*)((uintptr_t)L_21)) = (int32_t)((int32_t)(((int32_t)((int32_t)L_22<<4))|7));
		V_1 = (uint8_t*)((uintptr_t)0);
		// WriterIndex += 4;
		int32_t L_23;
		L_23 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_23, 4)), NULL);
		return;
	}

IL_00dd:
	{
		// EnsureWrite(5);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_25;
		L_25 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		NullCheck(L_24);
		V_1 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)));
		// fixed (byte* wb = &Bytes[WriterIndex])
		uint8_t* L_26 = V_1;
		// *(uint*)(wb) = (x << 5 | 0b01111);
		uint32_t L_27 = ___0_x;
		*((int32_t*)((uintptr_t)L_26)) = (int32_t)((int32_t)(((int32_t)((int32_t)L_27<<5))|((int32_t)15)));
		V_1 = (uint8_t*)((uintptr_t)0);
		// WriterIndex += 5;
		int32_t L_28;
		L_28 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_28, 5)), NULL);
		// }
		return;
	}
}
// System.UInt32 Luban.ByteBuf::ReadUint_Unsafe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ByteBuf_ReadUint_Unsafe_m683C131A86570D10AF098F11A4B2A002AE029558 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	{
		// EnsureRead(1);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 1, NULL);
		// uint h = Bytes[ReaderIndex];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// if ((h & 0b1) == 0b0)
		uint32_t L_4 = V_0;
		if (((int32_t)((int32_t)L_4&1)))
		{
			goto IL_002e;
		}
	}
	{
		// ReaderIndex++;
		int32_t L_5;
		L_5 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		// return (h >> 1);
		uint32_t L_7 = V_0;
		return ((int32_t)((uint32_t)L_7>>1));
	}

IL_002e:
	{
		// else if ((h & 0b11) == 0b01)
		uint32_t L_8 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&3))) == ((uint32_t)1))))
		{
			goto IL_0061;
		}
	}
	{
		// EnsureRead(2);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_10;
		L_10 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_9);
		V_2 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)));
		// fixed (byte* rb = &Bytes[ReaderIndex])
		uint8_t* L_11 = V_2;
		// ReaderIndex += 2;
		int32_t L_12;
		L_12 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_12, 2)), NULL);
		// return (*(uint*)rb) >> 2;
		int32_t L_13 = *((uint32_t*)((uintptr_t)L_11));
		return ((int32_t)((uint32_t)L_13>>2));
	}

IL_0061:
	{
		// else if ((h & 0b111) == 0b011)
		uint32_t L_14 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_14&7))) == ((uint32_t)3))))
		{
			goto IL_0094;
		}
	}
	{
		// EnsureRead(3);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_16;
		L_16 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_15);
		V_2 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		// fixed (byte* rb = &Bytes[ReaderIndex])
		uint8_t* L_17 = V_2;
		// ReaderIndex += 3;
		int32_t L_18;
		L_18 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_18, 3)), NULL);
		// return (*(uint*)rb) >> 3;
		int32_t L_19 = *((uint32_t*)((uintptr_t)L_17));
		return ((int32_t)((uint32_t)L_19>>3));
	}

IL_0094:
	{
		// else if ((h & 0b1111) == 0b0111)
		uint32_t L_20 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_20&((int32_t)15)))) == ((uint32_t)7))))
		{
			goto IL_00c8;
		}
	}
	{
		// EnsureRead(4);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_22;
		L_22 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_21);
		V_2 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		// fixed (byte* rb = &Bytes[ReaderIndex])
		uint8_t* L_23 = V_2;
		// ReaderIndex += 4;
		int32_t L_24;
		L_24 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 4)), NULL);
		// return (*(uint*)rb) >> 4;
		int32_t L_25 = *((uint32_t*)((uintptr_t)L_23));
		return ((int32_t)((uint32_t)L_25>>4));
	}

IL_00c8:
	{
		// EnsureRead(5);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_27;
		L_27 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_26);
		V_2 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)));
		// fixed (byte* rb = &Bytes[ReaderIndex])
		uint8_t* L_28 = V_2;
		// ReaderIndex += 5;
		int32_t L_29;
		L_29 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_29, 5)), NULL);
		// return (*(uint*)rb) >> 5;
		int32_t L_30 = *((uint32_t*)((uintptr_t)L_28));
		return ((int32_t)((uint32_t)L_30>>5));
	}
}
// System.Int32 Luban.ByteBuf::ReadFint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_ReadFint_mBDB4973E898D70C04E4706B29BDFDA3A69BFECF2 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// EnsureRead(4);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 4, NULL);
		// x = (Bytes[ReaderIndex + 3] << 24) | (Bytes[ReaderIndex + 2] << 16) | (Bytes[ReaderIndex + 1] << 8) | (Bytes[ReaderIndex]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 3));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_5;
		L_5 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 2));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_9;
		L_9 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_13;
		L_13 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		// ReaderIndex += 4;
		int32_t L_16;
		L_16 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_16, 4)), NULL);
		// return x;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)24)))|((int32_t)((int32_t)L_7<<((int32_t)16)))))|((int32_t)((int32_t)L_11<<8))))|(int32_t)L_15));
	}
}
// System.Void Luban.ByteBuf::WriteFint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteFint_mD54EAA576B712E245EF199F7B0EA70110663B3A2 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// EnsureWrite(4);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 4, NULL);
		// Bytes[WriterIndex] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_2 = ___0_x;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		// Bytes[WriterIndex + 1] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_4;
		L_4 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_5 = ___0_x;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5>>8))));
		// Bytes[WriterIndex + 2] = (byte)(x >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_7;
		L_7 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_8 = ___0_x;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>((int32_t)16)))));
		// Bytes[WriterIndex + 3] = (byte)(x >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_10;
		L_10 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_11 = ___0_x;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_11>>((int32_t)24)))));
		// WriterIndex += 4;
		int32_t L_12;
		L_12 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_12, 4)), NULL);
		// }
		return;
	}
}
// System.Int32 Luban.ByteBuf::ReadFint_Safe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_ReadFint_Safe_m64D49895449FE8899E73808655C3BAE2E884EC8D (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// EnsureRead(4);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 4, NULL);
		// x = (Bytes[ReaderIndex + 3] << 24) | (Bytes[ReaderIndex + 2] << 16) | (Bytes[ReaderIndex + 1] << 8) | (Bytes[ReaderIndex]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 3));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_5;
		L_5 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 2));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_9;
		L_9 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_13;
		L_13 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		// ReaderIndex += 4;
		int32_t L_16;
		L_16 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_16, 4)), NULL);
		// return x;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)24)))|((int32_t)((int32_t)L_7<<((int32_t)16)))))|((int32_t)((int32_t)L_11<<8))))|(int32_t)L_15));
	}
}
// System.Void Luban.ByteBuf::WriteFint_Safe(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteFint_Safe_m6F93E276E785ABEF95DE34835001C6B83B9004C7 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// EnsureWrite(4);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 4, NULL);
		// Bytes[WriterIndex] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_2 = ___0_x;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		// Bytes[WriterIndex + 1] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_4;
		L_4 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_5 = ___0_x;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5>>8))));
		// Bytes[WriterIndex + 2] = (byte)(x >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_7;
		L_7 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_8 = ___0_x;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>((int32_t)16)))));
		// Bytes[WriterIndex + 3] = (byte)(x >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_10;
		L_10 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_11 = ___0_x;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_11>>((int32_t)24)))));
		// WriterIndex += 4;
		int32_t L_12;
		L_12 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_12, 4)), NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::WriteLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteLong_m3E6E1BF0C390D5E55CCC0DD8C4A4807C10522BD1 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int64_t ___0_x, const RuntimeMethod* method) 
{
	{
		// WriteUlong((ulong)x);
		int64_t L_0 = ___0_x;
		ByteBuf_WriteUlong_m0C3E19EC9B7097B58EFF9637C07A2E038D476687(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Int64 Luban.ByteBuf::ReadLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ByteBuf_ReadLong_mA51C1BF9F4A6C6F6AA5B6B5AACFD75A86E1F563C (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// return (long)ReadUlong();
		uint64_t L_0;
		L_0 = ByteBuf_ReadUlong_m4E7766F411AF418A2CF7C1009CA6AD4BB2AE9211(__this, NULL);
		return L_0;
	}
}
// System.Void Luban.ByteBuf::WriteNumberAsLong(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteNumberAsLong_mA3B90FB0E20857AFF3203442C6F1470828A21DF6 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, double ___0_x, const RuntimeMethod* method) 
{
	{
		// WriteLong((long)x);
		double L_0 = ___0_x;
		ByteBuf_WriteLong_m3E6E1BF0C390D5E55CCC0DD8C4A4807C10522BD1(__this, il2cpp_codegen_cast_double_to_int<int64_t>(L_0), NULL);
		// }
		return;
	}
}
// System.Double Luban.ByteBuf::ReadLongAsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ByteBuf_ReadLongAsNumber_m6721C2523440BE54FA2C77A56CB4E60F814E5B6B (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// return ReadLong();
		int64_t L_0;
		L_0 = ByteBuf_ReadLong_mA51C1BF9F4A6C6F6AA5B6B5AACFD75A86E1F563C(__this, NULL);
		return ((double)L_0);
	}
}
// System.Void Luban.ByteBuf::WriteUlong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteUlong_m0C3E19EC9B7097B58EFF9637C07A2E038D476687 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, uint64_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (x < 0x80)
		uint64_t L_0 = ___0_x;
		if ((!(((uint64_t)L_0) < ((uint64_t)((int64_t)((int32_t)128))))))
		{
			goto IL_002b;
		}
	}
	{
		// EnsureWrite(1);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 1, NULL);
		// Bytes[WriterIndex++] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_2;
		L_2 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		int32_t L_4 = V_0;
		uint64_t L_5 = ___0_x;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)L_5));
		return;
	}

IL_002b:
	{
		// else if (x < 0x4000) // 10 11 1111, -
		uint64_t L_6 = ___0_x;
		if ((!(((uint64_t)L_6) < ((uint64_t)((int64_t)((int32_t)16384))))))
		{
			goto IL_0073;
		}
	}
	{
		// EnsureWrite(2);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 2, NULL);
		// Bytes[WriterIndex + 1] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_8;
		L_8 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_9 = ___0_x;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1))), (uint8_t)((int32_t)(uint8_t)L_9));
		// Bytes[WriterIndex] = (byte)((x >> 8) | 0x80);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_11;
		L_11 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_12 = ___0_x;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_12>>8))|((int64_t)((int32_t)128))))));
		// WriterIndex += 2;
		int32_t L_13;
		L_13 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_13, 2)), NULL);
		return;
	}

IL_0073:
	{
		// else if (x < 0x200000) // 110 1 1111, -,-
		uint64_t L_14 = ___0_x;
		if ((!(((uint64_t)L_14) < ((uint64_t)((int64_t)((int32_t)2097152))))))
		{
			goto IL_00cf;
		}
	}
	{
		// EnsureWrite(3);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 3, NULL);
		// Bytes[WriterIndex + 2] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_16;
		L_16 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_17 = ___0_x;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, 2))), (uint8_t)((int32_t)(uint8_t)L_17));
		// Bytes[WriterIndex + 1] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_19;
		L_19 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_20 = ___0_x;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_20>>8))));
		// Bytes[WriterIndex] = (byte)((x >> 16) | 0xc0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_22;
		L_22 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_23 = ___0_x;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_23>>((int32_t)16)))|((int64_t)((int32_t)192))))));
		// WriterIndex += 3;
		int32_t L_24;
		L_24 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 3)), NULL);
		return;
	}

IL_00cf:
	{
		// else if (x < 0x10000000) // 1110 1111,-,-,-
		uint64_t L_25 = ___0_x;
		if ((!(((uint64_t)L_25) < ((uint64_t)((int64_t)((int32_t)268435456))))))
		{
			goto IL_013f;
		}
	}
	{
		// EnsureWrite(4);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 4, NULL);
		// Bytes[WriterIndex + 3] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_27;
		L_27 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_28 = ___0_x;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 3))), (uint8_t)((int32_t)(uint8_t)L_28));
		// Bytes[WriterIndex + 2] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_30;
		L_30 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_31 = ___0_x;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_30, 2))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_31>>8))));
		// Bytes[WriterIndex + 1] = (byte)(x >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_33;
		L_33 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_34 = ___0_x;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 1))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_34>>((int32_t)16)))));
		// Bytes[WriterIndex] = (byte)((x >> 24) | 0xe0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_36;
		L_36 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_37 = ___0_x;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_37>>((int32_t)24)))|((int64_t)((int32_t)224))))));
		// WriterIndex += 4;
		int32_t L_38;
		L_38 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_38, 4)), NULL);
		return;
	}

IL_013f:
	{
		// else if (x < 0x800000000L) // 1111 0xxx,-,-,-,-
		uint64_t L_39 = ___0_x;
		if ((!(((uint64_t)L_39) < ((uint64_t)((int64_t)34359738368LL)))))
		{
			goto IL_01c6;
		}
	}
	{
		// EnsureWrite(5);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 5, NULL);
		// Bytes[WriterIndex + 4] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_41;
		L_41 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_42 = ___0_x;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_41, 4))), (uint8_t)((int32_t)(uint8_t)L_42));
		// Bytes[WriterIndex + 3] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43;
		L_43 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_44;
		L_44 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_45 = ___0_x;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_44, 3))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_45>>8))));
		// Bytes[WriterIndex + 2] = (byte)(x >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_47;
		L_47 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_48 = ___0_x;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, 2))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_48>>((int32_t)16)))));
		// Bytes[WriterIndex + 1] = (byte)(x >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49;
		L_49 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_50;
		L_50 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_51 = ___0_x;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_50, 1))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_51>>((int32_t)24)))));
		// Bytes[WriterIndex] = (byte)((x >> 32) | 0xf0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52;
		L_52 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_53;
		L_53 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_54 = ___0_x;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_54>>((int32_t)32)))|((int64_t)((int32_t)240))))));
		// WriterIndex += 5;
		int32_t L_55;
		L_55 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_55, 5)), NULL);
		return;
	}

IL_01c6:
	{
		// else if (x < 0x40000000000L) // 1111 10xx,
		uint64_t L_56 = ___0_x;
		if ((!(((uint64_t)L_56) < ((uint64_t)((int64_t)4398046511104LL)))))
		{
			goto IL_0264;
		}
	}
	{
		// EnsureWrite(6);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 6, NULL);
		// Bytes[WriterIndex + 5] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57;
		L_57 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_58;
		L_58 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_59 = ___0_x;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 5))), (uint8_t)((int32_t)(uint8_t)L_59));
		// Bytes[WriterIndex + 4] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60;
		L_60 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_61;
		L_61 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_62 = ___0_x;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 4))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_62>>8))));
		// Bytes[WriterIndex + 3] = (byte)(x >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63;
		L_63 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_64;
		L_64 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_65 = ___0_x;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_64, 3))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_65>>((int32_t)16)))));
		// Bytes[WriterIndex + 2] = (byte)(x >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66;
		L_66 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_67;
		L_67 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_68 = ___0_x;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_67, 2))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_68>>((int32_t)24)))));
		// Bytes[WriterIndex + 1] = (byte)(x >> 32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69;
		L_69 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_70;
		L_70 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_71 = ___0_x;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_70, 1))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_71>>((int32_t)32)))));
		// Bytes[WriterIndex] = (byte)((x >> 40) | 0xf8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72;
		L_72 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_73;
		L_73 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_74 = ___0_x;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_74>>((int32_t)40)))|((int64_t)((int32_t)248))))));
		// WriterIndex += 6;
		int32_t L_75;
		L_75 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_75, 6)), NULL);
		return;
	}

IL_0264:
	{
		// else if (x < 0x200000000000L) // 1111 110x,
		uint64_t L_76 = ___0_x;
		if ((!(((uint64_t)L_76) < ((uint64_t)((int64_t)35184372088832LL)))))
		{
			goto IL_0316;
		}
	}
	{
		// EnsureWrite(7);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 7, NULL);
		// Bytes[WriterIndex + 6] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77;
		L_77 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_78;
		L_78 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_79 = ___0_x;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_78, 6))), (uint8_t)((int32_t)(uint8_t)L_79));
		// Bytes[WriterIndex + 5] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80;
		L_80 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_81;
		L_81 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_82 = ___0_x;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_81, 5))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_82>>8))));
		// Bytes[WriterIndex + 4] = (byte)(x >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83;
		L_83 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_84;
		L_84 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_85 = ___0_x;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_84, 4))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_85>>((int32_t)16)))));
		// Bytes[WriterIndex + 3] = (byte)(x >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86;
		L_86 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_87;
		L_87 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_88 = ___0_x;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_87, 3))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_88>>((int32_t)24)))));
		// Bytes[WriterIndex + 2] = (byte)(x >> 32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89;
		L_89 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_90;
		L_90 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_91 = ___0_x;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_90, 2))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_91>>((int32_t)32)))));
		// Bytes[WriterIndex + 1] = (byte)(x >> 40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92;
		L_92 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_93;
		L_93 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_94 = ___0_x;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 1))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_94>>((int32_t)40)))));
		// Bytes[WriterIndex] = (byte)((x >> 48) | 0xfc);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95;
		L_95 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_96;
		L_96 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_97 = ___0_x;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_97>>((int32_t)48)))|((int64_t)((int32_t)252))))));
		// WriterIndex += 7;
		int32_t L_98;
		L_98 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_98, 7)), NULL);
		return;
	}

IL_0316:
	{
		// else if (x < 0x100000000000000L) // 1111 1110
		uint64_t L_99 = ___0_x;
		if ((!(((uint64_t)L_99) < ((uint64_t)((int64_t)72057594037927936LL)))))
		{
			goto IL_03d5;
		}
	}
	{
		// EnsureWrite(8);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 8, NULL);
		// Bytes[WriterIndex + 7] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100;
		L_100 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_101;
		L_101 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_102 = ___0_x;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_101, 7))), (uint8_t)((int32_t)(uint8_t)L_102));
		// Bytes[WriterIndex + 6] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103;
		L_103 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_104;
		L_104 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_105 = ___0_x;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_104, 6))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_105>>8))));
		// Bytes[WriterIndex + 5] = (byte)(x >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106;
		L_106 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_107;
		L_107 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_108 = ___0_x;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_107, 5))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_108>>((int32_t)16)))));
		// Bytes[WriterIndex + 4] = (byte)(x >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109;
		L_109 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_110;
		L_110 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_111 = ___0_x;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_110, 4))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_111>>((int32_t)24)))));
		// Bytes[WriterIndex + 3] = (byte)(x >> 32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112;
		L_112 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_113;
		L_113 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_114 = ___0_x;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_113, 3))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_114>>((int32_t)32)))));
		// Bytes[WriterIndex + 2] = (byte)(x >> 40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115;
		L_115 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_116;
		L_116 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_117 = ___0_x;
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_116, 2))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_117>>((int32_t)40)))));
		// Bytes[WriterIndex + 1] = (byte)(x >> 48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118;
		L_118 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_119;
		L_119 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_120 = ___0_x;
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_119, 1))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_120>>((int32_t)48)))));
		// Bytes[WriterIndex] = 0xfe;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121;
		L_121 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_122;
		L_122 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_122), (uint8_t)((int32_t)254));
		// WriterIndex += 8;
		int32_t L_123;
		L_123 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_123, 8)), NULL);
		return;
	}

IL_03d5:
	{
		// EnsureWrite(9);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, ((int32_t)9), NULL);
		// Bytes[WriterIndex] = 0xff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124;
		L_124 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_125;
		L_125 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (uint8_t)((int32_t)255));
		// Bytes[WriterIndex + 8] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126;
		L_126 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_127;
		L_127 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_128 = ___0_x;
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_127, 8))), (uint8_t)((int32_t)(uint8_t)L_128));
		// Bytes[WriterIndex + 7] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129;
		L_129 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_130;
		L_130 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_131 = ___0_x;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_130, 7))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_131>>8))));
		// Bytes[WriterIndex + 6] = (byte)(x >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_132;
		L_132 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_133;
		L_133 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_134 = ___0_x;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_133, 6))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_134>>((int32_t)16)))));
		// Bytes[WriterIndex + 5] = (byte)(x >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_135;
		L_135 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_136;
		L_136 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_137 = ___0_x;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_136, 5))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_137>>((int32_t)24)))));
		// Bytes[WriterIndex + 4] = (byte)(x >> 32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_138;
		L_138 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_139;
		L_139 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_140 = ___0_x;
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_139, 4))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_140>>((int32_t)32)))));
		// Bytes[WriterIndex + 3] = (byte)(x >> 40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141;
		L_141 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_142;
		L_142 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_143 = ___0_x;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_142, 3))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_143>>((int32_t)40)))));
		// Bytes[WriterIndex + 2] = (byte)(x >> 48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_144;
		L_144 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_145;
		L_145 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_146 = ___0_x;
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_145, 2))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_146>>((int32_t)48)))));
		// Bytes[WriterIndex + 1] = (byte)(x >> 56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_147;
		L_147 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_148;
		L_148 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint64_t L_149 = ___0_x;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_148, 1))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_149>>((int32_t)56)))));
		// WriterIndex += 9;
		int32_t L_150;
		L_150 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_150, ((int32_t)9))), NULL);
		// }
		return;
	}
}
// System.UInt64 Luban.ByteBuf::ReadUlong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ByteBuf_ReadUlong_m4E7766F411AF418A2CF7C1009CA6AD4BB2AE9211 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	{
		// EnsureRead(1);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 1, NULL);
		// uint h = Bytes[ReaderIndex];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// if (h < 0x80)
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) < ((uint32_t)((int32_t)128)))))
		{
			goto IL_0030;
		}
	}
	{
		// ReaderIndex++;
		int32_t L_5;
		L_5 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		// return h;
		uint32_t L_7 = V_0;
		return ((int64_t)(uint64_t)L_7);
	}

IL_0030:
	{
		// else if (h < 0xc0)
		uint32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)((int32_t)192)))))
		{
			goto IL_0065;
		}
	}
	{
		// EnsureRead(2);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 2, NULL);
		// uint x = ((h & 0x3f) << 8) | Bytes[ReaderIndex + 1];
		uint32_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_11;
		L_11 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// ReaderIndex += 2;
		int32_t L_14;
		L_14 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 2)), NULL);
		// return x;
		return ((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_9&((int32_t)63)))<<8))|(int32_t)L_13))));
	}

IL_0065:
	{
		// else if (h < 0xe0)
		uint32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) < ((uint32_t)((int32_t)224)))))
		{
			goto IL_00ad;
		}
	}
	{
		// EnsureRead(3);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 3, NULL);
		// uint x = ((h & 0x1f) << 16) | ((uint)Bytes[ReaderIndex + 1] << 8) | Bytes[ReaderIndex + 2];
		uint32_t L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_18;
		L_18 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_22;
		L_22 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 2));
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		// ReaderIndex += 3;
		int32_t L_25;
		L_25 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_25, 3)), NULL);
		// return x;
		return ((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_16&((int32_t)31)))<<((int32_t)16)))|((int32_t)((int32_t)L_20<<8))))|(int32_t)L_24))));
	}

IL_00ad:
	{
		// else if (h < 0xf0)
		uint32_t L_26 = V_0;
		if ((!(((uint32_t)L_26) < ((uint32_t)((int32_t)240)))))
		{
			goto IL_0108;
		}
	}
	{
		// EnsureRead(4);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 4, NULL);
		// uint x = ((h & 0x0f) << 24) | ((uint)Bytes[ReaderIndex + 1] << 16) | ((uint)Bytes[ReaderIndex + 2] << 8) | Bytes[ReaderIndex + 3];
		uint32_t L_27 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_29;
		L_29 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_33;
		L_33 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_37;
		L_37 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 3));
		uint8_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		// ReaderIndex += 4;
		int32_t L_40;
		L_40 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_40, 4)), NULL);
		// return x;
		return ((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_27&((int32_t)15)))<<((int32_t)24)))|((int32_t)((int32_t)L_31<<((int32_t)16)))))|((int32_t)((int32_t)L_35<<8))))|(int32_t)L_39))));
	}

IL_0108:
	{
		// else if (h < 0xf8)
		uint32_t L_41 = V_0;
		if ((!(((uint32_t)L_41) < ((uint32_t)((int32_t)248)))))
		{
			goto IL_0178;
		}
	}
	{
		// EnsureRead(5);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 5, NULL);
		// uint xl = ((uint)Bytes[ReaderIndex + 1] << 24) | ((uint)(Bytes[ReaderIndex + 2] << 16)) | ((uint)Bytes[ReaderIndex + 3] << 8) | (Bytes[ReaderIndex + 4]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_43;
		L_43 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_47;
		L_47 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 2));
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_51;
		L_51 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_51, 3));
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54;
		L_54 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_55;
		L_55 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 4));
		uint8_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_2 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_45<<((int32_t)24)))|((int32_t)((int32_t)L_49<<((int32_t)16)))))|((int32_t)((int32_t)L_53<<8))))|(int32_t)L_57));
		// uint xh = h & 0x07;
		uint32_t L_58 = V_0;
		// ReaderIndex += 5;
		int32_t L_59;
		L_59 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_59, 5)), NULL);
		// return ((ulong)xh << 32) | xl;
		uint32_t L_60 = V_2;
		return ((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_58&7))))<<((int32_t)32)))|((int64_t)(uint64_t)L_60)));
	}

IL_0178:
	{
		// else if (h < 0xfc)
		uint32_t L_61 = V_0;
		if ((!(((uint32_t)L_61) < ((uint32_t)((int32_t)252)))))
		{
			goto IL_01fa;
		}
	}
	{
		// EnsureRead(6);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 6, NULL);
		// uint xl = ((uint)Bytes[ReaderIndex + 2] << 24) | ((uint)(Bytes[ReaderIndex + 3] << 16)) | ((uint)Bytes[ReaderIndex + 4] << 8) | (Bytes[ReaderIndex + 5]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62;
		L_62 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_63;
		L_63 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(L_63, 2));
		uint8_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66;
		L_66 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_67;
		L_67 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 3));
		uint8_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70;
		L_70 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_71;
		L_71 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 4));
		uint8_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74;
		L_74 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_75;
		L_75 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(L_75, 5));
		uint8_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_3 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_65<<((int32_t)24)))|((int32_t)((int32_t)L_69<<((int32_t)16)))))|((int32_t)((int32_t)L_73<<8))))|(int32_t)L_77));
		// uint xh = ((h & 0x03) << 8) | Bytes[ReaderIndex + 1];
		uint32_t L_78 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79;
		L_79 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_80;
		L_80 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		uint8_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		// ReaderIndex += 6;
		int32_t L_83;
		L_83 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_83, 6)), NULL);
		// return ((ulong)xh << 32) | xl;
		uint32_t L_84 = V_3;
		return ((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_78&3))<<8))|(int32_t)L_82))))<<((int32_t)32)))|((int64_t)(uint64_t)L_84)));
	}

IL_01fa:
	{
		// else if (h < 0xfe)
		uint32_t L_85 = V_0;
		if ((!(((uint32_t)L_85) < ((uint32_t)((int32_t)254)))))
		{
			goto IL_0294;
		}
	}
	{
		// EnsureRead(7);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 7, NULL);
		// uint xl = ((uint)Bytes[ReaderIndex + 3] << 24) | ((uint)(Bytes[ReaderIndex + 4] << 16)) | ((uint)Bytes[ReaderIndex + 5] << 8) | (Bytes[ReaderIndex + 6]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86;
		L_86 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_87;
		L_87 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(L_87, 3));
		uint8_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90;
		L_90 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_91;
		L_91 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 4));
		uint8_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94;
		L_94 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_95;
		L_95 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 5));
		uint8_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98;
		L_98 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_99;
		L_99 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_98);
		int32_t L_100 = ((int32_t)il2cpp_codegen_add(L_99, 6));
		uint8_t L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_4 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_89<<((int32_t)24)))|((int32_t)((int32_t)L_93<<((int32_t)16)))))|((int32_t)((int32_t)L_97<<8))))|(int32_t)L_101));
		// uint xh = ((h & 0x01) << 16) | ((uint)Bytes[ReaderIndex + 1] << 8) | Bytes[ReaderIndex + 2];
		uint32_t L_102 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103;
		L_103 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_104;
		L_104 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_103);
		int32_t L_105 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		uint8_t L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107;
		L_107 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_108;
		L_108 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_add(L_108, 2));
		uint8_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		// ReaderIndex += 7;
		int32_t L_111;
		L_111 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_111, 7)), NULL);
		// return ((ulong)xh << 32) | xl;
		uint32_t L_112 = V_4;
		return ((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_102&1))<<((int32_t)16)))|((int32_t)((int32_t)L_106<<8))))|(int32_t)L_110))))<<((int32_t)32)))|((int64_t)(uint64_t)L_112)));
	}

IL_0294:
	{
		// else if (h < 0xff)
		uint32_t L_113 = V_0;
		if ((!(((uint32_t)L_113) < ((uint32_t)((int32_t)255)))))
		{
			goto IL_033a;
		}
	}
	{
		// EnsureRead(8);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 8, NULL);
		// uint xl = ((uint)Bytes[ReaderIndex + 4] << 24) | ((uint)(Bytes[ReaderIndex + 5] << 16)) | ((uint)Bytes[ReaderIndex + 6] << 8) | (Bytes[ReaderIndex + 7]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114;
		L_114 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_115;
		L_115 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(L_115, 4));
		uint8_t L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118;
		L_118 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_119;
		L_119 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_118);
		int32_t L_120 = ((int32_t)il2cpp_codegen_add(L_119, 5));
		uint8_t L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_122;
		L_122 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_123;
		L_123 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_122);
		int32_t L_124 = ((int32_t)il2cpp_codegen_add(L_123, 6));
		uint8_t L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126;
		L_126 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_127;
		L_127 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add(L_127, 7));
		uint8_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_5 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_117<<((int32_t)24)))|((int32_t)((int32_t)L_121<<((int32_t)16)))))|((int32_t)((int32_t)L_125<<8))))|(int32_t)L_129));
		// uint xh = /*((h & 0x01) << 24) |*/ ((uint)Bytes[ReaderIndex + 1] << 16) | ((uint)Bytes[ReaderIndex + 2] << 8) | Bytes[ReaderIndex + 3];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_130;
		L_130 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_131;
		L_131 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_130);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		uint8_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134;
		L_134 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_135;
		L_135 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add(L_135, 2));
		uint8_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_138;
		L_138 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_139;
		L_139 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add(L_139, 3));
		uint8_t L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		// ReaderIndex += 8;
		int32_t L_142;
		L_142 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_142, 8)), NULL);
		// return ((ulong)xh << 32) | xl;
		uint32_t L_143 = V_5;
		return ((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_133<<((int32_t)16)))|((int32_t)((int32_t)L_137<<8))))|(int32_t)L_141))))<<((int32_t)32)))|((int64_t)(uint64_t)L_143)));
	}

IL_033a:
	{
		// EnsureRead(9);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, ((int32_t)9), NULL);
		// uint xl = ((uint)Bytes[ReaderIndex + 5] << 24) | ((uint)(Bytes[ReaderIndex + 6] << 16)) | ((uint)Bytes[ReaderIndex + 7] << 8) | (Bytes[ReaderIndex + 8]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_144;
		L_144 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_145;
		L_145 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_144);
		int32_t L_146 = ((int32_t)il2cpp_codegen_add(L_145, 5));
		uint8_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_148;
		L_148 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_149;
		L_149 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(L_149, 6));
		uint8_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_152;
		L_152 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_153;
		L_153 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_152);
		int32_t L_154 = ((int32_t)il2cpp_codegen_add(L_153, 7));
		uint8_t L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_156;
		L_156 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_157;
		L_157 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_156);
		int32_t L_158 = ((int32_t)il2cpp_codegen_add(L_157, 8));
		uint8_t L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		V_6 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_147<<((int32_t)24)))|((int32_t)((int32_t)L_151<<((int32_t)16)))))|((int32_t)((int32_t)L_155<<8))))|(int32_t)L_159));
		// uint xh = ((uint)Bytes[ReaderIndex + 1] << 24) | ((uint)Bytes[ReaderIndex + 2] << 16) | ((uint)Bytes[ReaderIndex + 3] << 8) | Bytes[ReaderIndex + 4];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_160;
		L_160 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_161;
		L_161 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_160);
		int32_t L_162 = ((int32_t)il2cpp_codegen_add(L_161, 1));
		uint8_t L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_164;
		L_164 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_165;
		L_165 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_164);
		int32_t L_166 = ((int32_t)il2cpp_codegen_add(L_165, 2));
		uint8_t L_167 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_168;
		L_168 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_169;
		L_169 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_168);
		int32_t L_170 = ((int32_t)il2cpp_codegen_add(L_169, 3));
		uint8_t L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_172;
		L_172 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_173;
		L_173 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_172);
		int32_t L_174 = ((int32_t)il2cpp_codegen_add(L_173, 4));
		uint8_t L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		// ReaderIndex += 9;
		int32_t L_176;
		L_176 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_176, ((int32_t)9))), NULL);
		// return ((ulong)xh << 32) | xl;
		uint32_t L_177 = V_6;
		return ((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_163<<((int32_t)24)))|((int32_t)((int32_t)L_167<<((int32_t)16)))))|((int32_t)((int32_t)L_171<<8))))|(int32_t)L_175))))<<((int32_t)32)))|((int64_t)(uint64_t)L_177)));
	}
}
// System.Void Luban.ByteBuf::WriteFlong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteFlong_m00307D390F9441162D6E5434DFB22EB45A5BC603 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int64_t ___0_x, const RuntimeMethod* method) 
{
	{
		// EnsureWrite(8);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 8, NULL);
		// Bytes[WriterIndex] = (byte)x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int64_t L_2 = ___0_x;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		// Bytes[WriterIndex + 1] = (byte)(x >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_4;
		L_4 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int64_t L_5 = ___0_x;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_5>>8))));
		// Bytes[WriterIndex + 2] = (byte)(x >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_7;
		L_7 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int64_t L_8 = ___0_x;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_8>>((int32_t)16)))));
		// Bytes[WriterIndex + 3] = (byte)(x >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_10;
		L_10 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int64_t L_11 = ___0_x;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_11>>((int32_t)24)))));
		// Bytes[WriterIndex + 4] = (byte)(x >> 32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_13;
		L_13 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int64_t L_14 = ___0_x;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 4))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_14>>((int32_t)32)))));
		// Bytes[WriterIndex + 5] = (byte)(x >> 40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_16;
		L_16 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int64_t L_17 = ___0_x;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, 5))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_17>>((int32_t)40)))));
		// Bytes[WriterIndex + 6] = (byte)(x >> 48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_19;
		L_19 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int64_t L_20 = ___0_x;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 6))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_20>>((int32_t)48)))));
		// Bytes[WriterIndex + 7] = (byte)(x >> 56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_22;
		L_22 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int64_t L_23 = ___0_x;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 7))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_23>>((int32_t)56)))));
		// WriterIndex += 8;
		int32_t L_24;
		L_24 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 8)), NULL);
		// }
		return;
	}
}
// System.Int64 Luban.ByteBuf::ReadFlong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ByteBuf_ReadFlong_mDFFAA097EDE0D20C1C86AD6F74270BE96257E7DB (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// EnsureRead(8);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 8, NULL);
		// int xl = (Bytes[ReaderIndex + 3] << 24) | ((Bytes[ReaderIndex + 2] << 16)) | (Bytes[ReaderIndex + 1] << 8) | (Bytes[ReaderIndex]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 3));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_5;
		L_5 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 2));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_9;
		L_9 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_13;
		L_13 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)24)))|((int32_t)((int32_t)L_7<<((int32_t)16)))))|((int32_t)((int32_t)L_11<<8))))|(int32_t)L_15));
		// int xh = (Bytes[ReaderIndex + 7] << 24) | (Bytes[ReaderIndex + 6] << 16) | (Bytes[ReaderIndex + 5] << 8) | Bytes[ReaderIndex + 4];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_17;
		L_17 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 7));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_21;
		L_21 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 6));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_25;
		L_25 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 5));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_29;
		L_29 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 4));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		// x = ((long)xh << 32) | (long)xl;
		int32_t L_32 = V_0;
		// ReaderIndex += 8;
		int32_t L_33;
		L_33 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_33, 8)), NULL);
		// return x;
		return ((int64_t)(((int64_t)(((int64_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_19<<((int32_t)24)))|((int32_t)((int32_t)L_23<<((int32_t)16)))))|((int32_t)((int32_t)L_27<<8))))|(int32_t)L_31)))<<((int32_t)32)))|((int64_t)L_32)));
	}
}
// System.Void Luban.ByteBuf::Copy8(System.Byte*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_Copy8_m7A7DDEA9630F6EDC375384E8F43F84554AB39D19 (uint8_t* ___0_dst, uint8_t* ___1_src, const RuntimeMethod* method) 
{
	{
		// dst[0] = src[0];
		uint8_t* L_0 = ___0_dst;
		uint8_t* L_1 = ___1_src;
		int32_t L_2 = *((uint8_t*)L_1);
		*((int8_t*)L_0) = (int8_t)L_2;
		// dst[1] = src[1];
		uint8_t* L_3 = ___0_dst;
		uint8_t* L_4 = ___1_src;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 1)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, 1))) = (int8_t)L_5;
		// dst[2] = src[2];
		uint8_t* L_6 = ___0_dst;
		uint8_t* L_7 = ___1_src;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, 2)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, 2))) = (int8_t)L_8;
		// dst[3] = src[3];
		uint8_t* L_9 = ___0_dst;
		uint8_t* L_10 = ___1_src;
		int32_t L_11 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, 3)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 3))) = (int8_t)L_11;
		// dst[4] = src[4];
		uint8_t* L_12 = ___0_dst;
		uint8_t* L_13 = ___1_src;
		int32_t L_14 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 4)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, 4))) = (int8_t)L_14;
		// dst[5] = src[5];
		uint8_t* L_15 = ___0_dst;
		uint8_t* L_16 = ___1_src;
		int32_t L_17 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, 5)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, 5))) = (int8_t)L_17;
		// dst[6] = src[6];
		uint8_t* L_18 = ___0_dst;
		uint8_t* L_19 = ___1_src;
		int32_t L_20 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, 6)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, 6))) = (int8_t)L_20;
		// dst[7] = src[7];
		uint8_t* L_21 = ___0_dst;
		uint8_t* L_22 = ___1_src;
		int32_t L_23 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, 7)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, 7))) = (int8_t)L_23;
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::Copy4(System.Byte*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_Copy4_mBD49F2227F861425D9A73402028A0996060C5D49 (uint8_t* ___0_dst, uint8_t* ___1_src, const RuntimeMethod* method) 
{
	{
		// dst[0] = src[0];
		uint8_t* L_0 = ___0_dst;
		uint8_t* L_1 = ___1_src;
		int32_t L_2 = *((uint8_t*)L_1);
		*((int8_t*)L_0) = (int8_t)L_2;
		// dst[1] = src[1];
		uint8_t* L_3 = ___0_dst;
		uint8_t* L_4 = ___1_src;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 1)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, 1))) = (int8_t)L_5;
		// dst[2] = src[2];
		uint8_t* L_6 = ___0_dst;
		uint8_t* L_7 = ___1_src;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, 2)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, 2))) = (int8_t)L_8;
		// dst[3] = src[3];
		uint8_t* L_9 = ___0_dst;
		uint8_t* L_10 = ___1_src;
		int32_t L_11 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, 3)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 3))) = (int8_t)L_11;
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::WriteFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, float ___0_x, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// EnsureWrite(4);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 4, NULL);
		// {
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		NullCheck(L_0);
		V_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		// fixed (byte* b = &Bytes[WriterIndex])
		uint8_t* L_2 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_2);
		// if ((long)b % 4 == 0)
		uint8_t* L_3 = V_0;
		if (((int64_t)(((int64_t)(uint64_t)(intptr_t)L_3)%((int64_t)4))))
		{
			goto IL_0028;
		}
	}
	{
		// *(float*)b = x;
		uint8_t* L_4 = V_0;
		float L_5 = ___0_x;
		*((float*)L_4) = (float)L_5;
		goto IL_0031;
	}

IL_0028:
	{
		// Copy4(b, (byte*)&x);
		uint8_t* L_6 = V_0;
		ByteBuf_Copy4_mBD49F2227F861425D9A73402028A0996060C5D49(L_6, (uint8_t*)((uintptr_t)(&___0_x)), NULL);
	}

IL_0031:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		// WriterIndex += 4;
		int32_t L_7;
		L_7 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		// }
		return;
	}
}
// System.Single Luban.ByteBuf::ReadFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	{
		// EnsureRead(4);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 4, NULL);
		// {
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_0);
		V_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		// fixed (byte* b = &Bytes[ReaderIndex])
		uint8_t* L_2 = V_2;
		V_1 = (uint8_t*)((uintptr_t)L_2);
		// if ((long)b % 4 == 0)
		uint8_t* L_3 = V_1;
		if (((int64_t)(((int64_t)(uint64_t)(intptr_t)L_3)%((int64_t)4))))
		{
			goto IL_0028;
		}
	}
	{
		// x = *(float*)b;
		uint8_t* L_4 = V_1;
		float L_5 = *((float*)L_4);
		V_0 = L_5;
		goto IL_0045;
	}

IL_0028:
	{
		// *((int*)&x) = (b[0]) | (b[1] << 8) | (b[2] << 16) | (b[3] << 24);
		uint8_t* L_6 = V_1;
		int32_t L_7 = *((uint8_t*)L_6);
		uint8_t* L_8 = V_1;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, 1)));
		uint8_t* L_10 = V_1;
		int32_t L_11 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, 2)));
		uint8_t* L_12 = V_1;
		int32_t L_13 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, 3)));
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)((int32_t)(((int32_t)(((int32_t)(L_7|((int32_t)(L_9<<8))))|((int32_t)(L_11<<((int32_t)16)))))|((int32_t)(L_13<<((int32_t)24)))));
	}

IL_0045:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		// ReaderIndex += 4;
		int32_t L_14;
		L_14 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 4)), NULL);
		// return x;
		float L_15 = V_0;
		return L_15;
	}
}
// System.Void Luban.ByteBuf::WriteDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteDouble_m389D73BF8C7EDE7F42BC37C181654C8FABC1E5DD (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, double ___0_x, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// EnsureWrite(8);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 8, NULL);
		// {
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		NullCheck(L_0);
		V_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		// fixed (byte* b = &Bytes[WriterIndex])
		uint8_t* L_2 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_2);
		// if ((long)b % 8 == 0)
		uint8_t* L_3 = V_0;
		if (((int64_t)(((int64_t)(uint64_t)(intptr_t)L_3)%((int64_t)8))))
		{
			goto IL_0028;
		}
	}
	{
		// *(double*)b = x;
		uint8_t* L_4 = V_0;
		double L_5 = ___0_x;
		*((double*)L_4) = (double)L_5;
		goto IL_0031;
	}

IL_0028:
	{
		// Copy8(b, (byte*)&x);
		uint8_t* L_6 = V_0;
		ByteBuf_Copy8_m7A7DDEA9630F6EDC375384E8F43F84554AB39D19(L_6, (uint8_t*)((uintptr_t)(&___0_x)), NULL);
	}

IL_0031:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		// WriterIndex += 8;
		int32_t L_7;
		L_7 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_7, 8)), NULL);
		// }
		return;
	}
}
// System.Double Luban.ByteBuf::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ByteBuf_ReadDouble_m6566935EB854AD50FC16102365BE6E56E4C06D3E (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// EnsureRead(8);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 8, NULL);
		// {
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_0);
		V_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		// fixed (byte* b = &Bytes[ReaderIndex])
		uint8_t* L_2 = V_2;
		V_1 = (uint8_t*)((uintptr_t)L_2);
		// if ((long)b % 8 == 0)
		uint8_t* L_3 = V_1;
		if (((int64_t)(((int64_t)(uint64_t)(intptr_t)L_3)%((int64_t)8))))
		{
			goto IL_0028;
		}
	}
	{
		// x = *(double*)b;
		uint8_t* L_4 = V_1;
		double L_5 = *((double*)L_4);
		V_0 = L_5;
		goto IL_006c;
	}

IL_0028:
	{
		// int low = (b[0]) | (b[1] << 8) | (b[2] << 16) | (b[3] << 24);
		uint8_t* L_6 = V_1;
		int32_t L_7 = *((uint8_t*)L_6);
		uint8_t* L_8 = V_1;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, 1)));
		uint8_t* L_10 = V_1;
		int32_t L_11 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, 2)));
		uint8_t* L_12 = V_1;
		int32_t L_13 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, 3)));
		V_3 = ((int32_t)(((int32_t)(((int32_t)(L_7|((int32_t)(L_9<<8))))|((int32_t)(L_11<<((int32_t)16)))))|((int32_t)(L_13<<((int32_t)24)))));
		// int high = (b[4]) | (b[5] << 8) | (b[6] << 16) | (b[7] << 24);
		uint8_t* L_14 = V_1;
		int32_t L_15 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, 4)));
		uint8_t* L_16 = V_1;
		int32_t L_17 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, 5)));
		uint8_t* L_18 = V_1;
		int32_t L_19 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, 6)));
		uint8_t* L_20 = V_1;
		int32_t L_21 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, 7)));
		V_4 = ((int32_t)(((int32_t)(((int32_t)(L_15|((int32_t)(L_17<<8))))|((int32_t)(L_19<<((int32_t)16)))))|((int32_t)(L_21<<((int32_t)24)))));
		// *((long*)&x) = ((long)high << 32) | (uint)low;
		int32_t L_22 = V_4;
		int32_t L_23 = V_3;
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(((int64_t)(((int64_t)L_22)<<((int32_t)32)))|((int64_t)(uint64_t)((uint32_t)L_23))));
	}

IL_006c:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		// ReaderIndex += 8;
		int32_t L_24;
		L_24 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 8)), NULL);
		// return x;
		double L_25 = V_0;
		return L_25;
	}
}
// System.Void Luban.ByteBuf::WriteSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteSize_mB73B10D1184B173C815639017E63257DEB818F2B (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_n, const RuntimeMethod* method) 
{
	{
		// WriteUint((uint)n);
		int32_t L_0 = ___0_n;
		ByteBuf_WriteUint_mF33A57E706E2EE9D489C82650508D9CA29972CB2(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Int32 Luban.ByteBuf::ReadSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_ReadSize_m1D8B3F112DFB0777FA8AC1DF37047B804EB4DB4E (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// return (int)ReadUint();
		uint32_t L_0;
		L_0 = ByteBuf_ReadUint_mF5EE4F4613290105069477FC76CBE1CF31A5A2FF(__this, NULL);
		return L_0;
	}
}
// System.Void Luban.ByteBuf::WriteSint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteSint_m3DBFAF1AFC054D94D3842215530FBDC3E04D690F (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// WriteUint(((uint)x << 1) ^ ((uint)x >> 31));
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		ByteBuf_WriteUint_mF33A57E706E2EE9D489C82650508D9CA29972CB2(__this, ((int32_t)(((int32_t)(L_0<<1))^((int32_t)((uint32_t)L_1>>((int32_t)31))))), NULL);
		// }
		return;
	}
}
// System.Int32 Luban.ByteBuf::ReadSint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_ReadSint_m9F2992E90E7B2DF79B153C3149D503AF0FC95C03 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		// uint x = ReadUint();
		uint32_t L_0;
		L_0 = ByteBuf_ReadUint_mF5EE4F4613290105069477FC76CBE1CF31A5A2FF(__this, NULL);
		V_0 = L_0;
		// return (int)((x >> 1) ^ ((x & 1) << 31));
		uint32_t L_1 = V_0;
		uint32_t L_2 = V_0;
		return ((int32_t)(((int32_t)((uint32_t)L_1>>1))^((int32_t)(((int32_t)((int32_t)L_2&1))<<((int32_t)31)))));
	}
}
// System.Void Luban.ByteBuf::WriteSlong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteSlong_m6BB3FF07BC230A545AB937DB9CEEBF85C3B0C1D2 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int64_t ___0_x, const RuntimeMethod* method) 
{
	{
		// WriteUlong(((ulong)x << 1) ^ ((ulong)x >> 63));
		int64_t L_0 = ___0_x;
		int64_t L_1 = ___0_x;
		ByteBuf_WriteUlong_m0C3E19EC9B7097B58EFF9637C07A2E038D476687(__this, ((int64_t)(((int64_t)(L_0<<1))^((int64_t)((uint64_t)L_1>>((int32_t)63))))), NULL);
		// }
		return;
	}
}
// System.Int64 Luban.ByteBuf::ReadSlong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ByteBuf_ReadSlong_m9CF456790456F76958A0EAC6CB033CF8BFD0D1BF (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// long x = ReadLong();
		int64_t L_0;
		L_0 = ByteBuf_ReadLong_mA51C1BF9F4A6C6F6AA5B6B5AACFD75A86E1F563C(__this, NULL);
		V_0 = L_0;
		// return ((long)((ulong)x >> 1) ^ ((x & 1) << 63));
		int64_t L_1 = V_0;
		int64_t L_2 = V_0;
		return ((int64_t)(((int64_t)((uint64_t)L_1>>1))^((int64_t)(((int64_t)(L_2&((int64_t)1)))<<((int32_t)63)))));
	}
}
// System.Void Luban.ByteBuf::WriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteString_m49DB6F05B3C1356F912BCBF09D08BFF59E92E80F (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, String_t* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// var n = x != null ? Encoding.UTF8.GetByteCount(x) : 0;
		String_t* L_0 = ___0_x;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0011;
	}

IL_0006:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2 = ___0_x;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(20 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_1, L_2);
		G_B3_0 = L_3;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		// WriteSize(n);
		int32_t L_4 = V_0;
		ByteBuf_WriteSize_mB73B10D1184B173C815639017E63257DEB818F2B(__this, L_4, NULL);
		// if (n > 0)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		// EnsureWrite(n);
		int32_t L_6 = V_0;
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, L_6, NULL);
		// Encoding.UTF8.GetBytes(x, 0, x.Length, Bytes, WriterIndex);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
		L_7 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_8 = ___0_x;
		String_t* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_12;
		L_12 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		NullCheck(L_7);
		int32_t L_13;
		L_13 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(28 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_7, L_8, 0, L_10, L_11, L_12);
		// WriterIndex += n;
		int32_t L_14;
		L_14 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_15 = V_0;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, L_15)), NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Func`4<System.Byte[],System.Int32,System.Int32,System.String> Luban.ByteBuf::get_StringCacheFinder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515* ByteBuf_get_StringCacheFinder_mEEBAABD8CA7D69492483952469AE1207CB839314 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Func<byte[], int, int, string> StringCacheFinder { get; set; }
		Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515* L_0 = ((ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_StaticFields*)il2cpp_codegen_static_fields_for(ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var))->___U3CStringCacheFinderU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Luban.ByteBuf::set_StringCacheFinder(System.Func`4<System.Byte[],System.Int32,System.Int32,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_set_StringCacheFinder_m03400FF4B9B017204B50D2E7547F0B1BA3E37C6B (Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Func<byte[], int, int, string> StringCacheFinder { get; set; }
		Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515* L_0 = ___0_value;
		((ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_StaticFields*)il2cpp_codegen_static_fields_for(ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var))->___U3CStringCacheFinderU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_StaticFields*)il2cpp_codegen_static_fields_for(ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var))->___U3CStringCacheFinderU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Luban.ByteBuf::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ByteBuf_ReadString_mFBDD78B0ED139BA6221B4096D05A0D70F1804261 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// var n = ReadSize();
		int32_t L_0;
		L_0 = ByteBuf_ReadSize_m1D8B3F112DFB0777FA8AC1DF37047B804EB4DB4E(__this, NULL);
		V_0 = L_0;
		// if (n > 0)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		// EnsureRead(n);
		int32_t L_2 = V_0;
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, L_2, NULL);
		// if (StringCacheFinder == null)
		Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515* L_3;
		L_3 = ByteBuf_get_StringCacheFinder_mEEBAABD8CA7D69492483952469AE1207CB839314_inline(NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		// s = Encoding.UTF8.GetString(Bytes, ReaderIndex, n);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_6;
		L_6 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_4);
		String_t* L_8;
		L_8 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(48 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, L_6, L_7);
		V_1 = L_8;
		goto IL_004b;
	}

IL_0033:
	{
		// s = StringCacheFinder(Bytes, ReaderIndex, n);
		Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515* L_9;
		L_9 = ByteBuf_get_StringCacheFinder_mEEBAABD8CA7D69492483952469AE1207CB839314_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_11;
		L_11 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_12 = V_0;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = Func_4_Invoke_mE1E4642DBB6D7360E47BDC6E3A20B14FC4A4D9FD_inline(L_9, L_10, L_11, L_12, NULL);
		V_1 = L_13;
	}

IL_004b:
	{
		// ReaderIndex += n;
		int32_t L_14;
		L_14 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_15 = V_0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, L_15)), NULL);
		// return s;
		String_t* L_16 = V_1;
		return L_16;
	}

IL_005b:
	{
		// return string.Empty;
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_17;
	}
}
// System.Void Luban.ByteBuf::WriteBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteBytes_mCEF6907915F7D47098624D47DD46C610DC814995 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// var n = x != null ? x.Length : 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_x;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0009;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_x;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
	}

IL_0009:
	{
		V_0 = G_B3_0;
		// WriteSize(n);
		int32_t L_2 = V_0;
		ByteBuf_WriteSize_mB73B10D1184B173C815639017E63257DEB818F2B(__this, L_2, NULL);
		// if (n > 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// EnsureWrite(n);
		int32_t L_4 = V_0;
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, L_4, NULL);
		// x.CopyTo(Bytes, WriterIndex);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_7;
		L_7 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		NullCheck((RuntimeArray*)L_5);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_5, (RuntimeArray*)L_6, L_7, NULL);
		// WriterIndex += n;
		int32_t L_8;
		L_8 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_9 = V_0;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Byte[] Luban.ByteBuf::ReadBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuf_ReadBytes_m311C5E60B1A7FD34F6BBF366BC36B4493EB3B320 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// var n = ReadSize();
		int32_t L_0;
		L_0 = ByteBuf_ReadSize_m1D8B3F112DFB0777FA8AC1DF37047B804EB4DB4E(__this, NULL);
		V_0 = L_0;
		// if (n > 0)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		// EnsureRead(n);
		int32_t L_2 = V_0;
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, L_2, NULL);
		// var x = new byte[n];
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// Buffer.BlockCopy(Bytes, ReaderIndex, x, 0, n);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_6;
		L_6 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		int32_t L_8 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		// ReaderIndex += n;
		int32_t L_9;
		L_9 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_10 = V_0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_9, L_10)), NULL);
		// return x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		return L_11;
	}

IL_003d:
	{
		// return Array.Empty<byte>();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		return L_12;
	}
}
// System.Void Luban.ByteBuf::WriteComplex(System.Numerics.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteComplex_m8F3449D65BF9FF45745C680867CE3EF7E4532B1C (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WriteDouble(x.Real);
		il2cpp_codegen_runtime_class_init_inline(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = Complex_get_Real_m98291D3606A2D33FB2A4AFD94C5A6B594C4C8554_inline((&___0_x), NULL);
		ByteBuf_WriteDouble_m389D73BF8C7EDE7F42BC37C181654C8FABC1E5DD(__this, L_0, NULL);
		// WriteDouble(x.Imaginary);
		double L_1;
		L_1 = Complex_get_Imaginary_m55DD546C177307031449E6814F9AE1671097FABD_inline((&___0_x), NULL);
		ByteBuf_WriteDouble_m389D73BF8C7EDE7F42BC37C181654C8FABC1E5DD(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Numerics.Complex Luban.ByteBuf::ReadComplex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ByteBuf_ReadComplex_m8E6FAA0E7D5B2DAB64D7CA8AB84AF0BEC667617A (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// var x = ReadDouble();
		double L_0;
		L_0 = ByteBuf_ReadDouble_m6566935EB854AD50FC16102365BE6E56E4C06D3E(__this, NULL);
		// var y = ReadDouble();
		double L_1;
		L_1 = ByteBuf_ReadDouble_m6566935EB854AD50FC16102365BE6E56E4C06D3E(__this, NULL);
		V_0 = L_1;
		// return new Complex(x, y);
		double L_2 = V_0;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987((&L_3), L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Luban.ByteBuf::WriteVector2(System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteVector2_m2046D2D39A25CB6CD655293871D78F02AC2318BC (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575 ___0_x, const RuntimeMethod* method) 
{
	{
		// WriteFloat(x.X);
		Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575 L_0 = ___0_x;
		float L_1 = L_0.___X_0;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_1, NULL);
		// WriteFloat(x.Y);
		Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575 L_2 = ___0_x;
		float L_3 = L_2.___Y_1;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Numerics.Vector2 Luban.ByteBuf::ReadVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575 ByteBuf_ReadVector2_m6D46058B5B4A432B86B65280EA7B2323825AE672 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float x = ReadFloat();
		float L_0;
		L_0 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		// float y = ReadFloat();
		float L_1;
		L_1 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_0 = L_1;
		// return new Vector2(x, y);
		float L_2 = V_0;
		Vector2_tD99316096CAA530734E8AEB77A0353568D6DC575 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m167E12FB2DAEC328D01935DDEB879A36034AB6EF((&L_3), L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Luban.ByteBuf::WriteVector3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteVector3_m9592758A6698A9F5D9DA7017B52DDB3337B4B5D9 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D ___0_x, const RuntimeMethod* method) 
{
	{
		// WriteFloat(x.X);
		Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D L_0 = ___0_x;
		float L_1 = L_0.___X_0;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_1, NULL);
		// WriteFloat(x.Y);
		Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D L_2 = ___0_x;
		float L_3 = L_2.___Y_1;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_3, NULL);
		// WriteFloat(x.Z);
		Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D L_4 = ___0_x;
		float L_5 = L_4.___Z_2;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Numerics.Vector3 Luban.ByteBuf::ReadVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D ByteBuf_ReadVector3_m02B7E3CE7EF3F8CC7DAA2A0B73FDF1DDBFBD4B61 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float x = ReadFloat();
		float L_0;
		L_0 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		// float y = ReadFloat();
		float L_1;
		L_1 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_0 = L_1;
		// float z = ReadFloat();
		float L_2;
		L_2 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_1 = L_2;
		// return new Vector3(x, y, z);
		float L_3 = V_0;
		float L_4 = V_1;
		Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m7C7B6A0DD0B1E729ECE05CD46AAD62DC2B71BD86((&L_5), L_0, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Luban.ByteBuf::WriteVector4(System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteVector4_mAF30CC881BDD2D248945B529650EE4545434BD36 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6 ___0_x, const RuntimeMethod* method) 
{
	{
		// WriteFloat(x.X);
		Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6 L_0 = ___0_x;
		float L_1 = L_0.___X_0;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_1, NULL);
		// WriteFloat(x.Y);
		Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6 L_2 = ___0_x;
		float L_3 = L_2.___Y_1;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_3, NULL);
		// WriteFloat(x.Z);
		Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6 L_4 = ___0_x;
		float L_5 = L_4.___Z_2;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_5, NULL);
		// WriteFloat(x.W);
		Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6 L_6 = ___0_x;
		float L_7 = L_6.___W_3;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Numerics.Vector4 Luban.ByteBuf::ReadVector4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6 ByteBuf_ReadVector4_mA964B2D48BDD2AA94C4EFC78204575E488D0E12E (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float x = ReadFloat();
		float L_0;
		L_0 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		// float y = ReadFloat();
		float L_1;
		L_1 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_0 = L_1;
		// float z = ReadFloat();
		float L_2;
		L_2 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_1 = L_2;
		// float w = ReadFloat();
		float L_3;
		L_3 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_2 = L_3;
		// return new Vector4(x, y, z, w);
		float L_4 = V_0;
		float L_5 = V_1;
		float L_6 = V_2;
		Vector4_tF4F5C74E5DAF01F48A6C081ECCF18A33861C52A6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m22210D6F83F4B5D6CFA82DF01AA1435A4121AC8C((&L_7), L_0, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Luban.ByteBuf::WriteQuaternion(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteQuaternion_mBABD5414F2EBA9CF2DD104EBE8FD5384712EB240 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F ___0_x, const RuntimeMethod* method) 
{
	{
		// WriteFloat(x.X);
		Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F L_0 = ___0_x;
		float L_1 = L_0.___X_0;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_1, NULL);
		// WriteFloat(x.Y);
		Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F L_2 = ___0_x;
		float L_3 = L_2.___Y_1;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_3, NULL);
		// WriteFloat(x.Z);
		Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F L_4 = ___0_x;
		float L_5 = L_4.___Z_2;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_5, NULL);
		// WriteFloat(x.W);
		Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F L_6 = ___0_x;
		float L_7 = L_6.___W_3;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Numerics.Quaternion Luban.ByteBuf::ReadQuaternion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F ByteBuf_ReadQuaternion_mC7F631C19F19025907646960909A2F8817E040AC (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float x = ReadFloat();
		float L_0;
		L_0 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		// float y = ReadFloat();
		float L_1;
		L_1 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_0 = L_1;
		// float z = ReadFloat();
		float L_2;
		L_2 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_1 = L_2;
		// float w = ReadFloat();
		float L_3;
		L_3 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_2 = L_3;
		// return new Quaternion(x, y, z, w);
		float L_4 = V_0;
		float L_5 = V_1;
		float L_6 = V_2;
		Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Quaternion__ctor_m5E368299988E51F83A3F4DDEBD57C62D047305E6((&L_7), L_0, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Luban.ByteBuf::WriteMatrix4x4(System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteMatrix4x4_m24FEA6452BC67D139667456901EE9FA3B244C3A3 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 ___0_x, const RuntimeMethod* method) 
{
	{
		// WriteFloat(x.M11);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_0 = ___0_x;
		float L_1 = L_0.___M11_0;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_1, NULL);
		// WriteFloat(x.M12);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_2 = ___0_x;
		float L_3 = L_2.___M12_1;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_3, NULL);
		// WriteFloat(x.M13);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_4 = ___0_x;
		float L_5 = L_4.___M13_2;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_5, NULL);
		// WriteFloat(x.M14);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_6 = ___0_x;
		float L_7 = L_6.___M14_3;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_7, NULL);
		// WriteFloat(x.M21);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_8 = ___0_x;
		float L_9 = L_8.___M21_4;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_9, NULL);
		// WriteFloat(x.M22);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_10 = ___0_x;
		float L_11 = L_10.___M22_5;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_11, NULL);
		// WriteFloat(x.M23);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_12 = ___0_x;
		float L_13 = L_12.___M23_6;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_13, NULL);
		// WriteFloat(x.M24);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_14 = ___0_x;
		float L_15 = L_14.___M24_7;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_15, NULL);
		// WriteFloat(x.M31);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_16 = ___0_x;
		float L_17 = L_16.___M31_8;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_17, NULL);
		// WriteFloat(x.M32);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_18 = ___0_x;
		float L_19 = L_18.___M32_9;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_19, NULL);
		// WriteFloat(x.M33);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_20 = ___0_x;
		float L_21 = L_20.___M33_10;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_21, NULL);
		// WriteFloat(x.M34);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_22 = ___0_x;
		float L_23 = L_22.___M34_11;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_23, NULL);
		// WriteFloat(x.M41);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_24 = ___0_x;
		float L_25 = L_24.___M41_12;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_25, NULL);
		// WriteFloat(x.M42);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_26 = ___0_x;
		float L_27 = L_26.___M42_13;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_27, NULL);
		// WriteFloat(x.M43);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_28 = ___0_x;
		float L_29 = L_28.___M43_14;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_29, NULL);
		// WriteFloat(x.M44);
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_30 = ___0_x;
		float L_31 = L_30.___M44_15;
		ByteBuf_WriteFloat_m243231ECC3099C2B79445B3B8E0956CB04985616(__this, L_31, NULL);
		// }
		return;
	}
}
// System.Numerics.Matrix4x4 Luban.ByteBuf::ReadMatrix4x4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 ByteBuf_ReadMatrix4x4_m8CC81769F9EB221CB2CB0AE47AAEC7F5FF5FC655 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	{
		// float m11 = ReadFloat();
		float L_0;
		L_0 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		// float m12 = ReadFloat();
		float L_1;
		L_1 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_0 = L_1;
		// float m13 = ReadFloat();
		float L_2;
		L_2 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_1 = L_2;
		// float m14 = ReadFloat();
		float L_3;
		L_3 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_2 = L_3;
		// float m21 = ReadFloat();
		float L_4;
		L_4 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_3 = L_4;
		// float m22 = ReadFloat();
		float L_5;
		L_5 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_4 = L_5;
		// float m23 = ReadFloat();
		float L_6;
		L_6 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_5 = L_6;
		// float m24 = ReadFloat();
		float L_7;
		L_7 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_6 = L_7;
		// float m31 = ReadFloat();
		float L_8;
		L_8 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_7 = L_8;
		// float m32 = ReadFloat();
		float L_9;
		L_9 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_8 = L_9;
		// float m33 = ReadFloat();
		float L_10;
		L_10 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_9 = L_10;
		// float m34 = ReadFloat();
		float L_11;
		L_11 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_10 = L_11;
		// float m41 = ReadFloat();
		float L_12;
		L_12 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_11 = L_12;
		// float m42 = ReadFloat();
		float L_13;
		L_13 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_12 = L_13;
		// float m43 = ReadFloat();
		float L_14;
		L_14 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_13 = L_14;
		// float m44 = ReadFloat();
		float L_15;
		L_15 = ByteBuf_ReadFloat_m4457ABE5DDD03AD72F6B1C0C360C8018019C2AE9(__this, NULL);
		V_14 = L_15;
		// return new Matrix4x4(m11, m12, m13, m14,
		//     m21, m22, m23, m24,
		//     m31, m32, m33, m34,
		//     m41, m42, m43, m44);
		float L_16 = V_0;
		float L_17 = V_1;
		float L_18 = V_2;
		float L_19 = V_3;
		float L_20 = V_4;
		float L_21 = V_5;
		float L_22 = V_6;
		float L_23 = V_7;
		float L_24 = V_8;
		float L_25 = V_9;
		float L_26 = V_10;
		float L_27 = V_11;
		float L_28 = V_12;
		float L_29 = V_13;
		float L_30 = V_14;
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Matrix4x4__ctor_m4044D15D7E84A1D30E038A963DF0FB0EB6736C1D((&L_31), L_0, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, L_25, L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		return L_31;
	}
}
// System.Void Luban.ByteBuf::SkipBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_SkipBytes_mDCEFB4E14BC9F5FDD3BE26FD4023DE5B2F733DE9 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int n = ReadSize();
		int32_t L_0;
		L_0 = ByteBuf_ReadSize_m1D8B3F112DFB0777FA8AC1DF37047B804EB4DB4E(__this, NULL);
		V_0 = L_0;
		// EnsureRead(n);
		int32_t L_1 = V_0;
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, L_1, NULL);
		// ReaderIndex += n;
		int32_t L_2;
		L_2 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_3 = V_0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_2, L_3)), NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::WriteByteBufWithSize(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteByteBufWithSize_m932285C858D510BAEE6D2D33AFD5075E392306B0 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0_o, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int n = o.Size;
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_0 = ___0_o;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ByteBuf_get_Size_m2762E14DC0E559382FFB8E4CE913372E7B2C9C34(L_0, NULL);
		V_0 = L_1;
		// if (n > 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		// WriteSize(n);
		int32_t L_3 = V_0;
		ByteBuf_WriteSize_mB73B10D1184B173C815639017E63257DEB818F2B(__this, L_3, NULL);
		// WriteBytesWithoutSize(o.Bytes, o.ReaderIndex, n);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_4 = ___0_o;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(L_4, NULL);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_6 = ___0_o;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(L_6, NULL);
		int32_t L_8 = V_0;
		ByteBuf_WriteBytesWithoutSize_m1F637E0CE128672A74B3E51F0337593ECC268AB6(__this, L_5, L_7, L_8, NULL);
		return;
	}

IL_0026:
	{
		// WriteByte(0);
		ByteBuf_WriteByte_mF987F7CFA4070BDF58D049929D1B6142424ADA89(__this, (uint8_t)0, NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::WriteByteBufWithoutSize(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteByteBufWithoutSize_mC20A16A70D4F9B82668873DE06DCF5BAB30BF471 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0_o, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int n = o.Size;
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_0 = ___0_o;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ByteBuf_get_Size_m2762E14DC0E559382FFB8E4CE913372E7B2C9C34(L_0, NULL);
		V_0 = L_1;
		// if (n > 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// WriteBytesWithoutSize(o.Bytes, o.ReaderIndex, n);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_3 = ___0_o;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(L_3, NULL);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_5 = ___0_o;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(L_5, NULL);
		int32_t L_7 = V_0;
		ByteBuf_WriteBytesWithoutSize_m1F637E0CE128672A74B3E51F0337593ECC268AB6(__this, L_4, L_6, L_7, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Boolean Luban.ByteBuf::TryReadByte(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteBuf_TryReadByte_m7C580B18151593424315CCEB9E7D7A02CFD3A14B (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, uint8_t* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (CanRead(1))
		bool L_0;
		L_0 = ByteBuf_CanRead_m4EF6108564C0B638CFE7F9D1DC5BEEE5736E5929_inline(__this, 1, NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// x = Bytes[ReaderIndex++];
		uint8_t* L_1 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_3;
		L_3 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		*((int8_t*)L_1) = (int8_t)L_7;
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// x = 0;
		uint8_t* L_8 = ___0_x;
		*((int8_t*)L_8) = (int8_t)0;
		// return false;
		return (bool)0;
	}
}
// Luban.EDeserializeError Luban.ByteBuf::TryDeserializeInplaceByteBuf(System.Int32,Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_TryDeserializeInplaceByteBuf_mB8D99B8FE3D173C1F0E262AAE1C9739C54B22755 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_maxSize, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___1_inplaceTempBody, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int oldReadIndex = ReaderIndex;
		int32_t L_0;
		L_0 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		V_0 = L_0;
		// bool commit = false;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_017e:
			{// begin finally (depth: 1)
				{
					// if (!commit)
					bool L_1 = V_1;
					if (L_1)
					{
						goto IL_0188;
					}
				}
				{
					// ReaderIndex = oldReadIndex;
					int32_t L_2 = V_0;
					ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, L_2, NULL);
				}

IL_0188:
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// int h = Bytes[ReaderIndex];
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
				L_3 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
				int32_t L_4;
				L_4 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				NullCheck(L_3);
				int32_t L_5 = L_4;
				uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
				V_3 = L_6;
				// if (h < 0x80)
				int32_t L_7 = V_3;
				if ((((int32_t)L_7) >= ((int32_t)((int32_t)128))))
				{
					goto IL_0038_1;
				}
			}
			{
				// ReaderIndex++;
				int32_t L_8;
				L_8 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				V_5 = L_8;
				int32_t L_9 = V_5;
				ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
				// n = h;
				int32_t L_10 = V_3;
				V_2 = L_10;
				goto IL_0139_1;
			}

IL_0038_1:
			{
				// else if (h < 0xc0)
				int32_t L_11 = V_3;
				if ((((int32_t)L_11) >= ((int32_t)((int32_t)192))))
				{
					goto IL_007b_1;
				}
			}
			{
				// if (!CanRead(2)) { return EDeserializeError.NOT_ENOUGH; }
				bool L_12;
				L_12 = ByteBuf_CanRead_m4EF6108564C0B638CFE7F9D1DC5BEEE5736E5929_inline(__this, 2, NULL);
				if (L_12)
				{
					goto IL_0051_1;
				}
			}
			{
				// if (!CanRead(2)) { return EDeserializeError.NOT_ENOUGH; }
				V_6 = 1;
				goto IL_018b;
			}

IL_0051_1:
			{
				// n = ((h & 0x3f) << 8) | Bytes[ReaderIndex + 1];
				int32_t L_13 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
				L_14 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
				int32_t L_15;
				L_15 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				NullCheck(L_14);
				int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
				uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
				V_2 = ((int32_t)(((int32_t)(((int32_t)(L_13&((int32_t)63)))<<8))|(int32_t)L_17));
				// ReaderIndex += 2;
				int32_t L_18;
				L_18 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_18, 2)), NULL);
				goto IL_0139_1;
			}

IL_007b_1:
			{
				// else if (h < 0xe0)
				int32_t L_19 = V_3;
				if ((((int32_t)L_19) >= ((int32_t)((int32_t)224))))
				{
					goto IL_00ce_1;
				}
			}
			{
				// if (!CanRead(3)) { return EDeserializeError.NOT_ENOUGH; }
				bool L_20;
				L_20 = ByteBuf_CanRead_m4EF6108564C0B638CFE7F9D1DC5BEEE5736E5929_inline(__this, 3, NULL);
				if (L_20)
				{
					goto IL_0094_1;
				}
			}
			{
				// if (!CanRead(3)) { return EDeserializeError.NOT_ENOUGH; }
				V_6 = 1;
				goto IL_018b;
			}

IL_0094_1:
			{
				// n = ((h & 0x1f) << 16) | (Bytes[ReaderIndex + 1] << 8) | Bytes[ReaderIndex + 2];
				int32_t L_21 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
				L_22 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
				int32_t L_23;
				L_23 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				NullCheck(L_22);
				int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
				uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
				L_26 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
				int32_t L_27;
				L_27 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				NullCheck(L_26);
				int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 2));
				uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
				V_2 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_21&((int32_t)31)))<<((int32_t)16)))|((int32_t)((int32_t)L_25<<8))))|(int32_t)L_29));
				// ReaderIndex += 3;
				int32_t L_30;
				L_30 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_30, 3)), NULL);
				goto IL_0139_1;
			}

IL_00ce_1:
			{
				// else if (h < 0xf0)
				int32_t L_31 = V_3;
				if ((((int32_t)L_31) >= ((int32_t)((int32_t)240))))
				{
					goto IL_0134_1;
				}
			}
			{
				// if (!CanRead(4)) { return EDeserializeError.NOT_ENOUGH; }
				bool L_32;
				L_32 = ByteBuf_CanRead_m4EF6108564C0B638CFE7F9D1DC5BEEE5736E5929_inline(__this, 4, NULL);
				if (L_32)
				{
					goto IL_00e7_1;
				}
			}
			{
				// if (!CanRead(4)) { return EDeserializeError.NOT_ENOUGH; }
				V_6 = 1;
				goto IL_018b;
			}

IL_00e7_1:
			{
				// n = ((h & 0x0f) << 24) | (Bytes[ReaderIndex + 1] << 16) | (Bytes[ReaderIndex + 2] << 8) | Bytes[ReaderIndex + 3];
				int32_t L_33 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
				L_34 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
				int32_t L_35;
				L_35 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				NullCheck(L_34);
				int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 1));
				uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
				L_38 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
				int32_t L_39;
				L_39 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				NullCheck(L_38);
				int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 2));
				uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
				L_42 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
				int32_t L_43;
				L_43 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				NullCheck(L_42);
				int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 3));
				uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
				V_2 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_33&((int32_t)15)))<<((int32_t)24)))|((int32_t)((int32_t)L_37<<((int32_t)16)))))|((int32_t)((int32_t)L_41<<8))))|(int32_t)L_45));
				// ReaderIndex += 4;
				int32_t L_46;
				L_46 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_46, 4)), NULL);
				goto IL_0139_1;
			}

IL_0134_1:
			{
				// return EDeserializeError.EXCEED_SIZE;
				V_6 = 2;
				goto IL_018b;
			}

IL_0139_1:
			{
				// if (n > maxSize)
				int32_t L_47 = V_2;
				int32_t L_48 = ___0_maxSize;
				if ((((int32_t)L_47) <= ((int32_t)L_48)))
				{
					goto IL_0142_1;
				}
			}
			{
				// return EDeserializeError.EXCEED_SIZE;
				V_6 = 2;
				goto IL_018b;
			}

IL_0142_1:
			{
				// if (Remaining < n)
				int32_t L_49;
				L_49 = ByteBuf_get_Remaining_m0D7CDB0B9FFCA68E7D21039C006F3894CF1F1500(__this, NULL);
				int32_t L_50 = V_2;
				if ((((int32_t)L_49) >= ((int32_t)L_50)))
				{
					goto IL_0150_1;
				}
			}
			{
				// return EDeserializeError.NOT_ENOUGH;
				V_6 = 1;
				goto IL_018b;
			}

IL_0150_1:
			{
				// int inplaceReadIndex = ReaderIndex;
				int32_t L_51;
				L_51 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				V_4 = L_51;
				// ReaderIndex += n;
				int32_t L_52;
				L_52 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				int32_t L_53 = V_2;
				ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_52, L_53)), NULL);
				// inplaceTempBody.Replace(Bytes, inplaceReadIndex, ReaderIndex);
				ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_54 = ___1_inplaceTempBody;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55;
				L_55 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
				int32_t L_56 = V_4;
				int32_t L_57;
				L_57 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
				NullCheck(L_54);
				ByteBuf_Replace_mE84901C7F342BF841288AA61C6542147501D715B(L_54, L_55, L_56, L_57, NULL);
				// commit = true;
				V_1 = (bool)1;
				// }
				goto IL_0189;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0189:
	{
		// return EDeserializeError.OK;
		return (int32_t)(0);
	}

IL_018b:
	{
		// }
		int32_t L_58 = V_6;
		return L_58;
	}
}
// System.Void Luban.ByteBuf::WriteRawTag(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteRawTag_mEBA181BC9F1D6EA573EB9E845965828EEADDDE7A (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, uint8_t ___0_b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// EnsureWrite(1);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 1, NULL);
		// Bytes[WriterIndex++] = b1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		int32_t L_3 = V_0;
		uint8_t L_4 = ___0_b1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::WriteRawTag(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteRawTag_m6EFFBEA12571C94D0D9E7DF404A0D21BBFFE5126 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, uint8_t ___0_b1, uint8_t ___1_b2, const RuntimeMethod* method) 
{
	{
		// EnsureWrite(2);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 2, NULL);
		// Bytes[WriterIndex] = b1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint8_t L_2 = ___0_b1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_2);
		// Bytes[WriterIndex + 1] = b2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_4;
		L_4 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint8_t L_5 = ___1_b2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)L_5);
		// WriterIndex += 2;
		int32_t L_6;
		L_6 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_6, 2)), NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::WriteRawTag(System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_WriteRawTag_mFD815D67C545C444C14FC7ADDDBCD8FAADC62019 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, uint8_t ___0_b1, uint8_t ___1_b2, uint8_t ___2_b3, const RuntimeMethod* method) 
{
	{
		// EnsureWrite(3);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 3, NULL);
		// Bytes[WriterIndex] = b1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint8_t L_2 = ___0_b1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_2);
		// Bytes[WriterIndex + 1] = b2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_4;
		L_4 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint8_t L_5 = ___1_b2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)L_5);
		// Bytes[WriterIndex + 2] = b3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_7;
		L_7 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		uint8_t L_8 = ___2_b3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)L_8);
		// WriterIndex += 3;
		int32_t L_9;
		L_9 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_9, 3)), NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::BeginWriteSegment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_BeginWriteSegment_m4CE91668B4A666E91B447E039784DF9F8788A2B2 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t* ___0_oldSize, const RuntimeMethod* method) 
{
	{
		// oldSize = Size;
		int32_t* L_0 = ___0_oldSize;
		int32_t L_1;
		L_1 = ByteBuf_get_Size_m2762E14DC0E559382FFB8E4CE913372E7B2C9C34(__this, NULL);
		*((int32_t*)L_0) = (int32_t)L_1;
		// EnsureWrite(1);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 1, NULL);
		// WriterIndex += 1;
		int32_t L_2;
		L_2 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::EndWriteSegment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_EndWriteSegment_mE7E9D7FE656D837EDA0913C70F5A461CF9E1D1D4 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_oldSize, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int startPos = ReaderIndex + oldSize;
		int32_t L_0;
		L_0 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_1 = ___0_oldSize;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// int segmentSize = WriterIndex - startPos - 1;
		int32_t L_2;
		L_2 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_2, L_3)), 1));
		// if (segmentSize < 0x80)
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0027;
		}
	}
	{
		// Bytes[startPos] = (byte)segmentSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((int32_t)(uint8_t)L_7));
		return;
	}

IL_0027:
	{
		// else if (segmentSize < 0x4000) // 10 11 1111, -
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)16384))))
		{
			goto IL_007a;
		}
	}
	{
		// EnsureWrite(1);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 1, NULL);
		// Bytes[WriterIndex] = Bytes[startPos + 1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_10;
		L_10 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)L_14);
		// Bytes[startPos + 1] = (byte)segmentSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, 1))), (uint8_t)((int32_t)(uint8_t)L_17));
		// Bytes[startPos] = (byte)((segmentSize >> 8) | 0x80);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_20>>8))|((int32_t)128)))));
		// WriterIndex += 1;
		int32_t L_21;
		L_21 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, 1)), NULL);
		return;
	}

IL_007a:
	{
		// else if (segmentSize < 0x200000) // 110 1 1111, -,-
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)2097152))))
		{
			goto IL_00f5;
		}
	}
	{
		// EnsureWrite(2);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 2, NULL);
		// Bytes[WriterIndex + 1] = Bytes[startPos + 2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_24;
		L_24 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 2));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 1))), (uint8_t)L_28);
		// Bytes[startPos + 2] = (byte)segmentSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_30, 2))), (uint8_t)((int32_t)(uint8_t)L_31));
		// Bytes[WriterIndex] = Bytes[startPos + 1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_33;
		L_33 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)L_37);
		// Bytes[startPos + 1] = (byte)(segmentSize >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_39 = V_0;
		int32_t L_40 = V_1;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_39, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_40>>8))));
		// Bytes[startPos] = (byte)((segmentSize >> 16) | 0xc0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_42 = V_0;
		int32_t L_43 = V_1;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_43>>((int32_t)16)))|((int32_t)192)))));
		// WriterIndex += 2;
		int32_t L_44;
		L_44 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_44, 2)), NULL);
		return;
	}

IL_00f5:
	{
		// else if (segmentSize < 0x10000000) // 1110 1111,-,-,-
		int32_t L_45 = V_1;
		if ((((int32_t)L_45) >= ((int32_t)((int32_t)268435456))))
		{
			goto IL_019b;
		}
	}
	{
		// EnsureWrite(3);
		ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline(__this, 3, NULL);
		// Bytes[WriterIndex + 2] = Bytes[startPos + 3];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_47;
		L_47 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48;
		L_48 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 3));
		uint8_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, 2))), (uint8_t)L_51);
		// Bytes[startPos + 3] = (byte)segmentSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52;
		L_52 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_53, 3))), (uint8_t)((int32_t)(uint8_t)L_54));
		// Bytes[WriterIndex + 1] = Bytes[startPos + 2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55;
		L_55 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_56;
		L_56 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57;
		L_57 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_58 = V_0;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 2));
		uint8_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_56, 1))), (uint8_t)L_60);
		// Bytes[startPos + 2] = (byte)(segmentSize >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61;
		L_61 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_62 = V_0;
		int32_t L_63 = V_1;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_63>>8))));
		// Bytes[WriterIndex] = Bytes[startPos + 1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64;
		L_64 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_65;
		L_65 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66;
		L_66 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_67 = V_0;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		uint8_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (uint8_t)L_69);
		// Bytes[startPos + 1] = (byte)(segmentSize >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70;
		L_70 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_71 = V_0;
		int32_t L_72 = V_1;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_72>>((int32_t)16)))));
		// Bytes[startPos] = (byte)((segmentSize >> 24) | 0xe0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73;
		L_73 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_74 = V_0;
		int32_t L_75 = V_1;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_75>>((int32_t)24)))|((int32_t)224)))));
		// WriterIndex += 3;
		int32_t L_76;
		L_76 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_76, 3)), NULL);
		return;
	}

IL_019b:
	{
		// throw new SerializationException("exceed max segment size");
		SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1* L_77 = (SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1_il2cpp_TypeInfo_var)));
		NullCheck(L_77);
		SerializationException__ctor_m1AF2D3B502713ADE7B0AE33BA6CBEBB610934270(L_77, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0D901F727BD6661E6CE5949BC2FE44C0D044F69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteBuf_EndWriteSegment_mE7E9D7FE656D837EDA0913C70F5A461CF9E1D1D4_RuntimeMethod_var)));
	}
}
// System.Void Luban.ByteBuf::ReadSegment(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_ReadSegment_m25B51E3F3058493453C8F5AAEDF8FFA9CA6E0443 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t* ___0_startIndex, int32_t* ___1_segmentSize, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// EnsureRead(1);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 1, NULL);
		// int h = Bytes[ReaderIndex++];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		int32_t L_3 = V_1;
		NullCheck(L_0);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// startIndex = ReaderIndex;
		int32_t* L_6 = ___0_startIndex;
		int32_t L_7;
		L_7 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		*((int32_t*)L_6) = (int32_t)L_7;
		// if (h < 0x80)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0047;
		}
	}
	{
		// segmentSize = h;
		int32_t* L_9 = ___1_segmentSize;
		int32_t L_10 = V_0;
		*((int32_t*)L_9) = (int32_t)L_10;
		// ReaderIndex += segmentSize;
		int32_t L_11;
		L_11 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t* L_12 = ___1_segmentSize;
		int32_t L_13 = *((int32_t*)L_12);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_11, L_13)), NULL);
		goto IL_01e8;
	}

IL_0047:
	{
		// else if (h < 0xc0)
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)192))))
		{
			goto IL_00a1;
		}
	}
	{
		// EnsureRead(1);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 1, NULL);
		// segmentSize = ((h & 0x3f) << 8) | Bytes[ReaderIndex];
		int32_t* L_15 = ___1_segmentSize;
		int32_t L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_18;
		L_18 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		*((int32_t*)L_15) = (int32_t)((int32_t)(((int32_t)(((int32_t)(L_16&((int32_t)63)))<<8))|(int32_t)L_20));
		// int endPos = ReaderIndex + segmentSize;
		int32_t L_21;
		L_21 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t* L_22 = ___1_segmentSize;
		int32_t L_23 = *((int32_t*)L_22);
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, L_23));
		// Bytes[ReaderIndex] = Bytes[endPos];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_25;
		L_25 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)L_29);
		// ReaderIndex += segmentSize + 1;
		int32_t L_30;
		L_30 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t* L_31 = ___1_segmentSize;
		int32_t L_32 = *((int32_t*)L_31);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_30, ((int32_t)il2cpp_codegen_add(L_32, 1)))), NULL);
		goto IL_01e8;
	}

IL_00a1:
	{
		// else if (h < 0xe0)
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) >= ((int32_t)((int32_t)224))))
		{
			goto IL_0127;
		}
	}
	{
		// EnsureRead(2);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 2, NULL);
		// segmentSize = ((h & 0x1f) << 16) | ((int)Bytes[ReaderIndex] << 8) | Bytes[ReaderIndex + 1];
		int32_t* L_34 = ___1_segmentSize;
		int32_t L_35 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_37;
		L_37 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_36);
		int32_t L_38 = L_37;
		uint8_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_41;
		L_41 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		uint8_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		*((int32_t*)L_34) = (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_35&((int32_t)31)))<<((int32_t)16)))|((int32_t)((int32_t)L_39<<8))))|(int32_t)L_43));
		// int endPos = ReaderIndex + segmentSize;
		int32_t L_44;
		L_44 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t* L_45 = ___1_segmentSize;
		int32_t L_46 = *((int32_t*)L_45);
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, L_46));
		// Bytes[ReaderIndex] = Bytes[endPos];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47;
		L_47 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_48;
		L_48 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49;
		L_49 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_50 = V_3;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (uint8_t)L_52);
		// Bytes[ReaderIndex + 1] = Bytes[endPos + 1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53;
		L_53 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_54;
		L_54 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55;
		L_55 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_56 = V_3;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		uint8_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_54, 1))), (uint8_t)L_58);
		// ReaderIndex += segmentSize + 2;
		int32_t L_59;
		L_59 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t* L_60 = ___1_segmentSize;
		int32_t L_61 = *((int32_t*)L_60);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_59, ((int32_t)il2cpp_codegen_add(L_61, 2)))), NULL);
		goto IL_01e8;
	}

IL_0127:
	{
		// else if (h < 0xf0)
		int32_t L_62 = V_0;
		if ((((int32_t)L_62) >= ((int32_t)((int32_t)240))))
		{
			goto IL_01dd;
		}
	}
	{
		// EnsureRead(3);
		ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline(__this, 3, NULL);
		// segmentSize = ((h & 0x0f) << 24) | ((int)Bytes[ReaderIndex] << 16) | ((int)Bytes[ReaderIndex + 1] << 8) | Bytes[ReaderIndex + 2];
		int32_t* L_63 = ___1_segmentSize;
		int32_t L_64 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65;
		L_65 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_66;
		L_66 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_65);
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69;
		L_69 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_70;
		L_70 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		uint8_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73;
		L_73 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_74;
		L_74 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 2));
		uint8_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		*((int32_t*)L_63) = (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_64&((int32_t)15)))<<((int32_t)24)))|((int32_t)((int32_t)L_68<<((int32_t)16)))))|((int32_t)((int32_t)L_72<<8))))|(int32_t)L_76));
		// int endPos = ReaderIndex + segmentSize;
		int32_t L_77;
		L_77 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t* L_78 = ___1_segmentSize;
		int32_t L_79 = *((int32_t*)L_78);
		V_4 = ((int32_t)il2cpp_codegen_add(L_77, L_79));
		// Bytes[ReaderIndex] = Bytes[endPos];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80;
		L_80 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_81;
		L_81 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82;
		L_82 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_83 = V_4;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint8_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint8_t)L_85);
		// Bytes[ReaderIndex + 1] = Bytes[endPos + 1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86;
		L_86 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_87;
		L_87 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88;
		L_88 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_89 = V_4;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_87, 1))), (uint8_t)L_91);
		// Bytes[ReaderIndex + 2] = Bytes[endPos + 2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92;
		L_92 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_93;
		L_93 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94;
		L_94 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_95 = V_4;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 2));
		uint8_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 2))), (uint8_t)L_97);
		// ReaderIndex += segmentSize + 3;
		int32_t L_98;
		L_98 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t* L_99 = ___1_segmentSize;
		int32_t L_100 = *((int32_t*)L_99);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, ((int32_t)il2cpp_codegen_add(L_98, ((int32_t)il2cpp_codegen_add(L_100, 3)))), NULL);
		goto IL_01e8;
	}

IL_01dd:
	{
		// throw new SerializationException("exceed max size");
		SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1* L_101 = (SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1_il2cpp_TypeInfo_var)));
		NullCheck(L_101);
		SerializationException__ctor_m1AF2D3B502713ADE7B0AE33BA6CBEBB610934270(L_101, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F6E244647F2520E2D4F567B798C3A7A0A2A4C92)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_101, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteBuf_ReadSegment_m25B51E3F3058493453C8F5AAEDF8FFA9CA6E0443_RuntimeMethod_var)));
	}

IL_01e8:
	{
		// if (ReaderIndex > WriterIndex)
		int32_t L_102;
		L_102 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_103;
		L_103 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		if ((((int32_t)L_102) <= ((int32_t)L_103)))
		{
			goto IL_0201;
		}
	}
	{
		// throw new SerializationException("segment data not enough");
		SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1* L_104 = (SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1_il2cpp_TypeInfo_var)));
		NullCheck(L_104);
		SerializationException__ctor_m1AF2D3B502713ADE7B0AE33BA6CBEBB610934270(L_104, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD4918AB6569CD01DAC5F3AC589E92903DFC2930D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_104, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteBuf_ReadSegment_m25B51E3F3058493453C8F5AAEDF8FFA9CA6E0443_RuntimeMethod_var)));
	}

IL_0201:
	{
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::ReadSegment(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_ReadSegment_mEA0A74D80A1D958663C3F71DFC6AC10178EF0EDC (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0_buf, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ReadSegment(out int startPos, out var size);
		ByteBuf_ReadSegment_m25B51E3F3058493453C8F5AAEDF8FFA9CA6E0443(__this, (&V_0), (&V_1), NULL);
		// buf.Bytes = Bytes;
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_0 = ___0_buf;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		NullCheck(L_0);
		ByteBuf_set_Bytes_m64361BB03D153DEAF186DF5F93B95D7B8B6FDF22_inline(L_0, L_1, NULL);
		// buf.ReaderIndex = startPos;
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_2 = ___0_buf;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(L_2, L_3, NULL);
		// buf.WriterIndex = startPos + size;
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_4 = ___0_buf;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::EnterSegment(Luban.SegmentSaveState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_EnterSegment_m77A5B5B401DDBAF97A6B0DFA0D3AD862B5BDBF40 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* ___0_saveState, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ReadSegment(out int startPos, out int size);
		ByteBuf_ReadSegment_m25B51E3F3058493453C8F5AAEDF8FFA9CA6E0443(__this, (&V_0), (&V_1), NULL);
		// saveState = new SegmentSaveState(ReaderIndex, WriterIndex);
		SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* L_0 = ___0_saveState;
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_2;
		L_2 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C L_3;
		memset((&L_3), 0, sizeof(L_3));
		SegmentSaveState__ctor_m64429FDEFC71B56FEDD506E0112936BB570C3B1F((&L_3), L_1, L_2, /*hidden argument*/NULL);
		*(SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C*)L_0 = L_3;
		// ReaderIndex = startPos;
		int32_t L_4 = V_0;
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, L_4, NULL);
		// WriterIndex = startPos + size;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, ((int32_t)il2cpp_codegen_add(L_5, L_6)), NULL);
		// }
		return;
	}
}
// System.Void Luban.ByteBuf::LeaveSegment(Luban.SegmentSaveState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_LeaveSegment_m58B425A1A9AB0BBECA3960499DF50197D5E4BB03 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C ___0_saveState, const RuntimeMethod* method) 
{
	{
		// ReaderIndex = saveState.ReaderIndex;
		int32_t L_0;
		L_0 = SegmentSaveState_get_ReaderIndex_m4DB708B17D4C9289BC0606F58E7478DBC38F1A9E_inline((&___0_saveState), NULL);
		ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline(__this, L_0, NULL);
		// WriterIndex = saveState.WriterIndex;
		int32_t L_1;
		L_1 = SegmentSaveState_get_WriterIndex_mC5ACABABC5C3BD0E47A6B12DDB2FF467FDC881B8_inline((&___0_saveState), NULL);
		ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.String Luban.ByteBuf::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ByteBuf_ToString_m905AC457BAF95CCE39459CAF7D345763BEBB6A93 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string[] datas = new string[WriterIndex - ReaderIndex];
		int32_t L_0;
		L_0 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_1;
		L_1 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1)));
		V_0 = L_2;
		// for (var i = ReaderIndex; i < WriterIndex; i++)
		int32_t L_3;
		L_3 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		V_1 = L_3;
		goto IL_0040;
	}

IL_001c:
	{
		// datas[i - ReaderIndex] = Bytes[i].ToString("X2");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6;
		L_6 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_9);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_5, L_6))), (String_t*)L_9);
		// for (var i = ReaderIndex; i < WriterIndex; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		// for (var i = ReaderIndex; i < WriterIndex; i++)
		int32_t L_11 = V_1;
		int32_t L_12;
		L_12 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		// return string.Join(".", datas);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
		String_t* L_14;
		L_14 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_13, NULL);
		return L_14;
	}
}
// System.Boolean Luban.ByteBuf::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteBuf_Equals_mC7FB51846D257438D1F4A0314B95862787C72225 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* V_0 = NULL;
	{
		// return (obj is ByteBuf other) && Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B*)IsInstSealed((RuntimeObject*)L_0, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var));
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_2 = V_0;
		bool L_3;
		L_3 = ByteBuf_Equals_m5FCA14CDF36F15359583C9E4F11C08877BC9CB13(__this, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean Luban.ByteBuf::Equals(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteBuf_Equals_m5FCA14CDF36F15359583C9E4F11C08877BC9CB13 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (other == null)
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (Size != other.Size)
		int32_t L_1;
		L_1 = ByteBuf_get_Size_m2762E14DC0E559382FFB8E4CE913372E7B2C9C34(__this, NULL);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ByteBuf_get_Size_m2762E14DC0E559382FFB8E4CE913372E7B2C9C34(L_2, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// for (int i = 0, n = Size; i < n; i++)
		V_0 = 0;
		// for (int i = 0, n = Size; i < n; i++)
		int32_t L_4;
		L_4 = ByteBuf_get_Size_m2762E14DC0E559382FFB8E4CE913372E7B2C9C34(__this, NULL);
		V_1 = L_4;
		goto IL_0046;
	}

IL_0020:
	{
		// if (Bytes[ReaderIndex + i] != other.Bytes[other.ReaderIndex + i])
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_6;
		L_6 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_10 = ___0_other;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(L_10, NULL);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_12 = ___0_other;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(L_12, NULL);
		int32_t L_14 = V_0;
		NullCheck(L_11);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		uint8_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((((int32_t)L_9) == ((int32_t)L_16)))
		{
			goto IL_0042;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0042:
	{
		// for (int i = 0, n = Size; i < n; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0046:
	{
		// for (int i = 0, n = Size; i < n; i++)
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0020;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Object Luban.ByteBuf::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteBuf_Clone_m83895F0ADAAAAF51B965075BBAF52A92D85CD32F (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ByteBuf(CopyData());
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ByteBuf_CopyData_mBC814D88C5944D7A89098D3690537577CD6DF165(__this, NULL);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_1 = (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B*)il2cpp_codegen_object_new(ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ByteBuf__ctor_mA588D29C106F02C2551D6BB28C41AD3F3C551E16(L_1, L_0, NULL);
		return L_1;
	}
}
// Luban.ByteBuf Luban.ByteBuf::FromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ByteBuf_FromString_m5ED960A3AB45562307BBE5B47E77EE65211C6560 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var ss = value.Split(',');
		String_t* L_0 = ___0_value;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)44), 0, NULL);
		V_0 = L_1;
		// byte[] data = new byte[ss.Length];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		// for (int i = 0; i < data.Length; i++)
		V_2 = 0;
		goto IL_0026;
	}

IL_0017:
	{
		// data[i] = byte.Parse(ss[i]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		int32_t L_5 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		uint8_t L_10;
		L_10 = Byte_Parse_m9ECDF4D955A0A3C47392308CF9DBD50CDFE4F417(L_9, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)L_10);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_12 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// return new ByteBuf(data);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_15 = (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B*)il2cpp_codegen_object_new(ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ByteBuf__ctor_mA588D29C106F02C2551D6BB28C41AD3F3C551E16(L_15, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Luban.ByteBuf::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteBuf_GetHashCode_mB8812E741CA9C46DCBAF64DB3A46C9BB707B16A2 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hash = 17;
		V_0 = ((int32_t)17);
		// for (int i = ReaderIndex; i < WriterIndex; i++)
		int32_t L_0;
		L_0 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		V_1 = L_0;
		goto IL_001e;
	}

IL_000c:
	{
		// hash = hash * 23 + Bytes[i];
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline(__this, NULL);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)23))), (int32_t)L_5));
		// for (int i = ReaderIndex; i < WriterIndex; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for (int i = ReaderIndex; i < WriterIndex; i++)
		int32_t L_7 = V_1;
		int32_t L_8;
		L_8 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		// return hash;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void Luban.ByteBuf::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBuf_Release_mDB2D868D2BEABC01C65887F822B9BD5EBA688350 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	Action_1_t281B585597EADCE2ABDED071861F517C70F63102* G_B2_0 = NULL;
	Action_1_t281B585597EADCE2ABDED071861F517C70F63102* G_B1_0 = NULL;
	{
		// _releaser?.Invoke(this);
		Action_1_t281B585597EADCE2ABDED071861F517C70F63102* L_0 = __this->____releaser_2;
		Action_1_t281B585597EADCE2ABDED071861F517C70F63102* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_m02D42B2F2C80E828DFF16A33C61157E9208EAC73_inline(G_B2_0, __this, NULL);
		// }
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
// System.String Luban.StringUtil::ToStr(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtil_ToStr_m8499562E44D3AD2BCAFD45A38A5BB91554C2D279 (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ToStr(o, new StringBuilder());
		RuntimeObject* L_0 = ___0_o;
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		String_t* L_2;
		L_2 = StringUtil_ToStr_m41BEBC11D58F320A2F1970607F5DC513B1759374(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String Luban.StringUtil::ToStr(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtil_ToStr_m41BEBC11D58F320A2F1970607F5DC513B1759374 (RuntimeObject* ___0_o, StringBuilder_t* ___1_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84EB7C8735C3D4B90710CDE305A398AD9236D507);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_0 = NULL;
	int32_t V_1 = 0;
	FieldInfo_t* V_2 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_3 = NULL;
	PropertyInfo_t* V_4 = NULL;
	{
		// foreach (var p in o.GetType().GetFields())
		RuntimeObject* L_0 = ___0_o;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		NullCheck(L_1);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_2;
		L_2 = Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F(L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0036;
	}

IL_0010:
	{
		// foreach (var p in o.GetType().GetFields())
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		FieldInfo_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// sb.Append($"{p.Name} = {p.GetValue(o)},");
		StringBuilder_t* L_7 = ___1_sb;
		FieldInfo_t* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		FieldInfo_t* L_10 = V_2;
		RuntimeObject* L_11 = ___0_o;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(48 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_10, L_11);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral84EB7C8735C3D4B90710CDE305A398AD9236D507, L_9, L_12, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, L_13, NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0036:
	{
		// foreach (var p in o.GetType().GetFields())
		int32_t L_16 = V_1;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// foreach (var p in o.GetType().GetProperties())
		RuntimeObject* L_18 = ___0_o;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_18, NULL);
		NullCheck(L_19);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_20;
		L_20 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_19, NULL);
		V_3 = L_20;
		V_1 = 0;
		goto IL_0075;
	}

IL_004c:
	{
		// foreach (var p in o.GetType().GetProperties())
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_21 = V_3;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		PropertyInfo_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_4 = L_24;
		// sb.Append($"{p.Name} = {p.GetValue(o)},");
		StringBuilder_t* L_25 = ___1_sb;
		PropertyInfo_t* L_26 = V_4;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Reflection.MemberInfo::get_Name() */, L_26);
		PropertyInfo_t* L_28 = V_4;
		RuntimeObject* L_29 = ___0_o;
		NullCheck(L_28);
		RuntimeObject* L_30;
		L_30 = PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088(L_28, L_29, NULL);
		String_t* L_31;
		L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral84EB7C8735C3D4B90710CDE305A398AD9236D507, L_27, L_30, NULL);
		NullCheck(L_25);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, L_31, NULL);
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0075:
	{
		// foreach (var p in o.GetType().GetProperties())
		int32_t L_34 = V_1;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_35 = V_3;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_004c;
		}
	}
	{
		// return sb.ToString();
		StringBuilder_t* L_36 = ___1_sb;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		return L_37;
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
// System.Void GameConfig.Item::.ctor(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m5E32A98E21253F28586984D687ED47305D5D2995 (Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* __this, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0__buf, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m51DF29B02C96994ADD230FFC0F82123ED27E2BE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m01B2A1663D19BEA69C0B628C810A729B2E37AFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* V_2 = NULL;
	{
		// public Item(ByteBuf _buf)
		BeanBase__ctor_mD176CC671940DD678DC8C04DB65020560E32A8C8(__this, NULL);
		// Id = _buf.ReadInt();
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_0 = ___0__buf;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ByteBuf_ReadInt_m73F64A02434B047BF3C5322BD83E94CC769E3532_inline(L_0, NULL);
		__this->___Id_0 = L_1;
		// Name = _buf.ReadString();
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_2 = ___0__buf;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ByteBuf_ReadString_mFBDD78B0ED139BA6221B4096D05A0D70F1804261(L_2, NULL);
		__this->___Name_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_1), (void*)L_3);
		// Desc = _buf.ReadString();
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_4 = ___0__buf;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ByteBuf_ReadString_mFBDD78B0ED139BA6221B4096D05A0D70F1804261(L_4, NULL);
		__this->___Desc_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Desc_2), (void*)L_5);
		// Price = _buf.ReadInt();
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_6 = ___0__buf;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ByteBuf_ReadInt_m73F64A02434B047BF3C5322BD83E94CC769E3532_inline(L_6, NULL);
		__this->___Price_3 = L_7;
		// UpgradeToItemId = _buf.ReadInt();
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_8 = ___0__buf;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ByteBuf_ReadInt_m73F64A02434B047BF3C5322BD83E94CC769E3532_inline(L_8, NULL);
		__this->___UpgradeToItemId_4 = L_9;
		// UpgradeToItemId_Ref = null;
		__this->___UpgradeToItemId_Ref_5 = (Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UpgradeToItemId_Ref_5), (void*)(Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C*)NULL);
		// if(_buf.ReadBool()){ ExpireTime = _buf.ReadLong(); } else { ExpireTime = null; }
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_10 = ___0__buf;
		NullCheck(L_10);
		bool L_11;
		L_11 = ByteBuf_ReadBool_mCF7B03484DF5B7840977619107C04B1FBF758C2D(L_10, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if(_buf.ReadBool()){ ExpireTime = _buf.ReadLong(); } else { ExpireTime = null; }
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_12 = ___0__buf;
		NullCheck(L_12);
		int64_t L_13;
		L_13 = ByteBuf_ReadLong_mA51C1BF9F4A6C6F6AA5B6B5AACFD75A86E1F563C(L_12, NULL);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_14), L_13, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		__this->___ExpireTime_6 = L_14;
		goto IL_0070;
	}

IL_0064:
	{
		// if(_buf.ReadBool()){ ExpireTime = _buf.ReadLong(); } else { ExpireTime = null; }
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_15 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___ExpireTime_6);
		il2cpp_codegen_initobj(L_15, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
	}

IL_0070:
	{
		// BatchUseable = _buf.ReadBool();
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_16 = ___0__buf;
		NullCheck(L_16);
		bool L_17;
		L_17 = ByteBuf_ReadBool_mCF7B03484DF5B7840977619107C04B1FBF758C2D(L_16, NULL);
		__this->___BatchUseable_7 = L_17;
		// ExchangeStream = item.ItemExchange.DeserializeItemExchange(_buf);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_18 = ___0__buf;
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_19;
		L_19 = ItemExchange_DeserializeItemExchange_m79DBB0E67570CD5057702D8E0F10B2DEC0584BB3(L_18, NULL);
		__this->___ExchangeStream_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ExchangeStream_8), (void*)L_19);
		// {int n0 = System.Math.Min(_buf.ReadSize(), _buf.Size);ExchangeList = new System.Collections.Generic.List<item.ItemExchange>(n0);for(var i0 = 0 ; i0 < n0 ; i0++) { item.ItemExchange _e0;  _e0 = item.ItemExchange.DeserializeItemExchange(_buf); ExchangeList.Add(_e0);}}
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_20 = ___0__buf;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = ByteBuf_ReadSize_m1D8B3F112DFB0777FA8AC1DF37047B804EB4DB4E(L_20, NULL);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_22 = ___0__buf;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = ByteBuf_get_Size_m2762E14DC0E559382FFB8E4CE913372E7B2C9C34(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_21, L_23, NULL);
		V_0 = L_24;
		// {int n0 = System.Math.Min(_buf.ReadSize(), _buf.Size);ExchangeList = new System.Collections.Generic.List<item.ItemExchange>(n0);for(var i0 = 0 ; i0 < n0 ; i0++) { item.ItemExchange _e0;  _e0 = item.ItemExchange.DeserializeItemExchange(_buf); ExchangeList.Add(_e0);}}
		int32_t L_25 = V_0;
		List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C* L_26 = (List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C*)il2cpp_codegen_object_new(List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		List_1__ctor_m01B2A1663D19BEA69C0B628C810A729B2E37AFAC(L_26, L_25, List_1__ctor_m01B2A1663D19BEA69C0B628C810A729B2E37AFAC_RuntimeMethod_var);
		__this->___ExchangeList_9 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ExchangeList_9), (void*)L_26);
		// {int n0 = System.Math.Min(_buf.ReadSize(), _buf.Size);ExchangeList = new System.Collections.Generic.List<item.ItemExchange>(n0);for(var i0 = 0 ; i0 < n0 ; i0++) { item.ItemExchange _e0;  _e0 = item.ItemExchange.DeserializeItemExchange(_buf); ExchangeList.Add(_e0);}}
		V_1 = 0;
		goto IL_00c1;
	}

IL_00aa:
	{
		// {int n0 = System.Math.Min(_buf.ReadSize(), _buf.Size);ExchangeList = new System.Collections.Generic.List<item.ItemExchange>(n0);for(var i0 = 0 ; i0 < n0 ; i0++) { item.ItemExchange _e0;  _e0 = item.ItemExchange.DeserializeItemExchange(_buf); ExchangeList.Add(_e0);}}
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_27 = ___0__buf;
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_28;
		L_28 = ItemExchange_DeserializeItemExchange_m79DBB0E67570CD5057702D8E0F10B2DEC0584BB3(L_27, NULL);
		V_2 = L_28;
		// {int n0 = System.Math.Min(_buf.ReadSize(), _buf.Size);ExchangeList = new System.Collections.Generic.List<item.ItemExchange>(n0);for(var i0 = 0 ; i0 < n0 ; i0++) { item.ItemExchange _e0;  _e0 = item.ItemExchange.DeserializeItemExchange(_buf); ExchangeList.Add(_e0);}}
		List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C* L_29 = __this->___ExchangeList_9;
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_30 = V_2;
		NullCheck(L_29);
		List_1_Add_m51DF29B02C96994ADD230FFC0F82123ED27E2BE2_inline(L_29, L_30, List_1_Add_m51DF29B02C96994ADD230FFC0F82123ED27E2BE2_RuntimeMethod_var);
		// {int n0 = System.Math.Min(_buf.ReadSize(), _buf.Size);ExchangeList = new System.Collections.Generic.List<item.ItemExchange>(n0);for(var i0 = 0 ; i0 < n0 ; i0++) { item.ItemExchange _e0;  _e0 = item.ItemExchange.DeserializeItemExchange(_buf); ExchangeList.Add(_e0);}}
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00c1:
	{
		// {int n0 = System.Math.Min(_buf.ReadSize(), _buf.Size);ExchangeList = new System.Collections.Generic.List<item.ItemExchange>(n0);for(var i0 = 0 ; i0 < n0 ; i0++) { item.ItemExchange _e0;  _e0 = item.ItemExchange.DeserializeItemExchange(_buf); ExchangeList.Add(_e0);}}
		int32_t L_32 = V_1;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_00aa;
		}
	}
	{
		// ExchangeColumn = item.ItemExchange.DeserializeItemExchange(_buf);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_34 = ___0__buf;
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_35;
		L_35 = ItemExchange_DeserializeItemExchange_m79DBB0E67570CD5057702D8E0F10B2DEC0584BB3(L_34, NULL);
		__this->___ExchangeColumn_10 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ExchangeColumn_10), (void*)L_35);
		// }
		return;
	}
}
// GameConfig.Item GameConfig.Item::DeserializeItem(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* Item_DeserializeItem_m2A44B2D6DD7B6B4F814F7FB4030CC267D8586D13 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0__buf, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Item(_buf);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_0 = ___0__buf;
		Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* L_1 = (Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C*)il2cpp_codegen_object_new(Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Item__ctor_m5E32A98E21253F28586984D687ED47305D5D2995(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Int32 GameConfig.Item::GetTypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Item_GetTypeId_m6DCB59BFA9FF33B97A7AEB26E2A9EF0C482EB411 (Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* __this, const RuntimeMethod* method) 
{
	{
		// public override int GetTypeId() => __ID__;
		return ((int32_t)2289459);
	}
}
// System.Void GameConfig.Item::ResolveRef(GameConfig.Tables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_ResolveRef_m0703F4920CF90F9E62611C08BEAA3CF26EE70855 (Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* __this, Tables_t35773C3103D70358757BC6456666B056781615B7* ___0_tables, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m335568CCD954CF263AA745D7CCC5C0635CB37ABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m107EFB0924D8FD2A9C1E0B18F395AC8CD519248A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8DF71C8252D17ED2BA47F643F875E17534DE7613_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB76C5F74F93A59A74F36249B8875C12E2F13B0F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC5CB80200709AA06BEA83C3F37087E1D4236BE73 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* G_B2_0 = NULL;
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* G_B1_0 = NULL;
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* G_B7_0 = NULL;
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* G_B6_0 = NULL;
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* G_B13_0 = NULL;
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* G_B12_0 = NULL;
	{
		// UpgradeToItemId_Ref = tables.TbItem.GetOrDefault(UpgradeToItemId);
		Tables_t35773C3103D70358757BC6456666B056781615B7* L_0 = ___0_tables;
		NullCheck(L_0);
		TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* L_1;
		L_1 = Tables_get_TbItem_m3F044E82EED07BBBBD4DCAE3DACDB584BA29ECA6(L_0, NULL);
		int32_t L_2 = __this->___UpgradeToItemId_4;
		NullCheck(L_1);
		Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* L_3;
		L_3 = TbItem_GetOrDefault_m04BB10D0F83D213D888BB92713EA80A0E1C45BB1(L_1, L_2, NULL);
		__this->___UpgradeToItemId_Ref_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UpgradeToItemId_Ref_5), (void*)L_3);
		// ExchangeStream?.ResolveRef(tables);
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_4 = __this->___ExchangeStream_8;
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0023;
		}
	}
	{
		goto IL_0029;
	}

IL_0023:
	{
		Tables_t35773C3103D70358757BC6456666B056781615B7* L_6 = ___0_tables;
		NullCheck(G_B2_0);
		ItemExchange_ResolveRef_mF33890B35A0C497F444F3247EBEB0931041AB230(G_B2_0, L_6, NULL);
	}

IL_0029:
	{
		// foreach (var _e in ExchangeList) { _e?.ResolveRef(tables); }
		List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C* L_7 = __this->___ExchangeList_9;
		NullCheck(L_7);
		Enumerator_tC5CB80200709AA06BEA83C3F37087E1D4236BE73 L_8;
		L_8 = List_1_GetEnumerator_mB76C5F74F93A59A74F36249B8875C12E2F13B0F5(L_7, List_1_GetEnumerator_mB76C5F74F93A59A74F36249B8875C12E2F13B0F5_RuntimeMethod_var);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m335568CCD954CF263AA745D7CCC5C0635CB37ABA((&V_0), Enumerator_Dispose_m335568CCD954CF263AA745D7CCC5C0635CB37ABA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_0037_1:
			{
				// foreach (var _e in ExchangeList) { _e?.ResolveRef(tables); }
				ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_9;
				L_9 = Enumerator_get_Current_m8DF71C8252D17ED2BA47F643F875E17534DE7613_inline((&V_0), Enumerator_get_Current_m8DF71C8252D17ED2BA47F643F875E17534DE7613_RuntimeMethod_var);
				// foreach (var _e in ExchangeList) { _e?.ResolveRef(tables); }
				ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_10 = L_9;
				G_B6_0 = L_10;
				if (L_10)
				{
					G_B7_0 = L_10;
					goto IL_0044_1;
				}
			}
			{
				goto IL_004a_1;
			}

IL_0044_1:
			{
				Tables_t35773C3103D70358757BC6456666B056781615B7* L_11 = ___0_tables;
				NullCheck(G_B7_0);
				ItemExchange_ResolveRef_mF33890B35A0C497F444F3247EBEB0931041AB230(G_B7_0, L_11, NULL);
			}

IL_004a_1:
			{
				// foreach (var _e in ExchangeList) { _e?.ResolveRef(tables); }
				bool L_12;
				L_12 = Enumerator_MoveNext_m107EFB0924D8FD2A9C1E0B18F395AC8CD519248A((&V_0), Enumerator_MoveNext_m107EFB0924D8FD2A9C1E0B18F395AC8CD519248A_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_0063;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		// ExchangeColumn?.ResolveRef(tables);
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_13 = __this->___ExchangeColumn_10;
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_14 = L_13;
		G_B12_0 = L_14;
		if (L_14)
		{
			G_B13_0 = L_14;
			goto IL_006e;
		}
	}
	{
		return;
	}

IL_006e:
	{
		Tables_t35773C3103D70358757BC6456666B056781615B7* L_15 = ___0_tables;
		NullCheck(G_B13_0);
		ItemExchange_ResolveRef_mF33890B35A0C497F444F3247EBEB0931041AB230(G_B13_0, L_15, NULL);
		// }
		return;
	}
}
// System.String GameConfig.Item::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_ToString_mB1D572A64F876DD922C31CAE7799296B4B73B836 (Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtil_CollectionToString_TisItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0_mDABEB3B2A5FCB497F9158A0E402CAE2D87F6B12B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033E135DDD14C9CA790EFB0305FB2787165DC9C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E90C646F42478AC8BC81200FEEF0B79CF03C9CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10543BAD3EDBF8858079F1CF8D7157685FEB1405);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2950AEF64F668D3A5DDD36A1FF9C7708F3662C99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FE48C1F38AF0438C0F507CEDBABFE7650B1DE49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EE92A9BD17A9CB9A1A6DFE2F11EE15BF6816E61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3D92E28503AA9601C94CA75217269DC631C1108);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB45749BC865DAA67DE5DDF656241741B88ADF436);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC23EECD2AA40BC4EDC1A8F5DD9214EA9AEBAC72C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEDF3EB63C6454A741A1C94150C1E332BCFFC35D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89300623A1221B45D961C421A0064C5871C4B44);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	{
		// return "{ "
		// + "id:" + Id + ","
		// + "name:" + Name + ","
		// + "desc:" + Desc + ","
		// + "price:" + Price + ","
		// + "upgradeToItemId:" + UpgradeToItemId + ","
		// + "expireTime:" + ExpireTime + ","
		// + "batchUseable:" + BatchUseable + ","
		// + "exchangeStream:" + ExchangeStream + ","
		// + "exchangeList:" + Luban.StringUtil.CollectionToString(ExchangeList) + ","
		// + "exchangeColumn:" + ExchangeColumn + ","
		// + "}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)21));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralB3D92E28503AA9601C94CA75217269DC631C1108);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB3D92E28503AA9601C94CA75217269DC631C1108);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t L_3 = __this->___Id_0;
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2950AEF64F668D3A5DDD36A1FF9C7708F3662C99);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2950AEF64F668D3A5DDD36A1FF9C7708F3662C99);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = __this->___Name_1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral0E90C646F42478AC8BC81200FEEF0B79CF03C9CD);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral0E90C646F42478AC8BC81200FEEF0B79CF03C9CD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = __this->___Desc_2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralC23EECD2AA40BC4EDC1A8F5DD9214EA9AEBAC72C);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralC23EECD2AA40BC4EDC1A8F5DD9214EA9AEBAC72C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		int32_t L_13 = __this->___Price_3;
		V_0 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral7FE48C1F38AF0438C0F507CEDBABFE7650B1DE49);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral7FE48C1F38AF0438C0F507CEDBABFE7650B1DE49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		int32_t L_17 = __this->___UpgradeToItemId_4;
		V_0 = L_17;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_16;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral10543BAD3EDBF8858079F1CF8D7157685FEB1405);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral10543BAD3EDBF8858079F1CF8D7157685FEB1405);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_21 = __this->___ExpireTime_6;
		V_1 = L_21;
		String_t* L_22;
		L_22 = Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248((&V_1), Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_RuntimeMethod_var);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_20;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral033E135DDD14C9CA790EFB0305FB2787165DC9C1);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral033E135DDD14C9CA790EFB0305FB2787165DC9C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		bool L_25 = __this->___BatchUseable_7;
		V_2 = L_25;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		String_t* L_26;
		L_26 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_2), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_24;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral9EE92A9BD17A9CB9A1A6DFE2F11EE15BF6816E61);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral9EE92A9BD17A9CB9A1A6DFE2F11EE15BF6816E61);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_29 = __this->___ExchangeStream_8;
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_30 = L_29;
		G_B1_0 = L_30;
		G_B1_1 = ((int32_t)15);
		G_B1_2 = L_28;
		G_B1_3 = L_28;
		if (L_30)
		{
			G_B2_0 = L_30;
			G_B2_1 = ((int32_t)15);
			G_B2_2 = L_28;
			G_B2_3 = L_28;
			goto IL_00ca;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_00cf;
	}

IL_00ca:
	{
		NullCheck(G_B2_0);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_31;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_00cf:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = G_B3_3;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralCEDF3EB63C6454A741A1C94150C1E332BCFFC35D);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralCEDF3EB63C6454A741A1C94150C1E332BCFFC35D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		List_1_t4EF0436A08C2924E99A3557A171832D47FCBED2C* L_34 = __this->___ExchangeList_9;
		String_t* L_35;
		L_35 = StringUtil_CollectionToString_TisItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0_mDABEB3B2A5FCB497F9158A0E402CAE2D87F6B12B(L_34, StringUtil_CollectionToString_TisItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0_mDABEB3B2A5FCB497F9158A0E402CAE2D87F6B12B_RuntimeMethod_var);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_33;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralB45749BC865DAA67DE5DDF656241741B88ADF436);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteralB45749BC865DAA67DE5DDF656241741B88ADF436);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_38 = __this->___ExchangeColumn_10;
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_39 = L_38;
		G_B4_0 = L_39;
		G_B4_1 = ((int32_t)19);
		G_B4_2 = L_37;
		G_B4_3 = L_37;
		if (L_39)
		{
			G_B5_0 = L_39;
			G_B5_1 = ((int32_t)19);
			G_B5_2 = L_37;
			G_B5_3 = L_37;
			goto IL_0101;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0106;
	}

IL_0101:
	{
		NullCheck(G_B5_0);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_40;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0106:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = G_B6_3;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteralD89300623A1221B45D961C421A0064C5871C4B44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteralD89300623A1221B45D961C421A0064C5871C4B44);
		String_t* L_42;
		L_42 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_41, NULL);
		return L_42;
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
// GameConfig.item.TbItem GameConfig.Tables::get_TbItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* Tables_get_TbItem_m3F044E82EED07BBBBD4DCAE3DACDB584BA29ECA6 (Tables_t35773C3103D70358757BC6456666B056781615B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BF5C975DB38979FA158FE4A48922DE1881A3AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_TbItem == null)
		TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* L_0 = __this->___m_TbItem_0;
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		// m_TbItem = new item.TbItem(defaultLoader("item_tbitem"));
		Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5* L_1 = __this->___defaultLoader_1;
		NullCheck(L_1);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_2;
		L_2 = Func_2_Invoke_m624CDC32BC54F5FC31F9A5B640621D75D643860D_inline(L_1, _stringLiteral67BF5C975DB38979FA158FE4A48922DE1881A3AE, NULL);
		TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* L_3 = (TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4*)il2cpp_codegen_object_new(TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TbItem__ctor_m44C47FEF48871522755025FA36FA1A80206853EA(L_3, L_2, NULL);
		__this->___m_TbItem_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TbItem_0), (void*)L_3);
		// m_TbItem.ResolveRef(this);
		TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* L_4 = __this->___m_TbItem_0;
		NullCheck(L_4);
		TbItem_ResolveRef_mFAF7246F26F109C9793A5D0EFE50E48B6CA023D0(L_4, __this, NULL);
	}

IL_002f:
	{
		// return m_TbItem;
		TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* L_5 = __this->___m_TbItem_0;
		return L_5;
	}
}
// System.Void GameConfig.Tables::set_TbItem(GameConfig.item.TbItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables_set_TbItem_m4CFA6D4EB63AD622A23CB0AF3D6BBFA060A4C695 (Tables_t35773C3103D70358757BC6456666B056781615B7* __this, TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* ___0_value, const RuntimeMethod* method) 
{
	{
		// m_TbItem = value;
		TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* L_0 = ___0_value;
		__this->___m_TbItem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TbItem_0), (void*)L_0);
		// m_TbItem.ResolveRef(this);
		TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* L_1 = __this->___m_TbItem_0;
		NullCheck(L_1);
		TbItem_ResolveRef_mFAF7246F26F109C9793A5D0EFE50E48B6CA023D0(L_1, __this, NULL);
		// }
		return;
	}
}
// System.Void GameConfig.Tables::.ctor(System.Func`2<System.String,Luban.ByteBuf>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables__ctor_mECD34D448F818D2C71C3B37C33C5F9027624AA2E (Tables_t35773C3103D70358757BC6456666B056781615B7* __this, Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5* ___0_loader, const RuntimeMethod* method) 
{
	{
		// public Tables(System.Func<string, ByteBuf> loader)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SetDefaultLoader(loader);
		Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5* L_0 = ___0_loader;
		Tables_SetDefaultLoader_m938CE7183BF92D0B871F8321BE78D6CC014E569E(__this, L_0, NULL);
		// Init();
		Tables_Init_mFAE1489A272088D2F6C16453551608C0A561F7EB(__this, NULL);
		// }
		return;
	}
}
// System.Void GameConfig.Tables::SetDefaultLoader(System.Func`2<System.String,Luban.ByteBuf>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables_SetDefaultLoader_m938CE7183BF92D0B871F8321BE78D6CC014E569E (Tables_t35773C3103D70358757BC6456666B056781615B7* __this, Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5* ___0_loader, const RuntimeMethod* method) 
{
	{
		// defaultLoader = null;
		__this->___defaultLoader_1 = (Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultLoader_1), (void*)(Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5*)NULL);
		// defaultLoader = loader;
		Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5* L_0 = ___0_loader;
		__this->___defaultLoader_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultLoader_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void GameConfig.Tables::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables_Init_mFAE1489A272088D2F6C16453551608C0A561F7EB (Tables_t35773C3103D70358757BC6456666B056781615B7* __this, const RuntimeMethod* method) 
{
	{
		// public void Init(){}
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
// System.Void GameConfig.item.ItemExchange::.ctor(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemExchange__ctor_m7AEFFFACA7BAAAACBB1C325E08D8F5599CAC7C0B (ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* __this, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0__buf, const RuntimeMethod* method) 
{
	{
		// public ItemExchange(ByteBuf _buf)
		BeanBase__ctor_mD176CC671940DD678DC8C04DB65020560E32A8C8(__this, NULL);
		// Id = _buf.ReadInt();
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_0 = ___0__buf;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ByteBuf_ReadInt_m73F64A02434B047BF3C5322BD83E94CC769E3532_inline(L_0, NULL);
		__this->___Id_0 = L_1;
		// Num = _buf.ReadInt();
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_2 = ___0__buf;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ByteBuf_ReadInt_m73F64A02434B047BF3C5322BD83E94CC769E3532_inline(L_2, NULL);
		__this->___Num_1 = L_3;
		// }
		return;
	}
}
// GameConfig.item.ItemExchange GameConfig.item.ItemExchange::DeserializeItemExchange(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* ItemExchange_DeserializeItemExchange_m79DBB0E67570CD5057702D8E0F10B2DEC0584BB3 (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0__buf, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new item.ItemExchange(_buf);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_0 = ___0__buf;
		ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* L_1 = (ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0*)il2cpp_codegen_object_new(ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ItemExchange__ctor_m7AEFFFACA7BAAAACBB1C325E08D8F5599CAC7C0B(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Int32 GameConfig.item.ItemExchange::GetTypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ItemExchange_GetTypeId_m0D1AB0C3BD9CD8121B4E6D81DED4E662ED68CF8C (ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* __this, const RuntimeMethod* method) 
{
	{
		// public override int GetTypeId() => __ID__;
		return ((int32_t)1814660465);
	}
}
// System.Void GameConfig.item.ItemExchange::ResolveRef(GameConfig.Tables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemExchange_ResolveRef_mF33890B35A0C497F444F3247EBEB0931041AB230 (ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* __this, Tables_t35773C3103D70358757BC6456666B056781615B7* ___0_tables, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String GameConfig.item.ItemExchange::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ItemExchange_ToString_m2FBBFA8E92B76604D8ECB6D70CFF5FA3CA050FE0 (ItemExchange_t45C9057F22E202FE22564A127FE9D0510A60A3F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3D92E28503AA9601C94CA75217269DC631C1108);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1BABF3BBBB0647E8EFF7FD1661C867144223C85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89300623A1221B45D961C421A0064C5871C4B44);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return "{ "
		// + "id:" + Id + ","
		// + "num:" + Num + ","
		// + "}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralB3D92E28503AA9601C94CA75217269DC631C1108);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB3D92E28503AA9601C94CA75217269DC631C1108);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t L_3 = __this->___Id_0;
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralD1BABF3BBBB0647E8EFF7FD1661C867144223C85);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralD1BABF3BBBB0647E8EFF7FD1661C867144223C85);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t L_7 = __this->___Num_1;
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralD89300623A1221B45D961C421A0064C5871C4B44);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralD89300623A1221B45D961C421A0064C5871C4B44);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
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
// System.Void GameConfig.item.TbItem::.ctor(Luban.ByteBuf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TbItem__ctor_m44C47FEF48871522755025FA36FA1A80206853EA (TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* __this, ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ___0__buf, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m611412FA17FAAB1E4CCF2CCF9486E0660C0D61BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3C25F36E0F71E6A2B3E439A94F2C8537FEAE941F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m845D35B3FCD5CBDF6A822A2E1B658AC9F27BE36E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFE14F4D566AC2347FA351E1D564F0C07EA2225C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* V_1 = NULL;
	{
		// public TbItem(ByteBuf _buf)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _dataMap = new System.Collections.Generic.Dictionary<int, Item>();
		Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3* L_0 = (Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3*)il2cpp_codegen_object_new(Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3C25F36E0F71E6A2B3E439A94F2C8537FEAE941F(L_0, Dictionary_2__ctor_m3C25F36E0F71E6A2B3E439A94F2C8537FEAE941F_RuntimeMethod_var);
		__this->____dataMap_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dataMap_0), (void*)L_0);
		// _dataList = new System.Collections.Generic.List<Item>();
		List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964* L_1 = (List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964*)il2cpp_codegen_object_new(List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mFE14F4D566AC2347FA351E1D564F0C07EA2225C7(L_1, List_1__ctor_mFE14F4D566AC2347FA351E1D564F0C07EA2225C7_RuntimeMethod_var);
		__this->____dataList_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dataList_1), (void*)L_1);
		// for(int n = _buf.ReadSize() ; n > 0 ; --n)
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_2 = ___0__buf;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ByteBuf_ReadSize_m1D8B3F112DFB0777FA8AC1DF37047B804EB4DB4E(L_2, NULL);
		V_0 = L_3;
		goto IL_004e;
	}

IL_0025:
	{
		// _v = Item.DeserializeItem(_buf);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_4 = ___0__buf;
		Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* L_5;
		L_5 = Item_DeserializeItem_m2A44B2D6DD7B6B4F814F7FB4030CC267D8586D13(L_4, NULL);
		V_1 = L_5;
		// _dataList.Add(_v);
		List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964* L_6 = __this->____dataList_1;
		Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* L_7 = V_1;
		NullCheck(L_6);
		List_1_Add_m845D35B3FCD5CBDF6A822A2E1B658AC9F27BE36E_inline(L_6, L_7, List_1_Add_m845D35B3FCD5CBDF6A822A2E1B658AC9F27BE36E_RuntimeMethod_var);
		// _dataMap.Add(_v.Id, _v);
		Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3* L_8 = __this->____dataMap_0;
		Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Id_0;
		Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* L_11 = V_1;
		NullCheck(L_8);
		Dictionary_2_Add_m611412FA17FAAB1E4CCF2CCF9486E0660C0D61BA(L_8, L_10, L_11, Dictionary_2_Add_m611412FA17FAAB1E4CCF2CCF9486E0660C0D61BA_RuntimeMethod_var);
		// for(int n = _buf.ReadSize() ; n > 0 ; --n)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004e:
	{
		// for(int n = _buf.ReadSize() ; n > 0 ; --n)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,GameConfig.Item> GameConfig.item.TbItem::get_DataMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3* TbItem_get_DataMap_mAA95EF04EE228DE1FCB6EDACFCA130AD7FA77534 (TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* __this, const RuntimeMethod* method) 
{
	{
		// public System.Collections.Generic.Dictionary<int, Item> DataMap => _dataMap;
		Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3* L_0 = __this->____dataMap_0;
		return L_0;
	}
}
// System.Collections.Generic.List`1<GameConfig.Item> GameConfig.item.TbItem::get_DataList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964* TbItem_get_DataList_mA5A2B1138A4C909C3DCDE50BBE57185070FE4E83 (TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* __this, const RuntimeMethod* method) 
{
	{
		// public System.Collections.Generic.List<Item> DataList => _dataList;
		List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964* L_0 = __this->____dataList_1;
		return L_0;
	}
}
// GameConfig.Item GameConfig.item.TbItem::GetOrDefault(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* TbItem_GetOrDefault_m04BB10D0F83D213D888BB92713EA80A0E1C45BB1 (TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC991B1B57DDB371F33B87C6C3F2C27EE3113414E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* V_0 = NULL;
	{
		// public Item GetOrDefault(int key) => _dataMap.TryGetValue(key, out var v) ? v : null;
		Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3* L_0 = __this->____dataMap_0;
		int32_t L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC991B1B57DDB371F33B87C6C3F2C27EE3113414E(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mC991B1B57DDB371F33B87C6C3F2C27EE3113414E_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C*)NULL;
	}

IL_0012:
	{
		Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* L_3 = V_0;
		return L_3;
	}
}
// GameConfig.Item GameConfig.item.TbItem::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* TbItem_Get_mF6E2FFA80F39D468F0A59FF087DCF9CBCF77075A (TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m314C5E94ED13952A0694FEAF8E4EF0C31960CBCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Item Get(int key) => _dataMap[key];
		Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3* L_0 = __this->____dataMap_0;
		int32_t L_1 = ___0_key;
		NullCheck(L_0);
		Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* L_2;
		L_2 = Dictionary_2_get_Item_m314C5E94ED13952A0694FEAF8E4EF0C31960CBCF(L_0, L_1, Dictionary_2_get_Item_m314C5E94ED13952A0694FEAF8E4EF0C31960CBCF_RuntimeMethod_var);
		return L_2;
	}
}
// GameConfig.Item GameConfig.item.TbItem::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* TbItem_get_Item_m0CD5BA961C08BEF78B5D6DB3EB1325B37E93231A (TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m314C5E94ED13952A0694FEAF8E4EF0C31960CBCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Item this[int key] => _dataMap[key];
		Dictionary_2_tA8DDD2F6E6C9ACB0F7A2B5CD2F972DAFB09186B3* L_0 = __this->____dataMap_0;
		int32_t L_1 = ___0_key;
		NullCheck(L_0);
		Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* L_2;
		L_2 = Dictionary_2_get_Item_m314C5E94ED13952A0694FEAF8E4EF0C31960CBCF(L_0, L_1, Dictionary_2_get_Item_m314C5E94ED13952A0694FEAF8E4EF0C31960CBCF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void GameConfig.item.TbItem::ResolveRef(GameConfig.Tables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TbItem_ResolveRef_mFAF7246F26F109C9793A5D0EFE50E48B6CA023D0 (TbItem_t0A46C6E7FF01A4CF06DED5AC9CDFCBDC368FD2F4* __this, Tables_t35773C3103D70358757BC6456666B056781615B7* ___0_tables, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m702FD2CA0CC79A918CD431118C9556D156D02A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3F30525CE9490E605C7EABB9AEEDAF45CFE28344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1B1D13538C94179BFC7D92EB9E320A06086F250A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4990B761ACBEF639A37E2DB3DD3BD1A32C635039_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7D7F0AD02192AEE78E5E616AE8CC1713748957C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach(var _v in _dataList)
		List_1_tD7C8C4A975E09951ABF29A1A0D871D5BBB701964* L_0 = __this->____dataList_1;
		NullCheck(L_0);
		Enumerator_t7D7F0AD02192AEE78E5E616AE8CC1713748957C1 L_1;
		L_1 = List_1_GetEnumerator_m4990B761ACBEF639A37E2DB3DD3BD1A32C635039(L_0, List_1_GetEnumerator_m4990B761ACBEF639A37E2DB3DD3BD1A32C635039_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m702FD2CA0CC79A918CD431118C9556D156D02A34((&V_0), Enumerator_Dispose_m702FD2CA0CC79A918CD431118C9556D156D02A34_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach(var _v in _dataList)
				Item_tA40D7BDF7D1565F7B6EACFABB1CBB557CEBE675C* L_2;
				L_2 = Enumerator_get_Current_m1B1D13538C94179BFC7D92EB9E320A06086F250A_inline((&V_0), Enumerator_get_Current_m1B1D13538C94179BFC7D92EB9E320A06086F250A_RuntimeMethod_var);
				// _v.ResolveRef(tables);
				Tables_t35773C3103D70358757BC6456666B056781615B7* L_3 = ___0_tables;
				NullCheck(L_2);
				Item_ResolveRef_m0703F4920CF90F9E62611C08BEAA3CF26EE70855(L_2, L_3, NULL);
			}

IL_001b_1:
			{
				// foreach(var _v in _dataList)
				bool L_4;
				L_4 = Enumerator_MoveNext_m3F30525CE9490E605C7EABB9AEEDAF45CFE28344((&V_0), Enumerator_MoveNext_m3F30525CE9490E605C7EABB9AEEDAF45CFE28344_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// }
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
// GameConfig.Tables GameProto.ConfigSystem::get_Tables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tables_t35773C3103D70358757BC6456666B056781615B7* ConfigSystem_get_Tables_m3D256C370FA6A1C6C774920592933F7E62D30B36 (ConfigSystem_tE70067C20B3396168831C82F61D60D32A7499976* __this, const RuntimeMethod* method) 
{
	{
		// if (!_init)
		bool L_0 = __this->____init_1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Load();
		ConfigSystem_Load_m912561A67B9B2AB58432F0BAEF2F3CA8504BAC87(__this, NULL);
	}

IL_000e:
	{
		// return _tables;
		Tables_t35773C3103D70358757BC6456666B056781615B7* L_1 = __this->____tables_2;
		return L_1;
	}
}
// System.Void GameProto.ConfigSystem::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSystem_Load_m912561A67B9B2AB58432F0BAEF2F3CA8504BAC87 (ConfigSystem_tE70067C20B3396168831C82F61D60D32A7499976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigSystem_LoadByteBuf_m3D837D881D1D61A4F3C7E67B6810EB4370BA1675_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tables_t35773C3103D70358757BC6456666B056781615B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _tables = new Tables(LoadByteBuf);
		Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5* L_0 = (Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5*)il2cpp_codegen_object_new(Func_2_t89C69F9AB81D516D1703CB17579A2C8864611FE5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_2__ctor_m65E7D5F8275324F7DFAB67DCB19A08AD3FB7EEA0(L_0, __this, (intptr_t)((void*)ConfigSystem_LoadByteBuf_m3D837D881D1D61A4F3C7E67B6810EB4370BA1675_RuntimeMethod_var), NULL);
		Tables_t35773C3103D70358757BC6456666B056781615B7* L_1 = (Tables_t35773C3103D70358757BC6456666B056781615B7*)il2cpp_codegen_object_new(Tables_t35773C3103D70358757BC6456666B056781615B7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Tables__ctor_mECD34D448F818D2C71C3B37C33C5F9027624AA2E(L_1, L_0, NULL);
		__this->____tables_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tables_2), (void*)L_1);
		// _init = true;
		__this->____init_1 = (bool)1;
		// }
		return;
	}
}
// Luban.ByteBuf GameProto.ConfigSystem::LoadByteBuf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* ConfigSystem_LoadByteBuf_m3D837D881D1D61A4F3C7E67B6810EB4370BA1675 (ConfigSystem_tE70067C20B3396168831C82F61D60D32A7499976* __this, String_t* ___0_file, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameModule_t4C450B2DEB2007924D63373656181DD0F7B6AA0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceComponent_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m996DC04180C3245394E8C0C45E7168F840166D76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_0 = NULL;
	{
		// TextAsset textAsset = GameModule.Resource.LoadAsset<TextAsset>(file);
		il2cpp_codegen_runtime_class_init_inline(GameModule_t4C450B2DEB2007924D63373656181DD0F7B6AA0A_il2cpp_TypeInfo_var);
		ResourceComponent_t2F1295F7E7966C716A7FF47956EB39EDA28800A9* L_0;
		L_0 = GameModule_get_Resource_mFE8E488AE1AC176DF1727AA307A6311D7450DEE4_inline(NULL);
		String_t* L_1 = ___0_file;
		NullCheck(L_0);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_2;
		L_2 = ResourceComponent_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m996DC04180C3245394E8C0C45E7168F840166D76(L_0, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, ResourceComponent_LoadAsset_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m996DC04180C3245394E8C0C45E7168F840166D76_RuntimeMethod_var);
		V_0 = L_2;
		// if (textAsset == null || textAsset.bytes == null)
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178(L_5, NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}

IL_0022:
	{
		// throw new GameFrameworkException($"LoadByteBuf failed: {file}");
		String_t* L_7 = ___0_file;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral869B065168CF4032A467F8C7ED37B59E8747334B)), L_7, NULL);
		GameFrameworkException_tAA68E718189104D5849AD226E3BAF0CAE4ACEFDD* L_9 = (GameFrameworkException_tAA68E718189104D5849AD226E3BAF0CAE4ACEFDD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_tAA68E718189104D5849AD226E3BAF0CAE4ACEFDD_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m42231D19C547DF04E289099B1792F90B3482A870(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConfigSystem_LoadByteBuf_m3D837D881D1D61A4F3C7E67B6810EB4370BA1675_RuntimeMethod_var)));
	}

IL_0033:
	{
		// byte[] bytes = textAsset.bytes;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178(L_10, NULL);
		// GameModule.Resource.UnloadAsset(textAsset);
		il2cpp_codegen_runtime_class_init_inline(GameModule_t4C450B2DEB2007924D63373656181DD0F7B6AA0A_il2cpp_TypeInfo_var);
		ResourceComponent_t2F1295F7E7966C716A7FF47956EB39EDA28800A9* L_12;
		L_12 = GameModule_get_Resource_mFE8E488AE1AC176DF1727AA307A6311D7450DEE4_inline(NULL);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_13 = V_0;
		NullCheck(L_12);
		ResourceComponent_UnloadAsset_mC0C0A6CBAC55CE595EA2C857A522B556251F0FE7(L_12, L_13, NULL);
		// return new ByteBuf(bytes);
		ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* L_14 = (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B*)il2cpp_codegen_object_new(ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ByteBuf__ctor_mA588D29C106F02C2551D6BB28C41AD3F3C551E16(L_14, L_11, NULL);
		return L_14;
	}
}
// System.Void GameProto.ConfigSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigSystem__ctor_m646E171828D400D5A64A068657350CC0047918EE (ConfigSystem_tE70067C20B3396168831C82F61D60D32A7499976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m4C415D12B5CBF69C32917B40AEABCC0A78E54691_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m4C415D12B5CBF69C32917B40AEABCC0A78E54691(__this, Singleton_1__ctor_m4C415D12B5CBF69C32917B40AEABCC0A78E54691_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SegmentSaveState_get_ReaderIndex_m4DB708B17D4C9289BC0606F58E7478DBC38F1A9E_inline (SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* __this, const RuntimeMethod* method) 
{
	{
		// public int ReaderIndex { get; }
		int32_t L_0 = __this->___U3CReaderIndexU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SegmentSaveState_get_WriterIndex_mC5ACABABC5C3BD0E47A6B12DDB2FF467FDC881B8_inline (SegmentSaveState_tACFA8B04FCF9EAFA6D37A6609A594F86F864911C* __this, const RuntimeMethod* method) 
{
	{
		// public int WriterIndex { get; }
		int32_t L_0 = __this->___U3CWriterIndexU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBuf_set_Bytes_m64361BB03D153DEAF186DF5F93B95D7B8B6FDF22_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		// public byte[] Bytes { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CBytesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBytesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBuf_set_WriterIndex_mF81C9C7195FB023742E7A03BC9FBA69C5CC1A6BF_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int WriterIndex { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CWriterIndexU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBuf_set_ReaderIndex_m09ADE1D7765B332FEDB32694B286C3F283F18EAB_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int ReaderIndex { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CReaderIndexU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteBuf_get_Bytes_m93C1F39F3043B0CC26D9C0AB33E8021FD8BC6FA7_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Bytes { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CBytesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// public int WriterIndex { get; set; }
		int32_t L_0 = __this->___U3CWriterIndexU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// public int ReaderIndex { get; set; }
		int32_t L_0 = __this->___U3CReaderIndexU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBuf_EnsureWrite_m63BC20C18F16003A6343389893E73166562D8C72_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		// if (WriterIndex + size > Capacity)
		int32_t L_0;
		L_0 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		int32_t L_1 = ___0_size;
		int32_t L_2;
		L_2 = ByteBuf_get_Capacity_mB2E2EC5C7997B188DACA79E51F38BDF4287EBFA0(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		// EnsureWrite0(size);
		int32_t L_3 = ___0_size;
		ByteBuf_EnsureWrite0_m6DF2C43FCAD932C32BDB6DD80B803A18C70D96C2(__this, L_3, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		// if (ReaderIndex + size > WriterIndex)
		int32_t L_0;
		L_0 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_1 = ___0_size;
		int32_t L_2;
		L_2 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		// throw new SerializationException();
		SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1* L_3 = (SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tF8625A791338307444551377FD609BCE8CAE03C1_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		SerializationException__ctor_m1672766A270C635ADECF5DE3C34B3CC30BEAB636(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteBuf_EnsureRead_m47EDDA5EE23137B3F939E974557A7D48EE2CA9B9_RuntimeMethod_var)));
	}

IL_0016:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515* ByteBuf_get_StringCacheFinder_mEEBAABD8CA7D69492483952469AE1207CB839314_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Func<byte[], int, int, string> StringCacheFinder { get; set; }
		Func_4_t01433ECAECDF6C5C1EA04D0F258B11DB703B9515* L_0 = ((ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_StaticFields*)il2cpp_codegen_static_fields_for(ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B_il2cpp_TypeInfo_var))->___U3CStringCacheFinderU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Complex_get_Real_m98291D3606A2D33FB2A4AFD94C5A6B594C4C8554_inline (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___m_real_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Complex_get_Imaginary_m55DD546C177307031449E6814F9AE1671097FABD_inline (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___m_imaginary_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ByteBuf_CanRead_m4EF6108564C0B638CFE7F9D1DC5BEEE5736E5929_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		// return (ReaderIndex + size <= WriterIndex);
		int32_t L_0;
		L_0 = ByteBuf_get_ReaderIndex_m586F8A43D83342C2D654B1C70367B8F5571174A6_inline(__this, NULL);
		int32_t L_1 = ___0_size;
		int32_t L_2;
		L_2 = ByteBuf_get_WriterIndex_m1F6E06018F5B2C24B0EBB5E62B516A56D7C9B719_inline(__this, NULL);
		return (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) > ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteBuf_ReadInt_m73F64A02434B047BF3C5322BD83E94CC769E3532_inline (ByteBuf_tCD99682148FC667789E1ED0C5EC22AF502EFB84B* __this, const RuntimeMethod* method) 
{
	{
		// return (int)ReadUint();
		uint32_t L_0;
		L_0 = ByteBuf_ReadUint_mF5EE4F4613290105069477FC76CBE1CF31A5A2FF(__this, NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResourceComponent_t2F1295F7E7966C716A7FF47956EB39EDA28800A9* GameModule_get_Resource_mFE8E488AE1AC176DF1727AA307A6311D7450DEE4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameModule_t4C450B2DEB2007924D63373656181DD0F7B6AA0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ResourceComponent Resource { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(GameModule_t4C450B2DEB2007924D63373656181DD0F7B6AA0A_il2cpp_TypeInfo_var);
		ResourceComponent_t2F1295F7E7966C716A7FF47956EB39EDA28800A9* L_0 = ((GameModule_t4C450B2DEB2007924D63373656181DD0F7B6AA0A_StaticFields*)il2cpp_codegen_static_fields_for(GameModule_t4C450B2DEB2007924D63373656181DD0F7B6AA0A_il2cpp_TypeInfo_var))->___U3CResourceU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_4_Invoke_mEDA4DDC7AACEA584E35124A791DA2E7E5A497CDA_gshared_inline (Func_4_t7AAB63173BD5193F0BDA308DCB0D4ADC2674D9C2* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
