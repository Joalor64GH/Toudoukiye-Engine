// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_gameFolder_gameObjects_userInterface_UIBabyArrow
#include <gameFolder/gameObjects/userInterface/UIBabyArrow.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8ec2bbd63d9256fd_15_new,"gameFolder.gameObjects.userInterface.UIBabyArrow","new",0xbcde8177,"gameFolder.gameObjects.userInterface.UIBabyArrow.new","gameFolder/gameObjects/userInterface/UIBabyArrow.hx",15,0x0ab0961c)
HX_LOCAL_STACK_FRAME(_hx_pos_8ec2bbd63d9256fd_87_playAnim,"gameFolder.gameObjects.userInterface.UIBabyArrow","playAnim",0x1ccde5ae,"gameFolder.gameObjects.userInterface.UIBabyArrow.playAnim","gameFolder/gameObjects/userInterface/UIBabyArrow.hx",87,0x0ab0961c)
HX_LOCAL_STACK_FRAME(_hx_pos_8ec2bbd63d9256fd_102_addOffset,"gameFolder.gameObjects.userInterface.UIBabyArrow","addOffset",0xebf6e8eb,"gameFolder.gameObjects.userInterface.UIBabyArrow.addOffset","gameFolder/gameObjects/userInterface/UIBabyArrow.hx",102,0x0ab0961c)
HX_LOCAL_STACK_FRAME(_hx_pos_8ec2bbd63d9256fd_106_getArrowFromNumber,"gameFolder.gameObjects.userInterface.UIBabyArrow","getArrowFromNumber",0x4c503fcf,"gameFolder.gameObjects.userInterface.UIBabyArrow.getArrowFromNumber","gameFolder/gameObjects/userInterface/UIBabyArrow.hx",106,0x0ab0961c)
namespace gameFolder{
namespace gameObjects{
namespace userInterface{

void UIBabyArrow_obj::__construct(Float x,Float y, ::Dynamic __o_babyArrowType){
            		 ::Dynamic babyArrowType = __o_babyArrowType;
            		if (::hx::IsNull(__o_babyArrowType)) babyArrowType = 0;
            	HX_GC_STACKFRAME(&_hx_pos_8ec2bbd63d9256fd_15_new)
HXLINE(  26)		this->canFinishAnimation = true;
HXLINE(  25)		this->babyArrowType = 0;
HXLINE(  31)		super::__construct(x,y,null());
HXLINE(  32)		this->animOffsets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  34)		this->babyArrowType = ( (int)(babyArrowType) );
HXLINE(  35)		::String stringSect = HX_("",00,00,00,00);
HXLINE(  38)		stringSect = ::gameFolder::gameObjects::userInterface::UIBabyArrow_obj::getArrowFromNumber(( (int)(babyArrowType) ));
HXLINE(  40)		::String library = null();
HXDLIN(  40)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("notes/NOTE_assets",62,16,b3,51)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  40)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("notes/NOTE_assets",62,16,b3,51)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  41)		this->animation->addByPrefix(HX_("green",c3,0e,ed,99),HX_("arrowUP",64,88,b8,43),null(),null(),null(),null());
HXLINE(  42)		this->animation->addByPrefix(HX_("blue",9a,42,19,41),HX_("arrowDOWN",ab,52,f9,fd),null(),null(),null(),null());
HXLINE(  43)		this->animation->addByPrefix(HX_("purple",3c,f6,89,71),HX_("arrowLEFT",50,62,3b,03),null(),null(),null(),null());
HXLINE(  44)		this->animation->addByPrefix(HX_("red",51,d9,56,00),HX_("arrowRIGHT",53,b1,c7,47),null(),null(),null(),null());
HXLINE(  47)		 ::flixel::animation::FlxAnimationController _hx_tmp1 = this->animation;
HXDLIN(  47)		_hx_tmp1->addByPrefix(HX_("static",ae,dc,fb,05),(HX_("arrow",c9,79,8f,25) + stringSect.toUpperCase()),null(),null(),null(),null());
HXLINE(  48)		this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),(stringSect + HX_(" press",63,df,f3,93)),24,false,null(),null());
HXLINE(  49)		this->animation->addByPrefix(HX_("confirm",00,9d,39,10),(stringSect + HX_(" confirm",e0,e0,87,36)),24,false,null(),null());
HXLINE(  55)		int offsetMiddleX = 0;
HXLINE(  56)		int offsetMiddleY = 0;
HXLINE(  57)		bool _hx_tmp2;
HXDLIN(  57)		if (::hx::IsGreater( babyArrowType,0 )) {
HXLINE(  57)			_hx_tmp2 = ::hx::IsLess( babyArrowType,3 );
            		}
            		else {
HXLINE(  57)			_hx_tmp2 = false;
            		}
