#include <stdio.h>

#define MAX_SIZE 100000

static int first[MAX_SIZE];
static int second[MAX_SIZE];
static int merged[MAX_SIZE * 2];

int main(void)
{
    int m, n;
    if (scanf("%d %d", &m, &n) != 2 || m < 0 || n < 0 ||
        m > MAX_SIZE || n > MAX_SIZE) return 1;
    for (int i = 0; i < m; i++) {
        if (scanf("%d", &first[i]) != 1) return 1;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &second[i]) != 1) return 1;
    }

    int i = 0, j = 0, out = 0;
    while (i < m && j < n) {
        if (first[i] <= second[j]) merged[out++] = first[i++];
        else merged[out++] = second[j++];
    }
    while (i < m) merged[out++] = first[i++];
    while (j < n) merged[out++] = second[j++];

    for (int k = 0; k < out; k++) {
        if (k > 0) printf(" ");
        printf("%d", merged[k]);
    }
    printf("\n");
    return 0;
}
