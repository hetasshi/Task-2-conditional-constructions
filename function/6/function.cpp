void checkBrick(int a, int b, int c, int r, int s) {
    if ((a <= r && b <= s) || (a <= s && b <= r) ||
        (b <= r && c <= s) || (b <= s && c <= r) ||
        (a <= r && c <= s) || (a <= s && c <= r)) {
        cout << "Кирпич пройдет." << endl;
    } else {
        cout << "Кирпич не пройдет." << endl;
    }
}
