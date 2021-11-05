#include <stdio.h>
#include <math.h>

enum dessert {
    Cake,
    Cupcake,
    Ice_cream,
    Candy,
    Pie,
    Brownie
};

int getLength(int a[2], int b[2]) {
    int length = (sqrt(pow(b[0] - a[0], 2) + pow(b[1] - a[1], 2)));
    return length;
}

typedef struct lineSegment {
    int coordA [2];
    int coordB [2];
} lineSegment;

union ADSLmodem {
    unsigned hexNumber;
    struct {
        unsigned DSL: 1;
        unsigned PPP: 1;
        unsigned Link: 1;
    } status;
} ADSLmodem;

int main() {
    printf("%d\n", Candy);
    lineSegment line1;
    line1 = (lineSegment) {
            .coordA = {1, 0},
            .coordB = {5, 3}
    };
    printf("%d\n", getLength(line1.coordA, line1.coordB));
    scanf("%x", &ADSLmodem.hexNumber);
    ADSLmodem.status.DSL ? printf("DSL ON\n")  : printf("DSL OFF\n");
    ADSLmodem.status.PPP ? printf("PPP ON\n")  : printf("PPP OFF\n");
    ADSLmodem.status.Link ? printf("Link ON\n")  : printf("Link OFF\n");
    return 0;
}
