#include <stdio.h>
int main(){
	const int ageNow=10;
	int ageAfter;
	int afterwhen;
	const int yearNow=2025;
	int yearThen;
	printf("Years old now %d", ageNow);
	printf("Enter after which Year you want:");
	scanf("%d",&afterwhen); 
	ageAfter=ageNow+afterwhen;
	printf("In the time given, he will be %d",ageAfter);
	yearThen=yearNow+afterwhen;
	printf("\nAnd this year will be %d",yearThen);
	return 0;
}