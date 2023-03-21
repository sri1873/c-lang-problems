#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char substring(char s1[],char s2[],int pos)
{
    char sfinal[80];
    int len_1,len_2,length,len_3,i,j=0;
    len_1=strlen(s1);len_2=strlen(s2);
    len_3=len_1+len_2;
    length=pos+len_2;
    for(i=0;i<pos;i++)
        sfinal[i]=s1[i];
    for(i=pos;i<length;i++)
    {
        sfinal[i]=s2[j];
        j++;
    }
    j=pos;
    for(i=length;i<len_3;i++)
    {
        sfinal[i]=s1[j];
        j++;
    }
    sfinal[i]='\0';
    printf("%s",sfinal);
}
int main()
{
    char s1[50],s2[50],sfinal[80],res;
    int pos;
    puts("Enter string 1");gets(s1);
    puts("Enter string 2");gets(s2);
    puts("Enter the position in which the 2nd string must be inserted: ");
    scanf("%d",&pos);
    res=substring(s1,s2,pos);
    return 0;
}
