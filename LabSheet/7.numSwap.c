#include<stdio.h>
#include<conio.h>
void main()
{
    int x, y, temp;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    printf("Before swapping, x = %d and y = %d", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter swapping, x = %d and y = %d", x, y);

    getch();
}
