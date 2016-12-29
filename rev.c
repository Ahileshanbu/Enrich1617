#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    printf("Enter the number ");
    scanf("%s",a);
    int i,j;
    for(i=0;i<strlen(a);i++)
    {
        for(j=i+1;j<strlen(a);j++)
        {
            if(a[i]>a[j])
            {
                char t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("The sorted number is  %s",a);
    return 0;
}
