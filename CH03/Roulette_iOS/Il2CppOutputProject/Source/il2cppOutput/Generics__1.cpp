﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1Invoker;
template <typename T1>
struct GenericVirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1Invoker;
template <typename T1>
struct GenericInterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct ContainerPropertyBag_1_tC5EF4ED9E953B090F0F1A7314A738165FB6277B8;
struct ContainerPropertyBag_1_t827E6E22E54C7702E357022F57F04833A6FAF09E;
struct ContainerPropertyBag_1_t47684299E462BBF7DC930C28B27E8A8008478424;
struct Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB;
struct CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1;
struct DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644;
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5;
struct DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4;
struct DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9;
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A;
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934;
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27;
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
struct Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC;
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E;
struct Dictionary_2_tF48CBAD539B087D7950015E9ACC37504C4F7F095;
struct Dictionary_2_t4C7611B1B9A7003542D940F8505DCFF0186D9648;
struct Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07;
struct IEnumerator_1_tAA9E173D47F9A415DBE8F74E8C3F53E27F513950;
struct IEnumerator_1_t4CB13C9A05F08FC5070C0050B8AF1013247C8994;
struct IEnumerator_1_t5E9B8757F8C7BB8DB682965BE61A8BBB08202EB6;
struct IEnumerator_1_t819E733E3DA1171A575B03B1B06FD64D9406E196;
struct IEnumerator_1_t327FF232159D9644239A65F54312F684DB7BE375;
struct IEnumerator_1_tF0EC5B3FFCD3EA6401D7DFF18F4EC359E84035A9;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_tDACC7D28FFD11A83A9FC39CC18863F52A3E7E88F;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEquatable_1_t4759C29625D27994F9F829C3543690B9329901F6;
struct IEquatable_1_tD61C76E85AFA1BC35DC351FA8820566763E24618;
struct IProperty_1_t71FC6CE3B63C7989BB59D6C8E47462A535257BC9;
struct IProperty_1_t2F93486C4F1EF31204AB9C24EB17075238B881D5;
struct IProperty_1_t47DF8E7CFAFA47596FCFDA6775C02B5B3C05AAE5;
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123;
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
struct KeyCollection_t0B80132646C5C9D27AC9F6556074261A8EEDC377;
struct KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9;
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
struct KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F;
struct KeyCollection_t6A01E90BD3E84E7904A44E4E79BC7855F5029204;
struct KeyCollection_t0EFB1384ABA4EDABDC23F7EF3FE86A7F3E88DA29;
struct KeyCollection_t239EF5D0A11E0FC191504D200AA16CBF508F627B;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85;
struct List_1_t061B25A9A84AEF321FDDB1F001818B7F63981724;
struct List_1_t9F62F67493B4FDE523DD405881E159817B80CAC2;
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2;
struct PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601;
struct PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963;
struct PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA;
struct Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F;
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
struct ValueCollection_t3345D8F37DA4C2468E25B22F8CDBC378D69D4063;
struct ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86;
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
struct ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D;
struct ValueCollection_tFC199F200E990A316977F68FAE638AC552E9E5B9;
struct ValueCollection_t50C86DFB1AD93A26FD8779E507751391EDF4AC0A;
struct ValueCollection_t0E6C33C610591C9C2D5EC272BC420022FFBF163B;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
struct EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658;
struct EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75;
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
struct EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF;
struct EntryU5BU5D_tA7F5B122DA701637331E165BA34F2921893EE6A4;
struct EntryU5BU5D_t1E6125BC67BE36EABC7B88295C45A5CDDA436D35;
struct EntryU5BU5D_t7F3BA8D32859204392895978265B61A400981385;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct IProperty_1U5BU5D_t114AB40D7A9B0463423BA271A9500724F6778D9C;
struct IProperty_1U5BU5D_t2EBC6E373C6A907A8E5526EB7073DD758E0C4D65;
struct IProperty_1U5BU5D_t923FBB25D92CA4479ECEB7F3F1F4932D6C7C2D60;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265;
struct KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924;
struct KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteral2A57163F65B0EE8A44DC4359CBCD332A446966AA;
IL2CPP_EXTERN_C String_t* _stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
struct EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658;
struct EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75;
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
struct EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265;
struct KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924;
struct KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF  : public RuntimeObject
{
	Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644  : public RuntimeObject
{
};
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5  : public RuntimeObject
{
};
struct DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryKeyCollectionDebugView_2_tA967A5CC2E1F95032AE886F39B1005E56173D9D2  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_tE2C8C453C326A08B63223B59D5D010EFFE30BEF3  : public RuntimeObject
{
};
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* ____keys;
	ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* ____keys;
	ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t0B80132646C5C9D27AC9F6556074261A8EEDC377* ____keys;
	ValueCollection_t3345D8F37DA4C2468E25B22F8CDBC378D69D4063* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* ____keys;
	ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys;
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* ____keys;
	ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tF48CBAD539B087D7950015E9ACC37504C4F7F095  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tA7F5B122DA701637331E165BA34F2921893EE6A4* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t6A01E90BD3E84E7904A44E4E79BC7855F5029204* ____keys;
	ValueCollection_tFC199F200E990A316977F68FAE638AC552E9E5B9* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t4C7611B1B9A7003542D940F8505DCFF0186D9648  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1E6125BC67BE36EABC7B88295C45A5CDDA436D35* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t0EFB1384ABA4EDABDC23F7EF3FE86A7F3E88DA29* ____keys;
	ValueCollection_t50C86DFB1AD93A26FD8779E507751391EDF4AC0A* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7F3BA8D32859204392895978265B61A400981385* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t239EF5D0A11E0FC191504D200AA16CBF508F627B* ____keys;
	ValueCollection_t0E6C33C610591C9C2D5EC272BC420022FFBF163B* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07  : public RuntimeObject
{
};
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
};
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952  : public RuntimeObject
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary;
};
struct KeyCollection_t0B80132646C5C9D27AC9F6556074261A8EEDC377  : public RuntimeObject
{
	Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* ____dictionary;
};
struct KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9  : public RuntimeObject
{
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ____dictionary;
};
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974  : public RuntimeObject
{
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary;
};
struct KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F  : public RuntimeObject
{
	Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ____dictionary;
};
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct List_1_t061B25A9A84AEF321FDDB1F001818B7F63981724  : public RuntimeObject
{
	IProperty_1U5BU5D_t114AB40D7A9B0463423BA271A9500724F6778D9C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t9F62F67493B4FDE523DD405881E159817B80CAC2  : public RuntimeObject
{
	IProperty_1U5BU5D_t2EBC6E373C6A907A8E5526EB7073DD758E0C4D65* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4  : public RuntimeObject
{
	IProperty_1U5BU5D_t923FBB25D92CA4479ECEB7F3F1F4932D6C7C2D60* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
};
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F  : public RuntimeObject
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary;
};
struct ValueCollection_t3345D8F37DA4C2468E25B22F8CDBC378D69D4063  : public RuntimeObject
{
	Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* ____dictionary;
};
struct ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86  : public RuntimeObject
{
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ____dictionary;
};
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA  : public RuntimeObject
{
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary;
};
struct ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D  : public RuntimeObject
{
	Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ____dictionary;
};
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4  : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3
{
	PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* ___m_Getter;
	PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* ___m_Setter;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	RuntimeObject* ___value;
};
struct Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	int32_t ___value;
};
struct Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
typedef Il2CppFullySharedGenericStruct Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3;
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	int32_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 
{
	RuntimeObject* ___key;
	int32_t ___value;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	RuntimeObject* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 
{
	String_t* ___category;
	String_t* ___entry;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite;
};
struct CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshaled_pinvoke
{
	char* ___category;
	char* ___entry;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite;
};
struct CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshaled_com
{
	Il2CppChar* ___category;
	Il2CppChar* ___entry;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite;
};
struct Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___value;
};
struct Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___value;
};
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF 
{
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current;
	int32_t ____getEnumeratorRetType;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 
{
	int32_t ___key;
	CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___value;
};
struct KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 
{
	RuntimeObject* ___key;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___value;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	uint8_t ___value__;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t4BECBD7EA97C62C76B537F281DA0A091F2DF43A4 
{
	Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF 
{
	Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 ____current;
	int32_t ____getEnumeratorRetType;
};
struct PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ContainerPropertyBag_1_tC5EF4ED9E953B090F0F1A7314A738165FB6277B8  : public PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2
{
	List_1_t061B25A9A84AEF321FDDB1F001818B7F63981724* ___m_PropertiesList;
	Dictionary_2_tF48CBAD539B087D7950015E9ACC37504C4F7F095* ___m_PropertiesHash;
};
struct ContainerPropertyBag_1_t827E6E22E54C7702E357022F57F04833A6FAF09E  : public PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601
{
	List_1_t9F62F67493B4FDE523DD405881E159817B80CAC2* ___m_PropertiesList;
	Dictionary_2_t4C7611B1B9A7003542D940F8505DCFF0186D9648* ___m_PropertiesHash;
};
struct ContainerPropertyBag_1_t47684299E462BBF7DC930C28B27E8A8008478424  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4* ___m_PropertiesList;
	Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879* ___m_PropertiesHash;
};
struct Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB  : public MulticastDelegate_t
{
};
struct CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1  : public MulticastDelegate_t
{
};
struct KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08  : public PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1
{
	KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85* ___m_KeyValuePairProperty;
};
struct PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963  : public MulticastDelegate_t
{
};
struct PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934  : public KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08
{
};
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505_StaticFields
{
	EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07_StaticFields
{
	EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* ___defaultComparer;
};
struct List_1_t061B25A9A84AEF321FDDB1F001818B7F63981724_StaticFields
{
	IProperty_1U5BU5D_t114AB40D7A9B0463423BA271A9500724F6778D9C* ___s_emptyArray;
};
struct List_1_t9F62F67493B4FDE523DD405881E159817B80CAC2_StaticFields
{
	IProperty_1U5BU5D_t2EBC6E373C6A907A8E5526EB7073DD758E0C4D65* ___s_emptyArray;
};
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4_StaticFields
{
	IProperty_1U5BU5D_t923FBB25D92CA4479ECEB7F3F1F4932D6C7C2D60* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 m_Items[1];

	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 m_Items[1];

	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
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
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 m_Items[1];

	inline Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 m_Items[1];

	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC m_Items[1];

	inline Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___category), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___entry), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___sprite), (void*)NULL);
		#endif
	}
	inline Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___category), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___entry), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___sprite), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 m_Items[1];

	inline KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___category), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___entry), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___sprite), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___category), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___entry), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___sprite), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 m_Items[1];

	inline Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 m_Items[1];

	inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC m_Items[1];

	inline Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 m_Items[1];

	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC m_Items[1];

	inline Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____value), (void*)NULL);
		#endif
	}
	inline Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 m_Items[1];

	inline KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__ctor_mD0545EB6A8F30FF94E8C8CE7AD6A4F0DF32CBE7C_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__ctor_mB6FF3A98CDA8C851BC0FC108F95BF41644471439_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9540351AE212B2359AE414632644FA8EA843D723_gshared (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m07721547B40DA38D2CBD65AFC172191C065F1C20_gshared (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B_gshared (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBEDF2EFC47C4124A679AEFED8F6969A6E454A562_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m47941B375426BDA8A80EB5FF1CAA0D6427E19A0E_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m68CE6673F4891FC20DD81BFBA18C555C8266DA30_gshared (KeyCollection_t0B80132646C5C9D27AC9F6556074261A8EEDC377* __this, Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m3ABDC48AC0266DD9D8E20A741FEBEC6D90251E5A_gshared (ValueCollection_t3345D8F37DA4C2468E25B22F8CDBC378D69D4063* __this, Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mC23A71C5BA0AEC47BC86B17BFEC04998141737F2_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m453F28C3D7CF69B41E9BBC9BC7627C92963B64D6_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m3E2E84761480CE8DB944F3175F691C3CB14979A3_gshared_inline (KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 KeyValuePair_2_get_Value_mCC6E81580C7CA5794FAA2F7364AD94C60188CCC2_gshared_inline (KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m4CE6B03EBCD8773EEE2303F5903920033E53AA05_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* EqualityComparer_1_get_Default_m4163A68CE3B1740C02510A744E4B925CDC6DA2F9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2FD4607297A3F5FF812F7593B4EFC0C3638829E9_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m716B0D4D6AEDFB22C41C3544F73DEC87A405352D_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m748495E7F981BB3D1B0CFCA4950960987545A004_gshared (KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m098D43B30CB1AB1B3086C6C7F236777962710048_gshared (Enumerator_t4BECBD7EA97C62C76B537F281DA0A091F2DF43A4* __this, Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mDDAB12BE2A8404D5D6F1C91A9BC7C63568244976_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE6DCCE786144A4BC74585E5D38CC7550DBFEDE97_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7F2504F803DE1A0858B187E38F1AF5B061099BA6_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m8F13DA5C7409F90392131343D9E38B19274CA1E3_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_m8B7C55656AD7F370CA55E403269FCE079A9EE8E0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mBE9CE8577340B726C10C83374A3AD899CA4BCAA2_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m66A7B9CDAF8764FCFE4DC5BEFF32ECF8E652DE7B_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mD6272217B2390F156AEAD333CFBC0680AE18C348_gshared (KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* __this, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mC90880ED6157A668A5F1AB911945610274CEEA97_gshared (ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* __this, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_gshared_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_gshared_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD4B5AD912DE40BAACCC9A814640E4E3386E51BA8_gshared (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886_gshared (Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF* __this, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDC4C0DDB962EBDA7258647BDBC7B568948DD84E5_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3EC90D494DFBD871587E0A4F4D8D4E982BCB9F75_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mB09A4A925402CEC82C11FFE407E6F4096790D7DC_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m4EB5F9B4490E4588B314C97B3BC0CD8E9432D79A_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA6C088D61E2C3298854B5E200885EE8C83DC7FCD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA59B4C46D3FD1E0488449B2A24B4E8FA720B1A17_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mFC062DA3DAAFD62BF27D0F3BA56F511B29117D6A_gshared (KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* __this, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m7AF97DA41A9EFC656143299750EC272BF166E013_gshared (ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* __this, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_gshared_inline (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_gshared_inline (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBEBAE295606EB0AC491B3D8DF66D0F0F8209BFFF_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m214849DB755B3CD82BE59B12DC0957421F5782E4_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m982AF106BE17B9ED0CE94057606E3DC94F57C66F_gshared (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31_gshared (Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF* __this, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDCF81BA6E7AD5E970C1164BD764FD1B09DA54908_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0B33583AB3945F266499F443DD2BFA66084E6A2F_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6EC3BF5BBE81398B3CD063FFC28872ABA0FF6953_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9F770BB8AD4D8B4E14CA6F397A4D7E44661968C5_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* EqualityComparer_1_CreateComparer_mB947D2528324AFD1CA0EC3E0CC9C05C53116CF79_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_CreateComparer_m931FF926579EC7BABDD76C5453220EAF279A5882_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m20B8BF4BA904E10FB4272A01F7437412C13D4E46 (Dictionary_2_tF48CBAD539B087D7950015E9ACC37504C4F7F095* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF48CBAD539B087D7950015E9ACC37504C4F7F095*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
inline void List_1__ctor_mD109B5C7939A6327470D2893F6B8E788CFE99D32 (List_1_t061B25A9A84AEF321FDDB1F001818B7F63981724* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t061B25A9A84AEF321FDDB1F001818B7F63981724*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void Dictionary_2__ctor_mBF44F0A2F72B1C865BFE2E037BFCB7C1B10EFE99 (Dictionary_2_tF48CBAD539B087D7950015E9ACC37504C4F7F095* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF48CBAD539B087D7950015E9ACC37504C4F7F095*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
inline void PropertyBag_1__ctor_mD0545EB6A8F30FF94E8C8CE7AD6A4F0DF32CBE7C (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method)
{
	((  void (*) (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2*, const RuntimeMethod*))PropertyBag_1__ctor_mD0545EB6A8F30FF94E8C8CE7AD6A4F0DF32CBE7C_gshared)(__this, method);
}
inline bool Dictionary_2_TryGetValue_mCB142B637C6BA4EC38158CCAB573111F0F926FAF (Dictionary_2_t4C7611B1B9A7003542D940F8505DCFF0186D9648* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4C7611B1B9A7003542D940F8505DCFF0186D9648*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
inline void List_1__ctor_mCF0315031D745EBA7C0CDEFDC3A6BC278B13D44B (List_1_t9F62F67493B4FDE523DD405881E159817B80CAC2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F62F67493B4FDE523DD405881E159817B80CAC2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m126690CDD3B2B23C96B1A67847ED1940DD64A010 (Dictionary_2_t4C7611B1B9A7003542D940F8505DCFF0186D9648* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4C7611B1B9A7003542D940F8505DCFF0186D9648*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
inline void PropertyBag_1__ctor_mB6FF3A98CDA8C851BC0FC108F95BF41644471439 (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method)
{
	((  void (*) (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601*, const RuntimeMethod*))PropertyBag_1__ctor_mB6FF3A98CDA8C851BC0FC108F95BF41644471439_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320 (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320_gshared)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257 (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9*, const RuntimeMethod*))DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6 (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7 (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1 (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164 (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7 (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline void KeyCollection__ctor_m9540351AE212B2359AE414632644FA8EA843D723 (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952*, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))KeyCollection__ctor_m9540351AE212B2359AE414632644FA8EA843D723_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m07721547B40DA38D2CBD65AFC172191C065F1C20 (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F*, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))ValueCollection__ctor_m07721547B40DA38D2CBD65AFC172191C065F1C20_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3*, int32_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3*, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mBEDF2EFC47C4124A679AEFED8F6969A6E454A562 (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mBEDF2EFC47C4124A679AEFED8F6969A6E454A562_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m47941B375426BDA8A80EB5FF1CAA0D6427E19A0E (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m47941B375426BDA8A80EB5FF1CAA0D6427E19A0E_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m68CE6673F4891FC20DD81BFBA18C555C8266DA30 (KeyCollection_t0B80132646C5C9D27AC9F6556074261A8EEDC377* __this, Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t0B80132646C5C9D27AC9F6556074261A8EEDC377*, Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, const RuntimeMethod*))KeyCollection__ctor_m68CE6673F4891FC20DD81BFBA18C555C8266DA30_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m3ABDC48AC0266DD9D8E20A741FEBEC6D90251E5A (ValueCollection_t3345D8F37DA4C2468E25B22F8CDBC378D69D4063* __this, Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t3345D8F37DA4C2468E25B22F8CDBC378D69D4063*, Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, const RuntimeMethod*))ValueCollection__ctor_m3ABDC48AC0266DD9D8E20A741FEBEC6D90251E5A_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mC23A71C5BA0AEC47BC86B17BFEC04998141737F2 (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mC23A71C5BA0AEC47BC86B17BFEC04998141737F2_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m453F28C3D7CF69B41E9BBC9BC7627C92963B64D6 (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, int32_t, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m453F28C3D7CF69B41E9BBC9BC7627C92963B64D6_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline int32_t KeyValuePair_2_get_Key_m3E2E84761480CE8DB944F3175F691C3CB14979A3_inline (KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14*, const RuntimeMethod*))KeyValuePair_2_get_Key_m3E2E84761480CE8DB944F3175F691C3CB14979A3_gshared_inline)(__this, method);
}
inline CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 KeyValuePair_2_get_Value_mCC6E81580C7CA5794FAA2F7364AD94C60188CCC2_inline (KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14* __this, const RuntimeMethod* method)
{
	return ((  CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 (*) (KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14*, const RuntimeMethod*))KeyValuePair_2_get_Value_mCC6E81580C7CA5794FAA2F7364AD94C60188CCC2_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m4CE6B03EBCD8773EEE2303F5903920033E53AA05 (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, int32_t, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074, const RuntimeMethod*))Dictionary_2_Add_m4CE6B03EBCD8773EEE2303F5903920033E53AA05_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* EqualityComparer_1_get_Default_m4163A68CE3B1740C02510A744E4B925CDC6DA2F9_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m4163A68CE3B1740C02510A744E4B925CDC6DA2F9_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m2FD4607297A3F5FF812F7593B4EFC0C3638829E9 (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m2FD4607297A3F5FF812F7593B4EFC0C3638829E9_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m716B0D4D6AEDFB22C41C3544F73DEC87A405352D (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, const RuntimeMethod*))Dictionary_2_get_Count_m716B0D4D6AEDFB22C41C3544F73DEC87A405352D_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m748495E7F981BB3D1B0CFCA4950960987545A004 (KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14*, int32_t, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074, const RuntimeMethod*))KeyValuePair_2__ctor_m748495E7F981BB3D1B0CFCA4950960987545A004_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m098D43B30CB1AB1B3086C6C7F236777962710048 (Enumerator_t4BECBD7EA97C62C76B537F281DA0A091F2DF43A4* __this, Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4BECBD7EA97C62C76B537F281DA0A091F2DF43A4*, Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, int32_t, const RuntimeMethod*))Enumerator__ctor_m098D43B30CB1AB1B3086C6C7F236777962710048_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mDDAB12BE2A8404D5D6F1C91A9BC7C63568244976 (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mDDAB12BE2A8404D5D6F1C91A9BC7C63568244976_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mE6DCCE786144A4BC74585E5D38CC7550DBFEDE97 (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, const RuntimeMethod*))Dictionary_2_Resize_mE6DCCE786144A4BC74585E5D38CC7550DBFEDE97_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m7F2504F803DE1A0858B187E38F1AF5B061099BA6 (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m7F2504F803DE1A0858B187E38F1AF5B061099BA6_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m8F13DA5C7409F90392131343D9E38B19274CA1E3 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m8F13DA5C7409F90392131343D9E38B19274CA1E3_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_m8B7C55656AD7F370CA55E403269FCE079A9EE8E0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_m8B7C55656AD7F370CA55E403269FCE079A9EE8E0_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mBE9CE8577340B726C10C83374A3AD899CA4BCAA2 (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, int32_t, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074, const RuntimeMethod*))Dictionary_2_set_Item_mBE9CE8577340B726C10C83374A3AD899CA4BCAA2_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m66A7B9CDAF8764FCFE4DC5BEFF32ECF8E652DE7B (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m66A7B9CDAF8764FCFE4DC5BEFF32ECF8E652DE7B_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_mD6272217B2390F156AEAD333CFBC0680AE18C348 (KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* __this, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9*, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, const RuntimeMethod*))KeyCollection__ctor_mD6272217B2390F156AEAD333CFBC0680AE18C348_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mC90880ED6157A668A5F1AB911945610274CEEA97 (ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* __this, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86*, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, const RuntimeMethod*))ValueCollection__ctor_mC90880ED6157A668A5F1AB911945610274CEEA97_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*, const RuntimeMethod*))KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_gshared_inline)(__this, method);
}
inline int32_t KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*, const RuntimeMethod*))KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, const RuntimeMethod*))Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mD4B5AD912DE40BAACCC9A814640E4E3386E51BA8 (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*, RuntimeObject*, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_mD4B5AD912DE40BAACCC9A814640E4E3386E51BA8_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886 (Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF* __this, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF*, Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, int32_t, const RuntimeMethod*))Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mDC4C0DDB962EBDA7258647BDBC7B568948DD84E5 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, const RuntimeMethod*))Dictionary_2_Resize_mDC4C0DDB962EBDA7258647BDBC7B568948DD84E5_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m3EC90D494DFBD871587E0A4F4D8D4E982BCB9F75 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m3EC90D494DFBD871587E0A4F4D8D4E982BCB9F75_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_mB09A4A925402CEC82C11FFE407E6F4096790D7DC (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974*, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))KeyCollection__ctor_mB09A4A925402CEC82C11FFE407E6F4096790D7DC_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m4EB5F9B4490E4588B314C97B3BC0CD8E9432D79A (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA*, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))ValueCollection__ctor_m4EB5F9B4490E4588B314C97B3BC0CD8E9432D79A_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950 (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54 (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9*, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mA6C088D61E2C3298854B5E200885EE8C83DC7FCD (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2_Resize_mA6C088D61E2C3298854B5E200885EE8C83DC7FCD_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mA59B4C46D3FD1E0488449B2A24B4E8FA720B1A17 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mA59B4C46D3FD1E0488449B2A24B4E8FA720B1A17_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_mFC062DA3DAAFD62BF27D0F3BA56F511B29117D6A (KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* __this, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F*, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, const RuntimeMethod*))KeyCollection__ctor_mFC062DA3DAAFD62BF27D0F3BA56F511B29117D6A_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m7AF97DA41A9EFC656143299750EC272BF166E013 (ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* __this, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D*, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, const RuntimeMethod*))ValueCollection__ctor_m7AF97DA41A9EFC656143299750EC272BF166E013_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, RuntimeObject*, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2*, const RuntimeMethod*))KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_gshared_inline)(__this, method);
}
inline ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_inline (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, const RuntimeMethod* method)
{
	return ((  ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 (*) (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mBEBAE295606EB0AC491B3D8DF66D0F0F8209BFFF (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, RuntimeObject*, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, const RuntimeMethod*))Dictionary_2_Add_mBEBAE295606EB0AC491B3D8DF66D0F0F8209BFFF_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m214849DB755B3CD82BE59B12DC0957421F5782E4 (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m214849DB755B3CD82BE59B12DC0957421F5782E4_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336 (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, const RuntimeMethod*))Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m982AF106BE17B9ED0CE94057606E3DC94F57C66F (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2*, RuntimeObject*, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, const RuntimeMethod*))KeyValuePair_2__ctor_m982AF106BE17B9ED0CE94057606E3DC94F57C66F_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31 (Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF* __this, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF*, Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mDCF81BA6E7AD5E970C1164BD764FD1B09DA54908 (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, const RuntimeMethod*))Dictionary_2_Resize_mDCF81BA6E7AD5E970C1164BD764FD1B09DA54908_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m0B33583AB3945F266499F443DD2BFA66084E6A2F (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m0B33583AB3945F266499F443DD2BFA66084E6A2F_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m6EC3BF5BBE81398B3CD063FFC28872ABA0FF6953 (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, RuntimeObject*, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, const RuntimeMethod*))Dictionary_2_set_Item_m6EC3BF5BBE81398B3CD063FFC28872ABA0FF6953_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m9F770BB8AD4D8B4E14CA6F397A4D7E44661968C5 (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m9F770BB8AD4D8B4E14CA6F397A4D7E44661968C5_gshared)(__this, ___0_key, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1 (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* EqualityComparer_1_CreateComparer_mB947D2528324AFD1CA0EC3E0CC9C05C53116CF79 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mB947D2528324AFD1CA0EC3E0CC9C05C53116CF79_gshared)(method);
}
inline EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_CreateComparer_m931FF926579EC7BABDD76C5453220EAF279A5882 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m931FF926579EC7BABDD76C5453220EAF279A5882_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1__cctor_mEE17B810616726BF0CC28108E4AAF4A20E6E2A2E_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47)), (RuntimeObject*)L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ContainerPropertyBag_1_TryGetProperty_mB09F0E37EC4B1A62AB81E7CBC06DEF9F87C61397_gshared (ContainerPropertyBag_1_tC5EF4ED9E953B090F0F1A7314A738165FB6277B8* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_container, String_t* ___1_name, RuntimeObject** ___2_property, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tF48CBAD539B087D7950015E9ACC37504C4F7F095* L_0 = __this->___m_PropertiesHash;
		String_t* L_1 = ___1_name;
		RuntimeObject** L_2 = ___2_property;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m20B8BF4BA904E10FB4272A01F7437412C13D4E46(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1__ctor_mB9D6850E283177CAED47EE19A760C168ADCCF35C_gshared (ContainerPropertyBag_1_tC5EF4ED9E953B090F0F1A7314A738165FB6277B8* __this, const RuntimeMethod* method) 
{
	{
		List_1_t061B25A9A84AEF321FDDB1F001818B7F63981724* L_0 = (List_1_t061B25A9A84AEF321FDDB1F001818B7F63981724*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		List_1__ctor_mD109B5C7939A6327470D2893F6B8E788CFE99D32(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___m_PropertiesList = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PropertiesList), (void*)L_0);
		Dictionary_2_tF48CBAD539B087D7950015E9ACC37504C4F7F095* L_1 = (Dictionary_2_tF48CBAD539B087D7950015E9ACC37504C4F7F095*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		Dictionary_2__ctor_mBF44F0A2F72B1C865BFE2E037BFCB7C1B10EFE99(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___m_PropertiesHash = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PropertiesHash), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		PropertyBag_1__ctor_mD0545EB6A8F30FF94E8C8CE7AD6A4F0DF32CBE7C((PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1__cctor_mF32B98FF4DDB659506230EDB1395535DE7083E81_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47)), (RuntimeObject*)L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ContainerPropertyBag_1_TryGetProperty_m6DD6A9EE8935880BA0138FC2960B071108C556A4_gshared (ContainerPropertyBag_1_t827E6E22E54C7702E357022F57F04833A6FAF09E* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_container, String_t* ___1_name, RuntimeObject** ___2_property, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t4C7611B1B9A7003542D940F8505DCFF0186D9648* L_0 = __this->___m_PropertiesHash;
		String_t* L_1 = ___1_name;
		RuntimeObject** L_2 = ___2_property;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mCB142B637C6BA4EC38158CCAB573111F0F926FAF(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1__ctor_mD88378C16AD1F8C2A20F3521D02DA3B6811B1FB5_gshared (ContainerPropertyBag_1_t827E6E22E54C7702E357022F57F04833A6FAF09E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9F62F67493B4FDE523DD405881E159817B80CAC2* L_0 = (List_1_t9F62F67493B4FDE523DD405881E159817B80CAC2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		List_1__ctor_mCF0315031D745EBA7C0CDEFDC3A6BC278B13D44B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___m_PropertiesList = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PropertiesList), (void*)L_0);
		Dictionary_2_t4C7611B1B9A7003542D940F8505DCFF0186D9648* L_1 = (Dictionary_2_t4C7611B1B9A7003542D940F8505DCFF0186D9648*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		Dictionary_2__ctor_m126690CDD3B2B23C96B1A67847ED1940DD64A010(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___m_PropertiesHash = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PropertiesHash), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		PropertyBag_1__ctor_mB6FF3A98CDA8C851BC0FC108F95BF41644471439((PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1__cctor_m758379090941AC0A87C3AF46102D70E9ACEC0C1D_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47)), (RuntimeObject*)L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ContainerPropertyBag_1_TryGetProperty_m5717B2C61E21A1C4663B2FEDED95CEF8FEAC3C07_gshared (ContainerPropertyBag_1_t47684299E462BBF7DC930C28B27E8A8008478424* __this, Il2CppFullySharedGenericAny* ___0_container, String_t* ___1_name, RuntimeObject** ___2_property, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879* L_0 = __this->___m_PropertiesHash;
		String_t* L_1 = ___1_name;
		RuntimeObject** L_2 = ___2_property;
		NullCheck(L_0);
		bool L_3;
		L_3 = InvokerFuncInvoker2< bool, String_t*, RuntimeObject** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerPropertyBag_1__ctor_m71147701A7053D1EECFB4581A7119F26B3822E14_gshared (ContainerPropertyBag_1_t47684299E462BBF7DC930C28B27E8A8008478424* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4* L_0 = (List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___m_PropertiesList = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PropertiesList), (void*)L_0);
		Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879* L_1 = (Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___m_PropertiesHash = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PropertiesHash), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		((  void (*) (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
void Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_Multicast(Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, Il2CppFullySharedGenericAny ___0_input, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* currentDelegate = reinterpret_cast<Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_input, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_OpenStaticInvoker(Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, Il2CppFullySharedGenericAny ___0_input, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_input, il2cppRetVal);
}
void Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_ClosedStaticInvoker(Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, Il2CppFullySharedGenericAny ___0_input, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_input, il2cppRetVal);
}
void Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_ClosedInstInvoker(Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, Il2CppFullySharedGenericAny ___0_input, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_input, il2cppRetVal);
}
void Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_OpenInstInvoker(Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, Il2CppFullySharedGenericAny ___0_input, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_input);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_input, il2cppRetVal);
}
void Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_OpenVirtualInvoker(Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, Il2CppFullySharedGenericAny ___0_input, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_input);
	VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_input, il2cppRetVal);
}
void Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_OpenInterfaceInvoker(Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, Il2CppFullySharedGenericAny ___0_input, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_input);
	InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_input, il2cppRetVal);
}
void Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_OpenGenericVirtualInvoker(Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, Il2CppFullySharedGenericAny ___0_input, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_input);
	GenericVirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_input, il2cppRetVal);
}
void Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_OpenGenericInterfaceInvoker(Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, Il2CppFullySharedGenericAny ___0_input, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_input);
	GenericInterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_input, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2__ctor_m6AC601790CBA05AA79669611421A69A763F35DAD_gshared (Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_gshared (Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, Il2CppFullySharedGenericAny ___0_input, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_input, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_Multicast(CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1* currentDelegate = reinterpret_cast<CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_key, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
RuntimeObject* CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_OpenInst(CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	NullCheck(___0_key);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_key, method);
}
RuntimeObject* CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_OpenStatic(CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_key, method);
}
RuntimeObject* CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_OpenVirtual(CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	NullCheck(___0_key);
	return VirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_key);
}
RuntimeObject* CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_OpenInterface(CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	NullCheck(___0_key);
	return InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_key);
}
RuntimeObject* CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_OpenGenericVirtual(CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	NullCheck(___0_key);
	return GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(method, ___0_key);
}
RuntimeObject* CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_OpenGenericInterface(CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	NullCheck(___0_key);
	return GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(method, ___0_key);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateValueCallback__ctor_mDBD11BE5B28EC0300CF9FE05ADB688420B83703A_gshared (CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateValueCallback_Invoke_mDCA362F0B946C52272C5956DA35F53B8DC49BA83_gshared (CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_key, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultComparer_1_Equals_m1F20F6C75C2B1F09A3CDF201579A52C44E2CAFD2_gshared (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_1 = ___0_x;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		V_0 = (RuntimeObject*)L_3;
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6 = ___1_y;
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, L_6);
		return L_7;
	}

IL_0029:
	{
		int32_t L_8 = ___0_x;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_9);
		int32_t L_11 = ___1_y;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_12);
		bool L_14;
		L_14 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_10, L_13);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_GetHashCode_m3608055BEFF92A8B1E02C3960D5EC0DB6D0EAA4D_gshared (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_obj;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E_gshared (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultComparer_1_Equals_m38EFDD8C102634417E24C322106E302D76D92AF2_gshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_11 = L_0;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_0012:
	{
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_5);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		NullCheck(L_8);
		bool L_10;
		L_10 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_9: *(void**)L_9));
		return L_10;
	}

IL_0029:
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_11);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_13);
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_12, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_GetHashCode_m763329D490F675E16A666B61F387D5F323EEC697_gshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_obj : &___0_obj), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_gshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DelegateProperty_2_get_Name_mEED824A0D241861F8FC2831C7A27631DDE0459B0_gshared (DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateProperty_2__ctor_mCC0F3ACE346BA3B05952715FFDB8B276B2F0B6FA_gshared (DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* __this, String_t* ___0_name, PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* ___1_getter, PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* ___2_setter, const RuntimeMethod* method) 
{
	PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* G_B2_0 = NULL;
	DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* G_B2_1 = NULL;
	PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* G_B1_0 = NULL;
	DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* G_B1_1 = NULL;
	{
		((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		String_t* L_0 = ___0_name;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* L_1 = ___1_getter;
		PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0020;
		}
		G_B1_0 = L_2;
		G_B1_1 = __this;
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A57163F65B0EE8A44DC4359CBCD332A446966AA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_Getter = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_Getter), (void*)G_B2_0);
		PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* L_4 = ___2_setter;
		__this->___m_Setter = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Setter), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mED6D481F16E8597DF1F8FD3F1A173ED8F0D4D8E9_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* L_0 = ___0_dictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_3 = __this->____enumerator;
		NullCheck(L_3);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_4;
		L_4 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		V_0 = L_4;
		RuntimeObject* L_5;
		L_5 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m8D259867AB5E2DC9BB7842AF3E12D610D928B673_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m7EC80AD0D446500C9824A6B681B418A5D0684717_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m7501DF54C4E255F50E90B671CD323B1CD34C65C8_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mB31588BC8CD43AFACC8AA4951D86F21B677419CB_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mE63FC46E53E46535C7DD59172E65E42BD570D5F3_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_0 = ___0_dictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m6EB9062A7B59C89B18B6B61214B707BE4AA44086_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_2);
		RuntimeObject* L_4 = __this->____enumerator;
		NullCheck(L_4);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m0990C99F94EA95C5392CA5485B4BFD344BAED6FE_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_mD790494FF5E50257030CC045B516A70513EE98A8_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m84A050320869FF83584304FF56D3BA05368095F2_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mCD670B5AE8886409051790844BF74853977F5846_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictionaryPropertyBag_2_get_InstantiationKind_m641573CD1323CD15A7F099323BA1B2546F063182_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPropertyBag_2_Instantiate_m7778199CDF045586687AB5A9F377D8FB3786C1E0_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC25FF6793652922985BFAA4DC8F11A4B0B090CF8_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA647361FB5882A25C765F596760030CB84824C97_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF092F25D416129BCC755E245CEC88345A7E17540_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_5;
		L_5 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E17FF0178C889BBACDC95DECEB4EF50BB31F65F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* Dictionary_2_get_Keys_m48AD1CD8EB0B41F2D58FDFA10B92A85DB9933FF2_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_1 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* Dictionary_2_get_Values_mC54912268568667F725754EBE2356518610AE832_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_1 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m04A4017ED4A293A5D3A2164CBCD6A6CB8BCCA116_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4EEACDC46AD23A0E7FA39004DBEDA017B8687FAF_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mA39A0BE52118902D1EC9ED983321B0D8B415DF24_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4DB7A9F0B32B7B8DD0D41B3F6611E7B03B9436CA_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9;
		L_9 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m07051E2711DEDC818DC462838A3D89CDD0959D9A_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2E1A55234F27A4F98C337C2202E8241F8E42ED04_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 Dictionary_2_GetEnumerator_m1C2674F51BACC5E23084DA0374A70B0EBB20CB1F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF90BAD88410B5EEFD79B8D5A86638D03C61B08AC_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE2783EE614A6743CAC1102BE510AF8978CE8C547_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_6;
		L_6 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = (KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)(KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_15 = V_0;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_19;
		L_19 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_10 = NULL;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_24;
		L_24 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_35 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_61 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_94 = V_10;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item2), (void*)NULL);
		#endif
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m40CC8AF5495433361FFFBAE6BF3EB27D6A9C9E05_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_21;
		L_21 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_24;
		L_24 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = __this->____entries;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_17 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_20;
		L_20 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_21 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = L_21->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_25 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_26 = L_25->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_41 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_42 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_00ff:
	{
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m65316B5BBBCA1E7FA03561A97E22F2860B92FDF5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mCFE3B0F6F63ADFF26FB4623C8EAB4B8920D257EB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m08F8980BA41D175D9D5755E520ECEC499FAECF65_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8B6070F6B012031518CAF9D85C4AA0880199C5E9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3F00D474C864259E96AE8A127C47D3AA12CBC787_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m904B76BE6F9CA0FC90A3E300E03FACB2CD5C8BDE_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m3CD4CB6A0B13802073E18278194523E52B283A7B_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m106E312F89A7FF2E8CF9BF88DA09FD2AD89E9652_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m578F26947EC223AF042037DF6D88F725A17C1CD4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m36BF55AAF072CC8471B04911DF96474EA3BC8825_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mAA97B6F0E3AA42F45BBCE847BCADC2D626F21112_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE7E563DCFA8A83D43D1077B358C6DC613F78738B_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m224CE4C47236A2296F3AC732E6F20FC1EEB56898_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m662792378721ABA8BB76A2704111F2862387175F_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* Dictionary_2_get_Keys_m0F5F6FCFB36ED340EC91E6064534CEE0411CEF53_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* L_1 = (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m9540351AE212B2359AE414632644FA8EA843D723(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* L_1 = (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m07721547B40DA38D2CBD65AFC172191C065F1C20(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m406FC1F8D4F8D404D52A8DCBDACC3366B07C1023_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m799CB7072EA86BBAA968788165BED53504B05B8C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mFA18DA1E464054398917BAD800DECFD0FA002759_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m999D98061B8048248A312862400275D718C22535_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mB96279E2BE4AD812C71C56B4449C6B42CB58B263_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mF694E1D43809C684E338C5FB069B03E8E71092D1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_14 = (KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265*)(KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_15 = V_0;
		Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_5 = (EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1*)(EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m46FE126ECB4B047C638D865B4821B569EF0EA4F2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_3 = (EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1*)(EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_5 = __this->____entries;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m7D2B6F86121649A4FE28F3AE9568AF7353DF24E5_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mF948AA30BB792C629F41AFB2C581CCF4E8F7086C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8D83D313D4C6EB9A313BBDA060C4DFA309F045A8_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m2ECB514FE75B3BEF985FC2BDA7DE3FDBE8690152_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m897C68EA5BF762F3E2ECAC5E6EDEA8B96E94E55D_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mCFF18DD5F9F35EAF0625404EBE5D0E15AFEEBCEB_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m6986BDCC75CBA86C7BB96A0BD0FF94D151E5058A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m219273E1F514BD2B393DC52D036E1996845D640B_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m134FCAE9D84D25C828DA86E9F2B3AF6D3545EEA4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mC788B0151338EF5685E1E9B1F5B40DF4E6B3AF23_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m0AB8494896BAD8F82300D55D5E2A7A11BB2031A2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m22B5D26D6B82EC78F418C50A59E02E0B54118004_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mBEDF2EFC47C4124A679AEFED8F6969A6E454A562(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m638DEE58C87A4BAB9A9D38EA4A5FCD169621010F_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mBEDF2EFC47C4124A679AEFED8F6969A6E454A562(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m40340C030811DE18B709EB1D2D1D7FF20CBCCEDB_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mBEDF2EFC47C4124A679AEFED8F6969A6E454A562(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBEDF2EFC47C4124A679AEFED8F6969A6E454A562_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m47941B375426BDA8A80EB5FF1CAA0D6427E19A0E(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m281B6BC04B746936A130B17E831AF59D4D2A4CF6_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m716B0D4D6AEDFB22C41C3544F73DEC87A405352D_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0B80132646C5C9D27AC9F6556074261A8EEDC377* Dictionary_2_get_Keys_m3F7EF162D99789C70BEB7A696BACE10351F622AF_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t0B80132646C5C9D27AC9F6556074261A8EEDC377* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t0B80132646C5C9D27AC9F6556074261A8EEDC377* L_1 = (KeyCollection_t0B80132646C5C9D27AC9F6556074261A8EEDC377*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m68CE6673F4891FC20DD81BFBA18C555C8266DA30(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t0B80132646C5C9D27AC9F6556074261A8EEDC377* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t3345D8F37DA4C2468E25B22F8CDBC378D69D4063* Dictionary_2_get_Values_m6DDD08F1F6DBF11190594F2078DE3FE9F31AE16A_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t3345D8F37DA4C2468E25B22F8CDBC378D69D4063* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t3345D8F37DA4C2468E25B22F8CDBC378D69D4063* L_1 = (ValueCollection_t3345D8F37DA4C2468E25B22F8CDBC378D69D4063*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m3ABDC48AC0266DD9D8E20A741FEBEC6D90251E5A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t3345D8F37DA4C2468E25B22F8CDBC378D69D4063* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 Dictionary_2_get_Item_mD333A68852EF563413CBC937128D42B784A31B7E_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC23A71C5BA0AEC47BC86B17BFEC04998141737F2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074));
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mBE9CE8577340B726C10C83374A3AD899CA4BCAA2_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m453F28C3D7CF69B41E9BBC9BC7627C92963B64D6(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m4CE6B03EBCD8773EEE2303F5903920033E53AA05_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m453F28C3D7CF69B41E9BBC9BC7627C92963B64D6(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m789FAC3349FFE874ED35E819A6F65CD84AF04B3D_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m3E2E84761480CE8DB944F3175F691C3CB14979A3_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_1;
		L_1 = KeyValuePair_2_get_Value_mCC6E81580C7CA5794FAA2F7364AD94C60188CCC2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_m4CE6B03EBCD8773EEE2303F5903920033E53AA05(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m7D613153E3BD385DBE2886341F66E0B3D7FF8A76_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m3E2E84761480CE8DB944F3175F691C3CB14979A3_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC23A71C5BA0AEC47BC86B17BFEC04998141737F2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* L_3;
		L_3 = EqualityComparer_1_get_Default_m4163A68CE3B1740C02510A744E4B925CDC6DA2F9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_7;
		L_7 = KeyValuePair_2_get_Value_mCC6E81580C7CA5794FAA2F7364AD94C60188CCC2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m728D657B2917354AE74E7424668FDE9D7A0A6BAE_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m3E2E84761480CE8DB944F3175F691C3CB14979A3_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC23A71C5BA0AEC47BC86B17BFEC04998141737F2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* L_3;
		L_3 = EqualityComparer_1_get_Default_m4163A68CE3B1740C02510A744E4B925CDC6DA2F9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_7;
		L_7 = KeyValuePair_2_get_Value_mCC6E81580C7CA5794FAA2F7364AD94C60188CCC2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m3E2E84761480CE8DB944F3175F691C3CB14979A3_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m2FD4607297A3F5FF812F7593B4EFC0C3638829E9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m14349C01DFC78D8C7E6703F6061E75EEE69D169F_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m66A7B9CDAF8764FCFE4DC5BEFF32ECF8E652DE7B_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC23A71C5BA0AEC47BC86B17BFEC04998141737F2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mA13B45DE894E2DAA0E2434CDC6475D7F8E2DAF3A_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* V_0 = NULL;
	int32_t V_1 = 0;
	CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* L_6;
		L_6 = EqualityComparer_1_get_Default_m4163A68CE3B1740C02510A744E4B925CDC6DA2F9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mDDAB12BE2A8404D5D6F1C91A9BC7C63568244976_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m716B0D4D6AEDFB22C41C3544F73DEC87A405352D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m748495E7F981BB3D1B0CFCA4950960987545A004((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4BECBD7EA97C62C76B537F281DA0A091F2DF43A4 Dictionary_2_GetEnumerator_m01DE1773FF6BB85492DE35B20EDFA53D266CF68C_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4BECBD7EA97C62C76B537F281DA0A091F2DF43A4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m098D43B30CB1AB1B3086C6C7F236777962710048((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3912729BAE20B3511016AE857DE2455395210E7B_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4BECBD7EA97C62C76B537F281DA0A091F2DF43A4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m098D43B30CB1AB1B3086C6C7F236777962710048((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t4BECBD7EA97C62C76B537F281DA0A091F2DF43A4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mC40466098545464E84D916F0C5855AB3CB5153EB_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m716B0D4D6AEDFB22C41C3544F73DEC87A405352D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_14 = (KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924*)(KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_15 = V_0;
		Dictionary_2_CopyTo_mDDAB12BE2A8404D5D6F1C91A9BC7C63568244976(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mC23A71C5BA0AEC47BC86B17BFEC04998141737F2_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m47941B375426BDA8A80EB5FF1CAA0D6427E19A0E_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_5 = (EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658*)(EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m453F28C3D7CF69B41E9BBC9BC7627C92963B64D6_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m47941B375426BDA8A80EB5FF1CAA0D6427E19A0E(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___category), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___entry), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___sprite), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___category), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___entry), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___sprite), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mE6DCCE786144A4BC74585E5D38CC7550DBFEDE97(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_96 = V_10;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___category), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___entry), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___sprite), (void*)NULL);
		#endif
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m6600140D77E99F2559F785F2C3A12473805AF951_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m47941B375426BDA8A80EB5FF1CAA0D6427E19A0E(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m3E2E84761480CE8DB944F3175F691C3CB14979A3_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m3E2E84761480CE8DB944F3175F691C3CB14979A3_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_27;
		L_27 = KeyValuePair_2_get_Value_mCC6E81580C7CA5794FAA2F7364AD94C60188CCC2_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_m4CE6B03EBCD8773EEE2303F5903920033E53AA05(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE6DCCE786144A4BC74585E5D38CC7550DBFEDE97_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m7F2504F803DE1A0858B187E38F1AF5B061099BA6(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7F2504F803DE1A0858B187E38F1AF5B061099BA6_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_3 = (EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658*)(EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_5 = __this->____entries;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2FD4607297A3F5FF812F7593B4EFC0C3638829E9_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_41 = V_4;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074* L_42 = (CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074*)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t4F0B35124785FD59A34054EADD56FBA4EAA12AEC* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4286275C6EA9242CA754BCE64D2636928FF81D9E_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mC23A71C5BA0AEC47BC86B17BFEC04998141737F2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074* L_3 = ___1_value;
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074*)L_3)->___category), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074*)L_3)->___entry), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074*)L_3)->___sprite), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m0198FCE1FEBD384A8551A2D985DD832EF66577F0_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_key, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m453F28C3D7CF69B41E9BBC9BC7627C92963B64D6(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mA34C2E65D979BEF66406D278864D61ED4697E1F4_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m94BDDDE7E27AE61A87488F40B9A4966D85F67A51_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mDDAB12BE2A8404D5D6F1C91A9BC7C63568244976(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mE518E7BE3E80181CBCD56DE99A07B5D3A8B7A276_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m716B0D4D6AEDFB22C41C3544F73DEC87A405352D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7FF95EDED5182207947B14C35DCF1A30C07E4924* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mDDAB12BE2A8404D5D6F1C91A9BC7C63568244976(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m748495E7F981BB3D1B0CFCA4950960987545A004((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2322BBCF829DE3DE22D460F75BCE428FDDABC8CA_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4BECBD7EA97C62C76B537F281DA0A091F2DF43A4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m098D43B30CB1AB1B3086C6C7F236777962710048((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t4BECBD7EA97C62C76B537F281DA0A091F2DF43A4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m0CA4D9ACFE7BCDE3E61DAAB3B177F4BAC92FEF42_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_m47941B375426BDA8A80EB5FF1CAA0D6427E19A0E(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m7F2504F803DE1A0858B187E38F1AF5B061099BA6(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1DFBFCDA27017C728B29438ED0AF2C0DA72A7C83_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m604E3C53C12178730F3BD0EE789B4C37AF8AF341_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m8F13DA5C7409F90392131343D9E38B19274CA1E3(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mC23A71C5BA0AEC47BC86B17BFEC04998141737F2(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t727665A2CC38CE638F8690FEB5F840BD16C70658* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mE19B4B6A5F2FE2E9CDF3277DE434F9448D206D3E_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_m8B7C55656AD7F370CA55E403269FCE079A9EE8E0(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mBE9CE8577340B726C10C83374A3AD899CA4BCAA2(__this, L_3, ((*(CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074*)((CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074*)(CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m8F13DA5C7409F90392131343D9E38B19274CA1E3_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m2BCD6826E99F5B764E9668CFB496F529222C0EA3_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m8F13DA5C7409F90392131343D9E38B19274CA1E3(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m66A7B9CDAF8764FCFE4DC5BEFF32ECF8E652DE7B(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m343564C59BBB8E81477D97E755D91FC0B324B4BE_gshared (Dictionary_2_t4661854F33069AF8662C1B28E9D53EC275B7F2AC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4BECBD7EA97C62C76B537F281DA0A091F2DF43A4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m098D43B30CB1AB1B3086C6C7F236777962710048((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t4BECBD7EA97C62C76B537F281DA0A091F2DF43A4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m129B1E1EDDABF00B402C93841CCA7169B8963D83_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4C802F609D63FAB6D65E2A9A52080657CCD56319_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3593B5DBC711A0FCB955C2786B427A8D474069DE_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* Dictionary_2_get_Keys_m241B452A1A7DDE3C7E10D446BE86FFD25EDD160E_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* L_1 = (KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mD6272217B2390F156AEAD333CFBC0680AE18C348(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* Dictionary_2_get_Values_mD1C189E698AD5895BB08AFA5C2A6905A4E1B0A66_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* L_1 = (ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mC90880ED6157A668A5F1AB911945610274CEEA97(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4E28149BC8AFDB88F10464CBFBCE3FB9E2323088_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mBD8ADC2D33AA81028075C8ABD0213C2D8E0B8391_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m54437A4CCD91CF31DD0238EC6112ADD026B69278_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m931E25EF2557C3A386E4B9DC8D8212B7D9D3F5AE_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB2CC6772052450C67355758932BDAB486A74928C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		int32_t L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mD4B5AD912DE40BAACCC9A814640E4E3386E51BA8((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF Dictionary_2_GetEnumerator_mC54C8649C774363946FC6B7F1562CDE5D2550063_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m806F2D64F1E2536E91DF2C2348DCEB6DC3817815_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m9521A5289388A31D905B7C219BFDFEFE8C7FA59C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_14 = (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)(KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_15 = V_0;
		Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key;
		RuntimeObject* L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key;
		RuntimeObject* L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_5 = (EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75*)(EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		RuntimeObject* L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key;
		RuntimeObject* L_53 = ___0_key;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		int32_t L_58 = ___1_value;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = ((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key;
		RuntimeObject* L_77 = ___0_key;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		int32_t L_82 = ___1_value;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = __this->____freeCount;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = __this->____freeList;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = __this->____count;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mDC4C0DDB962EBDA7258647BDBC7B568948DD84E5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_99 = __this->____entries;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = __this->____buckets;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->____buckets;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_108 = V_10;
		int32_t L_109 = L_108->___next;
		__this->____freeList = L_109;
	}

IL_028a:
	{
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode = L_111;
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key), (void*)L_116);
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_117 = V_10;
		int32_t L_118 = ___1_value;
		L_117->___value = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mDB6CB12E2FF9616253C69974F918D4E17B371603_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDC4C0DDB962EBDA7258647BDBC7B568948DD84E5_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m3EC90D494DFBD871587E0A4F4D8D4E982BCB9F75(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3EC90D494DFBD871587E0A4F4D8D4E982BCB9F75_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_3 = (EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75*)(EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_5 = __this->____entries;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_21 = V_4;
		RuntimeObject* L_22 = L_21->___key;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_25 = V_4;
		RuntimeObject* L_26 = L_25->___key;
		RuntimeObject* L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mF9B0463373910BAF21DB075A3A9788E5A7E7F1D2_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8BAD262739BDF6B9D5E637ACF5BE09E1750CAF27(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m822120EBF4CEA552B358CE8BDDE658998A8F0F4F_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m82F209E536CEA351D9587A082AB0E1BE9AE91615_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mAE5BE355FA6D67BDD7626904889FED100F63DC77_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mEE80B960C3B902E5FB4D2458CEB323B68A954926(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mEFBCCFA46BFC70F908C19BF58E6D16F3288607DF(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RuntimeObject* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mD4B5AD912DE40BAACCC9A814640E4E3386E51BA8((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31ACAE4C1654101C2A8E9316648AAA831E1D455B_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mBE7EDA955ABDF11871D46C35531BD6E3BD6E6884_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_mC39F51856A2FCB002B71F68D2F67A8F6BEBD112B(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m3EC90D494DFBD871587E0A4F4D8D4E982BCB9F75(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m95FD271A0350EB27F17D154FF7127D9A8AE7B70A_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m9D8805C9CE6B7CCEB3065B27AA7461389A1E26ED_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m68D71E2AAD0AEC59B860D70AAAC410E5E226F1C7(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mDC7FDB162FA64473E2AB7C02F37D585BE12B99DB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
		}
		try
		{
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mD4BAF9714BD727CB539A8FD81816329B1CC16910_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m74B7AAB4C5806B096CC78BBB9C69EF6E4BFAE571(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1087B74B4FF5004CBB6CC864FF1C87B6DB138505(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m112DEE1DF5E8916322EFECA1F863E2734F2518DE_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4BE90A5CD5CEA288887B83F5E4F7D73EB35F9886((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m126C1BEA6D7624D5BA6F989BE16D8C725B247892_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* L_1 = (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mB09A4A925402CEC82C11FFE407E6F4096790D7DC(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_1 = (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m4EB5F9B4490E4588B314C97B3BC0CD8E9432D79A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE4F45446B73707AD95FBDC32A0260AAF88A1F6BB_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mAE8B115E339245F99515A41E4B57996CF2F811C4_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mD258677B8F2C8D8AF2700AE5336742B2D81CE6F6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m51A7764AD04D34D0B2CDB01F960FA1FEBCF6B562_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8C1D7A88B86E46C4CB723680E3B78A85D9D8148F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m96D7426A4F2472ED0C33F146CB6D106E0C01D39F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_14 = (KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)(KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_15 = V_0;
		Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key;
		RuntimeObject* L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key;
		RuntimeObject* L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_5 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)(EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		RuntimeObject* L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key;
		RuntimeObject* L_53 = ___0_key;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		RuntimeObject* L_58 = ___1_value;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value), (void*)L_58);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = ((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key;
		RuntimeObject* L_77 = ___0_key;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		RuntimeObject* L_82 = ___1_value;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value), (void*)L_82);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = __this->____freeCount;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = __this->____freeList;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = __this->____count;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mA6C088D61E2C3298854B5E200885EE8C83DC7FCD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_99 = __this->____entries;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = __this->____buckets;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->____buckets;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_108 = V_10;
		int32_t L_109 = L_108->___next;
		__this->____freeList = L_109;
	}

IL_028a:
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode = L_111;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key), (void*)L_116);
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_117 = V_10;
		RuntimeObject* L_118 = ___1_value;
		L_117->___value = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&L_117->___value), (void*)L_118);
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m3CB80CA90C241085E7F7908E67AB13961F34CAE7_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA6C088D61E2C3298854B5E200885EE8C83DC7FCD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mA59B4C46D3FD1E0488449B2A24B4E8FA720B1A17(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA59B4C46D3FD1E0488449B2A24B4E8FA720B1A17_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_3 = (EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)(EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_5 = __this->____entries;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_21 = V_4;
		RuntimeObject* L_22 = L_21->___key;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_25 = V_4;
		RuntimeObject* L_26 = L_25->___key;
		RuntimeObject* L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
	}
	{
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m54FDB7A63C526CA69C4983FDF3295334B93A338B_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8AC342129E60FB993AF5F8521D0C1F8D078E4F61(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m0D26498B424A016B4A5875084457E7986A712B4F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m90DC588CF96EBCD9F7A5E89F7528F5E042ABB5AC_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3BC0E4B74FE20B4CEE22D60CEE7AAF0DC5DC9775_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mE5E1D7345A65B2BA11AA747A2A83C94D83835E00(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		RuntimeObject* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_31;
		memset((&L_31), 0, sizeof(L_31));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_31), L_27, L_30, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_31);
	}

IL_00b5:
	{
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b9:
	{
		int32_t L_33 = V_3;
		int32_t L_34 = __this->____count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_35 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_35, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = V_4;
		if (L_36)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_37 = __this->____count;
			V_5 = L_37;
			EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_38 = __this->____entries;
			V_6 = L_38;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_39 = V_6;
			int32_t L_40 = V_7;
			NullCheck(L_39);
			int32_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___hashCode;
			if ((((int32_t)L_41) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = V_4;
			int32_t L_43 = ___1_index;
			int32_t L_44 = L_43;
			___1_index = ((int32_t)il2cpp_codegen_add(L_44, 1));
			EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_45 = V_6;
			int32_t L_46 = V_7;
			NullCheck(L_45);
			RuntimeObject* L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___key;
			EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_48 = V_6;
			int32_t L_49 = V_7;
			NullCheck(L_48);
			RuntimeObject* L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value;
			KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_51;
			memset((&L_51), 0, sizeof(L_51));
			KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950((&L_51), L_47, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_52 = L_51;
			RuntimeObject* L_53 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_52);
			NullCheck(L_42);
			ArrayElementTypeCheck (L_42, L_53);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (RuntimeObject*)L_53);
		}

IL_012a_1:
		{
			int32_t L_54 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		}

IL_0130_1:
		{
			int32_t L_55 = V_7;
			int32_t L_56 = V_5;
			if ((((int32_t)L_55) < ((int32_t)L_56)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_57 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mB9C97E1EB106EAA29ACF7225F0D80A1C87AA5F0B_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m151CD39687FF49A4A3EBFE2865E4159D1B939328_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_m8C8AD88CD59FD99C812609BBFB9B3A263C210BF3(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_mA59B4C46D3FD1E0488449B2A24B4E8FA720B1A17(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m453A883BEF50A66C1D00181343ACCAC30E23E365_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m3EF27E31739B326F7BE58F06F95EB5AA9F2A717E_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m8CC2A0AA639DCA8E5AB97A0911A46ACB1154C14A(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m1F1C639C7C63FFB75DAADB5F203904BF07E652F1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
		}
		try
		{
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m6787D3BECEBC5FA16E5A7603242C631E433A9A33_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m1352264619A59DDDDED2B786BB60912F4CACCEE8(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m074CBF65EED25CAED50B19050442B3FDAB277E0F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6292961FFE75CF7AC7700A710A5F01DC22696D54((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBE17333B1C48FE7F968D6CF9EB01C9183054595F_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9CBE14A49888845213B3F6C17B7E5B210143C84F_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD043504617827B8A1FAD9AA2F530520F999A5A0_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF327E2A6657566F6A7D2632C9541A577A636E0DD_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m832A6E75C3BE6AF73F1A34D0510389EEF3A8FA1C_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* Dictionary_2_get_Keys_m26F83F0E148FAB8681081D5B4B8545EDC3FB9EE7_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* L_1 = (KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mFC062DA3DAAFD62BF27D0F3BA56F511B29117D6A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t141E0F96F2EECCDFE0BCCD45211AB72B4A36F58F* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* Dictionary_2_get_Values_m1A3598C9A02AEFD65277F06642014AB76DE6195C_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* L_1 = (ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m7AF97DA41A9EFC656143299750EC272BF166E013(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t530710F0A8D6B3B71533B3739F84F42EDD3EEC3D* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 Dictionary_2_get_Item_m7D0248FA1FA40F8501CC0D73B2054BF0630EB04B_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6EC3BF5BBE81398B3CD063FFC28872ABA0FF6953_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBEBAE295606EB0AC491B3D8DF66D0F0F8209BFFF_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m5D524420DB278E442A1000A7EEA4B538159A7E15_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_1;
		L_1 = KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mBEBAE295606EB0AC491B3D8DF66D0F0F8209BFFF(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26813D745F0503C0FE43EA74DE116BB836AE482A_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_3;
		L_3 = EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_7;
		L_7 = KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mFADB4067F38965E35555E0503829A7554A85440D_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_3;
		L_3 = EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_7;
		L_7 = KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m214849DB755B3CD82BE59B12DC0957421F5782E4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m4831413CE174D6BAC94CFBD3B146D7DAA69013F9_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9F770BB8AD4D8B4E14CA6F397A4D7E44661968C5_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mDD8FECCBE5B060773A854D97E9C5929A57FD680A_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_0 = NULL;
	int32_t V_1 = 0;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_6;
		L_6 = EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m982AF106BE17B9ED0CE94057606E3DC94F57C66F((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF Dictionary_2_GetEnumerator_m4A8EEC82C62D128452093D49CAACBC23BA031556_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m6F33B341FC47D849AD607AA7A1DDB0EF787C2445_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m644FE02002DFF4803F594F48E91AB6BE83748F7B_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_14 = (KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389*)(KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_15 = V_0;
		Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key;
		RuntimeObject* L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key;
		RuntimeObject* L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_5 = (EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF*)(EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		RuntimeObject* L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->____value), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key;
		RuntimeObject* L_53 = ___0_key;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_58 = ___1_value;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value = L_58;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value))->____value), (void*)NULL);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = ((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key;
		RuntimeObject* L_77 = ___0_key;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_82 = ___1_value;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value = L_82;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value))->____value), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = __this->____freeCount;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = __this->____freeList;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = __this->____count;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mDCF81BA6E7AD5E970C1164BD764FD1B09DA54908(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_99 = __this->____entries;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = __this->____buckets;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->____buckets;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_108 = V_10;
		int32_t L_109 = L_108->___next;
		__this->____freeList = L_109;
	}

IL_028a:
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode = L_111;
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key), (void*)L_116);
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_117 = V_10;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_118 = ___1_value;
		L_117->___value = L_118;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_117->___value))->____value), (void*)NULL);
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m6ACF2DDEFD07260349912EDA9C8AF38A242CAC75_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_27;
		L_27 = KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mBEBAE295606EB0AC491B3D8DF66D0F0F8209BFFF(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDCF81BA6E7AD5E970C1164BD764FD1B09DA54908_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m0B33583AB3945F266499F443DD2BFA66084E6A2F(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0B33583AB3945F266499F443DD2BFA66084E6A2F_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_3 = (EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF*)(EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_5 = __this->____entries;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m214849DB755B3CD82BE59B12DC0957421F5782E4_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_21 = V_4;
		RuntimeObject* L_22 = L_21->___key;
		RuntimeObject* L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_25 = V_4;
		RuntimeObject* L_26 = L_25->___key;
		RuntimeObject* L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
	}
	{
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_43 = V_4;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* L_44 = (ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m2D7A760DFE4E0632E2578B33087A0A89BCF30556_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* L_3 = ___1_value;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)L_3)->____value), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6A5BB3092021AF135E5BBF15EC098836B4220FBA_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA877E9F2724470175BF5E244978CE1C5FF9DE16D(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mD9A7ADDC1ED3A3AA51F4C6D981709E8EF988A219_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m56372296CBBE378E74FF50593F79873E06CDA300_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m42E349CBCC79855BB0D1BDB0B7767B41C76DE389_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m09F5D830600036283BE79E8E817261A680DE8336(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tA00ECC9C03F3BB4D70029A9B782A1847210F9389* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m43B32D6BF8FFC3AB12A034286DF5D53E1F1E285C(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RuntimeObject* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m982AF106BE17B9ED0CE94057606E3DC94F57C66F((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m601DE8A09A32C65728B209DB5E4AF41AB9A68CE8_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m464388E345C6CD4A6C8BB3409CEB2BC2566C7B48_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_m9FDAF89B9F36D28947DE20D8A08B1EC1870674CE(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m0B33583AB3945F266499F443DD2BFA66084E6A2F(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mA01613DF43A11362180CDAC68F0C0D04E4703F59_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m778CEB3C9372E7A834A2A9483DF76C6575A45C30_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m4393ABBCC79122ADA7565D72D6803380514CBE2E(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tC9C2D325E1F62D162A323618A264B921450113BF* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mB629283720A0DF3F52EFE2F193D686463484B3EC_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
		}
		try
		{
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m6EC3BF5BBE81398B3CD063FFC28872ABA0FF6953(__this, L_3, ((*(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)((ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mE43A9CBF68279E9F7B16EE89FAE36E223DEC8192_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mE011D3CA1F277C14519A681E846DD28F7F0C2076(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m9F770BB8AD4D8B4E14CA6F397A4D7E44661968C5(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mFF3ED3153067D513E90F4AC1242525F5115F7F32_gshared (Dictionary_2_t61287F587BEBE6E14046F1E7BF0DEFBD6A5F503E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m962BC1F82D75DECC72006F3CD7CF84629D660E31((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tBA7AAF43F891354915750F2F82541E1BC34AE3BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA25D4973BD5467E89BE578B96BE246DE27E51638_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = L_0;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_1, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_6);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE4548F09815541C77E85AB57B86142B7D29C0A2F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8A8F4B72BD2ED0C4171B69CDDB4F9201FAD62FB5_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m47F4CC635C14FD742D41145FEAECD47FF3EC7910_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_9);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)), il2cpp_rgctx_method(method->klass->rgctx_data, 26), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_9: *(void**)L_9));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_13 = L_1;
	const Il2CppFullySharedGenericAny L_21 = L_1;
	const Il2CppFullySharedGenericAny L_34 = L_1;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_35 = L_22;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_2, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_3 = 0;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_0 = __this->____entries;
		V_0 = L_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_1);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_8);
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->____count;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_13);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_18;
		L_18 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_18);
		bool L_23;
		L_23 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_22: *(void**)L_22));
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_008b:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = __this->____count;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_4 = L_27;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_31 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_31);
		bool L_36;
		L_36 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_35: *(void**)L_35));
		if (!L_36)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00d1:
	{
		int32_t L_38 = V_5;
		int32_t L_39 = __this->____count;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_22 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		memset(L_22, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_20, L_16, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_21, L_19, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_19), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_11);
		il2cpp_codegen_memcpy((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_22, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 17), (void**)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEB946BF1ED512ADDA66E4AC30F34573170773B8E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m3683CF1DF17605C3CBFEB3DEC2D3C7D619DB1C06_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_6;
		L_6 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_15 = V_0;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_25 = L_0;
	const Il2CppFullySharedGenericAny L_44 = L_0;
	const Il2CppFullySharedGenericAny L_54 = L_0;
	const Il2CppFullySharedGenericAny L_70 = L_0;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_45 = L_26;
	const Il2CppFullySharedGenericAny L_71 = L_26;
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_6, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		V_1 = L_2;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		V_2 = L_3;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_5 = __this->____comparer;
		V_4 = L_5;
		RuntimeObject* L_6 = V_4;
		if (L_6)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_8;
		L_8 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 11), il2cpp_rgctx_method(method->klass->rgctx_data, 37), L_7, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key));
		V_5 = ((int32_t)(L_8&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		NullCheck(L_11);
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)(L_10%((int32_t)(((RuntimeArray*)L_11)->max_length))));
		int32_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_14, V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_14);
		if (!L_15)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_16 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_2;
		NullCheck(L_17);
		if ((!(((uint32_t)L_16) < ((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = V_2;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_21 = V_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_22;
		L_22 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_2;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_22);
		bool L_27;
		L_27 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_26: *(void**)L_26));
		if (L_27)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_2;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_0 = L_30;
		int32_t L_31 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_2;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_34;
		L_34 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_36 = V_2;
		NullCheck(L_36);
		if ((!(((uint32_t)L_35) < ((uint32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_37 = V_2;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_40 = V_5;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_41 = V_7;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_42 = V_2;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		il2cpp_codegen_memcpy(L_44, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_41);
		bool L_46;
		L_46 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_44: *(void**)L_44), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_45: *(void**)L_45));
		if (L_46)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_0 = L_49;
		int32_t L_50 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_51 = V_2;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_53 = V_4;
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_53);
		int32_t L_55;
		L_55 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_54: *(void**)L_54));
		V_8 = ((int32_t)(L_55&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_1;
		int32_t L_57 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		NullCheck(L_58);
		NullCheck(L_56);
		int32_t L_59 = ((int32_t)(L_57%((int32_t)(((RuntimeArray*)L_58)->max_length))));
		int32_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
	}

IL_012b:
	{
		int32_t L_61 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_62 = V_2;
		NullCheck(L_62);
		if ((!(((uint32_t)L_61) < ((uint32_t)((int32_t)(((RuntimeArray*)L_62)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_63 = V_2;
		int32_t L_64 = V_0;
		NullCheck(L_63);
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_66 = V_8;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_67 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_68 = V_2;
		int32_t L_69 = V_0;
		NullCheck(L_68);
		il2cpp_codegen_memcpy(L_70, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_71, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_67);
		bool L_72;
		L_72 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_67, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_70: *(void**)L_70), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_71: *(void**)L_71));
		if (L_72)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_2;
		int32_t L_74 = V_0;
		NullCheck(L_73);
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_0 = L_75;
		int32_t L_76 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_77 = V_2;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_79 = V_0;
		return L_79;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_19 = L_0;
	const Il2CppFullySharedGenericAny L_30 = L_0;
	const Il2CppFullySharedGenericAny L_38 = L_0;
	const Il2CppFullySharedGenericAny L_56 = L_0;
	const Il2CppFullySharedGenericAny L_64 = L_0;
	const Il2CppFullySharedGenericAny L_81 = L_0;
	const Il2CppFullySharedGenericAny L_89 = L_0;
	const Il2CppFullySharedGenericAny L_122 = L_0;
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_57 = L_31;
	const Il2CppFullySharedGenericAny L_82 = L_31;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_62 = L_36;
	const Il2CppFullySharedGenericAny L_87 = L_36;
	const Il2CppFullySharedGenericAny L_124 = L_36;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_10 = NULL;
	Il2CppFullySharedGenericAny V_11 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_11, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		V_0 = L_5;
		RuntimeObject* L_6 = __this->____comparer;
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_9: *(void**)L_9));
		G_B7_0 = L_10;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 11), il2cpp_rgctx_method(method->klass->rgctx_data, 37), L_11, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key));
		G_B7_0 = L_12;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		int32_t L_14 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		NullCheck(L_15);
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_14%((int32_t)(((RuntimeArray*)L_15)->max_length)))))));
		int32_t* L_16 = V_4;
		int32_t L_17 = *((int32_t*)L_16);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		RuntimeObject* L_18 = V_1;
		if (L_18)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_19, V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_20 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_19);
		if (!L_20)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_21 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_22 = V_0;
		NullCheck(L_22);
		if ((!(((uint32_t)L_21) < ((uint32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_0;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_27);
		bool L_32;
		L_32 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_31: *(void**)L_31));
		if (!L_32)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_33 = ___2_behavior;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_34 = V_0;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3), L_36, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_37 = ___2_behavior;
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_0;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_46;
		L_46 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_46;
	}

IL_0111:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_48 = V_0;
		NullCheck(L_48);
		if ((!(((uint32_t)L_47) < ((uint32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_53 = V_12;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		il2cpp_codegen_memcpy(L_56, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_56: *(void**)L_56), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_57: *(void**)L_57));
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3), L_62, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_64);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_65, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_66 = V_0;
		int32_t L_67 = V_5;
		NullCheck(L_66);
		int32_t L_68 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_5 = L_68;
		int32_t L_69 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_70 = V_0;
		NullCheck(L_70);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_0;
		NullCheck(L_73);
		if ((!(((uint32_t)L_72) < ((uint32_t)((int32_t)(((RuntimeArray*)L_73)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		int32_t L_76 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_77 = V_2;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_78 = V_1;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_79 = V_0;
		int32_t L_80 = V_5;
		NullCheck(L_79);
		il2cpp_codegen_memcpy(L_81, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_82, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_78);
		bool L_83;
		L_83 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_78, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_81: *(void**)L_81), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_82: *(void**)L_82));
		if (!L_83)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_84 = ___2_behavior;
		if ((!(((uint32_t)L_84) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		il2cpp_codegen_memcpy(L_87, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3), L_87, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_88 = ___2_behavior;
		if ((!(((uint32_t)L_88) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		il2cpp_codegen_memcpy(L_89, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_105 = __this->____entries;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_114 = V_10;
		int32_t L_115 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		__this->____freeList = L_115;
	}

IL_028a:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_116 = V_10;
		int32_t L_117 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_116, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0), L_117);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_118, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1), ((int32_t)il2cpp_codegen_subtract(L_120, 1)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_121 = V_10;
		il2cpp_codegen_memcpy(L_122, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_write_instance_field_data(L_121, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2), L_122, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_123 = V_10;
		il2cpp_codegen_memcpy(L_124, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(L_123, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3), L_124, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCE3F24CD19D6E1AAEE9202CFE6CD1E8DA8821552_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_25 = L_21;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), (Il2CppFullySharedGenericAny*)L_21);
		bool L_22 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_21);
		if (L_22)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), (Il2CppFullySharedGenericAny*)L_25);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_26 = V_3;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), (Il2CppFullySharedGenericAny*)L_28);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_28: *(void**)L_28));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00c0:
	{
		int32_t L_30 = V_4;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_31 = V_3;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m31D02FB7F34F222948CBAED016A60562ECE1A8D5_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_3, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_9 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_8);
		bool L_10 = L_9;
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)L_10&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_20;
		L_20 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 11), il2cpp_rgctx_method(method->klass->rgctx_data, 37), L_19, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)))));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0), ((int32_t)(L_20&((int32_t)2147483647LL))));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1), ((int32_t)il2cpp_codegen_subtract(L_36, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_43);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_1;
		__this->____entries = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_24 = L_0;
	const Il2CppFullySharedGenericAny L_28 = L_0;
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_29 = L_25;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (!L_2)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_3 = __this->____comparer;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0032;
		}
		G_B4_0 = L_4;
	}
	{
		int32_t L_6;
		L_6 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 11), il2cpp_rgctx_method(method->klass->rgctx_data, 37), L_5, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key));
		G_B6_0 = L_6;
		goto IL_0038;
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B5_0);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_7: *(void**)L_7));
		G_B6_0 = L_8;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		V_1 = ((int32_t)(L_9%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = __this->____entries;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		V_4 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_17 = V_4;
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_20 = __this->____comparer;
		RuntimeObject* L_21 = L_20;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0095;
		}
		G_B9_0 = L_21;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_22;
		L_22 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_23 = V_4;
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_22);
		bool L_26;
		L_26 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_24: *(void**)L_24), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_25: *(void**)L_25));
		G_B11_0 = L_26;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_27 = V_4;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B10_0);
		bool L_30;
		L_30 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_29: *(void**)L_29));
		G_B11_0 = L_30;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		int32_t L_33 = V_1;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_34 = V_4;
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_34, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_36 = __this->____entries;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_38 = V_4;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_38, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1), L_39);
	}

IL_00d6:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_40 = V_4;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_40, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0), (-1));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_41 = V_4;
		int32_t L_42 = __this->____freeList;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_41, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1), L_42);
		bool L_43;
		L_43 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if (!L_43)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_44 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	}

IL_00ff:
	{
		bool L_45;
		L_45 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if (!L_45)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_46 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_46, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)))), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	}

IL_0113:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_51 = V_4;
		int32_t L_52 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_51, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),1));
		V_3 = L_52;
	}

IL_0142:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___1_value;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, L_6, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppFullySharedGenericAny* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m71BC76FB3076464E2CF2D51E2607CCF7E51083FF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)0);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49382184C24B9222DF183D303DDE539D20217D5A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD6AE43E992177C3F738687180B1BC97BDBAADE51_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBDBCC7A542FE485FFCDDD79C6453338ACEB4E9D9_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_49 = L_27;
	const Il2CppFullySharedGenericAny L_53 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_52 = L_31;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_55 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_27);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_28, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),0));
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
			memset(L_55, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
			KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_53, L_49, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_54, L_52, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_52), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			RuntimeObject* L_56 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), L_55);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_56);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_56);
		}

IL_012a_1:
		{
			int32_t L_57 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		}

IL_0130_1:
		{
			int32_t L_58 = V_7;
			int32_t L_59 = V_5;
			if ((((int32_t)L_58) < ((int32_t)L_59)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_60 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44022592FB7F74617DDAE1914E3376A2C38A0CBB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m195D9C8DE45E7DAC677E02DC0DB5E179F5BBE3BB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9E5D75EF1543AC00AA3F3BC3D6149B59826438B1_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mC48AC2C347286C71BD0E25A923FDA569D3B0960B_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_7 = __this->____entries;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_9);
		return L_10;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m0444A06383E554B1CE9AD1D51B74A570C71A2F20_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_0, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_3);
			il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		}
		try
		{
			il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			RuntimeObject* L_6 = ___1_value;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_7);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 51), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)))));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_10 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_12;
			L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_10, L_12, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_13 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_14 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_14, L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m72E82A4B5B5ABC5F5D625BC047C22894796F3F76_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)), il2cpp_rgctx_method(method->klass->rgctx_data, 54), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m72D69D25532F2EA8DEE802868E8CC3282018A5D9_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), L_0);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_0 = NULL;
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_0 = ((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m3E2E84761480CE8DB944F3175F691C3CB14979A3_gshared_inline (KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 KeyValuePair_2_get_Value_mCC6E81580C7CA5794FAA2F7364AD94C60188CCC2_gshared_inline (KeyValuePair_2_t16DBE67A85AC9FD03F718EA69A0A05079C893F14* __this, const RuntimeMethod* method) 
{
	{
		CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* EqualityComparer_1_get_Default_m4163A68CE3B1740C02510A744E4B925CDC6DA2F9_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* V_0 = NULL;
	{
		EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* L_0 = ((EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mB947D2528324AFD1CA0EC3E0CC9C05C53116CF79(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tC2AA968D08DC67C1EA01D4D1FAB3FE414AA85F07* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_gshared_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_gshared_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m6C912C6E10EB6AE5C6B224A45E3C447C3445BFEE_gshared_inline (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 KeyValuePair_2_get_Value_mFE352005BECB8CC1491A710CCFC837B564E820A4_gshared_inline (KeyValuePair_2_t55881AA547C2F1917F237C157330C775282585E2* __this, const RuntimeMethod* method) 
{
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* EqualityComparer_1_get_Default_m0B2098CC18B590EBCB58BC5BEC80FFC1BC75A1AF_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* V_0 = NULL;
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_0 = ((EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m931FF926579EC7BABDD76C5453220EAF279A5882(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t569F6D2F6601DCA07F7E38D014A69D0C2EC40505* L_4 = V_0;
		return L_4;
	}
}
