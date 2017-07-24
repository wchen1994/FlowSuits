cmake_minimum_required(VERSION 3.0)

project (generators)

set(PROJ_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(PROJ_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

set(PROJ_SRCS "${PROJ_SOURCE_DIR}/GenKeyInput.cpp")

include_directories(
	${MASTER_INCLUDE}
	${PROJ_INCLUDE_DIR}
)

add_library(
	generators
	SHARED
	${PROJ_SRCS}
	${MASTER_HEADERS}
)
