#include<stdio.h>
#include<conio.h>

main()
{
	float principal, rate,time, simpale_interest;
	clrscr();
	printf("enter Principal amount is :- ");
	scanf("%f", &principal);
	printf("enter of Rate per annum is :-");
	scanf("%d",&rate);
	printf("enter of Time is :- \n");
	scanf("%f",&time);

	simpale_interest=(principal*rate*time)/100;
	printf("simpal intrest is :-%f",simpale_interest);
	getch();
	return 0;
}



