#include "segfalutruby.h"

VALUE rb_mSegfalutruby;

void
Init_segfalutruby(void)
{
  rb_mSegfalutruby = rb_define_module("Segfalutruby");
}
