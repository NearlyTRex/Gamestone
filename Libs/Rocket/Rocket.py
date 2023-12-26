# Source: http://librocket.com/
# Version: Gitmaster
# 
# MacOSX/Linux/Windows
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Copy extra/Python.h to orig/Include/Rocket/Core/Python/Python.h

# Library info
Setup = {}
Setup['url'] = "https://github.com/libRocket/libRocket/archive/master.zip"
Setup['extractdir'] = "libRocket-master"
Setup['steps'] = {}
Setup['steps']['all'] = []
Setup['steps']['all'].append('CopyFile("../extra/Python.h", "Include/Rocket/Core/Python/Python.h")')