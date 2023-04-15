#include <stdio.h>
int main()
{
    int input, temp;
    scanf("%d", &input);

    int arrey[input];

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arrey[i]);
    }

    int i = 0, j = input - 1;
    while (i < j)
    {
        temp = arrey[i];
        arrey[i] = arrey[j];
        arrey[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < input; i++)
    {
        printf("%d ", arrey[i]);
    }
    return 0;
}