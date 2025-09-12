// C program to find the sum of n 

#include <stdio.h>


int recSum(int n)
{
  
    if (n <= 1)
        return n;
  
 
    return n + recSum(n - 1);
}


int main()
{
    int n = 10;
    printf("Sum = %d ", recSum(n));
    return 0;
}