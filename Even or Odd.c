#include<stdio.h>

int main()
{
    int input;

    printf("enter a number :\n");
    scanf("%d", &input);

    if(input% 2 ==0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD");
    }


    return 0;
}
