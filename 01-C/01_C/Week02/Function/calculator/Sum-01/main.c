
#include <stdio.h>

int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int x1,x2;

    printf("Enter first number:");
    scanf("%d",&x1);

    printf("Enter second number:");
    scanf("%d",&x2);

    int result=sum(x1,x2);
    printf("Result=%d\n",result);

    return 0;

}


