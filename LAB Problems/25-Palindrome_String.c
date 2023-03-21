#include<stdio.h>
#include<string.h>
#include<ctype.h>

void palindrome(char str[])
{
    int l=0,h=strlen(str)-1;
    while(h>l)
    {
        if(str[l++] != str[h--])
        {
            printf("%s is not a Palindrome\n",str);
            return;
        }
    }
    printf("%s is a Palindrome\n",str);
    return;
}
int main()
{
    char str[100];
    int j=0;
    printf("Enter your word to check if it is Palindrome (\"less than 100 characters\")\n");
    scanf("%s",&str);
    while(str[j])
    {
        str[j]=(toupper(str[j]));
        j++;
    }
    palindrome(str);
    return 0;
}
