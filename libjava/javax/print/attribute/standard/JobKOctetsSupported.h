
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_JobKOctetsSupported__
#define __javax_print_attribute_standard_JobKOctetsSupported__

#pragma interface

#include <javax/print/attribute/SetOfIntegerSyntax.h>
extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        namespace standard
        {
            class JobKOctetsSupported;
        }
      }
    }
  }
}

class javax::print::attribute::standard::JobKOctetsSupported : public ::javax::print::attribute::SetOfIntegerSyntax
{

public:
  JobKOctetsSupported(jint, jint);
  jboolean equals(::java::lang::Object *);
  ::java::lang::Class * getCategory();
  ::java::lang::String * getName();
private:
  static const jlong serialVersionUID = -2867871140549897443LL;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_print_attribute_standard_JobKOctetsSupported__