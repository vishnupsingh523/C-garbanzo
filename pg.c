#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter marks:\n");
scanf("%d%d%d",&a,&b,&c);
char grade;
int pg=0;
pg=a*b*c*100/300;
if(pg=>90)
printf("Grade:A+");
else if(pg>=80&&pg<90)
printf("Grade:A");
else if(pg>=70&&pg<80)
printf("Grade:B+");
else if(pg>=60&&pg<70)
printf("Grade:B");
else if(pg>=40&&pg<60)
printf("Grade:C");
else if(pg>=0&&pg<40)
printf("Grade:F");
}

