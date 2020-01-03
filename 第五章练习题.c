// 《C Primer Plus》中文版 第六版 第五章练习题

void tricha(double dnum);
void Temperatures(double temp);

#include <stdio.h>
int main(int argc, char const *argv[])
{

    // 第一题
    const int MIN_PER_HOU = 60;
    int MIN = 0;
    printf("type minutes:");
    scanf("%d", &MIN);
    while (MIN > 0)
    {
        printf("Hour: %8d\nMinutes: %5d\n", MIN / MIN_PER_HOU, MIN % MIN_PER_HOU);
        printf("type minutes:");
        scanf("%d", &MIN);
    }
    printf("exit!");

    //第二题

    int num = 0;
    int count = 11;
    printf("type a num:");
    scanf("%d", &num);
    for (int i = 0; i < count; i++)
    {
        printf("%d  ", num + i);
    }

    //第三题
    const int WEEK = 7;
    int days = 0;
    printf("type days:");
    scanf("%d", &days);
    while (days > 0)
    {
        printf("%d days are %d weeks, %d days\n", days, days / WEEK, days % WEEK);
        printf("type days:");
        scanf("%d", &days);
    }
    printf("exit!");

    //第四题
    #define FEET_CM 30.38
    const float INCHES_CM = 2.54;
    float tall = 0;
    printf("Enter a height in centimeters:");
    scanf("%f", &tall);
    while (tall > 0)
    {   int feet = tall / FEET_CM;
        printf("%.1f cm = %d feet, %.1f inches\n", tall, feet, (tall - feet * FEET_CM) / INCHES_CM);
        printf("type tall:");
        scanf("%f", &tall);
    }
    printf("exit!");


    //第四、五题
    int count, sum, des, sqsum; 

    count = 0; 
    sum = 0;
    des = 0;
    sqsum = 0;
    printf("type days:");
    scanf("%d", &des);
    while (count++ < des)
    {
        sum += count;
        sqsum +=  count * count;
    }
    printf("sum = %d sqsum = %d\n", sum, sqsum);


    //第七题
    double dnum;
    dnum = 0.0;
    scanf("%lf", &dnum);
    tricha(dnum);


    //第八题
    int sec_opera = 0;
    int fir_opera = 0;
    printf("This　program　computes　moduli.\n");
    printf("Enter　an　integer　to　serve　as　the　second　operand:");
    scanf("%d", &sec_opera);

    while (sec_opera > 0)
    {
        printf("Now　enter　the　first　operand:");
        scanf("%d", &fir_opera);
        printf("%d　%%　%d　is　%d\n", fir_opera, sec_opera, fir_opera % sec_opera);
        printf("Enter　next　number　for　second　operand:");
        scanf("%d", &sec_opera);
    }
    printf("Done!\n");


    //第九题
    double temp;
    temp = 0.0;
    printf("Type Fahrenheit Temperature.\n");
    while ((scanf("%lf", &temp)) == 1)
    {
        Temperatures(temp);
        printf("Type Fahrenheit Temperature.\n");
    }

    return 0;
}

void tricha(double dnum)
{
    double dsum = 0.0;
    dsum = dnum * dnum * dnum;
    printf("%.1lf\n", dsum);
}

void Temperatures(double temp)
{
    const double absolute = 273.16;
    double Temperatures = 0.0;
    Temperatures = (5.0 / 9.0) * (temp - 32.0);
    printf("Fahrenheit is %.2lf\n", temp);
    printf("Temperature is %.2lf\n", Temperatures);
    printf("K Temperature is %.2lf\n", Temperatures + 273.16);
}
