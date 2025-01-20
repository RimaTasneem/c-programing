#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("original value b4 swap=""%d\n%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping=""%d\n%d",a,b);
	return 0;
	
}
