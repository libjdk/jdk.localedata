#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.util.resources.p_5_SRCS)
file(GLOB classes.sun.util.resources.p_5_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.util.resources.p_5_HEADERS}) 
list(LENGTH classes.sun.util.resources.p_5_SRCS classes.sun.util.resources.p_5_SRCS_LENGTH)
if(classes.sun.util.resources.p_5_SRCS_LENGTH)
	add_library(classes.sun.util.resources.p_5 OBJECT "${classes.sun.util.resources.p_5_SRCS}" "${classes.sun.util.resources.p_5_HEADERS}")
	jcpp_enable_bigobj(classes.sun.util.resources.p_5)
endif()