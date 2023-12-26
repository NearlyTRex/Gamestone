// Gamestone Engine
// Licensed under the LGPL
#ifndef WRAPPER_H
#define WRAPPER_H

// System includes
#include <Python.h>
#include <structmember.h>
#include <compile.h>
#include <frameobject.h>
#include <traceback.h>
#include <boost/python.hpp>
#include <boost/python/operators.hpp>
#include <boost/python/class.hpp>
#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
#include <boost/python/implicit.hpp>
#include <boost/python/extract.hpp>
#include <boost/python/return_internal_reference.hpp>
#include <boost/python/suite/indexing/vector_indexing_suite.hpp>
#include <boost/python/suite/indexing/map_indexing_suite.hpp>
#include <boost/operators.hpp>

// Types
#define PythonObject boost::python::object
#define PythonDict boost::python::dict
#define PythonList boost::python::list
#define PythonTuple boost::python::tuple
#define SelfObject boost::python::self

// Functions
#define PythonImport boost::python::import
#define PythonExtract boost::python::extract
#define PythonMakeTuple boost::python::make_tuple
#define PythonEval boost::python::eval
#define PythonExec boost::python::exec
#define PythonExecFile boost::python:exec_file
#define PythonLen boost::python::len
#define PythonCall boost::python::call

// Defs
#define ClassDef boost::python::class_
#define EnumDef boost::python::enum_
#define FuncDef boost::python::def
#define BaseDef boost::python::bases
#define InitDef boost::python::init
#define NoInitDef boost::python::no_init
#define NonCopyableDef boost::noncopyable
#define WrapperDef boost::python::wrapper
#define ScopeDef boost::python::scope
#define StrDef boost::python::self_ns::str
#define VectorIndexDef boost::python::vector_indexing_suite
#define MapIndexDef boost::python::map_indexing_suite
#define ExceptionDef boost::python::register_exception_translator

// Pointers
#define BoostSharedPtr boost::shared_ptr
#define RegisterSharedPointer boost::python::register_ptr_to_python

// Returns
#define ReturnInternalReference boost::python::return_internal_reference<>()
#define ReturnConstCopyReference boost::python::return_value_policy<boost::python::copy_const_reference>()
#define ReturnExistingObject boost::python::return_value_policy<boost::python::reference_existing_object>()

