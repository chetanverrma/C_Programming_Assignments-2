#include <stdio.h>

int main(void) {
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[100][100];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        int rowMin = mat[i][0];
        for (int j = 1; j < c; j++) {
            if (mat[i][j] < rowMin) {
                rowMin = mat[i][j];
            }
        }

        for (int j = 0; j < c; j++) {
            int colMax = mat[0][j];
            for (int k = 1; k < r; k++) {
                if (mat[k][j] > colMax) {
                    colMax = mat[k][j];
                }
            }

            if (mat[i][j] == rowMin && mat[i][j] == colMax) {
                printf("%d %d %d\n", i + 1, j + 1, mat[i][j]);
                return 0;
            }
        }
    }

    printf("None\n");
    return 0;
}
