# Setup script
# Download, extract, and configure libraries
# Configure project for various platforms
#
# Requirements:
# - Premake 4/5/latest (http://industriousone.com/premake)
# - Python 2.x/3.x (https://www.python.org/)
# - Python module patool (http://wummel.github.io/patool/)
# - Python module pyunpack (https://github.com/ponty/pyunpack)
#
# Windows useful tools:
# - Cygwin (https://www.cygwin.com/)
# - TDM-GCC (http://tdm-gcc.tdragon.net/)
# - Visual Studio Express (http://www.visualstudio.com/en-us/products/visual-studio-express-vs.aspx)

# Imports
import os
import os.path
import sys
import importlib
import subprocess
import shutil
import pyunpack
import urllib2

#################################################################
## Setup commands
#################################################################

# Setup project
def SetupProject():
    
    # Inform user
    print("Setting up project...")
    
    # Script directory
    scriptdir = os.path.dirname(os.path.realpath(__file__))
    toolsdir = os.path.join(scriptdir, "Tools")
    
    # Detect platforms
    is_linux = sys.platform.startswith('linux')
    is_macosx = sys.platform.startswith('darwin')
    is_windows = sys.platform.startswith('win') or sys.platform.startswith('cygwin')
    is_cygwin = sys.platform.startswith('cygwin')
    
    # Premake info
    Premake = {}
    if is_linux:
        Premake['url'] = 'http://downloads.sourceforge.net/project/premake/Premake/nightlies/premake-dev-linux.zip'
        Premake['archive'] = 'premake-dev-linux.zip'
        Premake['dir'] = 'premake-dev-linux'
        Premake['binary'] = 'bin/release/premake5'
    elif is_macosx:
        Premake['url'] = 'http://downloads.sourceforge.net/project/premake/Premake/nightlies/premake-dev-macos.zip'
        Premake['archive'] = 'premake-dev-macos.zip'
        Premake['dir'] = 'premake-dev-macos'
        Premake['binary'] = 'bin/release/premake5'
    elif is_windows:
        Premake['url'] = 'http://downloads.sourceforge.net/project/premake/Premake/nightlies/premake-dev-windows.zip'
        Premake['archive'] = 'premake-dev-windows.zip'
        Premake['dir'] = 'premake-dev-windows'
        Premake['binary'] = 'bin/release/premake5.exe'
    else:
        print("Prebuilt premake is not available for your platform")
        sys.exit()
    
    # Fill in paths
    Premake['archive'] = os.path.join(toolsdir, Premake['archive'])
    Premake['dir'] = os.path.join(toolsdir, Premake['dir'])
    Premake['binary'] = "\"" + os.path.join(Premake['dir'], Premake['binary']) + "\""
    
    # Setup Premake
    DownloadFile(Premake['url'], Premake['archive'])
    ExtractArchive(Premake['archive'], Premake['dir'])
    if is_linux or is_macosx or is_cygwin:
        RunProcess("chmod a+x " + Premake['binary'])
    
    # Create project files
    RunProcess(Premake['binary'] + " gmake")
    RunProcess(Premake['binary'] + " vs2013")

