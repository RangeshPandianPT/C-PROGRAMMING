#include <stdio.h>

int area(int a, int b)
{
    int A;
    A = a * b;
    return A;
}
int perimeter(int a, int b)
{
    int P;
    P = 2 * (a + b);
    return P;
}

int main()
{

    int l = 10, b = 10;
    printf("Area of rectangle is : %d", area(l, b));
    printf("\nPerimeter of rectangle is : %d",
           perimeter(l, b));
    return 0;
}