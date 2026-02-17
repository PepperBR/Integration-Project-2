cmake_minimum_required(VERSION 3.16)

project(IntegracaoSDK)

add_library(${PROJECT_NAME}_lib)

target_include_directories(${PROJECT_NAME}_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_features(${PROJECT_NAME}_lib PRIVATE cxx_std_17)

target_sources(${PROJECT_NAME}_lib 
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Modelo.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Linha.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Catalogo.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Interface.cpp
)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_lib)

add_subdirectory(./tests)


