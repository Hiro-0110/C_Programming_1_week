#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand((unsigned)time(NULL));
    int a = rand() % 10 + 1;
    int b = rand() % 10 + 1;
    printf("a:%d\n", a);
    printf("b:%d\n", b);
    if (a > b)
    {
        printf("aはbより大きい\n");
    }
    else if (a < b)
    {
        printf("aはbより小さい\n");
    }
    else
    {
        printf("aとbは等しい\n");
    }
}