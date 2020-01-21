#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch = 0;
    int seq = 0;
    int flag = 0;
    while ((ch = getchar()) && ch != '#')
    {
        if (ch == 'e')
        {
            flag = 1;
        }
        
        else if (ch == 'i')
        {
            if (flag == 1)
            {
                seq++;
            }
            else
            {
                flag = 0;
            }
        }
        else
        {
            flag = 0;
        }
        

        
    }
    printf("%d", seq);

    return 0;
}
