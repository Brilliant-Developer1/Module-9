#include <stdio.h>
int main()
{ // 1. input  2.arrey  3. Ja insurt korbo  4. Je Index e insurt korbo
    int input, insurt, index;
    scanf("%d", &input);

    int arrey[input];

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arrey[i]);
    }

    scanf("%d", &insurt);
    scanf("%d", &index);
    input = input + 1;
    for (int i = input - 1; i >= 0; i--)
    {
        arrey[i] = arrey[i - 1];

        if (i == index)
        {
            arrey[i] = insurt;
            break;
        }
    }

    for (int i = 0; i < input; i++)
    {
        printf("%d ", arrey[i]);
    }

    return 0;
}