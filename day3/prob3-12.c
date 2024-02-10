#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 21 - 11;
    printf("数値：%d\n", n);
    if (n > 0)
    {
        printf("正の数です\n");
    }
    else if (n < 0)
    {
        printf("負の数です\n");
    }
    else
    {
        printf("0です\n");
    }
}