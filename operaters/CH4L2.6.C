#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int x,y,z;
	printf("enter the value of x: ");
	scanf("%d",&x);
	printf("enter the value of y: ");
	scanf("%d",&y);
	printf("enter the value of z: ");
	scanf("%d",&z);

	int result=(x+y+z)*(x+y+z);
	printf("The result of (%d+%d+%d)^2 is: %d\n",x,y,z,result);
	getch();
	return 0;
}