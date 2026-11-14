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

    int rowSum[100] = {0};
    int colSum[100] = {0};

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            rowSum[i] += mat[i][j];
            colSum[j] += mat[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        if (i > 0) printf(" ");
        printf("%d", rowSum[i]);
    }
    printf("\n");

    for (int j = 0; j < c; j++) {
        if (j > 0) printf(" ");
        printf("%d", colSum[j]);
    }
    printf("\n");

    return 0;
}
