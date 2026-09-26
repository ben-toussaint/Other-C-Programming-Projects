#include <stdio.h>
int main()
{
	int radius;
	const float pi=3.14;
	float area;
	printf("Enter the radius of a circle:");
	scanf("%d",&radius);
	area= pi*radius*radius;
	printf("The area of a circle is equal to:%.2f",area);
}