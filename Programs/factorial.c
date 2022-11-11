#include<stdio.h>
#include<windows.h>
int main(){
    int n,i,f=1,*x;
    system("cls");
    printf("Enter number: ");
    scanf("%d",&n);
    x=&n;
    for(i=1;i<=*x;i++)
        f*=i;
    printf("Factorial of %d = %d",n,f);
    return 0;
}