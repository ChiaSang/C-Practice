#include <stdio.h>

#define extra_salary 1.5
#define tax1 0.15
#define tax2 0.2

int main()
{
    char sel;
    int week_hour = 0;
    float hr;
    printf("******************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a) $8.75/hr              b) $9.33/hr\n");
    printf("c) $10.00/hr             d) $11.20/hr\n");
    printf("q) quit\n");
    printf("******************************************************************\n");

    while (scanf("%c", &sel) == 1 && sel != 'q')
    {
        switch (sel)
        {
        case 'a':
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
        case 'b':
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
        case 'c':
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
        case 'd':
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
        case 'q':
            break;
        }
        printf("******************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("a) $8.75/hr              b) $9.33/hr\n");
        printf("c) $10.00/hr             d) $11.20/hr\n");
        printf("q) quit\n");
        printf("******************************************************************\n");
    }

    return 0;
}
