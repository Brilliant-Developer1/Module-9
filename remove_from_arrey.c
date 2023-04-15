#include <stdio.h>
int main()
{
    int input, remove, index;
    scanf("%d", &input);

    int arrey[input];

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arrey[i]);
    }

    scanf("%d", &remove); // koto number index theke remove hobe shei number

    for (int i = 0; i < input; i++)
    {
        if (i == remove)
        {
            arrey[i] = arrey[i + 1];
            remove++;
        }
    }
    input = input - 1;
    for (int i = 0; i < input; i++)
    {
        printf("%d ", arrey[i]);
    }

    return 0;
}