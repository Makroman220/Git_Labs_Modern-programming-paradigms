#include "graphics.h"

// Реалізація методів класу Point
Point::Point(double x, double y, std::string color) : x(x), y(y), color(color) {}

void Point::move(double dx, double dy) {
    x += dx;
    y += dy;
}

void Point::setColor(const std::string& newColor) {
    color = newColor;
}

void Point::print() const {
    std::cout << "Point(" << x << ", " << y << "), Color: " << color << std::endl;
}

// Реалізація методів класу Circle
Circle::Circle(double x, double y, double radius, std::string color)
    : Point(x, y, color), radius(radius) {}

void Circle::resize(double factor) {
    radius *= factor;
}

void Circle::print() const {
    std::cout << "Circle(" << x << ", " << y << "), Radius: " << radius << ", Color: " << color << std::endl;
}

// Реалізація методів класу Rectangle
Rectangle::Rectangle(double x, double y, double width, double height, std::string color)
    : Point(x, y, color), width(width), height(height), angle(0) {}

void Rectangle::resize(double factor) {
    width *= factor;
    height *= factor;
}

void Rectangle::rotate(double angle) {
    this->angle += angle;
}

void Rectangle::print() const {
    std::cout << "Rectangle(" << x << ", " << y << "), Width: " << width << ", Height: " << height
        << ", Angle: " << angle << ", Color: " << color << std::endl;
}
