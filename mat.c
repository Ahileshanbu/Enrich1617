#include<stdio.h>
int main()
{
    int r,c,k;
    printf("Enter the row and column ");
    scanf("%d%d",&r,&c);
    printf("Enter the K value ");
    scanf("%d",&k);
    int i,j,arr[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if((i+j)==k)
                arr[i][j]=1;
            else
                arr[i][j]=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}
