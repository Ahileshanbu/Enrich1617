#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number to be checked ");
    scanf("%d",&n);
    int temp=n;
    int flag=0,ans=0;
    while(temp!=0)
    {
        flag=temp%10;
        ans=ans*10+flag;
        temp=temp/10;
    }
    if(n==ans)
    {
         printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
