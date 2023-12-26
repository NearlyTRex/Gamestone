# Source: http://kcat.strangesoft.net/openal.html
# Version: 1.16.0
# 
# MacOSX/Linux
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Run cmake . to generate the config file
# 
# Windows/Visual Studio
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Copy extra/visualstudio/config.h into orig

# Library info
Setup = {}
Setup['url'] = "http://kcat.strangesoft.net/openal-releases/openal-soft-1.16.0.tar.bz2"
Setup['extractdir'] = "openal-soft-1.16.0"
Setup['steps'] = {}
Setup['steps']['posix'] = []
Setup['steps']['posix'].append('RunProcess("cmake .")')
Setup['steps']['windows'] = []
Setup['steps']['windows'].append('CopyFile("../extra/visualstudio/config.h", "config.h")')
