#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr()

	int x,y;
	printf("enter the value of x: ");
	scanf("%d",&x);
	printf("enter the value of y: ");
	scanf("%d",&y);

	int result=(x-y)*(x-y);
	printf("the result of (%d-%d)^2 is: %d\n",x,y,result);



	getch();
	return 0;
}