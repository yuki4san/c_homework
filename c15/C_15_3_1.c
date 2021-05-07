// 0～100の範囲で入力された複数の数値の中から、
// 最大値と最小値を求めて表示するプログラムを作成せよ。
// -1が入力された場合は入力の終わりと判定する。
// ただし、最大値と最小値はmain関数以外の一つの関数の中で求める。
// また、入力された数値を記憶する配列の要素数は10とし、
// それ以上入力された場合はエラーが起きても仕方ないこととする。
// ヒント:配列の中に -1 があればデータの終わりだと判断できる。
// ヒント:最小値を探すには、最大値を記憶した変数との比較を繰り返せば良い。

#include <stdio.h>


int main(void){

	int i = 0, array[10];

	do {
		printf("%d 番目の数:",i + 1);
		scanf("%d",&array[i]);
		i++;
	} while (array[i - 1] != -1);

    int max0 = 0;
    int min0 = 100;
	int *max; /* ポインタ変数の宣言 */
	int *min; /* ポインタ変数の宣言 */
    max = &max0;
    min = &min0;

    i =0;
    while (array[i] != -1) {
		if (array[i] > *max) {
            max = &array[i];
            printf("last max = %d\n", *max); // 0
        }
		if (array[i] < *min) {
            min = &array[i];
            printf("last min = %d\n", *min); // 0
        }
		i++;
	}


}
