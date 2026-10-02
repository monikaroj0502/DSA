#include<stdio.h>
int main()
{
	int a[50],n,i,step,temp;
	
	printf("enter limit:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter elements:");
		scanf("%d",&a[i]);
	}
	
	for(step=1; step<n-1; step++)
	{
		for(i=0; i<n-1; i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	
	printf("\narray in ascending order:");
	for(i=0; i<n; i++)
	{
		printf("  %d",a[i]);
	}
}
