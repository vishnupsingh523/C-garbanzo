#include<stdio.h>
void main()
{
	int a,bonus;
	char b;
	
	printf("Enter the gender(M or F) and salary:");
	scanf("%c %d",&b,&a);
	if(b=='M'||b=='m')
	{ if(a>10000)
	bonus=1000;
	else if(a>5000 && a<=10000)
	bonus=500;
	else bonus=50;
	
	}
	else 
	{if(a>10000)
	bonus=100;
	else if(a>5000 && a<=10000)
	bonus=50;
	else 
	bonus=20;
	}
	
	printf("Gender: %c \nSalary:%d \nBonus:%d",b,a,bonus);
	
}
