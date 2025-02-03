#include <stdio.h>

void recur(int x[], int start, int stop)
{

    if (start > stop)
    {
        return;
    }

    printf("%d ", x[start]);
    recur(x, start + 1, stop);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < m; j++)
    {
        int temp = arr[0][j];
        arr[0][j] = arr[n - 1][j];
        arr[n - 1][j] = temp;
    }

    for (int y = 0; y < n; y++)
    {
        int tmp = arr[y][m - 1];
        arr[y][m - 1] = arr[y][0];
        arr[y][0] = tmp; 
        recur(arr[y], 0, m - 1);
        printf("\n");
    }

    return 0;
}
