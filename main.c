#include <stdio.h>

int main(int argc, char *argv[]) {
    int x, y;

    printf("Input two integers ");
    scanf("%i %i", &x, &y);

    //printf
    printf("%i + %i = %i\n", x, y, x + y);

    //printf
    printf("%i - %i = %i\n", x, y, x - y);

    //printf
    printf("%i * %i = %i\n", x, y, x * y);

    //printf
    printf("%i / %i = %i\n", x, y, x / y);

    //printf
    printf("%i %% %i = %i\n", x, y, x % y);

    return 0;
}