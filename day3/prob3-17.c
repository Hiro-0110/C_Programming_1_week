#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 100 + 1;
    printf("数値：%d\n", n);
    if (n <= 50 && n % 2 == 0)
    {
        printf("50以下で2の倍数です\n");
    }
    else if (n <= 50 && n % 2 != 0)
    {
        printf("50以下で2の倍数ではありません\n");
    }
    else if (n > 50 && n % 2 == 0)
    {
        printf("50より大きく2の倍数です\n");
    }
    else if (n > 50 && n % 2 != 0)
    {
        printf("50より大きく2の倍数ではありません\n");
    }
}