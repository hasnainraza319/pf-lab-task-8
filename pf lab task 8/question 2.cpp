#include <stdio.h>
#define size 4

int main() {
    int grades[size][size];
    
    printf("Enter the grades for each  4 students in  4 subjects:\n");
    for (int x = 0; x < size; x++) {
        for (int z = 0; z < size; z++) {
            printf("Enter grade for Student %d in Subject %d: ", x + 1, z + 1);
            scanf("%d", &grades[x][z]);

         
            if (grades[x][z] < 0) {
                grades[x][z] = 0;
            }
        }
    }


    printf("\nUpdated grades matrix:\n");
    for (int x = 0; x < size; x++) {
        for (int z = 0; z < size; z++) {
            printf("%d\t", grades[x][z]);
        }
        printf("\n");
    }

    return 0;
}

