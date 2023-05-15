// 동전을 100번 던져서 앞면이 나오는 횟수와 뒷면이 나오는 횟수를 출력하는 프로그램
#include <stdlib.h>  // 일반적인 유틸리티 함수들을 사용하기 위한 헤더 파일
#include <stdio.h> // 표준 입출력 함수를 사용하기 위한 헤더 파일
#include <time.h>  // 시간 관련 함수를 사용하기 위한 헤더 파일

int coin_toss();

int main()
{
    int toss;
    int heads = 0;
    int tails = 0;
    srand((unsigned)time(NULL));

    for (toss = 0; toss < 100; toss++) {
        if (coin_toss() == 1)
            heads++;
        else
            tails++;
    }
    printf("동전의 앞면: %d\n", heads);
    printf("동전의 뒷면: %d\n", tails);
    return 0;
}

int coin_toss(  void  )
{
    int head = rand() % 2;
    return head;
}