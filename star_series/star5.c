// Title: to print star pattern
/* Description: to print the star of pattern 
             
            * * * * 
             * * *
              * *
               *                 */

//-----------------------------------------------------------------------------
// ------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    int i, n, j, k;
    printf("enter the length:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (k = n; k >= i; k--)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}

//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------

// by me :) (nisha)