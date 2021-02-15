#include<stdio.h>

void main()
{
	int n,a,b,c;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	
	printf("\n \t\tMAIN MENUE \n Choose any one.\n 1.ARITHMETIC\n 2.LOGICAL\n 3.ASSIGNMENT\n ");
	printf("\n YOUR CHICE:");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("\n 1.ADDITION\n 2.SUBTRACTION\n 3.MULTIPLICATION\n SELECT ANY ONE:"); scanf("%d",&n);
		         switch(n)
				 {
				 	case 1: c=a+b; printf("\n SUM=%d",c); break;
				 } 
		case 2: printf("\n SELECT ANY ONE:"); scanf("%d",&n);
		         switch(n) break;
		case 3: printf("\n SELECT ANY ONE:"); scanf("%d",&n);
		         switch(n)  break;
		
		default: printf("\n DEFAULT VALUE"); break;
		
	}
}
