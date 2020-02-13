#include <stdio.h>
int main(int argc, char const *argv[])
{
    int up_count, lower_count, ch;
    up_count = 0;
    lower_count = 0;
    while ((ch = getchar()) != EOF)
    {
        if ((ch >= 65) && (ch <= 90))
        {
            up_count++;
        }
        else if ((ch >= 97) && (ch <= 122))
        {
            lower_count++;
        }
    }
    printf("\n");
    printf("up_count:%d lower_count:%d", up_count, lower_count);

    return 0;
}
