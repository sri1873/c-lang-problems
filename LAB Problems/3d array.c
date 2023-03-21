#include<stdio.h>
int main()
{
int ar[3][3][3],i,j,k;
for(i=0;i<3;i++)
	{
	printf("Enter the values of %d array:\n",i+1);
	for (j=0;j<3;j++)
		{
		for(k=0;k<3;k++)
			{
			scanf("%d",&ar[i][j][k]);
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("The matrix %d\n",i+1);
		for (j=0;j<3;j++)
		{
            		for(k=0;k<3;k++)
                	{
                		printf("%d\t",ar[i][j][k]);
                		if (k==2)
                    			printf("\n");
                	}
		}
	printf("\n\n");
	}
return 0;
}

