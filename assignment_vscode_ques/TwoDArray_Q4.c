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

    int peaks = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int value = mat[i][j];
            int isPeak = 1;

            if (i > 0 && mat[i - 1][j] >= value) isPeak = 0;
            if (i + 1 < r && mat[i + 1][j] >= value) isPeak = 0;
            if (j > 0 && mat[i][j - 1] >= value) isPeak = 0;
            if (j + 1 < c && mat[i][j + 1] >= value) isPeak = 0;

            if (isPeak) {
                peaks++;
            }
        }
    }

    printf("%d\n", peaks);
    return 0;
}
