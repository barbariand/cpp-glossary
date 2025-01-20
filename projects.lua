---@diagnostic disable:undefined-global

---Helper function to define a project with premake
---@param name string
---@param __files string[]
local function project_def(name, __files)
	project(name)
	location("build")
	files(__files)
end

-- stylua: ignore start
project_def("primitives",   { "examples/0_primitives/**.cpp" })
project_def("core",         { "examples/1_core/**.cpp" })
project_def("string",       { "examples/2_string/**.cpp" })
project_def("iostream",     { "examples/3_iostream/**.cpp" })
project_def("fstream",      { "examples/fstream/**.cpp" })
-- stylua: ignore end
