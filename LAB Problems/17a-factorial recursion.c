#include<stdio.h>
int recfact(int x);
int nonrecfact(int x);
void main()
{
    int n,a,b;
    printf("Enter any number:");
    scanf("%d",&n);
    a=recfact(n);
    printf("\nThe factorial of %d using recursion is %d\n",n,a);
    b=nonrecfact(n);
    printf("\nThe factorial of %d without using recursion is %d\n",n,b);
    return 0;
}
int recfact(int x)
{
    int f;
    if(x==0)
        return (1);
    else
    {
          f=x*recfact(x-1);
          return(f);
    }
}
int nonrecfact(int x)
{
    int fact=1;
    if(x==0)
        return (1);
    else
        while (x>=1)
        {
            fact*=x;
            --x;
        }
        return(fact);
}
