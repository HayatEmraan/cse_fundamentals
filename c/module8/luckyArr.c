#include <stdio.h>
#include <limits.h>

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX;
    int count = 1;

    for (int j = 0; j < a; j++)
    {
        if (arr[j] < min)
        {
            min = arr[j];
        }
    }

    for (int i = 0; i < a; i++)
    {
        if (min == arr[i])
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}