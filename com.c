#include <stdio.h>

int main(void) {
	// your code goes here
	char a[10];
	int count=1;
	scanf("%s",&a);
	int i;
	int n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if(a[i]==a[i+1])
	    {
	        count++;
	    }
	    else
	    {
	        if(count==2)
	        {
	            printf("%c%c",a[i],a[i]);
	            count=1;
	        }
	        else
	        {
	            printf("%d%c",count,a[i]);
	            count=1;
	        }
	    }
	}
	return 0;
}

