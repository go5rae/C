/* 오버플로우 */
#include <stdio.h>
#include <limits.h>

int main()
{

    short s_money = SHRT_MAX;                  // 최대값으로 초기화. 32767
    unsigned short u_money = USHRT_MAX;        // 최대값으로 초기화. 65535 

    s_money = s_money + 1;                     // ◀ 오버플로우 발생
    printf("s_money = %d", s_money);

    u_money = u_money + 1;
    printf("u_money = %d", u_money);

    return 0;
}