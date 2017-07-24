cmake_minimum_required(VERSION 3.0)

project (receivers)

set(PROJECT_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

set(PROJECT_SRCS
	"${PROJECT_SOURCE_DIR}/RecKeySim.cpp"
)

include_directories(
	${PROJECT_INCLUDE_DIR}
	${MASTER_INCLUDE}
)

add_library(
	receivers
	SHARED
	${PROJECT_SRCS}
	${MASTER_HEADERS}
)
