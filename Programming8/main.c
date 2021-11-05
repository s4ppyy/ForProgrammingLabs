#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];
    char string2[100];
    scanf ("%s", string1);
    scanf ("%s", string2);
    int comparison = strcmp(string1, string2);
    printf("Comparison: %d\n", comparison);
    char string3[100];
    char string4[100];
    scanf ("%s", string3);
    scanf ("%s", string4);
    int n;
    scanf("%d", &n);
    int comparison_n = strncmp(string3, string4, n);
    printf("Comparison of first n symbols: %d\n", comparison_n);
    char string5[100];
    scanf ("%s", string5);
    int length = strlen(string5);
    printf("String length is: %d\n", length);
    char string6[100];
    char storage[100];
    scanf ("%s", string6);
    scanf ("%s", storage);
    char *search = strpbrk(string6, storage);
    printf("The number of first in: %d\n", search - string6 + 1);
    char string7[100];
    char separator[100];
    scanf ("%s", string7);
    scanf ("%s", separator);
    char *splitting = strtok(string7, separator);
    printf("Separated parts:\n");
    while(splitting != 0) {
        printf("%s\n", splitting);
        splitting = strtok(0, separator);
    }
    return 0;
}






