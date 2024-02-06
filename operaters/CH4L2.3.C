#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int x,y;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of y: ");
	scanf("%d",&y);

	int result=(x+y)*(x+y);
	printf("The result of (%d+%d)^2 is : %d\n",x,y);
	getch();
	return 0;
}
