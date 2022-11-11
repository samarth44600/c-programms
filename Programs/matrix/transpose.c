#include<stdio.h>
#include<windows.h>


int main(){
    system("cls");
    int i,j,mat[3][3];
    printf("Enter value of matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nmatrix[%d][%d]= ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n\nMatrix: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\nTranspose: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat[j][i]);
        }
        printf("\n");
    }

}