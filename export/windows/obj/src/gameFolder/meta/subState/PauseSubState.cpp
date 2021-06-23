// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_gameFolder_meta_Controls
#include <gameFolder/meta/Controls.h>
#endif
#ifndef INCLUDED_gameFolder_meta_CoolUtil
#include <gameFolder/meta/CoolUtil.h>
#endif
#ifndef INCLUDED_gameFolder_meta_MusicBeatState
#include <gameFolder/meta/MusicBeatState.h>
#endif
#ifndef INCLUDED_gameFolder_meta_MusicBeatSubState
#include <gameFolder/meta/MusicBeatSubState.h>
#endif
#ifndef INCLUDED_gameFolder_meta_data_PlayerSettings
#include <gameFolder/meta/data/PlayerSettings.h>
#endif
#ifndef INCLUDED_gameFolder_meta_data_font_Alphabet
#include <gameFolder/meta/data/font/Alphabet.h>
#endif
#ifndef INCLUDED_gameFolder_meta_state_PlayState
#include <gameFolder/meta/state/PlayState.h>
#endif
#ifndef INCLUDED_gameFolder_meta_subState_PauseSubState
#include <gameFolder/meta/subState/PauseSubState.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c470f20634c76afe_18_new,"gameFolder.meta.subState.PauseSubState","new",0x9f669f77,"gameFolder.meta.subState.PauseSubState.new","gameFolder/meta/subState/PauseSubState.hx",18,0xe50d657a)
static const ::String _hx_array_data_cabe1805_2[] = {
	HX_("Resume",cd,dd,18,3d),HX_("Restart Song",06,b6,fe,13),HX_("Exit to menu",82,87,9a,a9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_c470f20634c76afe_83_update,"gameFolder.meta.subState.PauseSubState","update",0x0191ff52,"gameFolder.meta.subState.PauseSubState.update","gameFolder/meta/subState/PauseSubState.hx",83,0xe50d657a)
HX_LOCAL_STACK_FRAME(_hx_pos_c470f20634c76afe_125_destroy,"gameFolder.meta.subState.PauseSubState","destroy",0xe4e3d391,"gameFolder.meta.subState.PauseSubState.destroy","gameFolder/meta/subState/PauseSubState.hx",125,0xe50d657a)
HX_LOCAL_STACK_FRAME(_hx_pos_c470f20634c76afe_132_changeSelection,"gameFolder.meta.subState.PauseSubState","changeSelection",0x248e2e53,"gameFolder.meta.subState.PauseSubState.changeSelection","gameFolder/meta/subState/PauseSubState.hx",132,0xe50d657a)
namespace gameFolder{
namespace meta{
namespace subState{

void PauseSubState_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_c470f20634c76afe_18_new)
HXLINE(  23)		this->curSelected = 0;
HXLINE(  22)		this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_cabe1805_2,3);
HXLINE(  29)		super::__construct();
HXLINE(  31)		 ::flixel::_hx_system::FlxSound _hx_tmp =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  31)		::String library = null();
HXDLIN(  31)		this->pauseMusic = _hx_tmp->loadEmbedded(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),true,true,null());
HXLINE(  32)		this->pauseMusic->set_volume(( (Float)(0) ));
HXLINE(  33)		 ::flixel::_hx_system::FlxSound _hx_tmp1 = this->pauseMusic;
HXDLIN(  33)		 ::flixel::math::FlxRandom _hx_tmp2 = ::flixel::FlxG_obj::random;
HXDLIN(  33)		_hx_tmp1->play(false,_hx_tmp2->_hx_int(0,::Std_obj::_hx_int((this->pauseMusic->_length / ( (Float)(2) ))),null()),null());
HXLINE(  35)		::flixel::FlxG_obj::sound->list->add(this->pauseMusic).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE(  37)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  38)		bg->set_alpha(( (Float)(0) ));
HXLINE(  39)		bg->scrollFactor->set(null(),null());
HXLINE(  40)		this->add(bg);
HXLINE(  42)		 ::flixel::text::FlxText levelInfo =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,15,0,HX_("",00,00,00,00),32,null());
HXLINE(  43)		{
HXLINE(  43)			 ::flixel::text::FlxText _g = levelInfo;
HXDLIN(  43)			_g->set_text(( (::String)((_g->text + ::gameFolder::meta::state::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic))) ));
            		}
