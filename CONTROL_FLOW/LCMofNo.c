/*  Algorithm to Find LCM in C
Find the maximum of the two numbers and store them in a variable max.
Run a loop and check if max is divisible by both numbers.
if (max % x == 0 && max % y == 0)
If the condition is true, it means that max is the LCM of the two numbers.
If the condition is false, increment max by 1 and continue the loop to check the next number.
C Program To Find LCM of Two Numbers */



// C program to find LCM of
// two numbers
#include <stdio.h>
​

int main()
{
    int x = 15, y = 25, max;
    max = (x > y) ? x : y;
​
   
    while (1) {
        if (max % x == 0 && max % y == 0) {
            printf("The LCM of %d and %d is %d.", x, y,
                   max);
            break;
        }
​
        ++max;
    }
​
    return 0;
}
