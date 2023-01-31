#include<stdio.h>
#include<conio.h>
void main()
{
    /* 
        always declare the variables before using them 
    */
    int i = 0;  // declaration and initialization at the same time

    printf("Printing numbers using while loop from 0 to 5 (i.e i<5)\n");
    /* 
        while i is less than 5 
    */
    while(i<5)
    {
        printf("%d\n",i);

        /* 
            Update i so the condition can be met eventually 
            to terminate the loop 
        */
        i++;    // same as i=i+1;
      }
    getch();
}
