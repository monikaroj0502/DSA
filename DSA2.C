#include<stdio.h>
#include<stdlib.h>
struct emp
{
	int eno;
	char name[20];
	float sal;
	
};
struct emp *e1;

void Ac()
{
	printf("enter eno:");
	scanf("%d",&e1->eno);
    printf("enter name:");
	scanf("%s",e1->name);
	printf("enter salary:");
	scanf("%f",&e1->sal);	
}

void A()
{
	printf("\n employee number=%d",e1->eno);
    printf("\n employee name=%s",e1->name);
    printf("\n employee salary=%f",e1->sal);
}
int main()
{
	e1=(struct emp *) malloc (sizeof(struct emp));
	Ac();
	A();
}
