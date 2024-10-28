#include <stdio.h>
#define size 3

int main() {
    int matrix[size][size];
    int row_sum[size]= {0};
    int col_sum[size] = {0};
    printf("Enter the scores for a 3x3 matrix (3 for participants and 3 for activities):\n");
    for (int x = 0; x < size; x++) {
        for (int z = 0; z < size; z++) {
            printf("Participant's score %d in Activity %d: ", x + 1, z + 1);
            scanf("%d", &matrix[x][z]);
        }
    }


    for (int x = 0; x < size;x++) {
        for (int z = 0; z < size; z++) {
            row_sum[x] += matrix[x][z];
            col_sum[z] += matrix[x][z];
        }
    }


    printf("\nSum of each participant's scores (rows):\n");
    for (int x = 0; x < size; x++) {
        printf("Participant %d: %d\n", x + 1, row_sum[x]);
    }

    printf("\nSum of each activity's scores (columns):\n");
    for (int z = 0; z < size; z++) {
        printf("Activity %d: %d\n", z + 1, col_sum[z]);
    }

    return 0;
}

