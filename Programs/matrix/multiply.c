#include <stdio.h>
int  main (){
int a[2][3],b[3][2],prod[2][2]; 
int i,j,k;
printf ("Enter the elements for matrix A: \n"); 
for (i=0;i<2;i++){
    for(j=0; j<3 ; j++){
        printf ("Enter the number [%d] [%d] :",i,j); 
        scanf ("%d", &a[i] [j]);
    } 
} 
printf ("Enter the elements for matrix B:\n"); 
for (i=0;i<3;i++){
    for(j=0; j<2; j++){
        printf ("Enter the number [%d] [%d] :",i,j);
        scanf ("%d" , &b[i][j]);
    }
}
for (i=0;i<2;i++){
    for(j=0; j<2; j++) {
        prod[i][j]=0; 
        for (k=0;k<3;k++) {
            prod[i][j]=prod[i][j]+a[i][k] * b[k][j];
        } 
    } 
} 
printf("\nThe product of the two matrix is: \n");
for (i=0;i<2;i++){
    for (j=0;j<2;j++){
        printf ("%d\t",prod[i][j]); 
    } 
    printf ("\n"); 
}


}