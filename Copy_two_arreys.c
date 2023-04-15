#include <stdio.h>
int main()
{
    int input1, input2;
    scanf("%d %d", &input1, &input2);

    int arrey1[input1];
    for (int i = 0; i < input1; i++)
    {
        scanf("%d", &arrey1[i]);
    }

    int arrey2[input2];
    for (int i = 0; i < input2; i++)
    {
        scanf("%d", &arrey2[i]);
    }

    int arrey3[input1 + input2];
    // int j = 0;
    for (int i = 0, j = 0; i < input1 + input2; i++)
    {
        if (i < input1)
        {
            arrey3[i] = arrey1[i];
        }
        else
        {

            arrey3[i] = arrey2[j];
            j++;
        }
    }

    for (int i = 0; i < input1 + input2; i++)
    {
        printf("%d ", arrey3[i]);
    }
    return 0;
}