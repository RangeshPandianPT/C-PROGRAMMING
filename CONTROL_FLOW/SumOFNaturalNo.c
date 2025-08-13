#include <stdio.h>

int sumofnaturalnumbers(int num)
{
    int i, s = 0;
    for (i = 0; i <= num; i++) {
      
       
        s += i;
    }
    
    printf("Sum = %d", s);
}

int main()
{

    int number = 10;
  
    
    sumofnaturalnumbers(number);
    return 0;
}