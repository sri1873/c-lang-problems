#include <stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter your number:");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        sum+=(num%10)*(num%10)*(num%10);
        num/=10;
    }
    if(temp==sum)
        printf("yes");
    else
        printf("no");
    return 0;
}
