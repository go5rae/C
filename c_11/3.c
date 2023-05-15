// 삼각 함수 라이브러리
#include <math.h>       // 여러 수학 함수들을 포함하는 표준 라이브러리
#include <stdio.h>      // 표준 입출력 함수를 사용하기 위한 헤더 파일

int main()
{
    double pi = 3.1415926535; // 원주율 값을 저장하는 변수
    double x, y; // 각도와 함수 값을 저장하는 변수

    x = pi / 2; // 90도에 해당하는 값 저장
    y = sin( x ); // x에 대한 사인 값을 계산
    printf( "sin( %f ) = %f\n", x, y );
    y = cos( x ); // x에 대한 코사인 값을 계산
    printf( "cos( %f ) = %f\n", x, y ); // 코사인 값을 출력
}