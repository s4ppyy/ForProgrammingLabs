#include <stdio.h>

int main() {
    int n = 7;
    int array[7] = {90, 76, 54, 23, 56, 12, 48};
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }
    int lenght1 = 4;
    int matrix1[2][2] = {1, 2, 3, 4};
    int lenght2 = 4;
    int matrix2[2][2] = {1, 0, 0, 1};
    int lenght3 = 4;
    int multi[2][2] = {0};
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++) {
            multi[i][j] = 0;
            for(int k = 0; k < 2; k++)
                multi[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    printf("\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            printf("%d ", multi[i][j]);
        printf("\n");
    }
    return 0;
}