#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    char v[] = {'a', 'e', 'i', 'o', 'u'};
    char cnt[] = "Consonant";
    char vwl[] = "Vowel";
    int cdn = 0;

    for (int i = 0; i < 5; i++)
    {
        if (v[i] == c)
        {
            cdn = 1;
            break;
        }
    }

    printf("%s", cdn ? vwl : cnt);

    return 0;
}
