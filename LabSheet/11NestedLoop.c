#include<stdio.h>
#include<conio.h>
void main()
{
    printf("Nested loops are usually used to print a pattern in c. ");
    printf("\nThey are also used to print out the matrix using a 2 dimensional array. ");

    int i,j,k;
    printf("\n\nOutput of the nested loop is :\n\n");
    for(i = 0; i < 5; i++)
    {
        printf("\t\t\t\t");
        for(j = 0; j < 5; j++)
        printf("* ");

        printf("\n");
    }
    getch();
}
