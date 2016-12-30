#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("Enter the string ");
    scanf("%s",a);
    int i;
    int l=strlen(a);
    for(i=0;i<l/2;i++)
        if(a[i]!=a[l-1-i])
           break;
    if(i==l/2)
        printf("The given string is Palindrome");
    else
        printf("The given string is not a Palindrome");
    return 0;
}
