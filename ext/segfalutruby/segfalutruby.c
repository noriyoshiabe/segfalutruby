#include "segfalutruby.h"

VALUE rb_mSegfalutruby;

static VALUE exec(VALUE self)
{
    sprintf((char *)0, "oops!");
    return 0;
}

void
Init_segfalutruby(void)
{
  rb_mSegfalutruby = rb_define_module("Segfalutruby");
  rb_define_singleton_method(rb_mSegfalutruby, "exec", exec, 0);
}
