#include <stdio.h>

// 1) プロトタイプ宣言 - sum.h
int sum(int min,int max);

// 2) Main関数基本的にこの中で、処理を動かします - main.c
int main (void) {
	int value;
	value = sum(50,100);
	printf("%d\n",value);
	return 0;
}

// 3) sum関数 - sum.c
int sum(int min,int max)
{
	int num;
	num = min + max;
	return num;
}