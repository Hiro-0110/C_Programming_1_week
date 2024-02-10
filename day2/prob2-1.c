#include <stdio.h>

int main()
{
    int a;                 //  変数a（キーボードからの値を代入)
    printf("a=");          //  キーボードからの入力を促す
    scanf("%d", &a);       //  キーボードから一文字入力
    printf("a = %d\n", a); //  aの値を表示
    int b;
    printf("b=");
    scanf("%d", &b);
    printf("b = %d\n", b); //  bの値を表示
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
}