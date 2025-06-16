#include <stdio.h>
// 2D Array Input and Display
int main(){
    int matrix1[100][100], rows, cols, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements: ");
    for (i = 0; i < rows; i++){
        for (j = 0; j < cols; j++)
            scanf("%d", &matrix1[i][j]);}
    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d ", matrix1[i][j]);
        printf("\n");
     }
    return 0;
}