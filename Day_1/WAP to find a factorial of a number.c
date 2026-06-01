#include<stdio.h>
int main ()
{ int i,n,fact=1;
    printf("Enter a number whose factorial we want to find");
    scanf("%d",&n);
    if(n<0)
    printf("Factorial is not defined");
    else if ((n==0)||(n==1))
    printf("Factorial is 1");
    else {
    for (i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of numbers is=%d",fact);
    }

    return 0;
}
