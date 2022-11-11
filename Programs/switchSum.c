#include<stdio.h>
int main(){
    int a,b;
    char choice;
    printf("Enter the equation: ");
    scanf("%d%c%d",&a,&choice,&b);
    // printf("1.Sum\n2.Difference\n3.Multiply");
    // printf("Enter your choice: ");
    // scanf("%d",&choice);

    switch (choice)
    {
    case '+':
        printf("%d%c%d = %d",a,choice,b,a+b);
        break;
    case '-':
        printf("%d%c%d = %d",a,choice,b,a-b);
        break;
    case '*':
        printf("%d%c%d = %d",a,choice,b,a*b);
        break;
    case '/':
        printf("%d%c%d = %d",a,choice,b,a/b);
        break;
    
    default:
        printf("Enter \"+\" or \"-\" or \"*\" or \"/\"");
        break;
    }

}