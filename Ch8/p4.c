#include <stdio.h>
int main(int argc, char const *argv[])
{
    float ch_count = 0.0;
    float word_count = 0.0;
    int upper_count = 0;
    int lower_count = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {

        if ((ch >= 65) && (ch <= 90))
        {
            upper_count++;
            ch_count++;
        }
        else if ((ch >= 97) && (ch <= 122))
        {
            lower_count++;
            ch_count++;
        }

        else if (ch == '\n')
        {
            word_count++;
        }
    }
    printf(" per_ch_count:%.1f\n word_count:%d\n upper_count:%d\n lower_count:%d\n",
           (ch_count / word_count), (int)word_count, upper_count, lower_count);

    return 0;
}
