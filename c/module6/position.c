#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int x;
    int idx = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            idx = i;
            break;
        }
    }

    printf("%d", idx);
    return 0;
}