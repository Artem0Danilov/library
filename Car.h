#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string brand; // Бренд автомобиля
    int speed;         // Текущая скорость
    int maxSpeed;      // Максимальная скорость

public:
    // Конструктор
    Car(const std::string& brandName, int maxSpeedLimit);

    // Метод для установки текущей скорости
    void setSpeed(int newSpeed);

    // Метод для получения текущей скорости
    int getSpeed() const;

    // Метод для отображения информации об автомобиле
    void displayInfo() const;
};

#endif // CAR_H
