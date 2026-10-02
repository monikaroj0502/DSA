#include<stdio.h>
void main()
{
	int a[]={56,23,11,67,12,89,2};
	int i,step,temp;
	int n=7;
	
	for(step=1; step<n; step++)
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
	
	printf("\n stored array by using bubble sort=");
	for(i=0; i<n; i++)
	{
		printf("  %d",a[i]);
	}
}
