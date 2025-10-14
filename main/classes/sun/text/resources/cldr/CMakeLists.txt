#machine generated

add_subdirectory("ext")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.text.resources.c_0_SRCS)
file(GLOB classes.sun.text.resources.c_0_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.text.resources.c_0_HEADERS}) 
list(LENGTH classes.sun.text.resources.c_0_SRCS classes.sun.text.resources.c_0_SRCS_LENGTH)
if(classes.sun.text.resources.c_0_SRCS_LENGTH)
	add_library(classes.sun.text.resources.c_0 OBJECT "${classes.sun.text.resources.c_0_SRCS}" "${classes.sun.text.resources.c_0_HEADERS}")
	jcpp_enable_bigobj(classes.sun.text.resources.c_0)
endif()