#include <stdio.h>
int main()
{
	int DayNumber;
	printf("Enter A Day Number To Know the Dates, and more!");
	scanf("%d",&DayNumber);
	switch(DayNumber){
		case 1:
			printf("Dates of Monday include 4,11,18,25.");
			printf("They will be normal days.");
			break;
			case 2:
				printf("Date of Tuesday include 5,12,19,26.");
				printf("They will be normal days.");
				break;
				case 3:
					printf("Date of Wednesday include 6,13,20,27.");
					printf("They will be normal days.");
					break;
					case 4:
						printf("Dates of Thursday include 7,14,21,28.");
						printf("They will be normal days.");
						break;
						case 5:
							printf("Dates of Friday include 1,8,15,22,29.");
							printf("They will be normal days.");
							break;
							case 6:
								printf("Dates of Saturday include 2,9,16,23,30");
								printf("This will be weekends.");
								break;
								case 7:
									printf("Dates of Sunday include 3,10,17,24,31.");
									printf("These will be weekends.");
									break;
	}
	getch();
}
