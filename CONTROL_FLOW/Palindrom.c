//By Reversing and Comparing
//A simple method for this problem is to first reverse all the digits of a given number and then compare the reverse of the number with a given number. If both are the same, then the number is a palindrome.




#include <stdio.h>
​
int reverseNum(int N) {
  
    int rev = 0;
    while (N > 0) {
​
        int dig = N % 10;
​
        rev = rev * 10 + dig;
​
        N /= 10;
    }
    return rev;
}
​
int isPalindrome(int N) {
  
    if (N < 0)
        return 0;
    return N == reverseNum(N);
}
​
int main() {
    int N = 121;
    if (isPalindrome(N)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}