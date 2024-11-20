void checkDivisibilityBy3(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    if (sum % 3 == 0) {
        cout << "Число делится на 3." << endl;
    } else {
        cout << "Число не делится на 3." << endl;
    }
}
