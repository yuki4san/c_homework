#include <stdio.h>

/* BMI 数値を計算する関数*/
double BMI_cal(double w, double h) {
    /* BMIは 体重 (kg) ÷ 身長 (m)2 で求める */
    return w / h / h;
}

int main(void){

  /* 体重と身長 */
  double weight, height, bmi;

  /* 体重を入力 */
    printf("体重を入力してください = ");
    scanf("%lf", &weight);

  /* 身長を入力 */
    printf("身長を入力してください = ");
    scanf("%lf", &height);

  /* BMI数値を計算 */
  bmi = BMI_cal(weight, height);

  /* 変換結果を出力 */
  printf("BMI (for cm) = %.3lf\n", bmi);
  printf("BMI (for m) = %.3lf\n", bmi*10000);

  return 0;
}
