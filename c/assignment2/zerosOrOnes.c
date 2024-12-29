#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nArr[n], x = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nArr[i]);
    }

    scanf("%d", &x);
    int arr = (x - 1);

    if (nArr[arr] == 1)
    {
        nArr[arr] = 0;
    }
    else if (nArr[arr] == 0)
    {
        nArr[arr] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nArr[i]);
    }

    return 0;
}