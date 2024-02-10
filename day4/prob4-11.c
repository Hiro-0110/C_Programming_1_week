#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand((unsigned)time(NULL));
    int max = 1;
    for (int i = 0; i < 5; i++)
    {
        int n;
        n = rand() % 100 + 1;
        printf("%d\n", n);
        if (max < n)
        {
            max = n;
        }
    }
    printf("最大値：%d\n", max);
}