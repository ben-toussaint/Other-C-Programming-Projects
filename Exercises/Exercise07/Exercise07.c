#include<stdio.h>
int main(){
	int myage[4];
	int i,j;
	for(i=0,j=1;i<4;i++,j++){
		printf("Enter the age of the %d :",j);
		scanf("%d",&myage[i]);
	}
//oldest
	if(myage[0]>myage[1]&&myage[0]>myage[2]&&myage[0]>myage[3]){
		printf("First is the oldest the oldest");
	}
	else if(myage[1]>myage[0]&&myage[1]>myage[2]&&myage[1]>myage[3]){
		printf("Second is the oldest");
	}
	else if(myage[2]>myage[0]&&myage[2]>myage[1]&&myage[2]>myage[3]){
		printf("Third is the oldest");
	}
	else if(myage[3]>myage[0]&&myage[3]>myage[2]&&myage[3]>myage[1]){
		printf("Fourth is the oldest");
	}
//Youngest
	if(myage[0]<myage[1]&&myage[0]<myage[2]&&myage[0]<myage[3]){
		printf("First is the oldest the Youngest");
	}
	else if(myage[1]<myage[0]&&myage[1]<myage[2]&&myage[1]<myage[3]){
		printf("Second is the Youngest");
	}
	else if(myage[2]<myage[0]&&myage[2]<myage[1]&&myage[2]<myage[3]){
		printf("Third is the Yongest");
	}
	else if(myage[3]<myage[0]&&myage[3]<myage[2]&&myage[3]<myage[1]){
		printf("\nFourth is the Yongest");
	}
	
}