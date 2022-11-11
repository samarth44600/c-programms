#include<stdio.h>

int main(){
    int n,temp,sum=0,d;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    while(n!=0){
        d=n%10;
        sum=sum*10+d;
        n/=10;
    }
    if(temp==sum){
        printf("The number is palindrome.");
    }
    else{
        printf("The number is not a palindrome.");
    }
}