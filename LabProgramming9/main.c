#include <stdio.h>

int main() {
    int talkLength, basicPayment, overPayment, totalPayment;
    printf("Insert minutes: \n");
    scanf("%d", &talkLength);
    printf("Insert basic payment: \n");
    scanf("%d", &basicPayment);
    printf("Insert after limits payment per minute: \n");
    scanf("%d", &overPayment);
    if (talkLength <= 499)
        totalPayment = basicPayment;
    else
        totalPayment = basicPayment + (talkLength - 499) * overPayment;
    printf("total payment is: %d\n", totalPayment);
    int randomNumber;
    printf("Insert your number: \n");
    scanf("%d", &randomNumber);
    if (randomNumber >= 2)
        for (int i = 2; i <= randomNumber; ++i)
            printf("%d ", i);
    else
        for (int i = 2; i >= randomNumber; --i)
            printf("%d ", i);
    return 0;
}
