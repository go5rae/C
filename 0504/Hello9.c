/* 정수를 입력받아 합, 차, 곱, 몫을 계산하는 프로그램 */
#include <stdio.h>

int get_integer()
{
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);
    return value;
}

int add(int x, int y) {
    return x + y;
}

int minus(int x, int y) {
    return x - y;
}

int multi(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}

int main() {
    int x = get_integer();
    int y = get_integer();

    int sum = add(x, y);
    int diff = minus(x, y);
    int product = multi(x, y);
    int quotient = divide(x, y);

    printf("두 수의 합: %d\n", sum);
    printf("두 수의 차: %d\n", diff);
    printf("두 수의 곱: %d\n", product);
    printf("두 수의 몫: %d\n", quotient);

    return 0;
}
