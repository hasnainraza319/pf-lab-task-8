#include <stdio.h>
#define size 4
void sortColumn(int matrix[size][size], int col) {
 
    for (int x = 0; x < size - 1; x++) {
        for (int z = x + 1; z < size; z++) {
            if (matrix[x][col] > matrix[z][col]) {          
     int temp = matrix[x][col];
       matrix[x][col] = matrix[z][col];
      matrix[z][col] = temp;
    }
        }
    }
}
int main() {
    int matrix[size][size];
    printf("Enter the scores for a 4x4 matrix (3 teams and 3 rounds):\n");
    for (int x = 0; x < size; x++) {
        for (int z = 0; z < size; z++) {
            printf("Element [%d][%d]: ", x + 1, z + 1);
            scanf("%d", &matrix[x][z]);}
    } for (int col = 0; col < size; col++) {
        sortColumn(matrix, col);
    }
    printf("\nmatrix after sorting each column ascending order:\n");
    for (int x = 0; x < size; x++) {
        for (int z = 0; z < size; z++) {
            printf("%d ", matrix[x][z]);
        }
        printf("\n");
    }
    return 0;
}

