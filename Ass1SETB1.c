#include<stdio.h>
void main()
{
	int n,i,coef,power;
	
	printf("enter number of terms:");
	scanf("%d",&n);
	
	printf("enter coefficient and power:\n");
	for(i=1; i<=n; i++)
	{
		scanf("%d%d",&coef,&power);
		
		if(power==0)
		printf("%d",coef);
		
		else
		printf("%dx^%d",coef,power);
	
	   if(i!=n)
	   {
	   	printf("+");
	   }
	
	}
	
}
