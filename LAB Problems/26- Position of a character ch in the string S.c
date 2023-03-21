#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],c[20],*found;
    puts("Enter a string");gets(s);
    puts("Enter a substring");gets(c);
    found=strstr(s,c);
    if(found)
    {
        printf("Second String is found in the First String at %d position.\n", found - s);
    }
    else
        printf("-1");
    return 0;

}
