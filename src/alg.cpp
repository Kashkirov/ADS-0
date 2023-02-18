// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int div = 0;
    int i = 1;
    while (a > i || b > i) {
        if ((0 == a % i) && (0 == b % i)) {
            div = i;
        }
        i++;
    }
    return div;
}
