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
    do
    {
        printf("■");
        i++;
    } while (i < n);
    printf("\n");
}