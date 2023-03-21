#include<stdio.h>
int main()
{
    int n,i,min,max,sum,list[100];
    float avg;
    printf("Enter the number of Elements: \n");
    scanf("%d",&n);
    printf("Enter %d Numbers:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
    max=min=sum=list[0];
    printf("The list of Elements are:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",list[i]);
        if (list[i]>max)
            max=list[i];
        if(list[i]<min)
            min=list[i];
        sum+=list[i];
    }
    avg=sum/n;
    printf("\n\n");
    printf("Maximum Value is: %d\n",max);
    printf("Minimum value is: %d\n",min);
    printf("%.2f is the average of the entered numbers\n",avg);
    return 0;
}
