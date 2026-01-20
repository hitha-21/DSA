#include<stdio.h>
#include<conio.h>
int fib(int n)
{
 if (n==0)
 return 0;
 if (n==1)
 return 1;
 return fib(n-1)+fib(n-2);
}
void main()
{
int num;
printf("Enter a number");
scanf("%d",&num);
printf("Fibonacci Series:");
for(int i=0;i<num;i++)
{
 printf("%d ",fib(i));
 }
 getch();
 }
