#include <stdio.h>

struct student
{
    double phnNumber;
    int roll;
} std, *p;
int main()
{
    int i;
    printf("Enter your phone number:");
    scanf("%lf", &std.phnNumber);

    p = &std;
    printf("Phone number: %.lf", p->phnNumber);
    return 0;
}