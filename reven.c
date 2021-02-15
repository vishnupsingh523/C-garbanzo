#include<stdio.h>
void reven(int i)
{
	printf("\n The even reverse order:\n");
	for(;i>0;i--)
	{
		if(i%2==0)
		printf("\n\t%d",i);
	}
}

void main()
{
	int a;
	printf("Enter no from where you wanted to print the positive even nos:\n\t");
	scanf("%d",&a);
	reven(a);
}
