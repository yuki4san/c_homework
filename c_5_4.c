// 燃費の単位は「km/L」。
// つまり1Lあたりの走行距離であるため「走行距離÷給油した量」で求められます。
// トリップメーターの走行距離と、給油量を計算し、燃費数値を割り出します。
// 仮に、走行距離が450km、給油量が55Lだとすれば、
// 450km÷55L＝8.18km/Lが満タン法による実燃費です。

#include <stdio.h>

int main(void){
    float km, cc, km_l, temp;

    printf("走行距離 [km] =");
    scanf("%f", &km);
    printf("ガソリンの消費量 [cc]  =");
    scanf("%f", &cc);

    temp = km / (cc/1000);
    km_l = temp;
    printf("燃費=%f", km_l);

  return 0;
}