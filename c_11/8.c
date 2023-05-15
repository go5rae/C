// 삼각함수 그리기
// 라이브러리 함수를 이용하여 싸인함수 그래프를 90도 회전하여서 출력하는 프로그램
#include <stdio.h> // 표준 입출력 함수를 사용하기 위한 헤더 파일
#include <math.h>  // 수학 함수를 사용하기 위한 헤더 파일
// PI 값을 상수로 정의
#define PI 3.141592

// 각도(degree)를 라디안으로 변환하는 함수 rad()
double rad(double degree)
{
    return PI * degree / 180.0;
}

// 주어진 높이만큼 '*' 막대를 그리는 함수 drawbar()
void drawbar(int height)
{
    for (int i = 0; i < height; i++)
            printf("*");
    printf("\n");
}

int main()
{
    int degree, x, y;

    // 0부터 90도까지 10도 단위로 반복
    for (degree = 0; degree <= 90; degree += 10) {
                // 싸인값은 -1.0에서 1.0이므로 정수로 반올림하여서 증폭한다.
            y = (int)(60 * sin(rad((double)degree)) + 0.5);
            
            // '*' 막대 그리기 함수 호출
            drawbar(y);
    }
    return 0;
}