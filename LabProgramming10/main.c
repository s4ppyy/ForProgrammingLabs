#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* distance(int* x_coord, int* y_coord, int n) {
    int* array = malloc(n*(n-1) * sizeof(int));
    int counter = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                array[counter] = sqrt(pow(abs(x_coord[i] - x_coord[j]), 2) + pow(abs(y_coord[i] - y_coord[j]), 2));
                counter += 1;
            }
        }
    }
    return array;
}

int counter(int number){
    if(!number)
        return 0;
    return (number % 10) + counter(number / 10);
    }

int main() {
    int n;
    printf("Insert array length: \n");
    scanf("%d", &n);
    printf("Enter n coordinate pairs:\n");
    int* arrX = malloc(n * sizeof(int));
    int* arrY = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arrX[i]);
        scanf("%d", &arrY[i]);
    }
    int* array = distance(arrX, arrY, n);
    for (int i = 0; i < n*(n-1); i++) {
        if (i != n*(n-1)-1) {
            printf("%d ", array[i]);
        } else {
            printf("%d\n", array[i]);
        }
    }

    int number;
    printf("Insert your number: \n");
    scanf("%d", &number);
    printf("Sum of numbers is %d", counter(number));
    return 0;
}
