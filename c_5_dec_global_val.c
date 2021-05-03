#include <stdio.h>

/* 大域変数の宣言 */
int data = 0, n;

/* 大域変数の初期化 */
void init() {
    data = 0;
}

/* 大域変数に値を追加*/
void add(int value) {
    data = data + value;
}

/* 配列の値を表示する。 */
void show() {
    printf("%d\n", data);
}

int main() {
    printf("Declare a value= ");
    scanf("%d", &n);
    init();
    add(n);
    add(n);
    show();

    return 0;
}