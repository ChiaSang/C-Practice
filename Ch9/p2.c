/* print char matrix assigned by user*/
#include <stdio.h>
void charprint(char ch, int i, int j);
int main()
{
    char ch;
    int i, j; // input matrix i j
    printf("please input a char:\n");
    scanf("%c%d%d", &ch, &i, &j);
    charprint(ch, i, j);

    return 0;
}

void charprint(char ch, int i, int j)
{
    for (int count = 0; count < i; count++)
    {
        for (int z = 0; z < j; z++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}