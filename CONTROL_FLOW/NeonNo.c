//Approach
//The basic idea is to first calculate the square of the number and then by calculating the sum of digits of the square we can check whether the given number is Neon Number or not.

//Algorithm
/*At first, we need to find the square of the given number.
Then we need to extract the digits of the square of the number using a loop.
Then we need to calculate the sum of digits.
At last, we need to check the sum with the given number, and the Outcome will be:
" true " , if the sum is equal to the given number, or
" false " , if the sum is not equal to the given number.
*/




#include <stdio.h>
​
int Check_Neon_Number(int num) {
​
    
    int square = num * num;
​
    
    int n = square;
​
   
    int digit;
​
    
    int sum = 0;
​
    while (n != 0) {
​
        // Extracting the digit
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
​
   
    if (sum == num)
        return 1; // If condition is true.
    else
        return 0; // If condition is false.
}
​
int main()
{
    int num = 9;
​
   
    int ans = Check_Neon_Number(num);
    if (ans == 1)
​
      
        printf("true");
    else
​
     
        printf("false");
    return 0;
}
