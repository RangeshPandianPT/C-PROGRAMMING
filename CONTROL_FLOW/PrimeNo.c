//Brute Force Method - O(n) Time
//We can check whether the number is prime or not by iterating in the range from 1 to n using loops. We will count the number of divisors. If there are more than 2 divisor (including 1 and n) then the given number n is not prime, else n is prime. This method is known as trial division method.


#include <stdbool.h>
#include <stdio.h>
​
int main() {
    int n = 29;
    int cnt = 0;
​

    if (n <= 1)
        printf("%d is NOT prime", n);
    else {
​
      
        for (int i = 1; i <= n; i++) {
​
            
            if (n % i == 0)
                cnt++;
        }
​
        
        if (cnt > 2)
            printf("%d is NOT prime", n);
​
       
        else
            printf("%d is prime", n);
    }
    return 0;
}