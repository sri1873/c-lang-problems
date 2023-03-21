#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30],c[40];
    int lb,l,lc,la,pos=0,j=0,i;
    puts("Enter a string");gets(a);
    puts("Enter a substring");gets(b);
    puts("Enter the position to insert");scanf("%d",&pos);
    la=strlen(a);lb=strlen(b);
    l=pos+lb;lc=la+lb;
    for( i=0;i<pos;i++)
    {
        c[i]=a[i];
    }
    for(i=pos;i<=l;i++)
    {
        c[i]=b[j];j++;
    }
    j=pos;
    for(i=l;i<lc;i++)
    {
        c[i]=a[j];
        j++;
    }
    c[i]='\0';
    printf("%s",c);
    return 0;
}
