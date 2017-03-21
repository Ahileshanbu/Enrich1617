#include<stdio.h>
void main()
{
    int arr[15];
    int n,i,maxval1=0,maxval2=0;
    printf("Enter the length of array ");
    scanf("%d",&n);
    printf("\nEnter the array values ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            if(arr[i]>maxval1)
            {
                maxval2=maxval1;
                maxval1=arr[i];
            }
            else if(arr[i]>maxval2&&maxval1>arr[i])
            {
                maxval2=arr[i];
            }
        }
    }
    if(maxval1==0)
    {
        printf("\nThere is no even number in the array");
    }
    else if(maxval2==0)
    {
        printf("\nThere is only one even number is available in the array");
    }
    else
     {
          printf("\nThe second maximum no is %d",maxval2);
     }

}
