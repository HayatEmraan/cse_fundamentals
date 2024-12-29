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

    int min = INT_MAX, max = INT_MIN;
    int minPos = 0, maxPos = 0;

    for (int j = 0; j < a; j++)
    {
        if (arr[j] < min)
        {
            min = arr[j];
            minPos = j;
        }
    }

    for (int j = 0; j < a; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            maxPos = j;
        }
    }

    for (int i = 0; i < a; i++)
    {
        if (i == minPos)
        {
            arr[minPos] = max;
        }
        else if (i == maxPos)
        {
            arr[maxPos] = min;
        }

        printf("%d ", arr[i]);
    }

    return 0;
}