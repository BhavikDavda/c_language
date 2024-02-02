#include<stdio.h>
#include<conio.h>
 main()
{
	float radius , area;
	const float pi=3.14;
	clrscr ();

	printf("enter valvr of radius:-");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf(" value ofarea =%f",area);

	getch();

}