#include <stdio.h>

int my_len(char stringArray[])
{
    int count = 0;
    for (int i = 0; stringArray[i] != '\0'; i++)
    {
        /* code */
        count++;
    }

    return count;
}

int main()
{
    char stringArray[100000];
    scanf("%s", stringArray);

    int result = my_len(stringArray);

    printf("%d", result);

    return 0;
}