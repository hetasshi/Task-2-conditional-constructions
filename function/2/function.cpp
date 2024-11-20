#include <cmath>

void checkTriangleAngleType(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        int a2 = a * a, b2 = b * b, c2 = c * c;
        if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) {
            cout << "Прямоугольный треугольник." << endl;
        } else if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2) {
            cout << "Остроугольный треугольник." << endl;
        } else {
            cout << "Тупоугольный треугольник." << endl;
        }
    } else {
        cout << "Треугольник не существует." << endl;
    }
}
