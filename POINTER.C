#include<stdio.h>
#include<conio.h>
struct Student
{
 int roll;
 char name[20];
 int marks;
};

void main()
{
 struct Student s;
 struct Student *p;
 p=&s;
 clrscr();
 printf("Enter roll number:");
 scanf("%d", &p->roll);
 printf("Enter Name:");
 scanf("%s", &p->name);
 printf("Enter Marks:");
 scanf("%d", &p->marks);
 printf("\nName:%s\nRoll Number:%d\nMarks:%d\n",s.name,s.roll,s.marks);
 getch();
 }