// Class macros
#define REGISTER_CLASS_ARRAY(name, string)                                                ClassDef<name>(string).def(VectorIndexDef<name>());
#define REGISTER_CLASS_TABLE(name, string)                                                ClassDef<name>(string).def(MapIndexDef<name>());
#define REGISTER_CLASS_HEADER_CONSTRUCT(name, string)                                     ClassDef<name>(string)
#define REGISTER_CLASS_HEADER_CONSTRUCT_INIT(name, init, string)                          ClassDef<name>(string, init)
#define REGISTER_CLASS_HEADER_CONSTRUCT_INIT_BASE1(name, init, b1, string)                ClassDef<name, BaseDef<b1> >(string, init)
#define REGISTER_CLASS_HEADER_CONSTRUCT_INIT_BASE2(name, init, b1, b2, string)            ClassDef<name, BaseDef<b1, b2> >(string, init)
#define REGISTER_CLASS_HEADER_NONCONSTRUCT(name, string)                                  ClassDef<name>(string, NoInitDef)
#define REGISTER_CLASS_HEADER_ABSTRACT(name, string)                                      ClassDef<name, NonCopyableDef>(string, NoInitDef)
#define REGISTER_CLASS_HEADER_ABSTRACT_BASE1(name, b1, string)                            ClassDef<name, NonCopyableDef, BaseDef<b1> >(string, NoInitDef)
#define REGISTER_CLASS_HEADER_ABSTRACT_BASE2(name, b1, b2, string)                        ClassDef<name, NonCopyableDef, BaseDef<b1, b2> >(string, NoInitDef)
#define REGISTER_CLASS_HEADER_ABSTRACT_BASE3(name, b1, b2, b3, string)                    ClassDef<name, NonCopyableDef, BaseDef<b1, b2, b3> >(string, NoInitDef)
#define REGISTER_CLASS_HEADER_ABSTRACT_BASE4(name, b1, b2, b3, b4, string)                ClassDef<name, NonCopyableDef, BaseDef<b1, b2, b3, b4> >(string, NoInitDef)
#define REGISTER_CLASS_HEADER_ABSTRACT_BASE5(name, b1, b2, b3, b4, b5, string)            ClassDef<name, NonCopyableDef, BaseDef<b1, b2, b3, b4, b5> >(string, NoInitDef)
#define REGISTER_CLASS_HEADER_ABSTRACT_BASE6(name, b1, b2, b3, b4, b5, b6, string)        ClassDef<name, NonCopyableDef, BaseDef<b1, b2, b3, b4, b5, b6> >(string, NoInitDef)
#define REGISTER_CLASS_HEADER_CONSTRUCT_BASES1(name, b1, string)                          ClassDef<name, BaseDef<b1> >(string)
#define REGISTER_CLASS_HEADER_CONSTRUCT_BASES2(name, b1, b2, string)                      ClassDef<name, BaseDef<b1, b2> >(string)
#define REGISTER_CLASS_HEADER_CONSTRUCT_BASES3(name, b1, b2, b3, string)                  ClassDef<name, BaseDef<b1, b2, b3> >(string)
#define REGISTER_CLASS_HEADER_CONSTRUCT_BASES4(name, b1, b2, b3, b4, string)              ClassDef<name, BaseDef<b1, b2, b3, b4> >(string)
#define REGISTER_CLASS_HEADER_CONSTRUCT_BASES5(name, b1, b2, b3, b4, b5, string)          ClassDef<name, BaseDef<b1, b2, b3, b4, b5> >(string)
#define REGISTER_CLASS_HEADER_CONSTRUCT_BASES6(name, b1, b2, b3, b4, b5, b6, string)      ClassDef<name, BaseDef<b1, b2, b3, b4, b5, b6> >(string)
#define REGISTER_CLASS_HEADER_NONCONSTRUCT_BASES1(name, b1, string)                       ClassDef<name, BaseDef<b1> >(string, NoInitDef)
#define REGISTER_CLASS_HEADER_NONCONSTRUCT_BASES2(name, b1, b2, string)                   ClassDef<name, BaseDef<b1, b2> >(string, NoInitDef)
#define REGISTER_CLASS_HEADER_NONCONSTRUCT_BASES3(name, b1, b2, b3, string)               ClassDef<name, BaseDef<b1, b2, b3> >(string, NoInitDef)
#define REGISTER_CLASS_HEADER_NONCONSTRUCT_BASES4(name, b1, b2, b3, b4, string)           ClassDef<name, BaseDef<b1, b2, b3, b4> >(string, NoInitDef)
#define REGISTER_CLASS_HEADER_NONCONSTRUCT_BASES5(name, b1, b2, b3, b4, b5, string)       ClassDef<name, BaseDef<b1, b2, b3, b4. b5> >(string, NoInitDef)
#define REGISTER_CLASS_HEADER_NONCONSTRUCT_BASES6(name, b1, b2, b3, b4, b5, b6, string)   ClassDef<name, BaseDef<b1, b2, b3, b4, b5, b6> >(string, NoInitDef)
#define REGISTER_CLASS_INIT1(i1)                                                          .def(InitDef<i1>())
#define REGISTER_CLASS_INIT2(i1, i2)                                                      .def(InitDef<i1, i2>())
#define REGISTER_CLASS_INIT3(i1, i2, i3)                                                  .def(InitDef<i1, i2, i3>())
#define REGISTER_CLASS_INIT4(i1, i2, i3, i4)                                              .def(InitDef<i1, i2, i3, i4>())
#define REGISTER_CLASS_INIT5(i1, i2, i3, i4, i5)                                          .def(InitDef<i1, i2, i3, i4, i5>())
#define REGISTER_CLASS_INIT6(i1, i2, i3, i4, i5, i6)                                      .def(InitDef<i1, i2, i3, i4, i5, i6>())
#define REGISTER_CLASS_INIT7(i1, i2, i3, i4, i5, i6, i7)                                  .def(InitDef<i1, i2, i3, i4, i5, i6, i7>())
#define REGISTER_CLASS_INIT8(i1, i2, i3, i4, i5, i6, i7, i8)                              .def(InitDef<i1, i2, i3, i4, i5, i6, i7, i8>())
#define REGISTER_CLASS_OPERATOR(name)                                                     .def(name)
#define REGISTER_CLASS_STRING(name)                                                       .def("__str__", name)
#define REGISTER_CLASS_STRING_CONST(name)                                                 .def("__str__", name, ReturnConstCopyReference)
#define REGISTER_CLASS_METHOD(name, string)                                               .def(string, name)
#define REGISTER_CLASS_METHOD_RETURNREF(name, string)                                     .def(string, name, ReturnInternalReference)
#define REGISTER_CLASS_METHOD_RETURNCREF(name, string)                                    .def(string, name, ReturnConstCopyReference)
#define REGISTER_CLASS_METHOD_RETURNEXISTING(name, string)                                .def(string, name, ReturnExistingObject)
#define REGISTER_CLASS_METHOD_RETURNSINGLE(name, string)                                  .def(string, name, ReturnExistingObject).staticmethod(string)
#define REGISTER_CLASS_METHOD_STATIC(string)                                              .staticmethod(string)
#define REGISTER_CLASS_DATA_READWRITE(name, string)                                       .def_readwrite(string, name)
#define REGISTER_CLASS_DATA_READONLY(name, string)                                        .def_readonly(string, name)
#define REGISTER_CLASS_PROPERTY_GET(getname, string)                                      .add_property(string, getname)
#define REGISTER_CLASS_PROPERTY_GETSET(getname, setname, string)                          .add_property(string, getname, setname)
#define REGISTER_CLASS_FOOTER()                                                           ;

// Enum macros
#define REGISTER_ENUM_HEADER(name, string)                                        EnumDef<name>(string)
#define REGISTER_ENUM_VALUE(name, string)                                         .value(string, name)
#define REGISTER_ENUM_FOOTER()                                                    ;

// Function macros
#define REGISTER_FUNCTION(name, string)                                           FuncDef(string, name);
#define REGISTER_FUNCTION_RETURNREF(name, string)                                 FuncDef(string, name, ReturnInternalReference());
#define REGISTER_FUNCTION_RETURNEXISTING(name, string)                            FuncDef(string, name, ReturnExistingObject);

// Constant macros
#define REGISTER_CONSTANT(name, string)                                           ScopeDef().attr(string) = name;

// Exception macros
#define REGISTER_EXCEPTION(class, translatefunc)                                  ExceptionDef<class>(translatefunc);

// Pointer macros
#define REGISTER_POINTER(class)                                                   RegisterSharedPointer<BoostSharedPtr<class> >();

#endif
