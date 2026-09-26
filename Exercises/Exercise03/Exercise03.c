#include <stdio.h>
int main(){
	int height;
	int base;
	int area;
	printf("Enter the height of the triangle:");
	scanf("%d",&height);
	printf("Enter the base of the triangle:");
	scanf("%d",&base);
	area=(base*height)/2;
	printf("The area of a triangle is %d",area);
}
