#include<stdio.h>

int sum(int x)
{
	int c;
	if(x==1)
	return;
	else
	{
		c=x*sum(x-1);
		return;
	}
	
	
}
void main()
{
	int a,b;
	printf("\nEnter any Number:\n");
	scanf("%d",&a);
	int z;
	z=sum(a);
	printf("\n\nThe FACTORIAL is:\t%d",z);
}
