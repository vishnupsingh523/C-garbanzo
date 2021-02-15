#include<stdio.h>

void main()
{
	int n,a,b,c;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	
	printf("\n \t\tMAIN MENUE \n Press any one.\n 1.ADDITION\n2.SUBTRACTION\n3.DIVISION\n4.MULTIPLICATION");
	printf("\n YOUR CHICE:");
	scanf("%d",&n);
	switch(n)
	{
		case 1: c=a+b; printf("\n SUM=%d",c);
		case 2: c=a-b; printf("\n SUB=%d",c); break;
		case 3: c=a/b; printf("\nDIV=%d",c); break;
		case 4: c=a*b; printf("\nMULTI=%d",c); break;
		default: printf("\n DEFAULT VALUE"); break;
		
	}
}
