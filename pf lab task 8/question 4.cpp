#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
  int matrix1[m][n], matrix2[m][n], sum[m][n];
    printf("Enter elements of  first matrix:\n");
    for (int x = 0; x < m; x++) {
        for (int z = 0; z < n; z++) {
            printf("Element [%d][%d]: ", x + 1, z + 1);
            scanf("%d", &matrix1[x][z]);
}
    }
    printf("Enter elements of second matrix:\n");
    for (int x = 0; x < m; x++) {
        for (int z = 0; z < n; z++) {
            printf("Element [%d][%d]: ", x + 1, z + 1);
          scanf("%d", &matrix2[x][z]);
        }
    }
    for (int x = 0; x < m; x++) {
        for (int z = 0; z < n; z++) {
            sum[x][z] = matrix1[x][z] + matrix2[x][z];
        }
    }
    printf("Resulting matrix after the   addition:\n");
    for (int x = 0; x < m; x++) {
        for (int z = 0; z < n; z++) {
            printf("%d ", sum[x][z]);
        }
        printf("\n");
    }

    return 0;
}

