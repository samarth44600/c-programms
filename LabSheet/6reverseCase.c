#include<stdio.h>
#include<conio.h>
#include<ctype.h> // to use system defined function islower & toupper

void main()
{
    char alphabet;
    printf("Enter an alphabet : ");

    alphabet=getchar();

    printf("\nReverse case of %c is :  ",alphabet);

    if(islower(alphabet))
        putchar(toupper(alphabet));

    else 
        // must be an uppercase character
        // printf("%c",tolower(alphabet)) ;
        putchar(tolower(alphabet));

    getch();
}
