# Source: http://www.ijg.org/
# Version: v9a
# 
# MacOSX/Linux
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Run ./configure to generate the config file
# 
# Windows/Visual Studio
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Copy extra/visualstudio/jconfig.h into orig

# Library info
Setup = {}
Setup['url'] = "http://www.ijg.org/files/jpegsr9a.zip"
Setup['extractdir'] = "jpeg-9a"
Setup['steps'] = {}
Setup['steps']['posix'] = []
Setup['steps']['posix'].append('RunProcess("./configure")')
Setup['steps']['windows'] = []
Setup['steps']['windows'].append('CopyFile("../extra/visualstudio/jconfig.h", "jconfig.h")')
