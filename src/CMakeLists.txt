add_executable(myapp main.c)
target_link_libraries(myapp PRIVATE mylib)
install(TARGETS myapp RUNTIME DESTINATION bin)