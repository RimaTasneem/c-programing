#include<stdio.h>
int main()
{
	int i,j,k,count=1;
	for (i=1;i<=4;i++)
	{
		for(k=1;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=1;j++)
		{
			printf("%d",count);
			count++;
		}
		printf("\n");
	}
	return 0;
}



