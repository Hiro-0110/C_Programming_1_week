#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        printf("%d", i);
        if (i % 10 == 0)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }
}