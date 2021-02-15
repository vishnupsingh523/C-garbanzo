#include<stdio.h>
void main()
{
	float I,V,R;
	printf("Enter the value of VOLTAGE: ");
	scanf("%f",&V);
	printf("\nEnter the value of CURRENT: ");
	scanf("%f",&I);
	R=V/I;
	printf("\nThe value of RESISTANCE is: %f",R);
}
