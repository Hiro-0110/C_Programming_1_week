#include <stdio.h>

int main(void)
{
    int n;
    printf("西暦を入力してください: ");
    scanf("%d", &n);
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
    {
        printf("%d年はうるう年です。\n", n);
    }
    else
    {
        printf("%d年はうるう年ではありません。\n", n);
    }
}