// Module configuration
#include "Python.h"

#ifdef __cplusplus
extern "C" {
#endif
  
  // Module externs
  extern void init_ast(void);
  extern void init_bisect(void);
  extern void init_codecs(void);
  extern void init_collections(void);
  extern void init_csv(void);
  extern void init_functools(void);
  extern void init_heapq(void);
  extern void init_json(void);
  extern void init_locale(void);
  extern void init_md5(void);
  extern void init_random(void);
  extern void init_sha256(void);
  extern void init_sha512(void);
  extern void init_sha(void);
  extern void init_sre(void);
  extern void init_struct(void);
  extern void init_symtable(void);
  extern void _PyWarnings_Init(void);
  extern void init_weakref(void);
  extern void initarray(void);
  extern void initbinascii(void);
  extern void initcmath(void);
  extern void initcPickle(void);
  extern void initcStringIO(void);
  extern void initdatetime(void);
  extern void initerrno(void);
  extern void initgc(void);
  extern void initimp(void);
  extern void inititertools(void);
  extern void PyMarshal_Init(void);
  extern void initmath(void);
  extern void initoperator(void);
  extern void initparser(void);
#ifdef _MSC_VER
  extern void initnt(void);
#else
  extern void initposix(void);
#endif
  extern void initsignal(void);
  extern void initstrop(void);
  extern void inittime(void);
  extern void initxx(void);
  extern void initzipimport(void);
  extern void initzlib(void);
  
  // Bulitin modules
  struct _inittab _PyImport_Inittab[] =
  {
    {"_ast", init_ast},
    {"_bisect", init_bisect},
    {"_codecs", init_codecs},
    {"_collections", init_collections},
    {"_csv", init_csv},
    {"_functools", init_functools},
    {"_heapq", init_heapq},
    {"_json", init_json},
    {"_locale", init_locale},
    {"_md5", init_md5},
    {"_random", init_random},
    {"_sha256", init_sha256},
    {"_sha512", init_sha512},
    {"_sha", init_sha},
    {"_sre", init_sre},
    {"_struct", init_struct},
    {"_symtable", init_symtable},
    {"_warnings", _PyWarnings_Init},
    {"_weakref", init_weakref},
    {"array", initarray},
    {"binascii", initbinascii},
    {"cmath", initcmath},
    {"cPickle", initcPickle},
    {"cStringIO", initcStringIO},
    {"datetime", initdatetime},
    {"errno", initerrno},
    {"gc", initgc},
    {"imp", initimp},
    {"itertools", inititertools},
    {"marshal", PyMarshal_Init},
    {"math", initmath},
    {"operator", initoperator},
    {"parser", initparser},
#ifdef _MSC_VER
    {"nt", initnt},
#else
    {"posix", initposix},
#endif
    {"signal", initsignal},
    {"strop", initstrop},
    {"time", inittime},
    {"xx", initxx},
    {"zipimport", initzipimport},
    {"zlib", initzlib},
    {"__main__", NULL},
    {"__builtin__", NULL},
    {"sys", NULL},
    {"exceptions", NULL},
    {0, 0}
  };
  
#ifdef __cplusplus
}
#endif

