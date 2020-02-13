#include <stdio.h>
int main(int argc, char const *argv[])
{
    int count = 0;
    while (getchar() != EOF)
    {
        count++;
    }
    printf("char count is %d", count);

    return 0;
}

/*
EOF 为control+z linux
*/
