// Title: To add two integers using function and pointer

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include <stdio.h>

int add(int *n1,int *n2)
{
    int *sum;
    *sum=*n1 + *n2;
     return *sum;

}

int main()
{
   int n1,n2,sum1;

   printf("enter the two values:");
   scanf("%d %d",&n1,&n2);

   sum1=add(&n1,&n2);

   printf("the sum is %d",sum1);

   return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
