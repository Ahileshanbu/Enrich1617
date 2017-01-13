#include<stdio.h>

void main()
{
    int n,c=0,rev=0,rem,i,temp=0;
    scanf("%d",&n);
    i=n;
    while(rev!=i)
    {
        i++;
        temp=i;
        rev=0;
        do
        {
            rem=temp%10;
            rev=rev*10 +rem;
            temp=temp/10;
        }while(temp!=0);
    }
     printf("%d",i);
}
