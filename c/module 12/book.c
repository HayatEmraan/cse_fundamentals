#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    int books[n + 4];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &books[i]);
    }

    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {

        int cnd = sum + books[i];

        if (cnd > t)
        {
            break;
        }
        else
        {
            sum += books[i];
            count++;
        }
    }

    printf("%d", count);

    return 0;
}