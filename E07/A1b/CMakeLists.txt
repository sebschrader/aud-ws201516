add_executable (E07-A1b-recursive-return-value test-return-value.c recursive-return-value.c)
add_executable (E07-A1b-iterative-double-pointer test-double-pointer.c iterative-double-pointer.c)
target_link_libraries (E07-A1b-recursive-return-value "list")
target_link_libraries (E07-A1b-iterative-double-pointer "list")
