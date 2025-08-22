//To determine whether the given number is an Armstrong number we need to extract each digit of the number and raise them to the power of the total number of digits and find their sum. If the obtained sum is equal to the original number, then the given number is an Armstrong number, otherwise, it’s not.


#include <math.h>
#include <stdio.h>
#include <stdbool.h>
​
bool isArmstrong(int N) {
    int temp = N;
    int sum = 0;
​
  
    int K = log10(temp) + 1;
​
  
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, K);
        temp /= 10;
    }
​
    
    return (sum == N);
}
​
int main() {
    int N = 153;
​
    // Check if the number is an Armstrong number
    if (isArmstrong(N)) {
        printf("Yes, %d is an Armstrong Number\n", N);
    }
    else {
        printf("No, %d is not an Armstrong Number\n", N);
    }
​
    return 0;
}