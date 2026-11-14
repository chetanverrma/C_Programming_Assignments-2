#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[10005];
    if (fgets(word, sizeof(word), stdin) == NULL) return 1;
    word[strcspn(word, "\r\n")] = '\0';

    int end = (int)strlen(word) - 1;
    while (end >= 0 && word[end] == ' ') end--;
    int start = end;
    while (start >= 0 && word[start] != ' ') start--;
    printf("%d\n", end - start);
    return 0;
}
