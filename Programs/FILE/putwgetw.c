#include<stdio.h>

int main(){
    FILE *fp;
    int x,i=0,n;
    printf("\nHow many numbers do you want to enter: ");
    scanf("%d",&n);
    fp = fopen("number.txt","w");
    while(i<n){
        printf("Input numbers: ");
        scanf("%d",&x);
        putw(x,fp);
        i++;
    }
    fclose(fp);
    fp = fopen("numebr.txt","r");
    printf("\nThe Numbers are: ");
    while((x=getw(fp))!=EOF)
        printf("%5d",x);
    fclose(fp);
    return 0;
}