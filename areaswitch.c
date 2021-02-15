#include<stdio.h>
void main()
{
	unsigned char a;
	int b,c;
	printf("\nEnter Value between 1 and 4: ");
	
	scanf("%d",&b);
	c=sizeof(a);
	printf("\nA=%d",a);
		printf("\nB=%d",b);
	printf("\nC=%d",c);

	switch(b)
	{
		case 1: printf("\nHii");break;
		case 2: printf("\nHello");break;
		case 3: printf("\nHooooo");break;
		case 4: printf("\nHeeee");break;
		default: printf("\nNooo");break;
	}
}

