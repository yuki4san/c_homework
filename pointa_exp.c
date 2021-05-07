#include <stdio.h>
#include <stdbool.h>

// 数字を「7」に書き換える関数のプロトタイプ宣言
void change_seven(int* jusho);

int main(){

    int i;
    printf("7に書き換えたい値を入力してください＝");
    scanf("%d", &i);
    // i の住所を取り出すので &iと書きます
    change_seven(&i);
    printf("i=%d",i);
}

// もし引数を int jusho と定義した場合、実際は int jusho = scanfで取得した値
// jusho = 7と代入されない
// int* と定義することで、変数jushoの住所を受け取ることにします

void change_seven(int* jusho) {

    *jusho = 7;
    // jusho = 7としてはいけない。なぜなら他人の住所を私が変えるのはいけないことだからw
    // *jushoにすることで、jushoの中身を変更することになります
}
