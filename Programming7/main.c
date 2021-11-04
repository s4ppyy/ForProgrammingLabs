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
    enum dessert a, b, c, d, e, f;
    a = Cake;
    b = Cupcake;
    c = Ice_cream;
    d = Candy;
    e = Pie;
    f = Brownie;
    printf("%d\n", d);
    lineSegment line1;
    line1 = (lineSegment) {
            .coordA = {1, 0},
            .coordB = {5, 3}
    };
    int length = (sqrt(pow(line1.coordB[0] - line1.coordA[0], 2) + pow(line1.coordB[1] - line1.coordA[1], 2)));
    printf("%d\n", length);
    scanf("%x", &ADSLmodem.hexNumber);
    ADSLmodem.status.DSL ? printf("DSL ON\n")  : printf("DSL OFF\n");
    ADSLmodem.status.PPP ? printf("PPP ON\n")  : printf("PPP OFF\n");
    ADSLmodem.status.Link ? printf("Link ON\n")  : printf("Link OFF\n");
    return 0;
}
