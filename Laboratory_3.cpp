
#include <iostream>
#include <cmath>

using namespace std;

class Vector3D
{
private:
    double x, y, z; // Координати вектора

public:
    // Конструктор за замовчуванням
    Vector3D() : x(0), y(0), z(0) {}

    // Конструктор ініціалізації
    Vector3D(double x_val, double y_val, double z_val) : x(x_val), y(y_val), z(z_val) {}

    // Операція додавання векторів
    Vector3D operator+(const Vector3D& v) const
    {
        return Vector3D(x + v.x, y + v.y, z + v.z);
    }

    // Операція віднімання векторів
    Vector3D operator-(const Vector3D& v) const
    {
        return Vector3D(x - v.x, y - v.y, z - v.z);
    }

    // Обчислення скалярного добутку
    double dotProduct(const Vector3D& v) const
    {
        return x * v.x + y * v.y + z * v.z;
    }

    // Обчислення довжини вектора
    double length() const
    {
        return sqrt(x * x + y * y + z * z);
    }

    // Обчислення косинуса кута між векторами
    double cosAngle(const Vector3D& v) const
    {
        double dot = dotProduct(v);
        double len1 = length();
        double len2 = v.length();
        return dot / (len1 * len2);
    }

    // Виведення вектора
    friend ostream& operator<<(ostream& os, const Vector3D& v)
    {
        os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
        return os;
    }
};

int main() {
    Vector3D v1(1, 2, 3);
    Vector3D v2(4, 5, 6);

    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;

    Vector3D sum = v1 + v2; // Сума векторів
    cout << "Sum: " << sum << endl;

    Vector3D diff = v1 - v2; // Різниця векторів
    cout << "The difference: " << diff << endl;

    double dot = v1.dotProduct(v2); // Скалярний добуток
    cout << "Scalar product: " << dot << endl;

    double len_v1 = v1.length(); // Довжина першого вектора
    cout << "The length of the vector v1: " << len_v1 << endl;

    double cos_angle = v1.cosAngle(v2); // Косинус кута між векторами
    cout << "Cosine of the angle between vectors: " << cos_angle << endl;

    return 0;
}
