#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],a1[100];
    printf("Enter the string");
    gets(a);
    int len=strlen(a);
    int i,j=0;
    for(i=0;i<len;i++)
    {
        if((a[i]!='a')&&(a[i]!='e')&&(a[i]!='i')&&(a[i]!='o')&&(a[i]!='u')&&(a[i]!='A')&&(a[i]!='E')&&(a[i]!='I')&&(a[i]!='O')&&(a[i]!='U')&&(a[i]!=' '))
           a1[j++]=a[i];
    }
   
    printf("%s",a1);
    return 0;
}
