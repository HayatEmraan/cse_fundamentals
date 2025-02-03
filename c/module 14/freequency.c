#include <stdio.h>

int d[100005];

int main()
{

    int n, m;

    scanf("%d %d", &n, &m);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        d[a[i]] += 1;
    }

    for (int i = 1; i <= m; i++)
    {

        printf("%d\n", d[i]);
    }

    return 0;
}