#include <stdio.h>

int main()
{
    /* Assume N is given and i is fixed integer and K is remainder */
    int N, i, k, r;
    k =1;
    printf("Please enter an integer :");
    scanf("%d", &N);
    while(N > 0)
    { 
        r = N % 10;
        N = N/10;
        printf(" the digit at %d place is %d\n", k, r);
        k = k*10;
    }
    return 0;
}

