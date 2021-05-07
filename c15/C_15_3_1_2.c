// 0～100の範囲で入力された複数の数値の中から、
// 最大値と最小値を求めて表示するプログラムを作成せよ。
// -1が入力された場合は入力の終わりと判定する。
// ただし、最大値と最小値はmain関数以外の一つの関数の中で求める。
// また、入力された数値を記憶する配列の要素数は10とし、
// それ以上入力された場合はエラーが起きても仕方ないこととする。
// ヒント:配列の中に -1 があればデータの終わりだと判断できる。
// ヒント:最小値を探すには、最大値を記憶した変数との比較を繰り返せば良い。

#include <stdio.h>
// プロトタイプ宣言
// maxmin関数は、整数型の配列(array)、整数型の初期最大値(maxI)、整数型の初期最小値(minI)を引数に
// 与えられた配列の中の最小値と最大値をターミナルに出力します
void maxmin(int array[], int maxI, int minI);

int main(void){
    // 整数型の変数を宣言します。
    // loop/iteration用のi, 10の要素が入る配列，最大(max0)と最小値(min0)の初期値を宣言します
	int i = 0, array[10], max0=0, min0=100;
    // プレイヤーにターミナルに数字を打ち込んでもらいます
    // i=0から、スタート
	do {
		printf("%d 番目の数:",i + 1); // i=0なので一番目の数字は「i+1=1」
		scanf("%d",&array[i]); // array[0]に最初に打ち込んだ数字が格納されます
		i++; //1、2、3とiの数字をあげていきます
	} while (array[i - 1] != -1);
    //「−1」が打ち込まれるまでプレイヤーに数字を入れてもらいます
    // 言い換えれば、array[i]=-1になった段階で処理を終えます
    // maxmin関数に array, max0, min0を引数として与えます
    maxmin(array, max0, min0);
    return 0;
    }

// maxmin関数
// スクリプトの最初で宣言したmaxmin関数の中身です
void maxmin(int array[], int maxI, int minI)
{
    int i =0; /* loop用のiの初期化 */
	int *max; /* ポインタ変数の宣言 */
	int *min; /* ポインタ変数の宣言 */
    max = &maxI; /* maxIのアドレスを代入する *max = 0*/
    min = &minI; /* minIのアドレスを代入する *min = 100*/
    printf("ポインタ変数maxの値（=&maxIのアドレス): first max = %p\n", max); // ポインタ変数maxの値（=&maxIのアドレス）
    printf("ポインタ変数maxの値（=&minIのアドレス): first min = %p\n", min); // ポインタ変数maxの値（=&minIのアドレス）
    printf("ポインタ変数maxの指している値: *max = %d\n", *max); // ポインタ変数maxの指している値: 0
    printf("ポインタ変数minの指している値: *min = %d\n", *min); // ポインタ変数minの指している値: 100

    // array[i]が-1を含むまで以下の処理を繰り返す
    while (array[i] != -1) {
        // もし配列の中の値array[i]が*max(=0)より大きければ、最大値(*max)を更新
		if (array[i] > *max) max = &array[i];
            printf("最新の最大値 = %d\n", *max); // 常にその時の最大値を表示
        // もし配列の中の値array[i]が*min(=100)より小さければ、最小値(*min)を更新
		if (array[i] < *min) min = &array[i];
            printf("最新の最小値 = %d\n", *min); // 常にその時の最小値を表示
		    i++;
	}
    printf("最大値 %d : 最小値 %d\n", *max, *min);
    }
