#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand((unsigned)time(NULL));
    while (1)
    {
        int n;
        n = rand() % 100 + 1;
        printf("数：%d\n", n);
        if (n % 10 == 0)
        {
            printf("終了します\n");
            break;
        }
    }
}