#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	printf("Enter the string ");
	scanf("%s",a);
	int i,j,count,k,c=0;
	for(i=0;i<strlen(a);i++)
	{
		count=1;
		for(j=i+1;j<strlen(a);j++)
		{
			if(a[i]==a[j])
			{
				count++;
				for(k=j;k<strlen(a);k++)
					a[k]=a[k+1];
			}
		}
		if((count%2)!=0)
		{
			c++;
		}
		if(c>=2)
		{
			printf("false");
			return 0;
		}
	}
	printf("true");
}
