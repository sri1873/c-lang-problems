#include<stdio.h>
int main(){
float p,phy,chem,bio,math,com,choice;
do{
printf("Enter marks of all subjects\n");
printf("Marks in Physics: ");
scanf("%f",&phy);
printf("Marks in Chemistry: ");
scanf("%f",&chem);
printf("Marks in Biology: ");
scanf("%f",&bio);
printf("Marks in Math: ");
scanf("%f",&math);
printf("Marks in Computers: ");
scanf("%f",&com);
p=((phy+chem+math+bio+com)/500)*100;
printf("Percentage: %.2f%%\n",p);
if(p<40)
{
    printf("Failed\n");
}
else if(p<60)
{
    printf("second class\n");
}
else if(p<70)
{
     printf("First Class\n");
}
else
{
    printf("Distintion\n");
}
printf("press 1 to calculate new marks\nTo exit press 0\n");
scanf("%f",&choice);
if (choice==0)
    exit(0);
}while(choice==1);
return 0;
}
