/* 태양빛 도달 시간 구하기
빛의 속도(light_speed), 태양과 지구 사이의 거리(distance), 
도달 시간(time) 변수 필요
빛이 도달하는 시간은 (도달 시간 = 거리 / (빛의 속도)) */
#include <stdio.h>

int main()
{

    double light_speed = 300000;
    double distance = 149600000;

    double time;

    time = distance / light_speed;
    time = time / 60.0;

    printf("빛의 속도는 %lfkm/s\n", light_speed);
    printf("태양과 지구와의 거리 %lfkm\n", distance);
    printf("도달 시간은 %lf초\n", time);

    return 0;
}