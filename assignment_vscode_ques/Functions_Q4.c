#include <stdio.h>

int isPerfectSquare(int n) {
    if (n < 0) return 0;
    int i = 0;
    while ((long long)i * i <= n) {
        if ((long long)i * i == n) {
            return 1;
        }
        i++;
    }
    return 0;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", isPerfectSquare(n));
    return 0;
}
