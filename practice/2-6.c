/* 사각형의 둘레와 면적
필요한 변수는 w, h, area, perimeter
변수의 자료형은 실수를 저장할 수 있는 double형
area = w * h;
perimeter = 2*(w+h); */
#include <stdio.h>

int main()
{
    double w, h, area, perimeter;

    w = 10.0;
    h = 5.0;
    area = w * h;
    perimeter = 2 * (w + h);

    printf("사각형의 넓이: %lf", area);
    printf("사각형의 둘레: %lf", perimeter);

    return 0;

}