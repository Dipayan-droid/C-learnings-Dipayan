#include <stdio.h>

int main(){
    int matrix1[3][3], matrix2[3][3], result[3][3],mul[3][3], i, j;
    printf("Enter first 3x3 matrix: ");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix1[i][j]);}
    printf("Enter second 3x3 matrix: ");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix2[i][j]);}
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
            result[i][j] = matrix1[i][j] + matrix2[i][j];}
    printf("Matrix Addition:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", result[i][j]);
        printf("\n");}
    //Multiplication
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            mul[i][j] = 0;
            for (int k = 0; k < 3; k++)
                mul[i][j] = mul[i][j]+ matrix1[i][k] * matrix2[k][j];}}
    printf("Matrix Multiplication:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", mul[i][j]);
        printf("\n");}
    return 0;
}