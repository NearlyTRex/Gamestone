# Source: http://xiph.org/flac/
# Version: 1.3.0
# 
# MacOSX/Linux
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Run ./configure to generate the config file
# 4) Modify config.h and apply these changes:
# #define FLAC__HAS_OGG 1
# 
# Windows/Visual Studio
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Copy extra/visualstudio/config.h into orig

# Library info
Setup = {}
Setup['url'] = "http://downloads.xiph.org/releases/flac/flac-1.3.0.tar.xz"
Setup['extractdir'] = "flac-1.3.0"
Setup['steps'] = {}
Setup['steps']['posix'] = []
Setup['steps']['posix'].append('RunProcess("./configure")')
Setup['steps']['posix'].append('ReplaceText("config.h", "#define FLAC__HAS_OGG 0", "#define FLAC__HAS_OGG 1")')
Setup['steps']['windows'] = []
Setup['steps']['windows'].append('CopyFile("../extra/visualstudio/config.h", "config.h")')
