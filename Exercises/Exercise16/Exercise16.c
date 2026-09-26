#include<stdio.h>
#include<conio.h>
int main(){ 
	int r,c;
	int matrix [2][2]={12,2,45,2};
	int matrix2 [2][2]={12,13,14,3};
	int matrix3 [2][2];
//	printf("Input the Valu	es\n");
    printf("------Enter Values for matrix 1-----");
    	for (r=0;r<=1;r++){//open of first loop
		for(c=0;c<=1;c++){//open of second loop inside
             printf("\nEnter the value:");
             scanf("%d",&matrix[r][c]);
               
		}//close for second loop inside.
	}//close for first loop.
	printf("\n\n------Enter the value for matrix 2-------");
		for (r=0;r<=1;r++){//open of first loop
		for(c=0;c<=1;c++){//open of second loop inside
             printf("\nEnter the value:");
             scanf("%d",&matrix2[r][c]);
		}//close for second loop inside.
	}//close for first loop.
	
	for (r=0;r<=1;r++){//open of first loop
		for(c=0;c<=1;c++){//open of second loop inside
               matrix3[r][c]=matrix[r][c]+matrix2[r][c];
               
		}//close for second loop inside.
	}//close for first loop.
	printf("\n----Display of the answer is-------\n");
	for (r=0;r<=1;r++){//open of first loop
		for(c=0;c<=1;c++){//open of second loop inside
		printf("%d\t",matrix3[r][c]);
		}//close for second loop inside.
		printf("\n");
	}	
	
return 0;
}
