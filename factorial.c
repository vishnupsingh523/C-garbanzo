#include<stdio.h>
void main()
{
	int a,i=0,f=1,n;
	printf("ENTER NUMBER:");
	scanf("%d",&a);
	n=a;
	while(i<n)
	{
		f*=a;
		a--;
		i++;
	}
	printf("\n THE FACTORIAL IS:%d",f);
	
}

