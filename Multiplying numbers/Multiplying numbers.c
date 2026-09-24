#include<stdio.h>
int main()
{
	int i,inputnum,num,mult=1;
	printf("Enter a number you are going to do it's calculations :");
	scanf("%d",&inputnum);
	for (i=1;i<=inputnum;i++)
	{
		printf("Enter a number :");
		scanf("%d",&num);
		if (num==0){
			mult=mult*0;
		}
		mult=mult*num;
		}
		printf("The multiplication of the Entered value is: %d",mult);
	}