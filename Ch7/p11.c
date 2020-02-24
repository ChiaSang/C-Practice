//Unfinished！

#include <stdio.h>

#define ARTICHOKE_PRICE_PER_LB 2.05
#define BEET_PRICE_PER_LB 1.15
#define CARROT_PRICE_PER_LB 1.09

#define SHIPPING_5LB 6.50
#define SHIPPING_20LB 14.00
#define SHIPPING_OVER_20LB_RATE 0.5

#define DISCOUNT_RATE 0.05
int main(int argc, char const *argv[])
{
    char fruit;
    int weight, total_w, price, discount, fee;
    printf("a:洋蓟的磅数    b:甜菜的磅数\nc:胡萝卜的磅数    q:退出订购");
    while (scanf("%s", &fruit) == 1 && fruit != 'q')
    {
        switch (fruit)
        {
        case 'a':
        {
            printf("please input pound:");
            if (scanf("%f", &weight) == 1)
                total_w += weight;
            else
            {
                while (getchar() != '\n')
                    printf("Invalid input. Try again.\n");
                continue; // repeat main program loop
            }
        }
        break;
        case 'b':
        {
            printf("please input pound:");
            if (scanf("%f", &weight) == 1)
                total_w += weight;
            else
            {
                while (getchar() != '\n')
                    printf("Invalid input. Try again.\n");
                continue; // repeat main program loop
            }
        }
        break;
        case 'c':
        {
            printf("please input pound:");
            if (scanf("%f", &weight) == 1)
                total_w += weight;
            else
            {
                while (getchar() != '\n')
                    printf("Invalid input. Try again.\n");
                continue; // repeat main program loop
            }
        }
        break;

        case 'q':
            break;
        }
    }
}

return 0;
}

float calacuate(int weight, float price)
{

    float to_price;

    if (weight * price > 100)
    {
        to_price = weight * price + (weight - 20) * SHIPPING_OVER_20LB_RATE + 14;
        printf("%.2f %f %f", to_price, SHIPPING_OVER_20LB_RATE, (weight - 20) * SHIPPING_OVER_20LB_RATE + 14);
    }
    else
    {
        if (weight < 5)
        {
            to_price = ARTICHOKE_PRICE_PER_LB * weight + 6.5;
        }
        else if (weight > 5 && weight < 20)
        {
            to_price = ARTICHOKE_PRICE_PER_LB * weight + 14;
        }
        else
        {
            to_price = ARTICHOKE_PRICE_PER_LB * weight + (weight - 20) * 0.5 + 14;
        }
    }
}