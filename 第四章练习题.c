#include <stdio.h>
#include <string.h>
#include <float.h>

#define gallon 3.785
#define mill 1.609

int main()
{
    char uname[20];
    printf("请输入名字\n");
    scanf("%s", &uname);
    printf("%20s\n", uname);
    printf("%-20s\n", uname);
    printf("\"%s\"\n", ABC);

    float ee1 = 21.3;
    printf("%.3e\n", ee1);
    printf("%.3f\n", ee1);

    float second, size, velocity;
    printf("type file_size MB ");
    scanf("%f", &size);
    printf("type velocity Mb/s ");
    scanf("%f", &velocity);
    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n", velocity, size, size / (velocity / 8));

    char uname1[10] = {0};
    char name1[10] = {0};
    printf("type name\n");
    scanf("%s", &name1);
    printf("type uname\n");
    scanf("%s", &uname1);
    printf("%s %s\n", name1, uname1);
    printf("%-*d %-*d\n", strlen(name1), strlen(name1), strlen(uname1), strlen(uname1));
    printf("%*d %*d\n", strlen(name1), strlen(name1), strlen(uname1), strlen(uname1));

    float tea = 1.0/3.0;
    double teb = 1.0/3.0;
    printf("%.6f\n%.12f\n%.16f\n", tea, tea, tea);
    printf("%.6d\n%.12d\n%.16d\n", teb, teb, teb);
    printf("%d\n", FLT_DIG);
    printf("%d\n", DBL_DIG);

    float mileage = 0;
    float capacity = 0;
    printf("type milleage:");
    scanf("%f", &mileage);
    printf("type capacity:");
    scanf("%f", &capacity);
    printf("100km per %.1f L", (capacity * gallon) / (mill * mileage / 100));



    return 0;
}