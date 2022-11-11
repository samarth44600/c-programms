#include<stdio.h>
#include<windows.h>
typedef struct{
    int feet;
    int inch;
}distance;

void main(){
    distance d1,d2,d;
    system("cls");
    printf("\nEnter First Distance in Feet Inch Format: ");
    scanf("%d%d",&d1.feet,&d1.inch);
    printf("\nEnter Second Distance in Feet Inch Format: ");
    scanf("%d%d",&d2.feet,&d2.inch);
    d.inch =(d1.inch+d2.inch)%12;
    d.feet = d1.feet+d2.feet+(d1.inch+d2.inch)/12;
    printf("\nSum of two distances=%d Feet %d Inch",d.feet,d.inch);
}