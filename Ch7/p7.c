#include <stdio.h>

#define basic_salary 1000 * week_hour
#define extra_salary 1000 * 40 + 1000 * 1.5 * (week_hour - 40)

#define extra_salary 1.5
#define tax1 0.15
#define tax2 0.2

int main(int argc, char const *argv[])
{
    int week_hour = 0;

    while (scanf("%d", &week_hour) == 1)
    {

        if (week_hour < 40)
        {
            int tax = 0;
            tax = 300 * tax1 + 450 * tax2 + (week_hour * 1000 - 450) * 0.25;
            int net_profits = 0;
            net_profits = 1000 * week_hour - tax;
            printf("工资总额：%d TAX: %d net_profits:%d\n", 1000 * week_hour, tax, net_profits);
        }
        else
        {
            int tax = 0;
            tax = 300 * tax1 + 450 * tax2 + ((week_hour - 40) * 1.5 * 1000 - 450) * 0.25;
            int net_profits = 0;
            net_profits = 1000 * 40 + 1000 * 1.5 * (week_hour - 40) - tax;
            int profits = 0;
            profits = 1000 * 40 + 1000 * extra_salary * (week_hour - 40);
            printf("工资总额：%d税金：%d 净收入：%d\n", profits, tax, net_profits);
        }
    }

    return 0;
}
