#include <stdio.h>
int main()
{
	int cal,i,product=1;
	printf("Please Enter the number of calcutions you which to make: ");
	scanf("%d",&cal);
	int mynum[cal];
	for(i=0;i<cal;i++){
		printf("Enter number %d :",i+1);
		scanf("%d",&mynum[i]);//Here you have to keep the entered number in an index location varrying with 'i'
		product=product*mynum[i];
	}
	printf("The product is found to be :%d",product);
}
