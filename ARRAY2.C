#include<stdio.h>
#include<conio.h>

void main()
{
 int a[5]={10,20,30,40,50};
 int *p;
 int i;
 clrscr();
 p=a;
 printf("Array elements using pointers:\n");
 for(i=0;i<5;i++)
 {
  printf("%d ",*(p+i));
 }
 getch();
}