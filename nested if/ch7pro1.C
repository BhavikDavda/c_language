#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("Enetr the value of a:- ");
	scanf("%d",&a);

	printf("Enter the value of b:- ");
	scanf("%d",&b);

	printf("Enter the value of c:- ");
	scanf("%d",&c);

	if(a>b)
	{
		if(a>c)
		{
			printf(" a is maxxxx...");
		}
		else
		{
			printf(" c is maxxxx...");
		}
	}
	else
	{
		if(b>c)
		{
			printf(" b is maxxxx...");
		}
		else
		{
			printf(" c is maxxxx...");
		}
	}



	getch();


}