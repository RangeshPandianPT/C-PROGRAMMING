#include <stdio.h>
​
int main() {
    int n = 5;
​
    // Outer loop to print all rows
    for (int i = 0; i < n; i++) {
​
        // Inner loop to print the * in each row
        for (int j = 0; j < n - i; j++)
            printf("* ");
        printf("\n");
    }
}