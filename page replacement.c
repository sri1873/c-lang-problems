#include<stdio.h>
int main()
{
    int strings[10],fault=0,num_pages,fra,count,i;
    printf("Enter the number of pages: ");
    scanf("%d",&num_pages);
    printf("\n");
    for(int i=0;i<num_pages;i++)
    {
        printf("Enter string value %d:",i+1);
        scanf("%d",&strings[i]);
    }
    printf("\nEnter the number of frames:");
    scanf("%d",&fra);
    int temp[fra];
    for (i=0;i<fra;i++){
            temp[i]=-1;}
    for (i=0;i<num_pages;i++);
    {
            count=0;
            for(int j=0;j<fra;j++)
            {
                if(strings[i]==temp[j])
                {
                    count++;
                    fault--;
                }
            }
            fault++;
            if((fault<=fra)&&(count==0))
            {
                temp[i]=strings[i];
            }
            else if(count==0)
                temp[(fault-1)%fra]=strings[i];
            for(int j=0;j<fra;j++)
                printf("%d\t",temp[j]);
    }
    printf("Number of faults=%d",fault);
    return 0;
}
