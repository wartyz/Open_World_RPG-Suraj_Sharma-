cmake_minimum_required(VERSION 3.7)
project(Open_World)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenGL REQUIRED)

set(SFML_INCLUDE_PATH h:/ProyectosCLion/__LIBRERIAS__/SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit/include)
set(SFML_LIBRARY_PATH h:/ProyectosCLion/__LIBRERIAS__/SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit/lib)

set(SOURCE_FILES main.cpp Game.cpp Game.hpp State.cpp State.hpp)

include_directories(
        ${SFML_INCLUDE_PATH}
        #${GLEW_INCLUDE_PATH}
        #${GLM_INCLUDE_PATH}
)

link_directories(
        ${SFML_LIBRARY_PATH}
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

#Librerias debug
target_link_libraries(${PROJECT_NAME}
        -lsfml-main-d
        -lsfml-window-d
        -lsfml-graphics-d
        -lsfml-audio-d
        -lsfml-network-d
        -lsfml-system-d
        -lopengl32 # Ponerlo al final
        )

#${GLEW_LIBRARY}
#${OPENGL_LIBRARY} # Relleno por "find_package(OpenGL REQUIRED), poner en este orden"