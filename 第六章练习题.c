#include <stdio.h>
int main(int argc, char const *argv[])
{
    //P1
    // char character[26];

    // for (int i = 0; i < 26; i++)
    // {
    //     character[i] = 'a' + i;
    // }

    // for (int i = 0; i < 26; i++)
    // {
    //     printf("%c ", character[i]);
    // }
    // printf("\n");

    //P2
    // int row = 0;
    // while (row < 5)
    // {
    //     for (int i = 0; i <= row; i++)
    //     {
    //         printf("$");
    //     }
    //     printf("\n");
    //     row += 1;
    // }

    //P3
    // const int ROWS = 6;
    // int row;
    // char ch = 'F';

    // for (row = 0; row < ROWS; row++)
    // {
    //     for (int j = 0; j < row; j++)
    //         printf("%c", (ch - j));
    //     printf("\n");
    // }

    //P4
    // const int ROWS = 6;
    // int row;
    // char ch = 'A';

    // for (row = 0; row < ROWS; row++)
    // {
    //     for (int j = 0; j <= row; j++)
    //         printf("%c", (ch++));
    //     printf("\n");
    // }

    //P5
    char ch = 0;
    printf("Please input an uppercase letter:");
    scanf("%c", &ch);
    getchar();

    int length = ch - 'A' + 1;
    for (size_t i = 0; i < length; i++)
    {
        char exch = ('A' - 1);
        for (int j = 0; j < (length - i - 1); j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c", ++exch);
        }
        for (int j = 0; j < i; j++)
        {
            printf("%c", --exch);
        }
        printf("\n");
    }

    return 0;
}
