/* guess.c -- an inefficient and faulty number-guesser */
#include <stdio.h>
int main(void)
{
    int guess = 50;
    int up_guess = 100;
    int down_guess = 0;

    char reply;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((reply = getchar()) != 'y')
    {
        while (getchar() != '\n')
            ;

        if (reply == 'h')
        {
            up_guess = guess;
        }
        else if (reply == 'l')
        {
            down_guess = guess;
        }

        guess = (up_guess + down_guess) / 2.0;
        printf("Well, then, is it %d?\n", guess);
    }
    printf("I knew I could do it!\n");

    return 0;
}