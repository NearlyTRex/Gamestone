-- Shallow copy
function table.shallow_copy(t)
    local t2 = {}
    for k,v in pairs(t) do
        t2[k] = v
    end
    return t2
end

-- Create project
function CreateProject(name, options)
    
    function getProjectStr(value)
        if options[value] ~= nil and type(options[value]) == "string" then
            return options[value]
        else
            return ""
        end
    end
    
    function getProjectTable(value)
        if options[value] ~= nil and type(options[value]) == "table" then
            return options[value]
        else
            return {}
        end
    end
    
    project(name)
        targetname((function() if getProjectStr("target") == "" then return name else return getProjectStr("target") end end)())
        kind(getProjectStr("type"))
        language(getProjectStr("lang"))
        location("../Build/Makefiles/")
        objdir("../Build/Obj/")
        targetdir("../Build/Bin/")
        includedirs(getProjectTable("includedirs"))
        libdirs(getProjectTable("libdirs"))
        defines(getProjectTable("defines"))
        files(getProjectTable("sources"))
        excludes(getProjectTable("excludes"))
        buildoptions(getProjectTable("buildoptions"))
        linkoptions(getProjectTable("linkoptions"))
        links(getProjectTable("libs"))
        flags(getProjectTable("flags"))
        
        configuration "macosx"
            if getProjectStr("lang") == "C++" then
                buildoptions { "-std=c++11", "-stdlib=libc++" }
                linkoptions { "-stdlib=libc++" }
            elseif getProjectStr("lang") == "C" then
                buildoptions { "-stdlib=libc++" }
                linkoptions { "-stdlib=libc++" }
            end
            linkoptions {
                "-lobjc",
                "-framework OpenGL",
                "-framework Carbon",
                "-framework IOKit",
                "-framework AppKit",
                "-framework AudioToolbox",
                "-framework CoreAudio",
                "-framework AudioUnit"
            }
            flags {
                "Symbols"
            }
        
        configuration "linux"
            if getProjectStr("lang") == "C++" then
                buildoptions { "-std=c++11" }
                linkoptions { "-stdlib=libc++" }
            elseif getProjectStr("lang") == "C" then
                linkoptions { "-stdlib=libc++" }
            end
            
        configuration "vs*"
            defines {
                "_CRT_SECURE_NO_WARNINGS",
                "_CRT_SECURE_NO_DEPRECATE",
                "_CRT_NONSTDC_NO_DEPRECATE",
                "_WINSOCK_DEPRECATED_NO_WARNINGS"
            }
            links {"glu32", "opengl32", "winmm", "user32"}
            flags {
                "NoRuntimeChecks"
            }
            nativewchar "On"
end
