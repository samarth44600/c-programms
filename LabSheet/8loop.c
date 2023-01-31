#include<stdio.h>
#include<conio.h>
void main()
{
    /* 
        Always declare the variables before using them 
    */
    int i = 0;  // declaration and initialization at the same time
    for(i = 0; i < 5; i++)
    {
        printf("i = %d\n", i);

        /*
consequently, when i equals 10, the loop breaks. i is updated before the condition is checked- hence the value of i after exiting the loop is 10 
        */
     }
    printf("\n\The value of i after exiting the loop is %d", i);
    printf("\n For loop condition checks the conditional statement before it loops again.");
    printf("\nConsequently, when i equals 10, the loop breaks.");
    printf("\ni is updated before the condition is checked- hence the value of i after exiting the loop is 10 .");
    getch();
}
