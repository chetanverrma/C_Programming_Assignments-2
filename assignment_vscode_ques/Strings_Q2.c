#include <stdio.h>
#include <string.h>

int main(void) {
    char s[200];
    scanf("%s", s);

    int len = strlen(s);
    int count = 1;

    for (int i = 0; i < len; i++) {
        if (i + 1 < len && s[i] == s[i + 1]) {
            count++;
        } else {
            printf("%c%d", s[i], count);
            count = 1;
        }
    }

    printf("\n");
    return 0;
}
