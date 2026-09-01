int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int result = gcd(x, y);
    printf("The GCD of %d and %d is %d\n", x, y, result);
    return 0;
}
