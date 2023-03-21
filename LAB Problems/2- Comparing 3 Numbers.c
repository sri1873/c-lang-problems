#include<stdio.h>
int main()
{
int a,b,c;
printf("Your 3 numbers are:- ");
scanf("%d%d%d",&a,&b,&c);
if (b<a>c)
    printf("%d is the greatest\n",a);
else if (a<b>c)
    printf("%d is greatest\n",b);
else
    printf("%d is greatest\n",c);
if (b>a<c)
    printf("%d is the smallest\n",a);
else if (a>b<c)
    printf("%d is smallest\n",b);
else
    printf("%d is smallest\n",c);
return 0;
}
