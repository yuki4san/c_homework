#include <stdio.h>

int main(void){
    int i, j;
    i = 0;
    /* 縦軸 */
    while (++i <=9) {
        j=0;
        /* 横軸 */
        while(++j <=9){
            printf("%3d", i * j);
            }
        putchar('\n');
    }
    return 0;
}