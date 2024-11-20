bool areParallel(double slope1, double slope2) {
    return abs(slope1 - slope2) < 1e-6;
}

void checkQuadrilateralType(int xa, int ya, int xb, int yb, int xc, int yc, int xd, int yd) {
    double ab = distance(xa, ya, xb, yb);
    double bc = distance(xb, yb, xc, yc);
    double cd = distance(xc, yc, xd, yd);
    double da = distance(xd, yd, xa, ya);

    if (ab == cd && bc == da) {
        cout << "Тип: параллелограмм." << endl;
    } else {
        cout << "Тип: произвольный четырехугольник." << endl;
    }
}
