/*
 * - 入力した2つの自然数の最大公約数を求める -
 */
#include <stdio.h>

int main(void)
{

  int a, b, r, tmp;

  printf("2つの自然数を入力してください。\n");
  printf("1つ目の自然数 = ");
  scanf("%d", &a);
  printf("2つ目の自然数 = ");
  scanf("%d", &b);

  /* 自然数 a > b を確認・入替 */
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }

  /* ユークリッドの互除法 */
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }

  /* 最大公約数を出力 */
  printf("最大公約数 = %d\n", b);

  return 0;
}
