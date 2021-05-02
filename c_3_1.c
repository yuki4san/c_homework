#include <stdio.h>

double f(double x) {
    return (1.8 * x) + 32;
}

int main(void){

  /* 摂氏と華氏 */
  double celsius, fahrenheit;

  /* 摂氏を入力 */
    printf("摂氏を入力してください = ");
    scanf("%lf", &celsius);

  /* 摂氏を華氏に変換 */
  fahrenheit = f(celsius);

  /* 変換結果を出力 */
  printf("華氏 = %.3lf\n", fahrenheit);

  return 0;
}
