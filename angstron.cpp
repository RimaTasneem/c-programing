#include<stdio.h>
#include<math.h>
int main()
{
	int n,rev,num;
	scanf ("%d",&n);
	num=n;
	while(n>0)
	{
		rev=rev+pow(n%10,3);
		n=n/10;
	}
	if(rev==num)
	{
		printf("Angstrom");
	}
	else
	{
		printf("Not Angstrom");
	}
}
