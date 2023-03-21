#include<stdio.h>
#include<math.h>
unsigned int gcdrecursive(unsigned m,unsigned n);
unsigned int gcdnonrecursive(unsigned p,unsigned q);
int main()
{
    int a,b;
    printf("Enter 2 numbers to find GCD:");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d Using Recursive Function is %d\n",a,b,gcdrecursive(a,b));
    printf("GCD of %d and %d Using non recursive Function is %d\n",a,b,gcdnonrecursive(a,b));
    return 0;
}
unsigned int gcdrecursive(unsigned m,unsigned n)
{
    if(n>m)
        return gcdrecursive(n,m);
    if(n==0)
        return(m);
    else
        return gcdrecursive(n,m%n);
}
unsigned int gcdnonrecursive(unsigned p,unsigned q)
{
    unsigned remainder;
    remainder=p-(p/q*q);
    if(remainder==0)
        return q;
    else
        gcdrecursive(q,remainder);
}
