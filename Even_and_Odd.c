#include <stdio.h>
int main()
{
    int input, num;
    scanf("%d", &input);

    int even = 0, odd = 0;
    for (int i = 1; i <= input; i++)
    {
        scanf("%d", &num);
        // Even
        if (num % 2 == 0)
        {
            even = even + num;
        }
        // Odd
        else
        {
            odd = odd + num;
        }
    }
    printf("%d %d ", even, odd);

    return 0;
}