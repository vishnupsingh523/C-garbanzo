#include<stdio.h>
void main()
{
	int a[30],i,n,sum=0;
	printf("Enter the size of array (BETEEN 1 to 30) = ");
	scanf("%d",&n);
	
	printf("\nEnter the values:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\nThe sum is: %d\n",sum);
}
