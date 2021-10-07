#include <stdio.h>
int main() {
    int x;
    int y;
    scanf("%d", &x);
    _Bool answer =  ((20 <= x) && (x <=  30));
    printf("%d\n", answer);
    scanf("%d", &y);
    printf("%d", (y & (1 << 17)));
    return 0;
}