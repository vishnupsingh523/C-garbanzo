#include<stdio.h>
void main()
{
	int i,j,count=0,n=0;
	printf("\n Enter the 10 values:\n");
	for(j=1;j<=10;j++)
	{
			
		scanf("%d",&i);
		if(i>0)
		count++;
		else if(i<0)
		n++;
		
	}
		printf("\nThe No of positive nos:%d",count);
printf("\nThe No of Negative nos:%d",n);
n=10-n-count;
printf("\nThe No of ZEROS:%d",n);
	
}
