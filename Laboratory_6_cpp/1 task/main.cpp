#include "graphics.h"
#include <vector>
#include <memory>

void displayMenu() {
    std::cout << "Menu:\n"
        << "1. Add Circle\n"
        << "2. Add Rectangle\n"
        << "3. Move Object\n"
        << "4. Resize Object\n"
        << "5. Rotate Object\n"
        << "6. Change Color\n"
        << "7. Display All Objects\n"
        << "8. Exit\n";
}

int main() {
    std::vector<std::shared_ptr<Point>> objects;
    int choice;

    while (true) {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 8) break;

        switch (choice) {
        case 1: {
            double x, y, radius;
            std::string color;
            std::cout << "Enter x, y, radius, color: ";
            std::cin >> x >> y >> radius >> color;
            objects.push_back(std::make_shared<Circle>(x, y, radius, color));
            break;
        }
        case 2: {
            double x, y, width, height;
            std::string color;
            std::cout << "Enter x, y, width, height, color: ";
            std::cin >> x >> y >> width >> height >> color;
            objects.push_back(std::make_shared<Rectangle>(x, y, width, height, color));
            break;
        }
        case 3: {
            int index;
            double dx, dy;
            std::cout << "Enter object index, dx, dy: ";
            std::cin >> index >> dx >> dy;
            if (index >= 0 && index < objects.size()) {
                objects[index]->move(dx, dy);
            }
            else {
                std::cout << "Invalid index!\n";
            }
            break;
        }
        case 4: {
            int index;
            double factor;
            std::cout << "Enter object index, resize factor: ";
            std::cin >> index >> factor;
            if (index >= 0 && index < objects.size()) {
                objects[index]->resize(factor);
            }
            else {
                std::cout << "Invalid index!\n";
            }
            break;
        }
        case 5: {
            int index;
            double angle;
            std::cout << "Enter object index, rotation angle: ";
            std::cin >> index >> angle;
            if (index >= 0 && index < objects.size()) {
                objects[index]->rotate(angle);
            }
            else {
                std::cout << "Invalid index!\n";
            }
            break;
        }
        case 6: {
            int index;
            std::string color;
            std::cout << "Enter object index, new color: ";
            std::cin >> index >> color;
            if (index >= 0 && index < objects.size()) {
                objects[index]->setColor(color);
            }
            else {
                std::cout << "Invalid index!\n";
            }
            break;
        }
        case 7: {
            for (const auto& obj : objects) {
                obj->print();
            }
            break;
        }
        default:
            std::cout << "Invalid choice!\n";
        }
    }

    return 0;
}
