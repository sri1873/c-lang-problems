#include <stdio.h>
int main()
{
    int array[30],result[30];
    int i, j,n,disk,position=0;
    printf("enter number of locations:");
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
//sstf code function
void sstf(int n, int a,int r[]){
    int i,m=0,counter=0;


        while(counter!=n)
        {
            int mini=100,d,ind;
            for(i=0;i<n;i++)
            {
               d=abs(r[i]-a);
               if(mini>d)
               {
                   mini=d;
                   ind=i;
               }

            }
            m=m+mini;
            a=r[ind];
            r[ind]=1000;
            counter++;
        }

        printf("Total head movements are: %d",m);
}
//srtf code function
void srtf(int n,int disc,int array[]){
    int i,j;
    int result[20];
    for (i = 0; i < n-1; i++)  {

           for (j = 0; j < n-i-1; j++)
               if (array[j] > array[j+1])
                  swap(&array[j], &array[j+1]);
       }
       int s,sum=0;

        for(i=0;i<n;i++){
           result[i]=array[i];

       }
       sum=disc-array[0];
        for(i=0;i<n-1;i++){
            s=result[i+1]-array[i];
            sum+=s;
        }

       printf("\nTotal Head moments: %d",sum);
    }


int main()
{
    int array[20],result[20];
    int i,j,n,disc,position=0;
    printf("Enter number of locations:");
    scanf("%d",&n);
    printf("Enter position of head:");
    scanf("%d",&disc);
    printf("Enter elements of disc queue\n");
for(i=0;i<n;i++)
{

scanf("%d",&array[i]);
result[i]=0;
}
    int get;
    printf("Enter 1 for SRTF and 2 for SSTF: ");
    scanf("%d",&get);
    if(get==1){
        srtf(n,disc,array);
    }
    else if(get==2){
        sstf(n,disc,array);
    }
    else{
        printf("Invalid Input!!");
    }
    return 0;
}
}

