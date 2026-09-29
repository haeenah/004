#include <stdio.h>

int main(int argc, char *argv[]) {
    int second, min, sec;

    printf("input the second :");
    scanf("%i", &second);

    min = second / 60; // 분 계산
    sec = second % 60; // 초 계산

    printf("the time is %i : %i\n", min, sec);

    return 0;
}