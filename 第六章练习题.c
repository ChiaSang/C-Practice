#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    // P1
    // char character[26];

    // for (int i = 0; i < 26; i++)
    // {
    //     character[i] = 'a' + i;
    // }

    // for (int i = 0; i < 26; i++)
    // {
    //     printf("%c ", character[i]);
    // }
    // printf("\n");

    // P2
    // int row = 0;
    // while (row < 5)
    // {
    //     for (int i = 0; i <= row; i++)
    //     {
    //         printf("$");
    //     }
    //     printf("\n");
    //     row += 1;
    // }

    // P3
    // const int ROWS = 6;
    // int row;
    // char ch = 'F';

    // for (row = 0; row < ROWS; row++)
    // {
    //     for (int j = 0; j < row; j++)
    //         printf("%c", (ch - j));
    //     printf("\n");
    // }

    // P4
    // const int ROWS = 6;
    // int row;
    // char ch = 'A';

    // for (row = 0; row < ROWS; row++)
    // {
    //     for (int j = 0; j <= row; j++)
    //         printf("%c", (ch++));
    //     printf("\n");
    // }

    // P5
    // char ch = 0;
    // printf("Please input an uppercase letter:");
    // scanf("%c", &ch);
    // getchar();

    // int length = ch - 'A' + 1;
    // for (size_t i = 0; i < length; i++)
    // {
    //     char exch = ('A' - 1);
    //     for (int j = 0; j < (length - i - 1); j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%c", ++exch);
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("%c", --exch);
    //     }
    //     printf("\n");
    // }

    // P6
    // int row = 0;
    // printf("type a num:");
    // scanf("%d", &row);
    // for (int i = 0; i < row; i++)
    // {
    //     printf("%d ", i + 1);
    //     printf("%d ", (i + 1) * (i + 1));
    //     printf("%d ", (i + 1) * (i + 1) * (i + 1));
    //     printf("\n");
    // }

    // P7
    // int i;
    // char chArry[10];
    // scanf("%s", &chArry);
    // for (int i = (strlen(chArry) - 1); i >= 0; i--)
    // {
    //     printf("%c ", chArry[i]);
    // }

    // P8
    // double num1 = 0.0;
    // double num2 = 0.0;
    // printf("type n1 type n2 ");
    // while (scanf("%lf", &num1) == 1 && scanf("%lf", &num2) == 1)
    // {
    //     printf("%lf\n", (num1 - num2) / (num1 * num2));
    //     fun(num1, num2);
    //     printf("type n1 type n2 ");
    // }

    // P9
    // 见修改的P8

    // P10
    // int p10_upnum = 0;
    // int p10_downnum = 0;
    // int p10_sum = 0;
    // printf("Enter lower and upper integer limits:");
    // scanf("%d %d", &p10_upnum, &p10_downnum);
    // while (p10_upnum >= p10_downnum)
    // {
    //     printf("The sums of the squares from %d to %d ", p10_downnum * p10_downnum, p10_upnum * p10_upnum);
    //     for (int i = 0; i <= (p10_upnum - p10_downnum + 2); i++)
    //     {
    //         p10_sum += p10_downnum * p10_downnum;
    //         p10_downnum += 1;
    //     }
    //     printf("is %d\n", p10_sum);
    //     printf("Enter next set of limits:");
    //     scanf("%d %d", &p10_upnum, &p10_downnum);
    // }
    // printf("Done");

    // P11
    // int p11_num[8];
    // for (int i = 0; i < 8; i++)
    // {
    //     printf("type number:");
    //     scanf("%d", &p11_num[i]);
    // }
    // for (int j = 7; j >= 0; j--)
    // {
    //     printf("%d", p11_num[j]);
    // }

    // P12
    // int p12_len = 0;
    // printf("type len :", p12_len);
    // scanf("%d", &p12_len);
    // while (p12_len >= 0.0)
    // {
    //     float p12_num1 = 0.0;
    //     float p12_num2 = 1.0;
    //     float p12_num11 = 0.0;
    //     float p12_num21 = 1.0;
    //     /*每次循环完成进行变量的初始化*/
    //     for (int i = 0; i < p12_len; i++)
    //     {
    //         p12_num1 += 1.0 / (p12_num2);
    //         p12_num2++;
    //     }
    //     printf("%f\n", p12_num1);
    //     for (int j = 0; j < p12_len; j++)
    //     {
    //         p12_num11 += pow(-1, j) * (1 / (p12_num21));
    //         p12_num21++;
    //     }
    //     printf("%f\n", p12_num11);
    //     printf("type len :", p12_len);
    //     scanf("%d", &p12_len);
    // }

    // P13
    // int p13_num[8];
    // for (int i = 0; i < 8; i++)
    // {
    //     p13_num[i] = pow(2, i);
    // }
    // int i = 0;
    // do
    // {
    //     printf("%d ", p13_num[i]);
    //     i++;
    // } while (i < 8);

    // P14
    // int p14_num[8];
    // int p14_sum[8];
    // int p14_sum1 = 0;
    // printf("type number:");
    // for (int i = 0; i < 8; i++)
    // {
    //     scanf("%d", &p14_num[i]);
    //     p14_sum1 += p14_num[i];
    //     p14_sum[i] = p14_sum1;
    // }
    // printf("\n");
    // for (size_t i = 0; i < 8; i++)
    // {
    //     printf("%3d ", p14_sum[i]);
    // }

    // P15
    // char p15_line[255];
    // int i = 0;
    // printf("Enter a line to reverse:\n");
    // while (scanf("%c", &p15_line[i]), p15_line[i] != '\n')
    //     i++;
    // for (; 0 <= i; i--)
    //     printf("%c", p15_line[i]);
    // printf("\n");

    // P16
    // float p16_daphne = 0.0;
    // float p16_deirdre = 0.0;
    // int seq = 1;
    // while (p16_deirdre <= p16_daphne)
    // {
    //     p16_daphne = 100 * (1 + seq * 0.1);
    //     p16_deirdre = 100 * pow(1.05, seq);
    //     seq += 1;
    // }
    // printf("p16_daphne = %.3f\np16_deirdre = %.3f\n", p16_daphne, p16_deirdre);
    // printf("%d\n", seq - 1);

    // P17
    // float bonus = 0;
    // float bonus1 = 100 * 1.08;
    // int year = 0;
    // while (bonus1 >= 0.0)
    // {
    //     bonus1 = bonus1 * 1.08;
    //     bonus1 -= 10;
    //     ++year;
    // }
    // printf("%d", year);

    //P18
    int p18_frinum = 1;
    int p18_primary = 5;
    int p18_seq = 0;
    while (p18_primary <= 150)
    {
        p18_primary -= p18_frinum;
        p18_frinum++;
        p18_primary = p18_primary * 2;
        ++p18_seq;
        printf("week:%2d number:%4d\n", p18_seq, p18_primary);
    }
    printf("seq:%3d\n", p18_seq);

    return 0;
}

double fun(double num1, double num2)
{
    printf("%lf\n", (num1 - num2) / (num1 * num2));
}
