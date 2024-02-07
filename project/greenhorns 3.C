#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	float angle1,angle2,angle3;
	printf("Enter the fist angle: ");
	scanf("%f",&angle1);
	printf("Enter the second angle: ");
	scanf("%f",&angle2);

	angle3=180-angle1-angle2;
	printf("The third angle is : %.2f\n",angle3);
	getch();
	return 0;
}
