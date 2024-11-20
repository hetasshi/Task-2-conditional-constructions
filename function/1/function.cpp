#include <iostream>
using namespace std;

void checkTriangleType(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Треугольник существует. ";
        if (a == b && b == c) {
            cout << "Тип: равносторонний." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Тип: равнобедренный." << endl;
        } else {
            cout << "Тип: разносторонний." << endl;
        }
    } else {
        cout << "Треугольник не существует." << endl;
    }
}
