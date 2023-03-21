#include<stdio.h>
int selection_sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            int temp=arr[j];
            if(arr[i]<arr[j])
                continue;
            else if(arr[i]>arr[j])
            {
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    return(arr);
}
int main()
{
    int size,i,*res;
    printf("SELECTION SORT\n");
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    res=selection_sort(arr,size);
    printf("\nThe Sorted list is: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",res[i]);
    }
    return 0;
}
