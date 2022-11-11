#include<stdio.h>

int main(){
    int i,j,mat[3][3];
    printf("Enter value of matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nmatrix[%d][%d]= ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n\nDisplaying: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

}