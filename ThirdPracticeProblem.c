#include <stdio.h>

int count_odd(int arraySize, int integerArray[])
{
    int count = 0;
    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        if (integerArray[i] % 2 != 0)
        {
            /* code */
            count++;
        }
    }

    return count;
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

    int result = count_odd(arraySize, integerArray);

    printf("%d", result);

    return 0;
}