# Setup library
def SetupLibrary(libname):
    
    # Inform user
    print("Setting up " + libname + " library...")
    
    # Import and setup library
    scriptdir = os.path.dirname(os.path.abspath(__file__))
    libdir = os.path.join("./Libs/", libname)
    sys.path.append(libdir)
    module = importlib.import_module(libname)
    
    # Generate archive info
    archive_base = module.Setup['url'].split('/')[-1].split('.')[0]
    archive_ext = module.Setup['url'].split('.')[-1]
    archive_file = os.path.join(libdir, archive_base + '.' + archive_ext)
    archive_olddir = os.path.join(libdir, module.Setup['extractdir'])
    archive_newdir = os.path.join(libdir, "orig")
    
    # Download archive if it does not exist
    DownloadFile(module.Setup['url'], archive_file)
    
    # Extract file
    if not os.path.exists(archive_olddir) and not os.path.exists(archive_newdir):
        ExtractArchive(archive_file, libdir)
    
    # Rename folder
    if os.path.exists(archive_olddir) and not os.path.exists(archive_newdir):
        shutil.move(archive_olddir, archive_newdir)
    
    # Go to new archive directory
    os.chdir(archive_newdir)
    
    # Detect platforms
    is_linux = sys.platform.startswith('linux')
    is_macosx = sys.platform.startswith('darwin')
    is_windows = sys.platform.startswith('win')
    is_win32 = sys.platform.startswith('win32')
    is_win64 = sys.platform.startswith('win64')
    is_cygwin = sys.platform.startswith('cygwin')
    
    # Extra steps
    RunExtraSteps(module.Setup['steps'], "linux", is_linux)
    RunExtraSteps(module.Setup['steps'], "macosx", is_macosx)
    RunExtraSteps(module.Setup['steps'], "posix", (is_linux or is_macosx))
    RunExtraSteps(module.Setup['steps'], "windows", (is_windows or is_cygwin))
    RunExtraSteps(module.Setup['steps'], "win32", is_win32)
    RunExtraSteps(module.Setup['steps'], "win64", is_win64)
    RunExtraSteps(module.Setup['steps'], "all", (is_linux or is_macosx or is_windows or is_cygwin))
    
    # Go back to script directory
    os.chdir(scriptdir)
    
    # Print separator
    print("")

# Run process and show output in realtime
def RunProcess(process):
    print(" -- Running process " + process + " ...")
    subprocess.call(process, shell=True)

# Run extra steps
def RunExtraSteps(steps, platform, flags):
    if platform in steps and flags:
        for step in steps[platform]:
            print(" -- Running extra step " + step + " ...")
            eval(step)

# Download file
def DownloadFile(url, filename):
    if not os.path.exists(filename):
        print(" -- Downloading " + url + " ...")
        request = urllib2.urlopen(url)
        output = open(filename, "wb")
        output.write(request.read())
        output.close()

# Extract archive to the given folder
def ExtractArchive(archive, directory):
    if os.path.exists(archive) and os.path.isfile(archive):
        print(" -- Extracting " + archive + " to " + directory + " ...")
        pyunpack.Archive(archive).extractall(directory, True)

#################################################################
## Extra step commands
#################################################################

# Make directory
def MakeDirectory(path):
    realpath = os.path.realpath(path)
    if not os.path.exists(realpath):
        os.makedirs(realpath)

# Removes file
def RemoveFile(path):
    if os.path.isfile(path):
        os.remove(path)

# Rename file
def RenameFile(src, dest):
    if os.path.isfile(path):
        os.rename(path)

# Copy file or directory
def Copy(src, dest):
    if os.path.exists(src):
        shutil.copy(src, dest)

# Copy file
def CopyFile(src, dest):
    if os.path.exists(src):
        shutil.copyfile(src, dest)

# Copy directory tree
def CopyTree(src, dest):
    shutil.copytree(src, dest)

# Remove directory tree
def RemoveTree(path):
    shutil.rmtree(path)

# Move folder or directory
def Move(src, dest):
    shutil.move(src, dest)

# Append text in the given file
def AppendText(filename, text):
    with open(filename, "a") as f:
        f.write(text)

# Replace text in the given file
def ReplaceText(filename, old, new):
    f = open(filename,'r')
    filedata = f.read()
    f.close()
    newdata = filedata.replace(old, new)
    f = open(filename,'w')
    f.write(newdata)
    f.close()

#################################################################
# Setup libraries
#################################################################
SetupLibrary("Assert")
SetupLibrary("Boost")
SetupLibrary("Box2D")
SetupLibrary("Cajun")
SetupLibrary("FLAC")
SetupLibrary("Freetype")
SetupLibrary("Glew")
SetupLibrary("Greenlet")
SetupLibrary("Jpeg")
SetupLibrary("Ogg")
SetupLibrary("OpenALSoft")
SetupLibrary("Png")
SetupLibrary("Python")
SetupLibrary("Rocket")
SetupLibrary("SFML")
SetupLibrary("Sndfile")
SetupLibrary("SQLite")
SetupLibrary("Thor")
SetupLibrary("TMXLoader")
SetupLibrary("Vorbis")
SetupLibrary("ZLib")

#################################################################
# Setup projects
#################################################################
SetupProject()
