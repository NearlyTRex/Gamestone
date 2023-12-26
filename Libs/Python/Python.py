# Source: http://www.python.org/
# Version: 2.7.8
# 
# MacOSX/Linux
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Run ./configure to generate the config file
# 4) Modify pyconfig.h to set this line:
#   #undef HAVE_DYNAMIC_LOADING
#
# Windows/Visual Studio
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Copy PC/pyconfig.h and PC/errmap.h into orig
# 4) Modify pyconfig.h to set this line:
#   #undef HAVE_DYNAMIC_LOADING

# Library info
Setup = {}
Setup['url'] = "https://www.python.org/ftp/python/2.7.8/Python-2.7.8.tgz"
Setup['extractdir'] = "Python-2.7.8"
Setup['steps'] = {}
Setup['steps']['posix'] = []
Setup['steps']['posix'].append('RunProcess("./configure")')
Setup['steps']['posix'].append('ReplaceText("pyconfig.h", "#define HAVE_DYNAMIC_LOADING", "#undef HAVE_DYNAMIC_LOADING")')
Setup['steps']['windows'] = []
Setup['steps']['windows'].append('CopyFile("PC/pyconfig.h", "pyconfig.h")')
Setup['steps']['windows'].append('CopyFile("PC/errmap.h", "errmap.h")')
Setup['steps']['windows'].append('ReplaceText("pyconfig.h", "#define HAVE_DYNAMIC_LOADING", "#undef HAVE_DYNAMIC_LOADING")')
