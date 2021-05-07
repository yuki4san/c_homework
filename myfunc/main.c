/* main.c */

#include <stdio.h>
#include "sum.h" /* ← sum.h ヘッダーファイルをインクルードする*/

// main関数（メイン関数）
// main関数（メイン関数）＝さまざまな関数（sum関数含め)の機能をまとめて「全体を管理する機能」が備わっている関数
int main (void) {
    // int型変数valueを定義
	int value;
    // valueにsum関数の戻り値を代入する
    // 50と100を引数にとる
	value = sum(50,100);
    // ターミナルにvalueに代入された値を表示（150です！）
	printf("%d\n",value);
	return 0;
}
