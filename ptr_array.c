//
// This is a exercise about Array Pointer and Function
// Author:ChiaSang
//
#include <stdio.h>
void isASCII(char ch);
int main(int argc, char const *argv[])
{
    const char *a[4] = {
        "China",
        "USA",
        "Japan",
        "Korea"};
    char ch='否定';
    for (int i = 0; i < 4; i++)
    {
        printf("%s  ", *(a + i));
    }

    int i, *pi, **dpi;
    pi = &i;
    dpi = &pi;
    **dpi = 100; //指针的指针需要取地址&进行引用
    printf("%d", i);


    isASCII(ch);


   return 0;
}

// 静态变量在函数退出的时候值还在

// Function exercise
void isASCII(char ch)
{
if (ch>'0'&&ch<'z')
{
    printf("True");
}
else
{
    printf("False");
}
return;

}