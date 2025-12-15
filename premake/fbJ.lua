workspace "JsonCrudFullstack"
    configurations { "Debug", "Release" }
    location "build"

project "CppBackend"
    kind "ConsoleApp"
    language "C++"
    targetdir "backend/bin/%{cfg.buildcfg}"

    files { "backend/src/**.cpp", "backend/include/**.h" }
    includedirs { "backend/include" }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

project "VueFrontend"
    kind "ConsoleApp"
    language "C++" -- placeholder
    targetdir "frontend/dist/%{cfg.buildcfg}"

    files { "frontend/src/**.vue", "frontend/src/**.js", "frontend/public/**" }

    prebuildcommands { "cd frontend && npm install" }

    filter "configurations:Debug"
        prebuildcommands { "cd frontend && npm run dev" }

    filter "configurations:Release"
        prebuildcommands { "cd frontend && npm run build" }
