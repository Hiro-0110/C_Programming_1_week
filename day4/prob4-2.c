#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("数：%d\n", n);
    int i = 0;
    while (i < n)
    {
        printf("■");
        i++;
    }
    printf("\n");
}