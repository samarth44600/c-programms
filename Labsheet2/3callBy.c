// write a program to solve call by value and call by refrence implementation for swapping two numbers with appropriate comments

#include <stdio.h>

void swap(int a, int b);
void swapByRef(int *a, int *b);

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d \n", a, b);
    swap(a, b);
    printf("After swapping (call-by-value): a = %d, b = %d \n", a, b);
    swapByRef(&a, &b);
    printf("After swapping (call-by-reference): a = %d, b = %d \n", a, b);
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapByRef(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}