#include<stdio.h>
main()
{
	int x,y;
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	
	printf("Before swapping:\n");
	printf("x:- %d\n",x);
	printf("y:- %d\n",y);
	
	int *p_x =&x;
	int *p_y =&y;
	
	*p_x= *p_x+*p_y;
	*p_y= *p_x-*p_y;
	*p_x= *p_x-*p_y;
	
	
	printf("After swapping:\n");
	printf("x:- %d\n",x);
	printf("y:- %d\n",y);
	
	
}
