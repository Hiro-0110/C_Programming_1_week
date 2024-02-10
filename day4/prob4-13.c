#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand((unsigned)time(NULL));
    int n = rand() % 10 + 1;
    if (n >= 5)
    {
        for (int i = 0; i < n; i++)
        {
            printf("★");
        }
        printf("\n");
    }
    else
    {
        printf("発生した数値：%d\n", n);
    }
}