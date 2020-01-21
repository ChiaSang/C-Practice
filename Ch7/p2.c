#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch = 0;
    int flag = 0;
    printf("请输入：");
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
        {
            // printf("'\\n': %d ", ch);
            printf("%c:%d", ch, ch);
        }
        flag++;
        if (flag % 8 == 0 && flag != 0)
        {
            printf("\n");
        }
    }
    return 0;
}

// #include <stdio.h>
// #define STOP '#'

// #define SPACE ' '
// #define TAB '\t'
// #define NEWLINE '\n'
// #define BACKSPACE '\b'

// int main(void)
// {
// 	unsigned int count = 0;
// 	char ch;
// 	printf("ASCII Character Codes\n");
// 	printf("Enter input (%c to stop):\n", STOP);
// 	while ((ch = getchar()) != STOP)
// 	{
// 		switch (ch)
// 		{
// 			case SPACE :
// 					printf("' ': %3d ", ch);
// 					break;
// 			case TAB :
// 					printf("'\\t': %3d ", ch);
// 					break;
// 			case NEWLINE :
// 					printf("'\\n': %3d ", ch);
// 					break;
// 			case BACKSPACE :
// 					printf("'\\b': %3d ", ch);
// 					break;
// 			default:
// 					printf(" %c : %3d ", ch, ch);
// 		}
// 		count++;
// 		if (count % 8 == 0)
// 			printf("\n");
// 	}
// 	printf("\n");
// 	return 0;
// }
