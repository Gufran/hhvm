/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_appenditerator_h__
#define __GENERATED_cls_appenditerator_h__

#include <cls/outeriterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/iterator.php line 283 */
class c_appenditerator : public ExtObjectData {
  BEGIN_CLASS_MAP(appenditerator)
    PARENT_CLASS(iterator)
    PARENT_CLASS(outeriterator)
    PARENT_CLASS(traversable)
  END_CLASS_MAP(appenditerator)
  DECLARE_CLASS_COMMON(appenditerator, AppendIterator)
  DECLARE_INVOKE_EX(appenditerator, AppendIterator, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(const char *s, int64 hash);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_appenditerator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_appenditerator 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_appenditerator 1

  // DECLARE_INSTANCE_PROP_OPS
  DECLARE_INSTANCE_PROP_OPS

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_appenditerator 1
  #define OMIT_JUMP_TABLE_CLASS_get_PUBLIC_appenditerator 1
  #define OMIT_JUMP_TABLE_CLASS_set_PUBLIC_appenditerator 1
  #define OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_appenditerator 1

  // DECLARE_COMMON_INVOKE
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_appenditerator 1
  virtual Variant o_invoke(const char *s, CArrRef ps, int64 h,
                           bool f = true);
  virtual Variant o_invoke_few_args(const char *s, int64 h,
                                    int count,
                                    INVOKE_FEW_ARGS_DECL_ARGS);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: Variant m_iterators;
  Variant doCall(Variant v_name, Variant v_arguments, bool fatal);
  public: void t___construct();
  public: c_appenditerator *create();
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: void t_append(CVarRef v_it);
  public: Variant t_getinneriterator();
  public: void t_rewind();
  public: bool t_valid();
  public: Variant t_current();
  public: Variant t_key();
  public: void t_next();
  public: Variant t___call(Variant v_func, Variant v_params);
};
extern struct ObjectStaticCallbacks cw_appenditerator;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_appenditerator_h__
