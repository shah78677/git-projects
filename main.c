/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, d, r1, r2, r3;
    
    scanf("%d", &a);
    
    b = a / 3;
    d = a % 3;
    
    if (a > 4)
    {
        if (b % 2 == 1)
        {
            if (d == 0 || d == 2 || a <= 3)
            {
                printf("\nNo");
            } else if (d == 1)
            {
                r1 = b - 1;
                r2 = b + 1;
                r3 = b + 1;
                printf("\nYes");
                printf("\n%d %d %d", r1, r2, r3);
            }
        } else if (b % 2 == 0)
        {
            if (d == 1)
            {
                printf("\nNo");
            } else if (d == 2)
            {
                r1 = b;
                r2 = b;
                r3 = b + 2;
                printf("\nYes");
                printf("\n%d %d %d", r1, r2, r3);
            } else 
            {
                printf("\nYes");
                printf("\n%d %d %d", b, b, b);
            }
        }
    } else 
    {
        printf("\nNo");
    }

    return 0;
}
