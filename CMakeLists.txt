cmake_minimum_required(VERSION 3.10)

# Имя проекта
project(CarProject)

# Включение поддержки тестов
enable_testing()

# Указываем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем исходные файлы
add_executable(CarTest Car.cpp CarTest.cpp)

# Подключение Google Test
find_package(GTest REQUIRED)

# Линковка с Google Test
target_link_libraries(CarTest GTest::GTest GTest::Main pthread)

# Добавление теста
add_test(NAME CarTest COMMAND CarTest)
