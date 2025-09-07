//C Program to Print Floyd's Triangle Pyramid Patterns

#include <stdio.h>

int main() {
    int n = 5;
    int c = 1;

    
    for (int i = 0; i < n; i++) {

        
        for (int j = 0; j <= i; j++) {
            printf("%d ", c++);
        }
        printf("\n");
    }
    return 0;
}