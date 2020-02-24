#include <stdio.h>
#include <stdlib.h> // prototype for abs()

double power(double base, int exponent);

int main(void)
{
    double base, output;
    int exponent;

    printf("Test power() function:\n");
    printf("Enter a :double: base and :int: exponent: ");
    while (scanf("%lf %d", &base, &exponent) == 2)
    {
        output = power(base, exponent);

        printf("%0.3f ^ %d = %f \n", base, exponent, output);

        printf("Enter a :double: base and :int: exponent: ");
    }

    return 0;
}
double power(double base, int exponent)
{
    double recru_base;

    if (base == 0)
    {
        if (exponent == 0)
        {
            printf("Warning: 0 ^ 0 is undefined. Using 1.\n");
            return 1.0;
        }
        else
            return 0;
    }

    if (exponent == 0)
        return 1;

    recru_base = base * power(base, abs(exponent) - 1);
    if (exponent < 0)
        recru_base = 1 / recru_base;

    return recru_base;
}
