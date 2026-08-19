#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    {
        printf("Enter an integer :");
        scanf("%d" , &a);
    }
    if (a==0)
    {
        printf(" Zero has been intered!\n\n");
    }
    else if (a>0)

    {
        printf("%d is Posetive!\n ",a);
    }
    else if (a<0)

    {
         printf("%d is a Negative!\n ", a);

    }
    return 0;

}
