

#include <stdio.h>

int main(void){
  int n;
  float i, sum = 0;

  /* n の入力 */
  printf("級数（1+2+…+n）の和を計算します。\n");
  printf("nを入力してください = ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++){
    sum += 1/i;
    printf("合計=%f\n", sum);
  }
  return 0;
}