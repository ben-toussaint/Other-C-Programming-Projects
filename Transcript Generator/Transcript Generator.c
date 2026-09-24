#include <stdio.h>
int main()
{
char department[10];
int yearofstudy;
int RegNo;
char studentName[10];
int marks;
int programming_in_C;
int introduction_to_ICT;
int general_English;
int Mathematics;
int TotalMarks;
float Average;
printf("Enter YOur Deparment:");
scanf("%s",&department);
printf("Enter Your Year of Study:");
scanf("%d",&yearofstudy);
printf("Enter Your Reg No:");
scanf("%d",&RegNo);

getchar();
printf("Enter Your Name:");
gets(studentName );
printf("\n\n\t\tUNIVERSITY  OF KIGALI  STUDENT TRANSCRIPT");
printf("\n\nDepartment:%s",department);
printf("\tYear:%d",yearofstudy);
printf("\nReg No:%d",RegNo);
printf("\t Student Name:%s",studentName);
printf("\n\nSUBJECT                              MARKS");
printf("\n----------------------------------------------");
printf("\nPorgramming in C                       ");
scanf("%d",&programming_in_C);
printf("\nIntroduction to ICT                    ");
scanf("%d",&introduction_to_ICT);
printf("\nGeneral English                        ");
scanf("%d",&general_English);
printf("\nMathematics                            ");
scanf("%d",&Mathematics);
printf("\n----------------------------------------------");
TotalMarks=programming_in_C+introduction_to_ICT+general_English+Mathematics;
Average=TotalMarks/4.0;
printf("\nTotal Marks:                             %d",TotalMarks);
printf("\nAverage:                                 %.1f",Average);
printf("\n----------------------------------------------");
}