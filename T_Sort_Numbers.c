#include <stdio.h>

int sorting(int integerArray[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            /* code */
            int tmp;
            if (integerArray[i] > integerArray[j])
            {
                /* code */
                tmp = integerArray[j];
                integerArray[j] = integerArray[i];
                integerArray[i] = tmp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("%d\n", integerArray[i]);
    }
}

int main()
{
    int integerArray[3];

    for (int i = 0; i < 3; i++)
    {
        /* code */
        scanf("%d", &integerArray[i]);
    }

    int copiedArray[3];

    for (int i = 0; i < 3; i++)
    {
        /* code */
        copiedArray[i] = integerArray[i];
    }

    sorting(integerArray);
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("%d", copiedArray[i]);
        if (i <= 2)
        {
            /* code */
            printf("\n");
        }
    }

    return 0;
}