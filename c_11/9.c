// 공학용 계산기 프로그램 작성
// 이번 장에서 학습한 함수들을 이용하여 싸인값이나 코싸인 값을 계산할 수 있는 공학용 계산기를 만드는 프로그램
#include <stdio.h> // 표준 입출력 함수를 사용하기 위한 헤더 파일
#include <math.h>  // 수학 함수를 사용하기 위한 헤더 파일

// 메뉴를 출력하고 사용자로부터 선택을 받아서 선택한 값을 반환하는 함수
int menu()
{
    int n;
    printf("1. 팩토리얼\n");
    printf("2. 싸인\n");
    printf("3. 로그(base 10)\n");
    printf("4. 제곱근\n");
    printf("5. 순열(nPr)\n");
    printf("6. 조합(nCr)\n");
    printf("7. 종료\n");
    printf("선택해주세요: ");
    scanf("%d", &n); // 사용자로부터 선택값을 입력 받음

    return n; // 선택값 반환 
}

// 팩토리얼(factorial) 계산하는 함수
void factorial()
{
    long long n, result=1, i;
    printf("정수를 입력하시오: ");
    scanf("%lld", &n); // 정수를 입력 받음
    for (i = 1; i <= n; i++)
            result = result * i;  // 팩토리얼 계산
    printf("결과 = %lld\n\n", result);  // 결과 출력
}

// 싸인(sine) 값을 계산하는 함수
void sine()
{
    double a, result;
    printf("각도를 입력하시오: ");
    scanf("%lf", &a);  // 각도를 입력 받음
    result = sin(a);  // 싸인 값 계산
    printf("결과 = %lf\n\n", result);  // 결과 출력
}

// 로그(logBase10) 값을 계산하는 함수
void logBase10()
{
    double a, result;
    printf("실수값을 입력하시오: ");
    scanf("%lf", &a);  // 실수 값을 입력 받음
    if (a <= 0.0)
            printf("오류\n");  // 입력 값이 0 이하인 경우 '오류' 출력
    else
    {
        result = log10(a);  // 로그 값 계산
        printf("결과 = %lf\n\n", result);  // 결과 출력
    }
}

int main()
{
    while (1) {
        switch (menu())
        {
        case 1:
            factorial();  // 팩토리얼 선택 시 factorial 함수 호출    
            break;
        case 2:
            sine();     // 사인 선택 시 sine 함수 호출
            break;
        case 3:
            logBase10();  // 로그 선택 시 logBase10 함수 호출
            break;
        case 7:
            printf("종료합니다.\n");  // 종료 선택 시 "종료합니다" 출력 후 종료
            return 0;
        default:
            printf("잘못된 선택입니다.\n");  // 그 외의 선택값은 "잘못된 선택입니다" 출력
            break;
        }
    }
}