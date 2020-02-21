#include <stdio.h>
char get_first(void);
int main(int argc, char const *argv[])
{

    printf("%c", get_first());

    return 0;
}
char get_first(void)
{
	int ch, garbage;

	do {
		ch = getchar();
	}
	while (ch == ' ');
		

	while((garbage = getchar()) != '\n' && garbage != EOF)
		;

	return ch;
}
