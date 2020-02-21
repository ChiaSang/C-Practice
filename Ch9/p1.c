/* use pointer to achieve return a min number from two numbers */
#include <stdio.h>
double min(double *num1, double *num2);
int main(int argc, char const *argv[])
{
    double a, b;
    printf("please input two numbers:\n");
    scanf("%lf%lf", &a, &b);
    min(&a, &b);
    printf("minxum is %.2lf\n", a);
    return 0;
}
double min(double *num1, double *num2)
{
    int temp;
    if (*num1 > *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
    return 0;
}
