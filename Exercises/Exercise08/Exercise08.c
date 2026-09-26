int withdrawAmount;
int currentAmount=20000;
int remaining;
int Enterpin, pin=1234;
printf("\t\tWELCOME TO BK ATM\n");
printf("\t\t------------------");
printf("\nEnter the PIN to continue:");
scanf("%d",&Enterpin);
if(Enterpin==pin){
printf("Hey! You have 20,000frw in BK account. \nFeel free to withdraw!");
printf("\nEnter the Amount you want to withdraw:");
scanf("%d",&withdrawAmount);
remaining=currentAmount-withdrawAmount;
if(remaining<1000)
{
	printf("You can't have balance below 1000frw. Try withdrawing less amount.'");	
}
else
{
    printf("Your remaining balance is:%d",remaining);
}

}
else{
	printf("The PIN is incorrect. Try again!");
}