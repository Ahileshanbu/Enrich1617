#include<stdio.h>
#include<string.h>
void main()
{
	int n,len=1;
	int i,j,t;
	char a[10];
	scanf("%s",a);
	n=strlen(a);
	for(i=1;i<=n;i++)
	{
		len=len*2;
	}
	len--;
	for(i=len;i>0;i--)
	{
		t=i;
		for(j=n-1;t!=0;j--)
		{
			if(t%2!=0)
			{
				printf("%c",a[j]);
			}
			t=t/2;
			
		}
		printf("\n");
	}
}
