#include<stdio.h>
#define MAX 30
int main()
{
    int n,i,arr[MAX];
    int *ptr;
    ptr=&arr[0];
    printf("Enter the size of Array:");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=&arr[n-1];
    printf("Elements in Reverse order: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",*ptr);
        ptr--;
    }
    return 0;
}
