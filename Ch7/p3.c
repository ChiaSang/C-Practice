#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num = 0;
    int f1 = 0;
    int f2 = 0;
    int f11 = 0;
    int f22 = 0;
    while (scanf("%d", &num) == 1 && num != 0)
    {
        if (num % 2 == 0)
        {

            f1 += num;
            f11++;
            
        }
        else
        {
            f2 += num;
            f22++;
            
        }
    }
    printf("even avg:%f  num:%d\n", f1 / (float)f11, f11);
    printf("odd avg:%f  num:%d\n", f2 / (float)f22, f22);

    return 0;
}
