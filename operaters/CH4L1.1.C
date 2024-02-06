#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int a=10,b=20,c;
	printf("a=%d,b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\na=%d,b=%d",a,b);
	getch();
	return 0;
}