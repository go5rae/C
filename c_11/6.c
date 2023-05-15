// 시간 맞추기 게임
// 사용자에게 10초가 지나면 엔터키를 누르라고 한 후에, 정확한 시간과 얼마나 차이가 나는지를 출력하는 프로그램
#include <stdio.h> // 표준 입출력 함수를 사용하기 위한 헤더 파일
#include <time.h>  // 시간 관련 함수를 사용하기 위한 헤더 파일

int main()
{
    time_t start, end; // 시작 시간과 종료 시간을 저장하는 titme_t는 unsigmed long과 동일!
    start = time(NULL);  // 현재 시간을 start 변수에 저장
    printf("10초가 되면 아무 키나 누르세요\n");
    while (1)       {
            if (getchar()) // 사용자로부터 아무 키나 입력받을 때까지 무한히 반복
                    break;
    }
    printf("종료되었습니다.\n");
    end = time(NULL); // 현재 시간은 end 변수에 저장
    printf("경과된 시간은 %1d초 입니다. \n", end - start); // 경과 시간을 계산하고 출력
    
    return 0;
}