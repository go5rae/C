/* 재귀함수를 이용하여 팩토리얼 출력 */
#include <stdio.h>

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

int main(){
    int n;
    printf
}