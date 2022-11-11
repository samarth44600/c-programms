#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,disc,x1,x2;
    printf("Enter values for a,b, and c: ");
    scanf("%f %f %f",&a,&b,&c);
    disc = b*b-4*a*c;
    if(disc>=0){
        x1=(-b+sqrt(disc))/(2*a);
        x2=(-b-sqrt(disc))/(2*a);
        printf("Real root 1 = %.2f\n",x1);
        printf("Real root 2 = %.2f\n",x2);
    }
    else{
        x1=-b/(2*a);
        x2=sqrt(fabs(disc))/(2*a);
        printf("The first root = %.2f+i%.2f\n",x1,x2);
        printf("The second root = %.2f-i%.2f\n",x1,x2);
    }
    return 0;
}
