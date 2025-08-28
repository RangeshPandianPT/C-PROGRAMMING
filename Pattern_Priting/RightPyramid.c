//Right Half Pyramid Pattern
//Right half pyramid pattern looks like a right-angle triangle in which the hypotenuse is towards the right i.e. all the characters are aligned to the right.


#include <stdio.h>
​
int main() {
    int n = 5;
​
    // Outer loop for printing rows
    for (int i = 0; i < n; i++) {
​
        // Inner loop for printing * in each rows
        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}