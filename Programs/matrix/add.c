#include<stdio.h>
#include<windows.h>

int main(){
    system("cls");
    int i,j,mat1[3][3],mat2[3][3];
    printf("Enter value of first matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nFirstmatrix[%d][%d]= ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n\nEnter value of second matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nSecondmatrix[%d][%d]= ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\n\nSum: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat1[i][j]+mat2[i][j]);
        }
        printf("\n");
    }

}