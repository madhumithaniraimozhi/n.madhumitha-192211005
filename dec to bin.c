#include<stdio.h>
#include<conio.h>
int main()
{
	int decnum,binnum[50],i=0;
	printf("enter the decimal number:");
	scanf("%d",&decnum);
	while(decnum!=0)
	{
	binnum[i]=decnum%2;
	i++;
	decnum=decnum/2;
    }
    printf("the equivalent binary number is:");
    for(i=(i-1);i>=0;i--)
    {
	printf("%d",binnum[i]);
    }
	return 0;
}
