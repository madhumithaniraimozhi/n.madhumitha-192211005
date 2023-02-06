#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	printf("enter the year");
	scanf("%d",&i);
	if(i%4==0)
	{
	printf("%d is leap year");
    }
	else
	{
	printf("%d is not a leap year");
    }
	return 0;
}
