#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>
#include <cmath>

class Point2D {
private:
    double x;
    double y;

public:
    // 1.2 Конструкторы
    Point2D();
    Point2D(double x, double y);
    
    // 1.3 Get и Set методы
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    
    // 1.4 Public методы
    double distanceTo(const Point2D& other) const;
    void move(double dx, double dy);
    Point2D rotate(double angle) const;
    bool isOrigin() const;
    double distanceFromOrigin() const;
    Point2D reflectOverX() const;
    
    // 1.5 Перегрузка операторов
    bool operator==(const Point2D& other) const;
    Point2D operator-(const Point2D& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Point2D& point);
    
    // 1.6 Статический метод
    static Point2D midpoint(const Point2D& p1, const Point2D& p2);
    
    // 1.7 Метод для вывода состояния
    void printState() const;
};

#endif // POINT2D_H