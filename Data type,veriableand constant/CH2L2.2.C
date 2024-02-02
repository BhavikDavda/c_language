#include<stdio.h>
#include<conio.h>
main()
{
	float area,widht,hight;
	clrscr();
	printf("enter the vlueof widh:-\n ");
	scanf("%f",&widht);
	printf("enter the vlue of higt :-\n");
	scanf("%f",&hight);

	area=widht*hight;
	printf("The area of rectangle is %f",area);

	getch();

	return 0;
}