cmake_minimum_required(VERSION 3.9)
project(rlos_screening_exercise_2)

# Source files
set(SOURCE_FILES
	screening_exercise_2.cc
)

include(GNUInstallDirs)

# Find LuaCpp
find_package(LuaCpp REQUIRED)

add_executable(screening_exercise_2 ${SOURCE_FILES})

target_include_directories(screening_exercise_2
    PRIVATE
    ${LUACPP_INCLUDE_DIR} # Containing the LuaCpp and Lua include folders
)

target_link_libraries(screening_exercise_2
    PRIVATE
    ${LUACPP_LIBRARIES} # The shared libraries for LuaCpp and Lua
)