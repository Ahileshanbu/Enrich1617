#include<stdio.h>
int main()
{
    int n;
    printf("Enter 5 digit number ");
    scanf("%d",&n);
    int m;
    printf("Enter the rotation number ");
    scanf("%d",&m);
    int flag=0;
    if(m>5)
        m=m%5;
    while(m!=0)
    {
        flag=n/10000;
        n=n%10000;
        n=n*10+flag;
        m--;
    }
    printf("The rotation is %d",n);
    return 0;
}
