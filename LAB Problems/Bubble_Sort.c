#include<stdio.h>
int bubble_sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int flag=0;
        for(int j=0;j<size-i-1;j++)
        {
            int temp=arr[j+1];
            if(arr[j]>arr[j+1])
            {
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag=1;
            }
        }
        if(flag ==0)
            break;
    }
    return(arr);
}
int main()
{
    int size,i,*res;
    printf("BUBBLE SORT\n");
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    res=bubble_sort(arr,size);
    printf("\nThe Sorted list is: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",res[i]);
    }
    return 0;
}
