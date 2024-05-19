#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <iostream>
#include <string>
#include <cmath>

// Базовий клас Point
class Point {
protected:
    double x, y;
    std::string color;

public:
    Point(double x = 0, double y = 0, std::string color = "black");
    virtual ~Point() {}

    virtual void move(double dx, double dy);
    virtual void resize(double factor) = 0;
    virtual void rotate(double angle) = 0;
    virtual void setColor(const std::string& newColor);
    virtual void print() const;

    double getX() const { return x; }
    double getY() const { return y; }
    std::string getColor() const { return color; }
};

// Похідний клас Circle
class Circle : public Point {
private:
    double radius;

public:
    Circle(double x = 0, double y = 0, double radius = 1, std::string color = "black");

    void resize(double factor) override;
    void rotate(double angle) override {}
    void print() const override;
};

// Похідний клас Rectangle
class Rectangle : public Point {
private:
    double width, height;
    double angle;  // кут повороту

public:
    Rectangle(double x = 0, double y = 0, double width = 1, double height = 1, std::string color = "black");

    void resize(double factor) override;
    void rotate(double angle) override;
    void print() const override;
};

#endif // GRAPHICS_H
