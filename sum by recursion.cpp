#include<stdio.h>
int sum (int n){
	if (n==0)
	return 0;
	else
	return n+sum(n-1);
}
int main ()
{
	int n;
	printf ("Enter a Number:");
	scanf ("%d",&n);
	printf ("sum of %d term is :%d/n",sum (n));
	return 0;
}
