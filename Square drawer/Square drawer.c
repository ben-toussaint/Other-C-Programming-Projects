#include <stdio.h>

int main()
{
   //nested loop = a loop inside of another loop
   int i,j,rows,columns;
   char symbol;
   printf("Enter the number of row:");
   scanf("%d",&rows);
   
   printf("Enter the number of columns:");
   scanf("%d",&columns);
   printf("Enter the symbol to use:");
   scanf("%c");// This act as like a vacuum to consume the enter which is entered and thought to be the character by the computer.
   scanf("%c",&symbol);
   for (i=1;i<=rows;i++)
   {
   	for(j=1;j<=columns;j++)
   	{
   		printf("%c",symbol);
	   }
	   printf("\n");
   }
   return 0;
}





