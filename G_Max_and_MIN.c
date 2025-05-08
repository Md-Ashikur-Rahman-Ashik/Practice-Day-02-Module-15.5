#include <stdio.h>

void maxAndMin(int integerArray[], int arraySize)
{
    int maximumNumber = -100001;
    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        if (integerArray[i] > maximumNumber)
        {
            /* code */
            maximumNumber = integerArray[i];
        }
    }

    int minimumNumber = 100001;
    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        if (integerArray[i] < minimumNumber)
        {
            /* code */
            minimumNumber = integerArray[i];
        }
    }

    printf("%d %d", minimumNumber, maximumNumber);
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

    maxAndMin(integerArray, arraySize);

    return 0;
}