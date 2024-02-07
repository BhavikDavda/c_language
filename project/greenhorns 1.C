#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	float celsius,fahrenheit;
	printf("Enter temerature in celsius: ");
	scanf("%f",&celsius);

	fahrenheit=(celsius*9/5)+32;
	printf("%.2fc The is equal to %2.ff \n",celsius,fahrenheit);
	getch();
	return 0;
}