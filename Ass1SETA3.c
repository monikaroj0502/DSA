#include<stdio.h>
void main()
{
	int a[20],b[20],n,i;
	
	printf("enter limit:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter array elements:");
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		b[i]=a[i];
	}
	printf("copy array:");
	for(i=0; i<n; i++)
	{
		printf(" %d",b[i]);
	}
	
}
