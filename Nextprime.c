#include<stdio.h>

void main()
{
    int n,i,j,flag=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=n+1;flag==0;i++)
    {
        for(j=2;j<i/2;j++)
           if(i%j==0)
               break;
        if(j==i/2)
        {
            flag=1;
            printf("%d",i);
        }
    }
}
