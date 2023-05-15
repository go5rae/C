// 운영 체제의 명령 프롬프트에게 명령어를 전달하여서 실행시키는 함수인 system()을 이용하여 출력하는 프로그램
#include <stdlib.h> // system() 함수를 사용하기 위한 헤더 파일
#include <stdio.h>  // 표준 입출력 함수를 사용하기 위한 헤더 파일

int main()
{
    system("dir"); // "dir" 명령어를 실행하여 현재 디렉토리의 파일 및 폴더 목록을 출력
    printf("아무 키나 치세요\n"); 
    _getch(); // 사용자가 아무 키를 누를 때까지 대기
    system("cls"); // 화면을 지우고 명령 프롬프트 창 초기화

    return 0;
}