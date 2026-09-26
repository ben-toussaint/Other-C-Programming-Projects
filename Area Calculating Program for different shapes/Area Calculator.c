#include <stdio.h>
int main()
{
int choice, Length, Width, R_Area, S_Area, radius,height,base;
float C_Area, T_Area;
const float pi=3.1415;
printf("1. Rectangle \n2.Square\n3.Circle\n4.Triangle\n");
printf("Choose the shape number whose AREA you want to calculate:");
scanf("%d",&choice);
switch (choice){
case 1: 
printf("Enter the Length and Width of the Rectangle(Respectively):\n");
scanf("%d%d",&Length,&Width);
R_Area=Length*Width;
printf("The Area of the choosen shape is: %d \n",R_Area);
break;
case 2:
	printf("Enter the Length of the square:\n");
	scanf("%d",&Length);
	S_Area=Length*Length;
	printf("The Area of the choosen shape is: %d",S_Area);
break;
case 3:printf("Enter the radius of the Circle:\n");
       scanf("%d",&radius);
       C_Area=pi*radius*radius;
       printf("The Area of the choosen shape is: %f",C_Area);
       break;
       
case 4: printf("Enter the height and the base (Respectively) of the Triangle:\n");
        scanf("%d%d",&height,&base);
        T_Area=(base*height)/2.00;
        printf("The area of the choosen shape is:%.2f",T_Area);
        break;
default:printf("Unavailable shape number, choose 1-4 only!\n");
}
}
