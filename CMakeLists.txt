cmake_minimum_required(VERSION 3.0)

set(SOURCE_DIR ".")

set(GENERATOR_DIR "Generators")
set(GENERATOR_INCLUDE_DIR "${GENERATOR_DIR}/include")
set(GENERATOR_BIN_DIR "${GENERATOR_DIR}/bin")
set(GENERATOR_LIB_DIR "${GENERATOR_DIR}/lib")

set(EXECUTABLE_OUTPUT_PATH "bin")
set(LIBRARY_OUTPUT_PATH "lib")

add_subdirectory(Generators)
add_subdirectory(Tests)
