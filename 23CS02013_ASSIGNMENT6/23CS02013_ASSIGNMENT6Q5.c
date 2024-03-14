#include <stdio.h>
int main()
 {
    int row, col;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &row, &col);

    int A[row][col], At[col][row];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            At[j][i] = A[i][j];
        }
    }
    printf("The transpose of the matrix is:\n");
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
         {
            printf("%d ", At[i][j]);
        }
        printf("\n");
    }
    return 0;
}
