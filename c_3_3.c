#include <stdio.h>

int f(int n) {
    return n == 0 ? 0
                  : n + f(n - 1);
}

int main()
{
    int i = 0, sum = 0;
    begin:
        i = i + 1;
        sum += f(i);
        if (i < 10)
            goto begin;
    printf("SUM = %d ", sum);
    return 0;

}c
