#include <stdio.h>

int main(){

  int a;

  /* 整数の入力 */
  printf("整数を入力してください = ");
  scanf("%d", &a);

  /* 条件演算子 */
  a % 2 == 0 ? printf("%d は 偶数です。　答え＝%d", a, a*a) : printf("%d は 奇数です。　答え＝%d", a, a*a*a);

  return 0;
}



// #include <stdio.h>

// int main(void)
// {
//   int a;

//   printf("整数を入力してください = ");
//   scanf("%d",&a);

//   if( a % 2 == 0 ){
//     printf("%d は偶数です: answer = %d \n", a, a * a);
//   } else {
//     printf("%d は奇数です: answer = %d \n", a, a * a * a);
//   }

//   return 0;
// }
