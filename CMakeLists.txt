cmake_minimum_required(VERSION 3.14)
project(LearnOpenGL)

add_executable(LearnOpenGL main.cpp src/shader.cpp src/shader.h src/vec3.h src/vec3.cpp src/quarternion.cpp src/quarternion.h src/Frustum.h src/texture.cpp src/texture.h)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD_REQUIRED 17)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(external/glfw)
target_link_libraries(${PROJECT_NAME} glfw)

add_subdirectory(external/glad)
target_link_libraries(${PROJECT_NAME} glad)

target_include_directories(${PROJECT_NAME} PUBLIC external)

add_subdirectory(external/glm)
target_link_libraries(${PROJECT_NAME} glm)