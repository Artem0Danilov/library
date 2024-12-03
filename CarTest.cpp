#include "Car.h"
#include <gtest/gtest.h>

// Тестирование конструктора
TEST(CarTest, ConstructorTest) {
    Car car("Toyota", 200);
    EXPECT_EQ(car.getSpeed(), 0); // Проверяем, что скорость по умолчанию равна 0
}

// Тестирование метода setSpeed
TEST(CarTest, SetSpeedTest) {
    Car car("Toyota", 200);

    car.setSpeed(100);
    EXPECT_EQ(car.getSpeed(), 100); // Проверяем установку корректной скорости

    car.setSpeed(250);
    EXPECT_EQ(car.getSpeed(), 200); // Проверяем ограничение максимальной скорости

    car.setSpeed(-10);
    EXPECT_EQ(car.getSpeed(), 0); // Проверяем ограничение отрицательной скорости
}

// Тестирование метода getSpeed
TEST(CarTest, GetSpeedTest) {
    Car car("Toyota", 200);

    car.setSpeed(150);
    EXPECT_EQ(car.getSpeed(), 150); // Проверяем получение текущей скорости
}

// Тестирование метода displayInfo
TEST(CarTest, DisplayInfoTest) {
    Car car("Toyota", 200);

    testing::internal::CaptureStdout(); // Перехватываем вывод в консоль
    car.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Марка автомобиля: Toyota") != std::string::npos);
    EXPECT_TRUE(output.find("Текущая скорость: 0 км/ч") != std::string::npos);
    EXPECT_TRUE(output.find("Максимальная скорость: 200 км/ч") != std::string::npos);
}

