#include <stdio.h>

int main()
{
    int input_number;
    int i, j;
    int count;

    printf("숫자를 입력하세요: ");
    scanf("%d", &input_number);

    for (i = 2; i <= input_number; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count += 1;
            }
        }
        if (count == 2)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
