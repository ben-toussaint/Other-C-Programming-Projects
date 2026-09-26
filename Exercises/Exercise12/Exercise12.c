struct car{
	char model[5];
	int year;
	float price;
	
}obj[3];
int main(){
	int i,j;
	for(i=0;i<=2;i++){
	printf("Enter %d's model:",i+1);
	scanf("%s",obj[i].model);
	printf("Enter %d's year:",i+1);
	scanf("%d",&obj[i].year);
	printf("Enter %d's price:",i+1);
	scanf("%f",&obj[i].price);
		
	}
		printf("\nDisplay\n");
	for(j=0;j<=2;j++){
	    printf("\nThe model of the  %d car is :%s",j+1,obj[j].model);
	    printf("\nThe year of the %d car is : %d",j+1,obj[j].year);
	    printf("\nThe price of the %d car is :%.2f",j+1,obj[j].price);
	}
	

}