HXDLIN(  57)		if (_hx_tmp2) {
HXLINE(  59)			offsetMiddleX = 2;
HXLINE(  60)			offsetMiddleY = 2;
HXLINE(  61)			if (::hx::IsEq( babyArrowType,1 )) {
HXLINE(  63)				offsetMiddleX = (offsetMiddleX - 1);
HXLINE(  64)				offsetMiddleY = (offsetMiddleY + 2);
            			}
            		}
HXLINE(  74)		this->addOffset(HX_("static",ae,dc,fb,05),null(),null());
HXLINE(  75)		this->addOffset(HX_("pressed",a2,d2,e6,39),-2,-2);
HXLINE(  76)		this->addOffset(HX_("confirm",00,9d,39,10),(36 + offsetMiddleX),(36 + offsetMiddleY));
HXLINE(  78)		this->updateHitbox();
HXLINE(  79)		this->scrollFactor->set(null(),null());
HXLINE(  81)		this->set_antialiasing(true);
HXLINE(  82)		this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ((Float)0.7))),null());
            	}

Dynamic UIBabyArrow_obj::__CreateEmpty() { return new UIBabyArrow_obj; }

void *UIBabyArrow_obj::_hx_vtable = 0;

Dynamic UIBabyArrow_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UIBabyArrow_obj > _hx_result = new UIBabyArrow_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool UIBabyArrow_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4c05d133) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x4c05d133;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void UIBabyArrow_obj::playAnim(::String AnimName,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Reversed,::hx::Null< int >  __o_Frame){
            		bool Force = __o_Force.Default(false);
            		bool Reversed = __o_Reversed.Default(false);
            		int Frame = __o_Frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_8ec2bbd63d9256fd_87_playAnim)
HXLINE(  88)		this->animation->play(AnimName,Force,Reversed,Frame);
HXLINE(  89)		this->updateHitbox();
HXLINE(  91)		::cpp::VirtualArray daOffset = ( (::cpp::VirtualArray)(this->animOffsets->get(AnimName)) );
HXLINE(  92)		if (this->animOffsets->exists(AnimName)) {
HXLINE(  94)			this->offset->set(daOffset->__get(0),daOffset->__get(1));
            		}
            		else {
HXLINE(  97)			this->offset->set(0,0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(UIBabyArrow_obj,playAnim,(void))

void UIBabyArrow_obj::addOffset(::String name,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_8ec2bbd63d9256fd_102_addOffset)
HXDLIN( 102)		::cpp::VirtualArray v = ::Array_obj< Float >::__new(2)->init(0,x)->init(1,y);
HXDLIN( 102)		this->animOffsets->set(name,v);
            	}


HX_DEFINE_DYNAMIC_FUNC3(UIBabyArrow_obj,addOffset,(void))

::String UIBabyArrow_obj::getArrowFromNumber(int numb){
            	HX_STACKFRAME(&_hx_pos_8ec2bbd63d9256fd_106_getArrowFromNumber)
HXLINE( 109)		::String stringSect = HX_("",00,00,00,00);
HXLINE( 110)		switch((int)(numb)){
            			case (int)0: {
HXLINE( 113)				stringSect = HX_("left",07,08,b0,47);
            			}
            			break;
            			case (int)1: {
HXLINE( 115)				stringSect = HX_("down",62,f8,6d,42);
            			}
            			break;
            			case (int)2: {
HXLINE( 117)				stringSect = HX_("up",5b,66,00,00);
            			}
            			break;
            			case (int)3: {
HXLINE( 119)				stringSect = HX_("right",dc,0b,64,e9);
            			}
            			break;
            		}
HXLINE( 121)		return stringSect;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBabyArrow_obj,getArrowFromNumber,return )


::hx::ObjectPtr< UIBabyArrow_obj > UIBabyArrow_obj::__new(Float x,Float y, ::Dynamic __o_babyArrowType) {
	::hx::ObjectPtr< UIBabyArrow_obj > __this = new UIBabyArrow_obj();
	__this->__construct(x,y,__o_babyArrowType);
	return __this;
}

::hx::ObjectPtr< UIBabyArrow_obj > UIBabyArrow_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y, ::Dynamic __o_babyArrowType) {
	UIBabyArrow_obj *__this = (UIBabyArrow_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UIBabyArrow_obj), true, "gameFolder.gameObjects.userInterface.UIBabyArrow"));
	*(void **)__this = UIBabyArrow_obj::_hx_vtable;
	__this->__construct(x,y,__o_babyArrowType);
	return __this;
}

