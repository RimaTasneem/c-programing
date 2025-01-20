#include<stdio.h>
int main()
{
	float C1,F1,C2,F2;
	scanf("%f",&C1);
	F1=(C1*9/5)+32;
	printf("%f",F1);
	scanf("%f",&F2);
	C2=(F2-32)*(5/9);
	printf("%f",C2);
	return 0;
}

