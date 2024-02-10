#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("数：%d\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("■");
    }
    printf("\n");
}