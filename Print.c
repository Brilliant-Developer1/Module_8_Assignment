#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int arrey[input];

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arrey[i]);
    }

    int index;
    scanf("%d", &index);
    int replace;
    scanf("%d", &replace);

    for (int i = 0; i < input; i++)
    {
        if (i == index)
        {
            arrey[i] = replace;
        }
    }
    for (int i = input - 1; i >= 0; i--)
    {
        printf("%d ", arrey[i]);
    }

    return 0;
}