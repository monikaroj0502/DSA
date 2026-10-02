#include<stdio.h>
void main()
{
	int a[50],i,n,step,temp,key,j;
	
	printf("enter limit:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter array elements:");
		scanf("%d",&a[i]);
	}
	

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
	
	printf("\nbubble sort=");
	for(i=0; i<n; i++)
	{
		printf("  %d",a[i]);
	}
	
	// Insertion Sort
    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    printf("\nInsertion Sort:");
    for(i = 0; i < n; i++)
	{
	 printf("%d ", a[i]);
    }
}
