#include "Point2D.h"

// 1.2 Конструкторы
Point2D::Point2D() : x(0.0), y(0.0) {}

Point2D::Point2D(double x, double y) : x(x), y(y) {}

// 1.3 Get и Set методы
double Point2D::getX() const {
    return x;
}

double Point2D::getY() const {
    return y;
}

void Point2D::setX(double x) {
    this->x = x;
}

void Point2D::setY(double y) {
    this->y = y;
}

// 1.4 Public методы
double Point2D::distanceTo(const Point2D& other) const {
    return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}

void Point2D::move(double dx, double dy) {
    x += dx;
    y += dy;
}

Point2D Point2D::rotate(double angle) const {
    double rad = angle * M_PI / 180.0;
    double cosA = cos(rad);
    double sinA = sin(rad);
    double newX = x * cosA - y * sinA;
    double newY = x * sinA + y * cosA;
    return Point2D(newX, newY);
}

bool Point2D::isOrigin() const {
    return x == 0.0 && y == 0.0;
}

double Point2D::distanceFromOrigin() const {
    return sqrt(x * x + y * y);
}

Point2D Point2D::reflectOverX() const {
    return Point2D(x, -y);
}

// 1.5 Перегрузка операторов
bool Point2D::operator==(const Point2D& other) const {
    return x == other.x && y == other.y;
}

Point2D Point2D::operator-(const Point2D& other) const {
    return Point2D(x - other.x, y - other.y);
}

std::ostream& operator<<(std::ostream& os, const Point2D& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

// 1.6 Статический метод
Point2D Point2D::midpoint(const Point2D& p1, const Point2D& p2) {
    return Point2D((p1.x + p2.x) / 2.0, (p1.y + p2.y) / 2.0);
}

// 1.7 Метод для вывода состояния
void Point2D::printState() const {
    std::cout << "Точка 2D: x = " << x << ", y = " << y 
              << ", расстояние от начала координат = " << distanceFromOrigin() 
              << ", находится в начале координат: " << (isOrigin() ? "да" : "нет") 
              << std::endl;
}