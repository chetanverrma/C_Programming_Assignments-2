#include <stdio.h>
#include <limits.h>

int main(void)
{
    int values[6][6], maximum = INT_MIN;
    for (int row = 0; row < 6; row++) {
        for (int column = 0; column < 6; column++) {
            if (scanf("%d", &values[row][column]) != 1) return 1;
        }
    }

    for (int row = 0; row <= 3; row++) {
        for (int column = 0; column <= 3; column++) {
            int sum = values[row][column] + values[row][column + 1] +
                      values[row][column + 2] + values[row + 1][column + 1] +
                      values[row + 2][column] + values[row + 2][column + 1] +
                      values[row + 2][column + 2];
            if (sum > maximum) maximum = sum;
        }
    }
    printf("%d\n", maximum);
    return 0;
}
