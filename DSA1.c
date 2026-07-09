#include<stdio.h>
struct student
{
  int rno;
  char sname[20];
  float per;
  
}s1[20];
int n;
void AC()
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("enter roll no:");
		scanf("%d",&s1[i].rno);
		printf("enter name:");
		scanf("%s",s1[i].sname);
		printf("enter percentage:");
		scanf("%f",&s1[i].per);
	}
}

void A()
{
	int max,i;
	max=s1[0].per;
	for(i=0; i<n; i++)
	{
		if(s1[i].per>max)
		{
			max=s1[i].per;
		}
	}
	printf("maximun percentage=%d",max);
}

void main()
{

	printf("enter limit:");
	scanf("%d",&n);
	AC();
	A();
}


