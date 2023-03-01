//write a program to calculate average using pointer
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    float avg=(*p1+*p2)/2.0;
    printf("Average of %d and %d is %f",a,b,avg);
    printf("\n%p \t%p",p1,p2);
    return 0;
}
