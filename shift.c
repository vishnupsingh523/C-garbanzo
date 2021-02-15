#include<stdio.h>
void showbits(int);
void main()
{
	int a;
	for(a=0;a<=5;a++)
	{
		printf("Decimal %d is same as binary ",a);
		showbits(a);
	}
}
