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

#ifndef __GENERATED_cls_runtimeexception_h__
#define __GENERATED_cls_runtimeexception_h__

#include <cls/exception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 98 */
class c_runtimeexception : public c_exception {
  BEGIN_CLASS_MAP(runtimeexception)
    PARENT_CLASS(exception)
  END_CLASS_MAP(runtimeexception)
  DECLARE_CLASS_COMMON(runtimeexception, RuntimeException)
  DECLARE_INVOKE_EX(runtimeexception, RuntimeException, exception)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_runtimeexception 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_runtimeexception 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_runtimeexception 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_runtimeexception 1

  // DECLARE_INSTANCE_PROP_OPS
  DECLARE_INSTANCE_PROP_OPS

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_runtimeexception 1
  #define OMIT_JUMP_TABLE_CLASS_get_PUBLIC_runtimeexception 1
  #define OMIT_JUMP_TABLE_CLASS_set_PUBLIC_runtimeexception 1
  #define OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_runtimeexception 1

  // DECLARE_COMMON_INVOKE
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_runtimeexception 1
  virtual Variant o_invoke(const char *s, CArrRef ps, int64 h,
                           bool f = true);
  virtual Variant o_invoke_few_args(const char *s, int64 h,
                                    int count,
                                    INVOKE_FEW_ARGS_DECL_ARGS);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
};
extern struct ObjectStaticCallbacks cw_runtimeexception;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_runtimeexception_h__
