#include <stdio.h>
int main()
{
    int count = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ')
        {
            printf("ch = %c ASCII = %d\n", ch, ch);
        }
        else if (ch == '\n')
        {
            printf("ch = %c ASCII = %d\n", ch, ch);
        }
        else if (ch == '\t')
        {
            printf("ch = %c ASCII = %d\n", ch, ch);
        }
        else
        {
            printf("ch = %c ASCII = %d\n", ch, ch);
        }
        count++;
        if (count % 10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}