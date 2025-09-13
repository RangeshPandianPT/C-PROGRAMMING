// C program for the above approach
#include <stdio.h>


long power(int x, unsigned n)
{
    long long pow = 1;

    // Multiply x for n times
    for (int i = 0; i < n; i++) {
        pow = pow * x;
    }

    return pow;
}

int main(void)
{

    int x = 2;
    unsigned n = 3;

    int result = power(x, n);
    printf("%d", result);

    return 0;
}