# Source: http://xiph.org/ogg/
# Version: 1.3.2
# 
# MacOSX/Linux
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Run ./configure to generate the config file
# 
# Windows/Visual Studio
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Copy extra/visualstudio/config.h into orig

# Library info
Setup = {}
Setup['url'] = "http://downloads.xiph.org/releases/ogg/libogg-1.3.2.zip"
Setup['extractdir'] = "libogg-1.3.2"
Setup['steps'] = {}
Setup['steps']['posix'] = []
Setup['steps']['posix'].append('RunProcess("./configure")')
Setup['steps']['windows'] = []
Setup['steps']['windows'].append('CopyFile("../extra/visualstudio/config.h", "config.h")')