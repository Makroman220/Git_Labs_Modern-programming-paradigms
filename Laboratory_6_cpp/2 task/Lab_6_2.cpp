#include <iostream>
#include <set>

class MySet {
private:
    std::set<int> elements;

public:
    // ����������� �� �������������
    MySet() = default;

    // ����������� � �����������
    MySet(const std::initializer_list<int>& init_list) {
        for (int elem : init_list) {
            elements.insert(elem);
        }
    }

    // ����������� ��ﳿ
    MySet(const MySet& other) : elements(other.elements) {}

    // ����������
    ~MySet() = default;

    // ��������� ��������
    void addElement(int element) {
        elements.insert(element);
    }

    // ��������� ��������
    void removeElement(int element) {
        elements.erase(element);
    }

    // �������� ������������
    MySet& operator=(const MySet& other) {
        if (this != &other) {
            elements = other.elements;
        }
        return *this;
    }

    // �������� ��'������� ������ (�������� +)
    MySet operator+(const MySet& other) const {
        MySet result(*this);
        result.elements.insert(other.elements.begin(), other.elements.end());
        return result;
    }

    // �������� ��������� (�������� ==)
    bool operator==(const MySet& other) const {
        return elements == other.elements;
    }

    // �������� ��������� (�������� !=)
    bool operator!=(const MySet& other) const {
        return !(*this == other);
    }

    // ���� ������� (��� ��������)
    void print() const {
        for (int elem : elements) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // ��������� ��'���� �� ��������� ����� ������������
    MySet set1;
    MySet set2{ 1, 2, 3, 4 };
    MySet set3 = set2;

    // ��������� �� ��������� ��������
    set1.addElement(5);
    set1.addElement(10);
    set1.removeElement(5);

    // ��'������� ������
    MySet set4 = set1 + set2;

    // ��������� ������
    if (set2 == set3) {
        std::cout << "set2 and set3 are equal" << std::endl;
    }

    if (set1 != set2) {
        std::cout << "set1 and set2 are not equal" << std::endl;
    }

    // ���� ������
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
