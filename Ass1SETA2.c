#include<stdio.h>
void main()
{
	int a[20],b[20],n,i;
	
	printf("entter limit:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter elements:");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		b[i]=a[i]*a[i];
	}
	printf("array:");
	for(i=0; i<n; i++)
	{
		printf(" %d",a[i]);
	}
	printf("\nsquare of array:");
	for(i=0; i<n; i++)
	{
		printf(" %d",b[i]);
	}
}
