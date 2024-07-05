// Generated by Haxe 4.3.4
#ifndef INCLUDED_hscript_Parser
#define INCLUDED_hscript_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,GenericStack_hscript_Token)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscript,CType)
HX_DECLARE_CLASS1(hscript,Const)
HX_DECLARE_CLASS1(hscript,Error)
HX_DECLARE_CLASS1(hscript,Expr)
HX_DECLARE_CLASS1(hscript,ModuleDecl)
HX_DECLARE_CLASS1(hscript,Parser)
HX_DECLARE_CLASS1(hscript,Token)

namespace hscript{


class HXCPP_CLASS_ATTRIBUTES Parser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();

	public:
		enum { _hx_ClassId = 0x1b857072 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hscript.Parser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hscript.Parser"); }
		static ::hx::ObjectPtr< Parser_obj > __new();
		static ::hx::ObjectPtr< Parser_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Parser",ff,10,1d,22); }

		static void __boot();
		static int p1;
		static int tokenMin;
		static int tokenMax;
		int line;
		::String opChars;
		::String identChars;
		 ::haxe::ds::StringMap opPriority;
		 ::haxe::ds::StringMap opRightAssoc;
		 ::haxe::ds::StringMap unops;
		 ::haxe::ds::StringMap preprocesorValues;
		bool allowJSON;
		bool allowTypes;
		bool allowMetadata;
		bool resumeErrors;
		::String input;
		int readPos;
		int _hx_char;
		::Array< bool > ops;
		::Array< bool > idents;
		int uid;
		 ::haxe::ds::GenericStack_hscript_Token tokens;
		void error( ::hscript::Error err,int pmin,int pmax);
		::Dynamic error_dyn();

		void invalidChar(int c);
		::Dynamic invalidChar_dyn();

		void initParser(::String origin);
		::Dynamic initParser_dyn();

		 ::hscript::Expr parseString(::String s,::String origin);
		::Dynamic parseString_dyn();

		 ::Dynamic unexpected( ::hscript::Token tk);
		::Dynamic unexpected_dyn();

		void push( ::hscript::Token tk);
		::Dynamic push_dyn();

		void ensure( ::hscript::Token tk);
		::Dynamic ensure_dyn();

		void ensureToken( ::hscript::Token tk);
		::Dynamic ensureToken_dyn();

		bool maybe( ::hscript::Token tk);
		::Dynamic maybe_dyn();

		::String getIdent();
		::Dynamic getIdent_dyn();

		 ::hscript::Expr expr( ::hscript::Expr e);
		::Dynamic expr_dyn();

		int pmin( ::hscript::Expr e);
		::Dynamic pmin_dyn();

		int pmax( ::hscript::Expr e);
		::Dynamic pmax_dyn();

		 ::hscript::Expr mk( ::hscript::Expr e, ::Dynamic pmin, ::Dynamic pmax);
		::Dynamic mk_dyn();

		bool isBlock( ::hscript::Expr e);
		::Dynamic isBlock_dyn();

		void parseFullExpr(::Array< ::Dynamic> exprs);
		::Dynamic parseFullExpr_dyn();

		 ::hscript::Expr parseObject( ::Dynamic p1);
		::Dynamic parseObject_dyn();

		 ::hscript::Expr parseExpr();
		::Dynamic parseExpr_dyn();

		 ::hscript::Expr parseLambda(::Array< ::Dynamic> args, ::Dynamic pmin);
		::Dynamic parseLambda_dyn();

		::Array< ::Dynamic> parseMetaArgs();
		::Dynamic parseMetaArgs_dyn();

		 ::hscript::Expr mapCompr(::String tmp, ::hscript::Expr e);
		::Dynamic mapCompr_dyn();

		 ::hscript::Expr makeUnop(::String op, ::hscript::Expr e);
		::Dynamic makeUnop_dyn();

		 ::hscript::Expr makeBinop(::String op, ::hscript::Expr e1, ::hscript::Expr e);
		::Dynamic makeBinop_dyn();

		 ::hscript::Expr parseStructure(::String id);
		::Dynamic parseStructure_dyn();

		 ::hscript::Expr parseExprNext( ::hscript::Expr e1);
		::Dynamic parseExprNext_dyn();

		::Array< ::Dynamic> parseFunctionArgs();
		::Dynamic parseFunctionArgs_dyn();

		 ::Dynamic parseFunctionDecl();
		::Dynamic parseFunctionDecl_dyn();

		::Array< ::String > parsePath();
		::Dynamic parsePath_dyn();

		 ::hscript::CType parseType();
		::Dynamic parseType_dyn();

		 ::hscript::CType parseTypeNext( ::hscript::CType t);
		::Dynamic parseTypeNext_dyn();

		::Array< ::Dynamic> parseExprList( ::hscript::Token etk);
		::Dynamic parseExprList_dyn();

		::Array< ::Dynamic> parseModule(::String content,::String origin);
		::Dynamic parseModule_dyn();

		::Array< ::Dynamic> parseMetadata();
		::Dynamic parseMetadata_dyn();

		 ::Dynamic parseParams();
		::Dynamic parseParams_dyn();

		 ::hscript::ModuleDecl parseModuleDecl();
		::Dynamic parseModuleDecl_dyn();

		 ::Dynamic parseField();
		::Dynamic parseField_dyn();

		int readChar();
		::Dynamic readChar_dyn();

		::String readString(int until);
		::Dynamic readString_dyn();

		 ::hscript::Token token();
		::Dynamic token_dyn();

		 ::Dynamic preprocValue(::String id);
		::Dynamic preprocValue_dyn();

		::Array< ::Dynamic> preprocStack;
		 ::hscript::Expr parsePreproCond();
		::Dynamic parsePreproCond_dyn();

		bool evalPreproCond( ::hscript::Expr e);
		::Dynamic evalPreproCond_dyn();

		 ::hscript::Token preprocess(::String id);
		::Dynamic preprocess_dyn();

		void skipTokens();
		::Dynamic skipTokens_dyn();

		 ::hscript::Token tokenComment(::String op,int _hx_char);
		::Dynamic tokenComment_dyn();

		::String constString( ::hscript::Const c);
		::Dynamic constString_dyn();

		::String tokenString( ::hscript::Token t);
		::Dynamic tokenString_dyn();

};

} // end namespace hscript

#endif /* INCLUDED_hscript_Parser */ 
