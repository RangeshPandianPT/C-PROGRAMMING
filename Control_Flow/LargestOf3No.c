#include <stdio.h>

int main()
{
    int c = 10, b = 22, a = 9;

    if (a >= b) 
	{
        if (a >= c)
            printf("%d is the largest number.", a);
        else
            printf("%d is the largest number.", c);
    }
    else 
	{
        if (b >= c)
            printf("%d is the largest number.", b);
        else
            printf("%d is the largest number.", c);
    }

    return 0;
}