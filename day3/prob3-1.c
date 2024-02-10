#include <stdio.h>

int main()
{
    printf("整数値を入力してください: ");
    int a;
    scanf("%d", &a);
    if (a >= 5)
    {
        printf("5以上です\n");
    }
    if (a != 1)
    {
        printf("1ではありません\n");
    }
    if (a < 50)
    {
        printf("50未満です\n");
    }
    if (a <= 10 || a >= 90)
    {
        printf("10以下または90以上です\n");
    }
    if (a >= 20 && a < 80)
    {
        printf("20以上かつ80未満です\n");
    }
}