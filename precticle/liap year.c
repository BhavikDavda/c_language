#include<stdio.h>
main()
{
	int n,m;
	printf("Enter year:");
	scanf("%d",&n);
	
	printf("end year :");
	scanf("%d",n);
	
	if(n%4==0)
	{
		printf("this year liap year");
	}
	else
	{
		printf("This year not liap year");
	}
}
