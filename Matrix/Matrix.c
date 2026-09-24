
#include <stdio.h>
int main(){
	int r,c;
	int first[3][3], second[3][3], total[3][3];
	for(r=0;r<3;r++){
		printf("Enter the value of the %d row for the first matrix:\n",r+1);
		for(c=0;c<3;c++){
			scanf("%d",&first[r][c]);
		}
	}
		for(r=0;r<3;r++){
		printf("Enter the value of the %d row for the second matrix:\n",r+1);
		for(c=0;c<3;c++){
			scanf("%d",&second[r][c]);
		}
	}
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
		total[r][c]=first[r][c]+second[r][c];
		}
	}
	printf("The total of the matrix values is:\n");
		for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("%d",total[r][c]);
		}printf("\n");
	}
}
