#include <stdio.h>

int main()
{

    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        if (n <= 0 || m <= 0)
        {
            break;
        }

        if (n > m)
        {
            int temp = m;
            m = n;
            n = temp;
        }

        int sum = 0;

        for (int i = n; i <= m; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}