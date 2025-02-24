#include<stdio.h>
int main()
{
	int rev=0,n,m;
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rev=(rev*10)+(n%10);
		n=n/10;
	}
	if(rev==m)
	{
		printf ("palindrome");
	}
	else
	{
		printf("not");
	}
}
