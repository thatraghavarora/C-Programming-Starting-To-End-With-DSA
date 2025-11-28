#include <stdio.h>
int main() {
    printf("Assignment Operators (start = %d)\n", value);
    int result = 5;
    result += 5;
    printf("+= 5 -> %d\n", result);
    result -= 3;
    printf("-= 3 -> %d\n", result);
    result *= 2;
    printf("*= 2 -> %d\n", result);
    result /= 4;
    printf("/= 4 -> %d\n", result);
    result %= 3;
    printf("%%= 3 -> %d\n", result);
    result = value;
    result &= 7;
    printf("&= 7 -> %d\n", result);
    result |= 2;
    printf("|= 2 -> %d\n", result);
    result ^= 1;
    printf("^= 1 -> %d\n", result);
    result <<= 1;
    printf("<<= 1 -> %d\n", result);
    result >>= 2;
    printf(">>= 2 -> %d\n\n", result);
}