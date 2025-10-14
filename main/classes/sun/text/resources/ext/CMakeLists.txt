#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.text.resources.ext_SRCS)
file(GLOB classes.sun.text.resources.ext_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.text.resources.ext_HEADERS}) 
list(LENGTH classes.sun.text.resources.ext_SRCS classes.sun.text.resources.ext_SRCS_LENGTH)
if(classes.sun.text.resources.ext_SRCS_LENGTH)
	add_library(classes.sun.text.resources.ext OBJECT "${classes.sun.text.resources.ext_SRCS}" "${classes.sun.text.resources.ext_HEADERS}")
	jcpp_enable_bigobj(classes.sun.text.resources.ext)
endif()