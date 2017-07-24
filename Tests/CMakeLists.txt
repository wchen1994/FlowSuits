cmake_minimum_required(VERSION 3.0)

project(genloader)

set (PROJ_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

include_directories(
	${SOURCE_DIR}
	${GENERATOR_INCLUDE_DIR}
	${MASTER_INCLUDE}
)

link_directories(
	${BINARY_DIR}
	${LIBRARY_DIR}
)

add_executable(
	genloader
	"${PROJ_SOURCE_DIR}/genloader.cpp"
	"${MASTER_HEADERS}"
)

target_link_libraries(
	genloader
	generators
)
