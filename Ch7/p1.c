#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch = 0;
    int bankch = 0;
    int enterch = 0;
    int otherch = 0;
    printf("请输入字符：");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
        {
            bankch++;
        }
        else if (ch == '\n')
        {
            enterch++;
        }
        else
        {
            otherch++;
        }
    }
    printf("bankch = %d enterch = %d otherch = %d\n", bankch, enterch, otherch);

    return 0;
}
