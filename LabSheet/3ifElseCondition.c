#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    printf("Please enter a number: ");
    scanf("%d",&number);
    /*
        For single statements we can skip the curly brackets
    */
    if(number < 100)
        printf("Number is less than 100!\n");
    else if(number == 100)
        printf("Number is 100!\n");
    else
        printf("Number is greater than 100!\n");

    getch();
}
