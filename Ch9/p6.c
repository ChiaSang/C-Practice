/* use pointer to return maxium number from two numbers */
#include <stdio.h>
double sort3(double *num1, double *num2, double *num3);
int main()
{
    double a, b, c;
    printf("please input three numbers:\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    sort3(&a, &b, &c);
    printf("maxium  %.2lf   %.2lf   %.2lf\n", a, b, c);
    return 0;
}
double sort3(double *num1, double *num2, double *num3)
{
    int temp;
    if (*num1 > *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
    if (*num2 > *num3)
    {
        temp = *num2;
        *num2 = *num3;
        *num3 = temp;
        if (*num1 > *num2)
        {
            temp = *num1;
            *num1 = *num2;
            *num2 = temp;
        }
    }

    return 0;
}