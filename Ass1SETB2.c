#include<stdio.h>
void main()
{
	int n,a[20],num,i,r;
	
	printf("enter limit:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter elements:");
		scanf("%d",&a[i]);
	}
	
	printf("enter element to search:");
	scanf("%d",&num);
	
	printf("enter element to replace: ");
	scanf("%d",&r);
	
	for(i=0; i<n; i++)
	{
		if(a[i]==num)
		{
			a[i]=r;
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
}