HXLINE(  44)		levelInfo->scrollFactor->set(null(),null());
HXLINE(  45)		levelInfo->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  46)		levelInfo->updateHitbox();
HXLINE(  47)		this->add(levelInfo);
HXLINE(  49)		 ::flixel::text::FlxText levelDifficulty =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,47,0,HX_("",00,00,00,00),32,null());
HXLINE(  50)		{
HXLINE(  50)			 ::flixel::text::FlxText _g1 = levelDifficulty;
HXDLIN(  50)			::String _g2 = _g1->text;
HXDLIN(  50)			_g1->set_text((_g2 + ::gameFolder::meta::CoolUtil_obj::difficultyString()));
            		}
HXLINE(  51)		levelDifficulty->scrollFactor->set(null(),null());
HXLINE(  52)		levelDifficulty->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  53)		levelDifficulty->updateHitbox();
HXLINE(  54)		this->add(levelDifficulty);
HXLINE(  56)		levelDifficulty->set_alpha(( (Float)(0) ));
HXLINE(  57)		levelInfo->set_alpha(( (Float)(0) ));
HXLINE(  59)		int _hx_tmp3 = ::flixel::FlxG_obj::width;
HXDLIN(  59)		levelInfo->set_x((( (Float)(_hx_tmp3) ) - (levelInfo->get_width() + 20)));
HXLINE(  60)		int _hx_tmp4 = ::flixel::FlxG_obj::width;
HXDLIN(  60)		levelDifficulty->set_x((( (Float)(_hx_tmp4) ) - (levelDifficulty->get_width() + 20)));
HXLINE(  62)		::flixel::tweens::FlxTween_obj::tween(bg, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.6))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  63)		::flixel::tweens::FlxTween_obj::tween(levelInfo, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),20)
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.3))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  64)		::flixel::tweens::FlxTween_obj::tween(levelDifficulty, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(levelDifficulty->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.5))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  66)		this->grpMenuShit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  67)		this->add(this->grpMenuShit);
HXLINE(  69)		{
HXLINE(  69)			int _g3 = 0;
HXDLIN(  69)			int _g4 = this->menuItems->length;
HXDLIN(  69)			while((_g3 < _g4)){
HXLINE(  69)				_g3 = (_g3 + 1);
HXDLIN(  69)				int i = (_g3 - 1);
HXLINE(  71)				 ::gameFolder::meta::data::font::Alphabet songText =  ::gameFolder::meta::data::font::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false);
HXLINE(  72)				songText->isMenuItem = true;
HXLINE(  73)				songText->targetY = ( (Float)(i) );
HXLINE(  74)				this->grpMenuShit->add(songText).StaticCast<  ::gameFolder::meta::data::font::Alphabet >();
            			}
            		}
HXLINE(  77)		this->changeSelection(null());
HXLINE(  79)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
            	}

Dynamic PauseSubState_obj::__CreateEmpty() { return new PauseSubState_obj; }

void *PauseSubState_obj::_hx_vtable = 0;

Dynamic PauseSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PauseSubState_obj > _hx_result = new PauseSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PauseSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x2eb1b98d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2eb1b98d;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x70f63123 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void PauseSubState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c470f20634c76afe_83_update)
HXLINE(  84)		if ((this->pauseMusic->_volume < ((Float)0.5))) {
HXLINE(  85)			 ::flixel::_hx_system::FlxSound _g = this->pauseMusic;
HXDLIN(  85)			_g->set_volume((_g->_volume + (((Float)0.01) * elapsed)));
            		}
