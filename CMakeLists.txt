cmake_minimum_required(VERSION 3.5)
project(calculator C)
add_subdirectory(include)
add_subdirectory(src)
add_library(calculator
    src/lib/calculator.c # Vérifiez le chemin ici
)
include_directories(include)
enable_testing()

add_test(NAME t1 COMMAND src/calculator add 2 3 EXPECTED_OUTPUT 5.000000)
add_test(NAME t2 COMMAND src/calculator sub 3 -2 EXPECTED_OUTPUT 5.000000)
add_test(NAME t3 COMMAND src/calculator mul 5 5 EXPECTED_OUTPUT 25.000000)
add_test(NAME t4 COMMAND src/calculator div 1 5 EXPECTED_OUTPUT 0.200000)

# --- NOUVEAU TEST : Carré ---
add_test(NAME t5 COMMAND src/calculator car 5 EXPECTED_OUTPUT 25.000000)
