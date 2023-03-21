#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX],n,i;
    int *ptr=arr;
    printf("Enter the number of values in array: ");
    scanf("%d",&n);
    printf("Enter %d values\n",n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&ptr[i]);
    }
    printf("ARRAY ELEMENTS\n");
    for(i=0;i<n;i++)
    {
        printf("%d",i[ptr]);
        if(i<n-1)
            printf(", ");
    }
 return 0;
}
