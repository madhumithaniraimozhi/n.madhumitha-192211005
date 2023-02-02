#include<stdio.h>
#include<conio.h>
int main()
{
	int initial,final,a,b,c;
	printf("enter the range");
	scanf("%d",&final);
	printf("the pythagorian triplet of given range is:\n");
	for(a=1;a<=final;a++)
	{
		for(b=a;b<=final;b++)
	     {
	     	for(c=b;c<=final;c++)
		 {
		 	if(c*c==a*a+b*b)
		 	printf("%d%d%d",a,b,c);
		 	
		 }
	}
}
return 0;
}
