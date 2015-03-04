cmake_minimum_required (VERSION 2.8)

tycho_add_library(test "tycore" "libs")
add_dependencies(tytest boost_test)



