#include<stdio.h>
#include<conio.h>
void main()
{
    char str[50];   // char array of size 50
    printf("Enter your complete name: ");
    gets(str);
    printf("\nWelcome to C Programming  %s", str);
    getch();
}
