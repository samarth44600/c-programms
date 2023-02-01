// write a c-programm to reverse a string

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char str[100];
    int i, len;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    printf("Reverse of the string: ");
    for(i=len-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }
    getch();
    return 0;
}