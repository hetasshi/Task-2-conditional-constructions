void checkBox(int A, int B, int C, int R, int S, int T) {
    if ((R <= A && S <= B && T <= C) || 
        (R <= A && T <= B && S <= C) || 
        (S <= A && R <= B && T <= C) ||
        (S <= A && T <= B && R <= C) || 
        (T <= A && R <= B && S <= C) || 
        (T <= A && S <= B && R <= C)) {
        cout << "Посылка поместится." << endl;
    } else {
        cout << "Посылка не поместится." << endl;
    }
}
