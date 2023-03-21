#include<stdio.h>
int main()
{
    int salary,savings,spent,initial,day=1,food=0,a;
    printf("Enter the amount of salary you received this month:\n");
    scanf("%d",&salary);
    initial=salary;
    printf("Enter the amount you want to save: \n");
    scanf("%d",&savings);
    if (savings>salary)
        printf("Please enter a amount which is less that your salary\n");
    printf("You can spend up-to Rs%d this month\n",salary-savings);
    while(day<=3)
    {
        printf("Day %d\n",day++);
        printf("Please enter the amount you spent today:\n");
        scanf("%d",&spent);
        salary-=spent;
        printf("Enter the amount spent on food:\n");
        scanf("%d",&a);
        food+=a;
        if (salary<=(0.25*initial))
            printf("You have only less than Rs%d left for this month.Try to Reduce your Expenses\n\n",initial*25/100);
    }
    printf("End of the month\nYou have Rs%d left\n\n",salary);
    {
        if(salary>savings)
        {
            ("You have saved Rs%d this month\n\n",salary-savings);
        }
    else if(salary<0)
        {
            printf("You are broke\n");
        }
    else if(salary==0)
        {
            printf("You spent all your money this month\n");
        }
    else
        {
            printf("You failed to save the desired amount\n");
        }
    }
    if (food>initial*25/100)
        printf("You have spent too much on food try spending less by going to other restaurents the next month\n");
return 0;
}
