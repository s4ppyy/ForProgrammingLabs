#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];
    char string2[100];
    scanf ("%s", string1);
    scanf ("%s", string2);
    int comparison = strcmp(string1, string2);
    printf("%d\n", comparison);
    char string3[100];
    char string4[100];
    scanf ("%s", string3);
    scanf ("%s", string4);
    int n;
    scanf("%d", &n);
    int comparison_n = strncmp(string3, string4, n);
    printf("%d\n", comparison_n);
    char string5[100];
    scanf ("%s", string5);
    int length = strlen(string5);
    printf("%d\n", length);
    char string6[100];
    char storage[100];
    scanf ("%s", string6);
    scanf ("%s", storage);
    int search = strpbrk(string6, storage);
    printf("%d\n", search);
    char string7[100];
    char separator[100];
    scanf ("%s", string7);
    scanf ("%s", separator);
    char *splitting = strtok(string7, separator);
    while(splitting != 0) {
        printf("%s\n", splitting);
        splitting = strtok(0, separator);
    }
    return 0;
}






