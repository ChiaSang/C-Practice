//
// This is a exercise about Main's parameter
// Author:ChiaSang
//
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Parameter: %d \n", argc);
    for (int i = 0; i < argc; i++)
    {
        puts(argv[i]);
    }

    return 0;
}
