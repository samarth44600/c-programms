#include<stdio.h>
#include<math.h>
int check(int num){
    int rem;
    while(num!=0){
        rem = num%10;
        if(rem==1||rem==0){
            return 1;
        }
        else{
            return 0;
        }

        num = num/10;
    }
}
int main(){
    int d,n,p=0,sum=0;
    printf("\nEnter binary number: ");
    scanf("%d",&n);

    if (check(n)==1){
        while(n!=0){
        d = n%10;
        sum += pow(2,p)*d;
        n/=10;
        p++;
    }
    printf("\nThe decimal number is %d.",sum);
    }
    else{
        printf("Enter binary number(0 and 1 only).");
    }

    
    return 0;
}