
#include <stdio.h>

int
main()
{
   int year; /* ここの値を変えて下さい */

  /* 摂氏を入力 */
    printf("年を入力してください = ");
    scanf("%d", &year);

 if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
   printf("うるう年ですn");
 } else {
   printf("うるう年ではありませんn");
 }

 return 0;
}