HXLINE(  87)		this->super::update(elapsed);
HXLINE(  89)		bool upP = ::gameFolder::meta::data::PlayerSettings_obj::player1->controls->_upP->check();
HXLINE(  90)		bool downP = ::gameFolder::meta::data::PlayerSettings_obj::player1->controls->_downP->check();
HXLINE(  91)		bool accepted = ::gameFolder::meta::data::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE(  93)		if (upP) {
HXLINE(  95)			this->changeSelection(-1);
            		}
HXLINE(  97)		if (downP) {
HXLINE(  99)			this->changeSelection(1);
            		}
HXLINE( 102)		if (accepted) {
HXLINE( 104)			::String daSelected = this->menuItems->__get(this->curSelected);
HXLINE( 106)			::String _hx_switch_0 = daSelected;
            			if (  (_hx_switch_0==HX_("Exit to menu",82,87,9a,a9)) ){
HXLINE( 112)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Restart Song",06,b6,fe,13)) ){
HXLINE( 111)				 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 111)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 111)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
HXDLIN( 111)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Resume",cd,dd,18,3d)) ){
HXLINE( 109)				this->close();
HXDLIN( 109)				goto _hx_goto_3;
            			}
            			_hx_goto_3:;
            		}
HXLINE( 117)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 117)		bool _hx_tmp = _this->keyManager->checkStatus(74,_this->status);
            	}


void PauseSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_c470f20634c76afe_125_destroy)
HXLINE( 126)		this->pauseMusic->destroy();
HXLINE( 128)		this->super::destroy();
            	}


void PauseSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_c470f20634c76afe_132_changeSelection)
HXLINE( 133)		 ::gameFolder::meta::subState::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 133)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 135)		if ((this->curSelected < 0)) {
HXLINE( 136)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 137)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 138)			this->curSelected = 0;
            		}
HXLINE( 140)		int bullShit = 0;
HXLINE( 142)		{
HXLINE( 142)			int _g = 0;
HXDLIN( 142)			::Array< ::Dynamic> _g1 = this->grpMenuShit->members;
HXDLIN( 142)			while((_g < _g1->length)){
HXLINE( 142)				 ::gameFolder::meta::data::font::Alphabet item = _g1->__get(_g).StaticCast<  ::gameFolder::meta::data::font::Alphabet >();
HXDLIN( 142)				_g = (_g + 1);
HXLINE( 144)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 145)				bullShit = (bullShit + 1);
HXLINE( 147)				item->set_alpha(((Float)0.6));
HXLINE( 150)				if ((item->targetY == 0)) {
HXLINE( 152)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,changeSelection,(void))


::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< PauseSubState_obj > __this = new PauseSubState_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	PauseSubState_obj *__this = (PauseSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PauseSubState_obj), true, "gameFolder.meta.subState.PauseSubState"));
	*(void **)__this = PauseSubState_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

PauseSubState_obj::PauseSubState_obj()
{
}

void PauseSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseSubState);
	HX_MARK_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PauseSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { return ::hx::Val( grpMenuShit ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PauseSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { grpMenuShit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PauseSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpMenuShit",04,32,b8,f0));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PauseSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PauseSubState_obj,grpMenuShit),HX_("grpMenuShit",04,32,b8,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsInt,(int)offsetof(PauseSubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PauseSubState_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PauseSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String PauseSubState_obj_sMemberFields[] = {
	HX_("grpMenuShit",04,32,b8,f0),
	HX_("menuItems",e1,15,e5,5c),
	HX_("curSelected",fb,eb,ab,32),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

::hx::Class PauseSubState_obj::__mClass;

void PauseSubState_obj::__register()
{
	PauseSubState_obj _hx_dummy;
	PauseSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("gameFolder.meta.subState.PauseSubState",05,18,be,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PauseSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace gameFolder
} // end namespace meta
} // end namespace subState