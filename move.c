#include<stdio.h>
int main()
{
    int r,c;
    int ip=-1,jp=-1;
    int i,j;
    char ch;
    printf("enter rows and columns");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==-1)
            {
                ip=i;
                jp=j;
                break;
            }
            if(ip!=-1)
            {
                break;
            }
        }
    }
    printf("\nQ->Quit L->Left R->Right U->Up D->Down\n");
    printf("Enter characters\n");
    scanf("%c",&ch);
while(ch!='Q')
{
    switch(ch)
    {
    case 'U':a[ip][jp]=a[ip-1][jp];
            a[ip-1][jp]=0;
            ip=ip-1;
            break;
    case 'D':a[ip][jp]=a[ip+1][jp];
            a[ip+1][jp]=0;
            ip=ip+1;
            break;
    case 'L':a[ip][jp]=a[ip][jp-1];
            a[ip][jp-1]=0;
            jp=jp-1;
            break;
    case 'R':a[ip][jp]=a[ip][jp+1];
            a[ip][jp+1]=0;
            jp=jp+1;
            break;
    case 'Q':return 0;
    }
    for(j=0;j<8;j++)
    {
        printf("- ");
    }
    for(i=0;i<4;i++)
    {
        printf("\n|");
        for(j=0;j<4;j++)
        {
            if(a[i][j]!=0)
            {
                printf(" %d |",a[i][j]);
            }
            else
            {
                printf("   |");
            }
        }
        printf("\n");
        for(j=0;j<8;j++)
        {
             printf("- ");
        }

    }
    printf("\nQ->Quit L->Left R->Right U->Up D->Down\n");
    printf("Enter characters\n");
    scanf("%c",&ch);
}
}
