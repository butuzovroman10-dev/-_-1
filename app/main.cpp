#include <iostream>
#include "Point2D.h"

int main() {
    // Создание объектов
    Point2D p1;
    Point2D p2(3.0, 4.0);
    Point2D p3(1.0, 2.0);
    
    std::cout << "=== Демонстрация класса Point2D ===" << std::endl;
    
    // Использование get/set методов
    std::cout << "\n1. Get/Set методы:" << std::endl;
    std::cout << "p1: " << p1 << std::endl;
    p1.setX(5.0);
    p1.setY(6.0);
    std::cout << "После set: p1.x = " << p1.getX() << ", p1.y = " << p1.getY() << std::endl;
    
    // Использование методов
    std::cout << "\n2. Методы:" << std::endl;
    std::cout << "Расстояние между p1 и p2: " << p1.distanceTo(p2) << std::endl;
    std::cout << "p2 находится в начале координат: " << (p2.isOrigin() ? "да" : "нет") << std::endl;
    std::cout << "Расстояние p2 от начала координат: " << p2.distanceFromOrigin() << std::endl;
    
    // Движение точки
    std::cout << "\n3. Движение точки:" << std::endl;
    p3.printState();
    p3.move(2.0, 3.0);
    std::cout << "После перемещения (2, 3): ";
    p3.printState();
    
    // Вращение точки
    Point2D rotated = p2.rotate(90.0);
    std::cout << "p2 после поворота на 90 градусов: " << rotated << std::endl;
    
    // Отражение
    Point2D reflected = p2.reflectOverX();
    std::cout << "p2 после отражения относительно оси X: " << reflected << std::endl;
    
    // Операторы
    std::cout << "\n4. Операторы:" << std::endl;
    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;
    std::cout << "p1 == p2: " << (p1 == p2 ? "да" : "нет") << std::endl;
    
    Point2D vector = p1 - p2;
    std::cout << "Вектор p1 - p2: " << vector << std::endl;
    
    // Статический метод
    std::cout << "\n5. Статический метод:" << std::endl;
    Point2D mid = Point2D::midpoint(p1, p2);
    std::cout << "Середина между p1 и p2: " << mid << std::endl;
    
    // Вывод состояния
    std::cout << "\n6. Состояние точек:" << std::endl;
    std::cout << "p1: ";
    p1.printState();
    std::cout << "p2: ";
    p2.printState();
    std::cout << "p3: ";
    p3.printState();
    
    return 0;
}