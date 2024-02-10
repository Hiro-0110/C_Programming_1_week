#include <stdio.h>

int main()
{
    int width;                     //  変数a（キーボードからの値を代入)
    printf("width=");              //  キーボードからの入力を促す
    scanf("%d", &width);           //  キーボードから一文字入力
    printf("width = %d\n", width); //  aの値を表示
    int height;
    printf("height=");
    scanf("%d", &height);
    printf("height = %d\n", height); //  bの値を表示
    printf("長方形の面積は、%dm2です。\n", width * height);
}