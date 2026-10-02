#include<stdio.h>
void main()
{
	int i,cnt=0,a[20],n,num;
 
	printf("enter limit:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter array elements:");
		scanf("%d",&a[i]);
	}
	printf("enter number to count:");
	scanf("%d",&num);
	   for(i=0; i<n; i++)
	   {
	   	if(a[i]==num)
	   	{
	   	 cnt++	;
		}
	   }
	printf("count=%d",cnt);
}
