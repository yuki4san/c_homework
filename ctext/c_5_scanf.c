#include <stdio.h>

int main() {
    int input = 0;
    printf("整数を入力して、改行キーを押してください\n");
    scanf("%d", &input);
    printf("入力した整数は%dです。\n", input);

    float input2 = 0.0;
    printf("実数を入力して、改行キーを押してください\n");
    scanf("%f", &input2);
    printf("入力した整数は%fです。\n", input2);

    return 0;
}