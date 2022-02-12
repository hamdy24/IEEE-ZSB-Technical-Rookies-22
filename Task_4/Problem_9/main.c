#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    char map[100][100] = {0,};
    int i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &map[i]);
    }


    for (i = 0; i < n; i++)
        {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                printf("%c", map[i][j]);
            }
            else if (   map[i][j] > map[i - 1][j]
                     && map[i][j] > map[i][j - 1]
                     && map[i][j] > map[i][j + 1]
                     && map[i][j] > map[i + 1][j])
                printf("X");
            else
                printf("%c", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}
