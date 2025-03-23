cmake_minimum_required(VERSION 3.14)
project(unit_test_project)

# Настройка Google Test
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)  # Использовать динамическую CRT
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

# Добавление основного проекта
add_executable(unit_test_project src/main.c src/func.c src/func_cust.c)
target_include_directories(unit_test_project PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Добавление тестов
add_executable(unit_test_tests tests/test_main.cpp src/func.c src/func_cust.c)
target_include_directories(unit_test_tests PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(unit_test_tests gtest_main)

# Добавление задачи для запуска тестов
enable_testing()
add_test(NAME unit_test_tests COMMAND unit_test_tests)