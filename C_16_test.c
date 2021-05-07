#include <stdio.h>
#include <stdlib.h> //exit関数を使うには、<stdlib.h> を #include する必要がある

//次のプログラムは、int型の要素数10個の配列を動的に確保します。

int main()
{
	int i;
	int *heap; // heap = 長期的に使用される大きなサイズのメモリを格納する領域
	printf("%p\n",heap);
	// malloc()の戻り値はvoid *型ですが、これをint *型へと変換している()を
	// キャスト演算子(cast operator)と呼びます。
	heap = (int *)malloc(sizeof(int) * 10);
	//ポインタ変数(すなわちheap) =(Int型のキャストオペレーター))malloc(必要なメモリのバイトサイズ);
	if (heap == NULL) exit(0); //
	// メモリを確保できなかった場合は NULL が返る。
	for (i = 0;i < 10;i++) {
		heap[i] = i; //
		printf("%d\n",heap[i]);
	}

	free(heap); //free(ポインタ変数が入る；すなわちheap);
	// malloc関数によって確保されたメモリは、プログラムが終了するまで残りますが、
	// そのメモリが不要になった場合、free(フリー)関数を使って解放します。
	return 0;
}