#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);
    int count=0,sum=0,flag,rev=0;
    while(n!=0)
    {
        count++;
        flag=n%10;
        sum=sum+flag;
        rev=rev*10+flag;
        n=n/10;
    }
    printf("The number of digits is %d\n",count);
    printf("The sum of digits is %d\n",sum);
    printf("The reverse of a number is %d\n",rev);
    return 0;
}
