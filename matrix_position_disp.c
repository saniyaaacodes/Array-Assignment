#include <stdio.h>

int main() {
    int matrix[4][4];
    int i, j;

    printf("Matrix 4x4 position display:\n\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }

    return 0;
}
