#include <stdio.h>

int main() {
    int n;
    printf("side length of the square: ");
    scanf("%d", &n);
    for (int x = 0; x < n; x++) {
        for (int z = 0; z < n; z++) {
            if (x == 0 || x == n - 1 || z == 0 || z == n - 1 || x == z || x + z == n - 1) {
             printf("* ");
     } else {
   printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

