#include <stdio.h>

int main()
{
    /* Assume N is given. */
    int N;
    int i = 3;

    printf("Please enter an integer :");
    scanf("%d", &N);
    if (N %2 == 0)
        printf("No, %d is not a prime number.\n", N);
    else
        while(i*i<=N)
        {
            int remainder = N%i;
            if (remainder == 0)
            {
                printf("NO, %d is not a prime number.\n", N);
                break;
            }
            i = i+2;
        }
    if (i*i >N)
        printf("YES, %d is a prime number.\n", N);
    return 0;
}
