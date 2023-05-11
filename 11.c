#include <stdio.h>      // 등급에 따른 할인율 적용하기


int solution(int price, char* grade) {      // solution 함수 생성

int answer = 0;

if (grade == "S")                    // if문 사용하여 각 등급에 가격 매기기
{
    answer = price * 0.05;
}
if (grade == "G")
{
    answer = price * 0.9;
} 
if (grade == "V")
{
    answer = price * 0.85;
}

return answer;

}

int main() {

    int price1 = 2500;
    char* grade1 = "V";
    int ret1 = solution(price1, grade1);

    printf("solution: return value of the function is %d. \n", ret1);

    int price2 = 96900;
    char* grade2 = "S";
    int ret2 = solution(price2, grade2);

    printf("solution: return value of the function is %d. \n", ret2);

}