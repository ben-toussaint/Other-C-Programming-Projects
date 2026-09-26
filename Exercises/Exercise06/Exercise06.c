#include <stdio.h>

int main()
{
	int marks[3];
	int i,sum=0;
	printf("Inputing array values\n");
	for(i=0;i<=2;i++)
	{
		printf("Enter element in marks[%d] :",i);
		scanf("%d",&marks[i]);
		sum=sum+marks[i];
	}
	printf("The sum of array elements =%d \n",sum);
	
	printf("Using a loop with arrays\n");
	getch();
	return 0;
}