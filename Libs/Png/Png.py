# Source: http://www.libpng.org/pub/png/libpng.html
# Version: 1.6.13 (MacOSX/Linux) 1.6.12 (Windows)
# 
# MacOSX/Linux
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Run ./configure to generate the config file
# 4) Edit config.h and add this line:
# #define PNGLCONF_H 1
# 
# Windows/Visual Studio
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Copy extra/visualstudio/config.h into orig

# Imports
import sys

# Library info
Setup = {}
if sys.platform.startswith('win') or sys.platform.startswith('cygwin'):
    Setup['url'] = "http://downloads.sourceforge.net/project/libpng/libpng16/older-releases/1.6.12/lpng1612.zip"
    Setup['extractdir'] = "lpng1612"
else:
    Setup['url'] = "http://downloads.sourceforge.net/project/libpng/libpng16/1.6.13/libpng-1.6.13.tar.gz"
    Setup['extractdir'] = "libpng-1.6.13"
Setup['steps'] = {}
Setup['steps']['posix'] = []
Setup['steps']['posix'].append('RunProcess("./configure")')
Setup['steps']['posix'].append('AppendText("#define PNGLCONF_H 1")')
Setup['steps']['windows'] = []
Setup['steps']['windows'].append('CopyFile("../extra/visualstudio/config.h", "config.h")')
