#include<stdio.h>
int main()
{
    int c,n,a=0,b=1,choice;
    do
    {
    printf("How many values do you want: \n");
    scanf("%d",&n);
    printf("The Fibonacci series is:\n");
    printf("%d\t%d",a,b);
    n-=2;
    while (n>0)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
        n--;
    }
    printf("\nTo try again press 1\nTo Exit press 0\n");
    scanf("%d",&choice);
    }while(choice==1);
return 0;
}
