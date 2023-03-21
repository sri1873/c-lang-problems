#include<stdio.h>
void get_matrix_elements(int matrix[10][10],int row,int column)
{
    printf("\nEnter the elements:\n");
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<column;++j)
        {
            printf("Enter a[%d][%d]:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void matrix_multiply(int first[10][10],int second[10][10],int result[10][10],int r1,int c1,int r2,int c2)
{
    for(int i=0;i<r1;++i)
    {
        for(int j=0;j<c2;++j)
        {
            result[i][j]=0;
        }
    }
    for(int i=0;i<r1;++i)
    {
        for(int j=0;j<c2;++j)
        {
            for(int k=0;k<c2;++k)
                result[i][j]+=first[i][j]*second[i][j];
        }
    }
}
void display(int result[10][10],int row,int column)
{
    printf("\nOutput Matrix\n");
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<column;++j)
        {
            printf("%d\t",result[i][j]);
            if(j==column-1)
                printf("\n");
        }
    }
}
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2;
    printf("\nEnter rows and columns of first matrix:");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter rows and columns of second matrix:");
    scanf("%d%d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Error!!enter rows and columns again");
        printf("\nEnter rows and columns of first matrix:");
        scanf("%d%d",&r1,&c1);
        printf("\nEnter rows and columns of second matrix:");
        scanf("%d%d",&r2,&c2);
    }
    get_matrix_elements(first,r1,c1);
    get_matrix_elements(second,r2,c2);
    matrix_multiply(first,second,result,r1,c1,r2,c2);
    display(result,r1,c2);
    return 0;
}
