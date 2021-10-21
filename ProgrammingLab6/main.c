#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 4;
    int array[4];
    array[0] = 50;
    array[1] = 40;
    array[2] = 30;
    array[3] = 20;
    for (int i = 0; i < n; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");
    int* m = (int *) malloc(4);
    m[0] = 50;
    m[1] = 40;
    m[2] = 30;
    m[3] = 20;
    for (int i = 0; i < 4; ++i)
        printf("%d ", m[i]);
    free(m);
    return 0;
}