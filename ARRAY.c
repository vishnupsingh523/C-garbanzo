#include <stdio.h>
void main()
{
	int size;
	printf("Enter The size between 1 to 500: ");
	scanf("%d",&size);
	
	int a[size];
	
		printf("\nEnter the values:\n ");
		int i,j=0;
		
		for(i=0;i<size;i++)
		{
			scanf("%d",&a[i]);
			j+=a[i];
		}
		
		printf("\nThe sum is:\n %d",j);
	
}
