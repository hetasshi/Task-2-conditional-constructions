void checkSphere(int r, int p, int q) {
    double diagonal = sqrt(p * p + q * q) / 2;
    if (r <= diagonal) {
        cout << "Шар пройдет через отверстие." << endl;
    } else {
        cout << "Шар не пройдет." << endl;
    }
}
