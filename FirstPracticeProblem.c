#include <stdio.h>

void my_abs(int num)
{
    if (num < 0)
    {
        /* code */
        num = (num * (-1));
        printf("%d", num);
    }
    else
    {
        printf("%d", num);
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    my_abs(num);

    return 0;
}