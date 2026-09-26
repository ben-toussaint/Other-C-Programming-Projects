#include <stdio.h>
int main()
{
char  fevorite_letter;  
int age;
float amount;
char name[10];
printf("What is your fevorite letter?");
scanf("%c",&fevorite_letter);
printf("How old are you?");
scanf("%d",&age);
printf("He is %d years old, and his fevorite letter is %c",age,fevorite_letter);
printf("\nWhat is your name?:");
gets(name);
printf("===========================================\n");
puts(name);

}
