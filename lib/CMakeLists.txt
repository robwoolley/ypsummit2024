add_library(mylib SHARED mylib.c)
target_include_directories(mylib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(mylib PROPERTIES VERSION 1.0.0 SOVERSION 1)
install(TARGETS mylib LIBRARY DESTINATION lib)
