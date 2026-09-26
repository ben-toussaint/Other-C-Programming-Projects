int main(){
	int n,i,sum=0;
	float average;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	if (n<=0){
		printf("Array size incorrect!Please try again!");
	}
	int myArray[n];
		
		for(i=0;i<n;i++){
			printf("Enter %d elements: ",i+1);
			scanf("%d",&myArray[i]);
			sum=sum+myArray[i];
	}
	printf("elements stored successfully.");
	printf("\n\t\tDisplay\n");
	for(i=0;i<n;i++){
		printf("The %d is %d\n",i+1,myArray[i]);
	}
	average=(float)sum/n;
	printf("\nThe sum and the average of the entered numbers is %d and %.2f respectively",sum,average);
	int max=myArray[0];
	int min=myArray[0];
	for(i=1;i<n;i++){
		if(myArray[i]>max){
			max=myArray[i];
		}
		if(myArray[i]<min){
			min=myArray[i];
		}
	}
	printf("\nMAx is %d",max);
	printf("\nMIn is %d",min);
}