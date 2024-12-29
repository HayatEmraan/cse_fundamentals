#include <stdio.h>

// int main()
// {

//     int age = 18;
//     if (age >= 18)
//     {
//         printf("the person can vote");
//     }
//     else
//     {
//         printf("the person isn't adult");
//     }
//     return 0;
// }

// void main()
// {

//     int age;

//     scanf("%d", &age);
//     if (age >= 18)
//     {
//         printf("the person is eligible for vote");
//     }
//     else if (age >= 65)
//     {
//         printf("old person are not allow");
//     }
//     else
//     {
//         printf("the person isn't eligible for vote");
//     }

//     return;
// }

void main()
{
    int age;
    scanf("%d", &age);
    switch (age)
    {
    case 18:
        printf("you're eligible for vote");
        break;

    default:
        printf("you're not eligible for vote");
        break;
    }
    return;
}