#include <stdio.h>

#define extra_salary 1.5
#define tax1 0.15
#define tax2 0.2

int main()
{
    int sel = 0;
    int week_hour = 0;
    float hr;
    printf("******************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr              2) $9.33/hr\n");
    printf("3) $10.00/hr             4) $11.20/hr\n");
    printf("5) quit\n");
    printf("******************************************************************\n");

    while (scanf("%d", &sel) == 1 && sel != 5)
    {
        switch (sel)
        {
        case 1:
        {
            hr = 8.75;
            printf("please type week hours:");
            scanf("%d", &week_hour);
            int tax = 0;
            tax = 300 * tax1 + 450 * tax2 + (week_hour * hr - 450) * 0.25;
            int net_profits = 0;
            net_profits = hr * week_hour - tax;
            printf("工资总额：%f TAX: %d net_profits:%d\n", hr * (float)week_hour, tax, net_profits);
        }
        break;
        case 2:
        {
            hr = 9.33;
            printf("please type week hours:");
            scanf("%d", &week_hour);
            int tax = 0;
            tax = 300 * tax1 + 450 * tax2 + (week_hour * hr - 450) * 0.25;
            int net_profits = 0;
            net_profits = hr * week_hour - tax;
            printf("工资总额：%f TAX: %d net_profits:%d\n", hr * (float)week_hour, tax, net_profits);
        }
        break;
        case 3:
        {
            hr = 10.00;
            printf("please type week hours:");
            scanf("%d", &week_hour);
            int tax = 0;
            tax = 300 * tax1 + 450 * tax2 + (week_hour * hr - 450) * 0.25;
            int net_profits = 0;
            net_profits = hr * week_hour - tax;
            printf("工资总额：%f TAX: %d net_profits:%d\n", hr * (float)week_hour, tax, net_profits);
        }
        break;
        case 4:
        {
            hr = 11.2;
            printf("please type week hours:");
            scanf("%d", &week_hour);
            int tax = 0;
            tax = 300 * tax1 + 450 * tax2 + (week_hour * hr - 450) * 0.25;
            int net_profits = 0;
            net_profits = hr * week_hour - tax;
            printf("工资总额：%f TAX: %d net_profits:%d\n", hr * (float)week_hour, tax, net_profits);
        }
        break;
        case 5:
            break;
        }
        printf("******************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $8.75/hr              2) $9.33/hr\n");
        printf("3) $10.00/hr             4) $11.20/hr\n");
        printf("5) quit\n");
        printf("******************************************************************\n");
    }

    return 0;
}
