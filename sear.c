#include<stdio.h>
void fun(int a[],int n,int ele)
{
	int count=0,i;
	for(i=0;i<n;i++)
		if(a[i]==ele)
			count++;
	printf("The element %d that occurs  %d times ",ele,count);
}
void main()
{
	int n;
	printf("Enter the array size ");
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int ele;
	printf("Enter the element to be checked ");
	scanf("%d",&ele);
	fun(a,n,ele);
}
