#include<stdio.h>

void fibo(int x)
{
	int c,a=0,b=1;
	printf("\n\nFIBONACCI SERIES:");
	printf("\n\t%d\n\t%d",a,b);
	int j;
	for(j=2;j<x;j++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n\t%d",b);
	}
	
	
	
}
void main()
{
	int n;
	printf("\nHow many numbers you want to print in FIBONSCCI SERIES:\n");
	scanf("%d",&n);
	
	fibo(n);
}
