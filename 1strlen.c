#include<stdio.h>
#include<string.h>
void main()
{	int n,*p,i;
	printf("\nEnter the size of array= ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the values: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	printf("\Entered values: ");
	for(i=0;i<n;i++)
		{
		printf("\n%d",&a[i]);	
		}
	printf("\nUpdate the values: ");
	for(i=0;i<n;i++,++p)
		{
			scanf("%d",*p]);
		}
	for(i=0;i<n;i++)
		{
		printf("\n%d",&a[i]);	
		}
}

