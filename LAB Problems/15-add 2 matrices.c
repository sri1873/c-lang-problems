#include<stdio.h>
void add(int a[10][10],int b[10][10],int m,int n);
int main()
{
    int i,j,m,n,a[10][10],b[10][10];
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("\nEnter the number of coloumns:");
    scanf("%d",&n);
    printf("\nEnter the elements of the matrix A\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of the matrix B\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    add(a,b,m,n);
    return 0;
}
void add(int a[10][10],int b[10][10],int m,int n)
{
    int c[10][10],i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nThe  addition of elements of the matrices\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",c[i][j]);
        }
    printf("\n");
    }
}
