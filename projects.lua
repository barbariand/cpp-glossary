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
project_def("primitives",   { "examples/0_primitives/**.cc" })
project_def("core",         { "examples/1_core/**.cc" })
project_def("string",       { "examples/2_string/**.cc" })
project_def("iostream",     { "examples/3_iostream/**.cc" })
project_def("fstream",      { "examples/fstream/**.cc" })
project_def("classes",      { "examples/classes/**.cc" })
project_def("inheritance",      { "examples/inheritance/**.cc" })
-- stylua: ignore end
