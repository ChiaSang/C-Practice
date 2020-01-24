#include <stdio.h>
int main(int argc, char const *argv[])
{
    float single, master, married, married_divorce;
    single = 17850;
    master = 23900;
    married = 29750;
    married_divorce = 14875;
    float basic = 0.15;
    float extra = 0.28;
    int num;
    printf("please select type number\n");
    printf("single:1 master:2 married:3 married_divorce:4\n");
    printf("please input 0 quit!\n");
    printf("please input tax type:");
    while (scanf("%d", &num) == 1 && num != 0)
    {
        float fnum = 0;
        switch (num)
        {
        case 1:
        {
            printf("please input your sallary:");
            scanf("%f", &fnum);
            printf("tax:%.3f\n", (single * basic + (fnum - single) * extra));
        }
        break;
        case 2:
        {
            printf("please input your sallary:");
            scanf("%f", &fnum);
            printf("tax:%.3f\n", (master * basic + (fnum - master) * extra));
        }
        break;
        case 3:
        {
            printf("please input your sallary:");
            scanf("%f", &fnum);
            printf("tax:%.3f\n", (married * basic + (fnum - married) * extra));
        }
        break;
        case 4:
        {
            printf("please input your sallary:");
            scanf("%f", &fnum);
            printf("tax:%.3f\n", (married_divorce * basic + (fnum - married_divorce) * extra));
        }
        break;
        }
        printf("please input tax type:");
    }

    return 0;
}
