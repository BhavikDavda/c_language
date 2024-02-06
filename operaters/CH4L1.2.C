#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int a=10;
	int b=30;
	printf("a=%d, b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\na=%d,b=%d",a,b);
	getch();
	return 0;
}