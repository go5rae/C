// 난수를 이용해서 자동차 게임을 작성한 프로그램 (자동차 2개)
#include <stdlib.h>  // 일반적인 유틸리티 함수들을 사용하기 위한 헤더 파일
#include <stdio.h> // 표준 입출력 함수를 사용하기 위한 헤더 파일
#include <conio.h>  // 키보드 입력 함수를 사용하기 위한 헤더 파일
#include <time.h>  // 시간 관련 함수를 사용하기 위한 헤더 파일

// 'car_number'와 'distance'를 매개변수로 받아서 
// 해당 자동차의 번호와 거리에 따라 '*'로 출력
void disp_car(int car_number, int distance)
{
    int i;
    printf("CAR #%d:", car_number);
    for ( i = 0; i < distance/10; i++ ) {
        printf("*");
    }
    printf("\n");
}

int main()
{       
    int i;
    int car1_dist=0, car2_dist=0;

    // 난수 생성을 위한 시드 초기화 (srand)
    srand( (unsigned)time( NULL ) );

    for ( i = 0; i < 6; i++ ) {
        // 자동차의 거리를 무작위로 증가시킴 (rand)
        car1_dist += rand() % 100;
        car2_dist += rand() % 100;
        
        // 자동차의 번호와 업데이트 된 거리를 출력
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        
        printf("------------------\n");
        // 사용자가 키를 누를 때까지 프로그램을 일시 중지
        _getch();
    }
    return 0;
}