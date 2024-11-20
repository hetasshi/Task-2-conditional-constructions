#include <cmath>

double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void checkTriangleByCoordinates(int xa, int ya, int xb, int yb, int xc, int yc) {
    double a = distance(xa, ya, xb, yb);
    double b = distance(xb, yb, xc, yc);
    double c = distance(xc, yc, xa, ya);
    checkTriangleAngleType(a, b, c);
}
