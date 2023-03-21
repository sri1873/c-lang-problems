#include<stdio.h>
int main()
{
    int arr[10],i,sum=0,*ptr;
    printf("Enter 10 elements:");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    ptr=arr;
    for(i=0;i<10;i++)
    {
        sum+=*ptr;
        ptr++;
    }
    printf("The sum of Elements is %d",sum);
    return 0;
}
