// 동전을 100번 던져서 앞면이 나오는 횟수와 뒷면이 나오는 횟수를 출력하는 프로그램
#include <stdlib.h>  // 일반적인 유틸리티 함수들을 사용하기 위한 헤더 파일
#include <stdio.h> // 표준 입출력 함수를 사용하기 위한 헤더 파일
#include <time.h>  // 시간 관련 함수를 사용하기 위한 헤더 파일

int coin_toss();  // 동전 던지기 선언

int main()
{
    int toss;
    int heads = 0;  // 앞면 횟수 변수
    int tails = 0;  // 뒷면 횟수 변수
    srand((unsigned)time(NULL));  // 난수 생성을 위한 시드 초기화 (srand)


    for (toss = 0; toss < 100; toss++) {
        if (coin_toss() == 1)  // 동전 던지기 함수 호출 후 앞면 또는 뒷면 횟수의 증가
            heads++;
        else
            tails++;
    }
    printf("동전의 앞면: %d\n", heads);  // 동전의 앞면 횟수 출력
    printf("동전의 뒷면: %d\n", tails);  // 동전의 뒷면 횟수 출력
    return 0;
}

int coin_toss(  void  )
{
    int head = rand() % 2;  // 0 또는 1의 값을 가지는 난수를 생성하는 rand
    return head;  // 생성된 난수 (head)를 반환
}
