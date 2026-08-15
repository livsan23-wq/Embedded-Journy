#include <stdio.h>

int main()
{
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is EVEN!\n", a);
    }
    else
    {
        printf("%d is ODD!\n", a);
    }

    return 0;
}