---@diagnostic disable:undefined-global

require("ecc")

-- Workspace settings
workspace("C++ Glossary")
configurations("Debug", "Release")

-- Outputs
targetdir("bin/%{cfg.buildcfg}")

-- Build tools
toolset("clang")
kind("ConsoleApp")
language("C++")
cppdialect("C++11")

-- Projects
project("iostream")
files({ "examples/iostream/**.cpp" })

project("fstream")
files({ "examples/fstream/**.cpp" })

-- End projects

-- Debug configuration
filter("configurations:Debug")
defines({ "DEBUG" })
symbols("On")

-- Release configuration
filter("configurations:Release")
defines({ "RELEASE" })
optimize("On")
