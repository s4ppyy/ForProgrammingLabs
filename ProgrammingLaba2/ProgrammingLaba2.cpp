#include <math.h>
#include <stdio.h>

int main()
{
    float m1, m2, z1, z2;
    scanf_s("%f", &m1);
    scanf_s("%f", &m2);
    if ((sqrt(pow((3 * m1 + 2), 2) - 24 * m1))> 0) 
    {
        z1 = (sqrt(pow((3 * m1 + 2), 2) - 24 * m1)) / (3 * sqrt(m1) - (2 / sqrt(m1)));
        printf("%f", z1);
    }
    else 
    {
        printf("Net reshenia");
    }
    printf("    ");
    if (m2 > 0)
    {
        z2 = -sqrt(m2);
        printf("%f", z2);
    }
    else
    {
        printf("Net reshenia");
    }
    return 0;
}

