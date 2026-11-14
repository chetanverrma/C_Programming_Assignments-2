#include <stdio.h>

int main(void) {
    int totalSeconds;
    scanf("%d", &totalSeconds);
    int hours = totalSeconds / 3600;
    int remaining = totalSeconds % 3600;
    int minutes = remaining / 60;
    int seconds = remaining % 60;
    printf("%d %d %d\n", hours, minutes, seconds);
    return 0;
}
