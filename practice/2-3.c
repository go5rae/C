/*원의 면적 계산 프로그램: 사용자로부터 원의 반지름을 입력받고 
이 원의 면적을 구한 다음, 화면에 출력한다,*/
#include <stdio.h>

int main()
{

    float radius;
    float area;

    printf("반지름을 입력하시오: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("원의 면적: %f", area);

    return 0;
}