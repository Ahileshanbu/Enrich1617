#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[10];
	int i;
	for(i=0;i<5;i++)
	{
	    scanf("%d",&arr[i]);
	}
	int *p=&arr;
	for(i=0;i<5;i++)
	{
	    printf("%d ",*(p+i));
	}
	return 0;
}
