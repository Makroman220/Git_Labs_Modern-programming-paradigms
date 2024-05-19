#include <iostream>
#include <set>

class MySet {
private:
    std::set<int> elements;

public:
    // Конструктор за замовчуванням
    MySet() = default;

    // Конструктор з параметрами
    MySet(const std::initializer_list<int>& init_list) {
        for (int elem : init_list) {
            elements.insert(elem);
        }
    }

    // Конструктор копії
    MySet(const MySet& other) : elements(other.elements) {}

    // Деструктор
    ~MySet() = default;

    // Додавання елементу
    void addElement(int element) {
        elements.insert(element);
    }

    // Вилучення елементу
    void removeElement(int element) {
        elements.erase(element);
    }

    // Оператор присвоювання
    MySet& operator=(const MySet& other) {
        if (this != &other) {
            elements = other.elements;
        }
        return *this;
    }

    // Оператор об'єднання множин (оператор +)
    MySet operator+(const MySet& other) const {
        MySet result(*this);
        result.elements.insert(other.elements.begin(), other.elements.end());
        return result;
    }

    // Оператор порівняння (оператор ==)
    bool operator==(const MySet& other) const {
        return elements == other.elements;
    }

    // Оператор порівняння (оператор !=)
    bool operator!=(const MySet& other) const {
        return !(*this == other);
    }

    // Вивід множини (для зручності)
    void print() const {
        for (int elem : elements) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Створення об'єктів за допомогою різних конструкторів
    MySet set1;
    MySet set2{ 1, 2, 3, 4 };
    MySet set3 = set2;

    // Додавання та вилучення елементів
    set1.addElement(5);
    set1.addElement(10);
    set1.removeElement(5);

    // Об'єднання множин
    MySet set4 = set1 + set2;

    // Порівняння множин
    if (set2 == set3) {
        std::cout << "set2 and set3 are equal" << std::endl;
    }

    if (set1 != set2) {
        std::cout << "set1 and set2 are not equal" << std::endl;
    }

    // Вивід множин
    std::cout << "set1: ";
    set1.print();

    std::cout << "set2: ";
    set2.print();

    std::cout << "set3: ";
    set3.print();

    std::cout << "set4 (union of set1 and set2): ";
    set4.print();

    return 0;
}
