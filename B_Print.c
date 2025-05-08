#include <stdio.h>

void print(int num)
{
    for (int i = 1; i <= num; i++)
    {
        /* code */
        printf("%d", i);
        if (i < num)
        {
            printf(" ");
        }
        }
}

int main()
{
    int num;
    scanf("%d", &num);

    print(num);

    return 0;
}