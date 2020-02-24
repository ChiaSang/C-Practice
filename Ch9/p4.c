/* Calculate the harmonic mean of two numbers */
#include <stdio.h>
double calc(double a, double b);
int main()
{
    double a, b;
    printf("please input two numbers:\n");
    scanf("%lf%lf", &a, &b);
    calc(a, b);

    return 0;
}
double calc(double a, double b)
{
    double c, d, r, f;
    c = 1 / a;
    d = 1 / b;
    r = 0.5 * (c + d);
    f = 1 / r;
    printf("%.3lf", f);
    return 0;
}
