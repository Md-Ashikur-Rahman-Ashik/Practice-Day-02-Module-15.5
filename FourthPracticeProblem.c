#include <stdio.h>

void change_it(int arraySize, int integerArray[])
{
    integerArray[arraySize - 1] = 100;
}

int main()
{
    int arraySize;
    scanf("%d", &arraySize);

    int integerArray[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        scanf("%d", &integerArray[i]);
    }

    change_it(arraySize, integerArray);

    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        printf("%d ", integerArray[i]);
    }

    return 0;
}