#include <stdio.h>

int f(int n){
    if ( n == 0 || n == 1)
    return n;                // Basis
    return f(n-2) + f(n-1);  // induction
}

int main()
{
    int i = 0;
    begin:
        i = i + 1;
        printf("N = %d, Fibnum = %d \n", i, f(i));
        if (i < 10)
            goto begin;
    return 0;

}
