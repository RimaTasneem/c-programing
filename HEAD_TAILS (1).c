#include<stdio.h>
int main()
{
char coin;
printf("enter coin in either T or H");
scanf("%c",&coin);
if (coin=='T')
{
	printf("Tails");
}
else
{
	printf("Heads");
}
}
