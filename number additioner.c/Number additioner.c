#include <stdio.h>
int main(){
	int i,sum=0,num,nrange;
	printf("Enter a number which indicates how many calculations you are going to : ");
	scanf("%d",&nrange);

	for(i=1;i<=nrange;i++){
		printf("Enter a number : ");
		scanf("%d",&num);
		if(num==0){
			continue;
		}
		sum=sum+num;
	}
	printf("The Sum is %d",sum);
}
