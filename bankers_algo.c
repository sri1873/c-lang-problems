#include<stdio.h>
#include<stdlib.h>
int main(){
int n=4,m=2,i,j,k,y=0;
int finish[n],answer[n],ind=0,need[n][m];
int allocated[4][2]={{5,3},{1,2},{6,8},{9,2}};
int max[4][2]={{0,1},{3,4},{5,6},{9,8}};
int availa          ble[4]={1,2,3,4};
for (k=0;k<n;k++)
	finish[k]=0;
for (i=0;i<n;i++){
	for (j=0;j<m;j++)
		need[i][j]=max[i][j]-allocated[i][j];
           }
for(k=0;k<5;k++){
	for(i=0;i<n;i++){
		if(finish[i]==0){
			int check=0;
			for(j=0;j<m;j++) {
				if (need[i][j]>available[j]){
					check=1;
					break;
				}
			}
			if (check==0) {
				answer[ind++]=i;
				for (y=0;y<m;y++)
					available[y]+=allocated[i][y];
				finish[i] = 1;
			}
		}
	}
}
printf("The Sequence is:\n");
for (i=0;i<n-1;i++)
	printf("Process %d-> ",answer[i]);
printf("Process %d",answer[n-1]);
return (0);
}
