#include<stdio.h>


void greater(int,int);

void main()
{
	int a,b;
	printf("Enter two number:\n");
	scanf("%d %d",&a,&b);
	greater(a,b);
}


void greater(int x,int b)
{
	if(x>b)
	printf("%d is greater",x);	
	else
	printf("%d is greater",b);
}

