cmake_minimum_required(VERSION 3.7)

project(Test LANGUAGES CXX)


find_package(SDL2 REQUIRED)

add_executable(${PROJECT_NAME} "")
file(GLOB_RECURSE SOURCES src/*.cpp)

target_sources(${PROJECT_NAME} PRIVATE ${SOURCES})
include_directories(PRIVATE ${SDL2_INCLUDE_DIRS} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${PROJECT_NAME} PRIVATE ${SDL2_INCLUDE_DIRS} "${CMAKE_CURRENT_SOURCE_DIR}/lib")
target_compile_definitions(${PROJECT_NAME} PRIVATE "SDL_MAIN_HANDLED")
target_link_libraries(${PROJECT_NAME} PRIVATE ${SDL2_LIBRARIES} )

IF (MSVC)
	set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})
ENDIF()