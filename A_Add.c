#include <stdio.h>

int sum(int num1, int num2)
{
    int add = num1 + num2;
    return add;
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int add = sum(num1, num2);
    printf("%d", add);

    return 0;
}