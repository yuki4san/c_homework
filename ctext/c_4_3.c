#include <stdio.h>
#include <math.h>

main(){
    float a, b, c, d, kai1, kai2;
    printf("係数 a b c を入力してください：");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c;
    if (d < 0){
        printf("実数解はありません\n");
    } else {
        kai1 = (-b + sqrt(d))/(2*a);
        kai2 = (-b - sqrt(d))/(2*a)3 ;
        printf("答え：　%f  %f\n", kai1, kai2);
    }
}