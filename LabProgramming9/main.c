#include <stdio.h>

void SimpleNumbers(int number){
    for (int check = 2; check <= number; check++)
    {
        for (int i = 2; i <= check; i++)
        {
            if (check == i)
            {
                printf("%d ", check);
                break;
            }
            else if (check % i == 0)
                break;
        }
    }
}

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
    SimpleNumbers(randomNumber);
    return 0;
}
