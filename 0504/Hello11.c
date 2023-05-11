/* 팩토리얼 계산 함수 : n!=n*(n-1)*(n-2)*...*1
                                        함수로 구하기 */
#include <stdio.h>

int factorial(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
            result *= i; // result = result * 1

    return result;
}

int main()
{
    int n;
    printf("알고 싶은 팩토리얼의 값은? ");
    scanf("%d", &n);
    printf("%d!의 값은 %d입니다. \n", n, factorial(n));

    return 0;
}