#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int currentLen = 1, bestLen = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            currentLen++;
            if (currentLen > bestLen) {
                bestLen = currentLen;
            }
        } else {
            currentLen = 1;
        }
    }

    printf("%d\n", bestLen);
    return 0;
}
