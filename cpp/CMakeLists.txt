cmake_minimum_required(VERSION 2.8)
project (step_one)


file(GLOB cpp_files  *.cpp)

MACRO(COMPILE_STEP_ONE name srcs)
	#set(the_target "lala_${name}")
	set(the_target "s1_${name}")
	add_executable(${the_target} ${srcs})
ENDMACRO()

# make output into a 'bin' dir
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

foreach(cpp_filename ${cpp_files})
	# make out file no extension
	get_filename_component(sample ${cpp_filename} NAME_WE) 
	COMPILE_STEP_ONE(${sample}  ${cpp_filename})
endforeach()
