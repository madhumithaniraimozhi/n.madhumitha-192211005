#include<stdio.h>
#include<conio.h>
int main()
{
	int c,n,first,last,middle,arr[100],search;
	printf("enter the number of elemnets");
	scanf("%d",&n);
	printf("enter the %d integers");
	for(c=0;c<n;c++)
	scanf("%d",&arr[c]);
	printf("enter the element to search");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(arr[middle]<search)
		first=middle+1;
		else if(arr[middle]==search)
		{
			printf("%d found in location %d",search,middle+1);
			break;
		}
		else 
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	{
	printf("%d not found at location %d",search);
    }
	return 0;
}
