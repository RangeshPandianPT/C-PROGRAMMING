//Hollow Right Half Pyramid
//The hollow right half pyramid pattern looks like a right-angled triangle aligned to the left and with its hypotenuse towards right. It only contains the characters at its boundary and is left hollow inside.




#include <stdio.h>
​
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
      
        for (int j = 1; j <= i; j++) {
          
        
            if (j == 1 || j == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}