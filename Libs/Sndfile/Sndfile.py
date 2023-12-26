# Source: http://www.mega-nerd.com/libsndfile/
# Version: Version: 1.0.25 (Windows), Gitmaster (MacOSX/Linux)
# 
# MacOSX/Linux
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Run ./configure to generate the config file
# 4) Modify src/config.h and apply this change:
# #define HAVE_EXTERNAL_LIBS 1
# 
# Windows/Visual Studio
# 1) Download sources
# 2) Unarchive them here into a folder named orig
# 3) Copy extra/libsndfile-1.0.25_w32.lib or extra/libsndfile-1.0.25_w64.lib from the installation folder to Build\Bin\Sndfile.lib
# 4) Copy extra/libsndfile-1.0.25_w32.dll or extra/libsndfile-1.0.25_w64.dll from the installation folder to Build\Bin\libsndfile-1.dll

# Library info
Setup = {}
Setup['url'] = "https://github.com/michaelwu/libsndfile/archive/master.zip"
Setup['extractdir'] = "libsndfile-master"
Setup['steps'] = {}
Setup['steps']['posix'] = []
Setup['steps']['posix'].append('RunProcess("./configure")')
Setup['steps']['posix'].append('ReplaceText("src/config.h", "#define HAVE_EXTERNAL_LIBS 0", "#define HAVE_EXTERNAL_LIBS 1")')
Setup['steps']['win32'] = []
Setup['steps']['win32'].append('MakeDirectory("../../../Build/Bin/")')
Setup['steps']['win32'].append('CopyFile("../extra/libsndfile-1.0.25_w32.lib", "../../../Build/Bin/Sndfile.lib")')
Setup['steps']['win32'].append('CopyFile("../extra/libsndfile-1.0.25_w32.dll", "../../../Build/Bin/libsndfile-1.dll")')
Setup['steps']['win64'] = []
Setup['steps']['win64'].append('MakeDirectory("../../../Build/Bin/")')
Setup['steps']['win64'].append('CopyFile("../extra/libsndfile-1.0.25_w64.lib", "../../../Build/Bin/Sndfile.lib")')
Setup['steps']['win64'].append('CopyFile("../extra/libsndfile-1.0.25_w64.dll", "../../../Build/Bin/libsndfile-1.dll")')
