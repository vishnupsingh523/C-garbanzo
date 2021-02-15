#include<stdio.h>//Using functions
void rahat(int x,int y); //formal parameters

void main()
{
	int i=0;
	printf("\n %d",i);
	for(;i<10;i++)
	rahat(1,2); //function call
}
rahat(int x,int y)
{
	int i=0;
	do
	{
	if(i%2==1)
	{
		printf("%d ",x);
	}
		printf("%d ",y);
	i++;
	
	}while(i<5);

}
