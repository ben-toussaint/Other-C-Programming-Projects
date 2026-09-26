#include <stdio.h>
int main()
{
	int first,second,third;
	printf("Enter the first integer:");
	scanf("%d",&first);
	printf("Enter the second integer:");
	scanf("%d",&second);  
	third=first+second;
	printf("The value of third integer is %d",third);
	return 0; 
}