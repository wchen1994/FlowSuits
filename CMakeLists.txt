cmake_minimum_required(VERSION 3.0)

set(MASTER_DIR "${PROJECT_SOURCE_DIR}")
set(MASTER_INCLUDE "${MASTER_DIR}/include")

set(MASTER_HEADERS 
	"${MASTER_INCLUDE}/Base.hpp"
	"${MASTER_INCLUDE}/GenBase.hpp"
	"${MASTER_INCLUDE}/RecBase.hpp"
)

set(GENERATOR_DIR "${PROJECT_SOURCE_DIR}/Generators")
set(GENERATOR_INCLUDE_DIR "${GENERATOR_DIR}/include")

set(BINARY_DIR "${PROJECT_SOURCE_DIR}/bin")
set(LIBRARY_DIR "${PROJECT_SOURCE_DIR}/bin")

set(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin")
set(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin")

add_subdirectory(Generators)
add_subdirectory(Receivers)
add_subdirectory(Tests)
