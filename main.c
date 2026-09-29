#include <stdio.h>

int main(int argc, char *argv[]) {
    int second, hour, min, sec;

    printf("input the second: ");
    scanf("%i", &second);

    hour = second / 3600;              // 시 계산[cite: 1]
    min = (second % 3600) / 60;        // 분 계산[cite: 1]
    sec = second % 60;                 // 초 계산[cite: 1]

    printf("The time for %i second is %i : %i : %i\n", second, hour, min, sec);

    return 0;
}