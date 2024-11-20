void checkTriangleSidesEquation(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        int x = (a + c - b) / 2;
        int y = (a + b - c) / 2;
        int z = (b + c - a) / 2;
        if (x > 0 && y > 0 && z > 0) {
            cout << "Стороны можно выразить через положительные x, y, z." << endl;
        } else {
            cout << "Невозможно выразить стороны через положительные x, y, z." << endl;
        }
    } else {
        cout << "Треугольник не существует." << endl;
    }
}
