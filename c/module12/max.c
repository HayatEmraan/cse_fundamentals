#include <stdio.h>
#include <string.h>

int RNG = 1005;

int main()
{

    char s1[RNG], s2[RNG], s3[RNG];

    scanf("%s %s %s", s1, s2, s3);

    int cmpS1nS2 = strcmp(s1, s2);

    if (cmpS1nS2 <= 0)
    {
        printf("%s\n", s1);

        int cmpS2nS3 = strcmp(s2, s3);
        if (cmpS2nS3 >= 0)
        {
            printf("%s", s2);
        }
        else
        {
            printf("%s", s3);
        }
    }
    else
    {
        printf("%s\n", s2);

        int cmpS1nS3 = strcmp(s1, s3);
        if (cmpS1nS3 >= 0)
        {
            printf("%s", s1);
        }
        else
        {
            printf("%s", s3);
        }
    }

    return 0;
}