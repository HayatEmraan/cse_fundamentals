#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int firstDigit = number / 10;
    int secondDigit = number % 10;
    if (firstDigit % secondDigit == 0 || secondDigit % firstDigit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}