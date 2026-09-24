 #include<stdio.h>
 #include<conio.h>
 struct book
 {
 	float price;
 	int pages;
 }b[2];
 //Creating a function so that one can display the result anytime he or she wants
void printbook(){
	int i;
	for(i=0;i<2;i++){
	printf("\t\t\t-----BOOK %d-----\n",i+1);
	printf("The book price is %2.2f\n",b[i].price);
	printf("The book total pages are %d\n",b[i].pages);
}
}
int main(){
	int i;
	for(i=0;i<2;i++){
		printf("\t\t\t-----BOOK %d-----\n",i+1);
		printf("Enter the price of the book: ");
		scanf("%f",&b[i].price);
		printf("How many pages: ");
		scanf("%d",&b[i].pages);
	}
	printbook();//functionc call...

	
getch();
return 0;	
}