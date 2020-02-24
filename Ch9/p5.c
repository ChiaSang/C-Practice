/* use pointer to return maxium number from two numbers */
#include <stdio.h>
double lager_of(double *num1, double *num2);
int main(int argc, char const *argv[])
{
    double a, b;
    printf("please input two numbers:\n");
    scanf("%lf%lf", &a, &b);
    lager_of(&a, &b);
    printf("maxium  %.2lf   %.2lf\n", a, b);
    return 0;
}
double lager_of(double *num1, double *num2)
{
    int temp;
    if (*num1 > *num2)
    {
        // temp = *num1;
        // *num1 = *num2;
        // *num2 = temp;
        *num2 = *num1;
    }
    else
    {
        *num1 = *num2;
    }
    return 0;
}
