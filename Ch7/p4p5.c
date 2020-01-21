#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch = 0;
    int seq = 0;
    // while (scanf("%c", &ch) == 1 && ch != '#')
    // {
    //     if (ch == '.')
    //     {
    //         seq++;
    //         printf("!");
    //     }
    //     else if (ch == '!')
    //     {
    //         seq++;
    //         printf("!!");
    //     }

    //     else
    //         printf("%c", ch);
    // }
    // printf("替换:%d\n", seq);

    while (scanf("%c", &ch) == 1 && ch != '#')
    {
        switch (ch)
        {
        case '.':
        {
            seq++;
            printf("!");
        }

        break;
        case '!':
        {
            seq++;
            printf("!!");
        }
        break;
        default:
            printf("%c", ch);
            break;
        }
    }
    printf("替换:%d\n", seq);

    return 0;
}