UIBabyArrow_obj::UIBabyArrow_obj()
{
}

void UIBabyArrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIBabyArrow);
	HX_MARK_MEMBER_NAME(animOffsets,"animOffsets");
	HX_MARK_MEMBER_NAME(babyArrowType,"babyArrowType");
	HX_MARK_MEMBER_NAME(canFinishAnimation,"canFinishAnimation");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIBabyArrow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animOffsets,"animOffsets");
	HX_VISIT_MEMBER_NAME(babyArrowType,"babyArrowType");
	HX_VISIT_MEMBER_NAME(canFinishAnimation,"canFinishAnimation");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val UIBabyArrow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addOffset") ) { return ::hx::Val( addOffset_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { return ::hx::Val( animOffsets ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"babyArrowType") ) { return ::hx::Val( babyArrowType ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"canFinishAnimation") ) { return ::hx::Val( canFinishAnimation ); }
	}
	return super::__Field(inName,inCallProp);
}

bool UIBabyArrow_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"getArrowFromNumber") ) { outValue = getArrowFromNumber_dyn(); return true; }
	}
	return false;
}

::hx::Val UIBabyArrow_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { animOffsets=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"babyArrowType") ) { babyArrowType=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"canFinishAnimation") ) { canFinishAnimation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIBabyArrow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animOffsets",6f,ff,7a,f8));
	outFields->push(HX_("babyArrowType",ed,dc,0f,80));
	outFields->push(HX_("canFinishAnimation",01,12,0b,c7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo UIBabyArrow_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(UIBabyArrow_obj,animOffsets),HX_("animOffsets",6f,ff,7a,f8)},
	{::hx::fsInt,(int)offsetof(UIBabyArrow_obj,babyArrowType),HX_("babyArrowType",ed,dc,0f,80)},
	{::hx::fsBool,(int)offsetof(UIBabyArrow_obj,canFinishAnimation),HX_("canFinishAnimation",01,12,0b,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *UIBabyArrow_obj_sStaticStorageInfo = 0;
#endif

static ::String UIBabyArrow_obj_sMemberFields[] = {
	HX_("animOffsets",6f,ff,7a,f8),
	HX_("babyArrowType",ed,dc,0f,80),
	HX_("canFinishAnimation",01,12,0b,c7),
	HX_("playAnim",25,ea,84,30),
	HX_("addOffset",94,cc,63,18),
	::String(null()) };

::hx::Class UIBabyArrow_obj::__mClass;

static ::String UIBabyArrow_obj_sStaticFields[] = {
	HX_("getArrowFromNumber",06,1f,d8,2b),
	::String(null())
};

void UIBabyArrow_obj::__register()
{
	UIBabyArrow_obj _hx_dummy;
	UIBabyArrow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("gameFolder.gameObjects.userInterface.UIBabyArrow",05,fa,1c,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UIBabyArrow_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UIBabyArrow_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UIBabyArrow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UIBabyArrow_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UIBabyArrow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UIBabyArrow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace gameFolder
} // end namespace gameObjects
} // end namespace userInterface