#include <stdio.h>
#include <conio.h>
long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

void main() {
    int n;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %ld\n", factorial(n));
    getch();
}
