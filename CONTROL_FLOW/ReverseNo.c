//Reverse a Number in C
//The simplest method to reverse a string is by extracting its digits one by one using (%) modulo and (/) division operator and form the number by rearrange them in the reverse.




#include <stdio.h>
​
int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
​
int main()
{
    int num = 4562;
    printf("Given number: %d\n", num);
    printf("Revers of the number: %d",
        reverseDigits(num));
​
    getchar();
    return 0;
}