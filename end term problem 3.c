#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ms[30],ss[30],fs[40];
    int l_ss,l,l_fs,l_ms,pos=0,j=0,i;
    puts("Enter a string");
    gets(ms);
    puts("Enter a substring");
    gets(ss);
    puts("Enter the position to insert");
    scanf("%d",&pos);
    l_ms=strlen(ms);
    l_ss=strlen(ss);
    l=pos+l_ss;
    l_fs=l_ms+l_ss;
    for( i=0;i<pos;i++)
    {
        fs[i]=ms[i];
    }
    for(i=pos;i<=l;i++)
    {
        fs[i]=ss[j];
        j++;
    }
    j=pos;
    for(i=l;i<l_fs;i++)
    {
        fs[i]=ms[j];
        j++;
    }
    fs[i]='\0';
    printf("%s",fs);
    return 0;
}
