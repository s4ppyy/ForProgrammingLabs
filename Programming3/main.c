#include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    printf("%o\n", x);
    printf("%o\n", x);
    printf("%o\n", x << 1);
    printf("%o\n", x);
    printf("%o\n", ~x);
    scanf("%o", &y);
    printf("%o\n", y ^ x);
    return 0;
}