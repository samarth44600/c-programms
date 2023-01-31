#include<stdio.h>
#include<conio.h>

void main()
{
    int num1, num2;  
    float fraction;     
    char character;

    // Taking Character as input from the user
    printf("Enter a Character: ");
    scanf("%c",&character);
    printf("The character that you have entered is %c\n", character);

    printf("\nEnter two numbers number: ");
     // Taking integer as input from user
    scanf("%d%i", &num1, &num2);
    printf("The two numbers You have entered are %d and %i\n", num1, num2);

    // Taking float or fraction as input from the user
    printf("\nEnter a Decimal number: ");
    scanf("%f", &fraction); 
    printf("The float or fraction that you have entered is %f", fraction);



   getch();
}
