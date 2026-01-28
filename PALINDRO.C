#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[15],b[15];
 printf("\nEnter a string\n");
 scanf("%s",a);
 strupr(a);
 printf("after uppercase:%s\n",a);
 strcpy(b,a);
 strrev(b);
 if(strcmp(a,b)==0)
  printf("\nIt is a palindrome");
 else
 printf("\nNot a palindrome");
 getch();
}