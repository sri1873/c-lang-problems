#include<stdio.h>
int insertion_sort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int value_to_insert=arr[i],value_position=i;
        while(value_position>0 && arr[value_position-1]>value_to_insert)
        {
            arr[value_position]=arr[value_position-1];
            arr[value_position-1]=value_to_insert;
        }
        arr[value_position]=value_to_insert;
    }
    return(arr);
}
int main()
{
    int size,i,*res;
    printf("INSERTION SORT");
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d Elements\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    res=insertion_sort(arr,size);
    for(i=0;i<size;i++)
        printf("%d ",res[i]);
    return 0;
}
