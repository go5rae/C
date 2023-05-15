// 나무 높이 측정
// p79 그림을 참조하여 나무의 높이를 측정하는 프로그램
#define _CRT_SECURE_NO_WARNINGS // 컴파일러에서 발생하는 경고 메시지를 무시하도록 지시
#include <math.h> // 수학 함수를 사용하기 위한 헤더 파일
#include <stdio.h> // 표준 입출력 함수를 사용하기 위한 헤더 파일

int main()
{
    double height, distance, tree_height, degrees, radians;

    printf("나무와의 길이(단위는 미터): ");
    scanf("%lf", &distance);  // 사용자로부터 나무와의 길이를 입력받음

    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height);  // 사용자로부터 측정자의 키를 입력받음

    printf("각도(단위는 도): ");
    scanf("%lf", &degrees);  // 사용자로부터 각도를 입력받음

    radians = degrees * (3.141592 / 180.0);  // 입력받은 각도를 radians로 변환하고 저장

    tree_height = tan(radians) * distance + height;  // 나무와의 높이 계산
    printf("나무의 높이(단위는 미터): %lf\n", tree_height);  // 계산된 나무의 높이를 출력

    return 0;
}