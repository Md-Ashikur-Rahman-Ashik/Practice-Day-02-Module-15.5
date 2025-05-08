#include <stdio.h>

void swap_it(int *num1, int *num2)
{
    int tmp = *num2;
    *num2 = *num1;
    *num1 = tmp;
}

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int *firstPointer = &num1;
    int *secondPointer = &num2;

    swap_it(firstPointer, secondPointer);

    printf("%d %d", num1, num2);

    return 0;
}