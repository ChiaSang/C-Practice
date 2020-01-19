#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int real_price = 34;
    int price = 0;
    srand((unsigned int)time(NULL));
    price = rand();
    price = price % 100;
    while (1)
    {
        printf("请输入\n");
        scanf("%d", &price);
        if (price > real_price)
        {
            printf("大了\n");
        }
        else if (price < real_price)
        {
            printf("小了\n");
        }
        else
        {
            printf("对了\n");
            break;
        }
    }

    return 0;
}