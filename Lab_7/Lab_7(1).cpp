#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Container {
private:
    vector<int> data;

public:
    // Додати елемент до контейнера
    void addElement(int element) {
        data.push_back(element);
    }

    // Функція для знаходження індексу максимального за модулем елемента
    int maxAbsIndex() {
        int maxIndex = 0;
        int maxAbsValue = abs(data[0]);

        for (int i = 1; i < data.size(); ++i) {
            if (abs(data[i]) > maxAbsValue) {
                maxAbsValue = abs(data[i]);
                maxIndex = i;
            }
        }

        return maxIndex;
    }

    // Функція для знаходження суми модулів елементів, які розташовані після першого додатного елемента
    int sumAfterFirstPositive() {
        int sum = 0;
        bool foundPositive = false;

        for (int i = 0; i < data.size(); ++i) {
            if (foundPositive) {
                sum += abs(data[i]);
            }
            else if (data[i] > 0) {
                foundPositive = true;
            }
        }

        return sum;
    }

    // Функція для перетворення масиву таким чином, щоб спочатку розташовувалися всі елементи, ціла частина яких лежить в інтервалі [a,b], а потім – всі інші
    void transformArray(int a, int b) {
        vector<int> transformedArray;

        // Додаємо елементи, які задовольняють умові
        for (int i = 0; i < data.size(); ++i) {
            if (data[i] >= a && data[i] <= b) {
                transformedArray.push_back(data[i]);
            }
        }

        // Додаємо елементи, які не задовольняють умові
        for (int i = 0; i < data.size(); ++i) {
            if (data[i] < a || data[i] > b) {
                transformedArray.push_back(data[i]);
            }
        }

        // Замінюємо початковий масив на перетворений
        data = transformedArray;
    }

    // Отримати розмір контейнера
    int getSize() {
        return data.size();
    }

    // Отримати елемент за індексом
    int getElement(int index) {
        return data[index];
    }
};

int main() {
    Container container;

    // Додати елементи до контейнера (це можна зробити в циклі або вводити з клавіатури)
    container.addElement(-5);
    container.addElement(10);
    container.addElement(-8);
    container.addElement(3);
    container.addElement(7);

    // Знайти індекс максимального за модулем елемента
    cout << "Index of the maximum absolute element: " << container.maxAbsIndex() << endl;

    // Знайти суму модулів елементів, які розташовані після першого додатного елемента
    cout << "Sum of absolute values of elements after the first positive element: " << container.sumAfterFirstPositive() << endl;

    // Перетворити масив
    container.transformArray(-5, 5);

    // Вивести перетворений масив
    cout << "Transformed array: ";
    for (int i = 0; i < container.getSize(); ++i) {
        cout << container.getElement(i) << " ";
    }
    cout << endl;

    return 0;
}
