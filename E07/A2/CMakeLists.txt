add_executable (E07-A2-leafprod leafprod.c test-leafprod.c)
add_executable (E07-A2-baz baz.c test-baz.c)
target_link_libraries (E07-A2-leafprod "tree")
target_link_libraries (E07-A2-baz "tree")
