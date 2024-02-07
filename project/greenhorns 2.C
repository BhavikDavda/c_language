#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	float base_salary,hra,da,ta,gross_salary;
	printf("Enter base salary: ");
	scanf("%f",&base_salary);
	printf("Enter parcentage of hra: ");
	scanf("%f",&hra);
	printf("Enter parcentage of da: ");
	scanf("%f",&da);
	printf("Enter parcentage of ta: ");
	scanf("%f",&ta);

	gross_salary=base_salary+(base_salary*hra)/100+(base_salary*da)/100+(base_salary*ta)/100;
	printf("Gross salary: %.f\n",gross_salary);
	getch();
	return 0;
}
