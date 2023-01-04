int plus_minus (int a, int b) {
    a = ~a + 1;
    b = ~b + 1;

    return ~(a + b) + 1;
}
