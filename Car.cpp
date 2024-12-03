#include "Car.h"
#include <iostream>

// Конструктор
Car::Car(const std::string& brandName, int maxSpeedLimit) 
    : brand(brandName), speed(0), maxSpeed(maxSpeedLimit) {}

// Метод для установки текущей скорости
void Car::setSpeed(int newSpeed) {
    if (newSpeed > maxSpeed) {
        speed = maxSpeed;
        std::cout << "Превышение максимальной скорости! Скорость установлена на " << maxSpeed << " км/ч." << std::endl;
    } else if (newSpeed < 0) {
        speed = 0;
        std::cout << "Скорость не может быть отрицательной! Скорость установлена на 0 км/ч." << std::endl;
    } else {
        speed = newSpeed;
        std::cout << "Скорость установлена на " << speed << " км/ч." << std::endl;
    }
}

// Метод для получения текущей скорости
int Car::getSpeed() const {
    return speed;
}

// Метод для отображения информации об автомобиле
void Car::displayInfo() const {
    std::cout << "Марка автомобиля: " << brand 
              << ", Текущая скорость: " << speed 
              << " км/ч, Максимальная скорость: " << maxSpeed << " км/ч." 
              << std::endl;
}
