#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void) {

    srand(time(NULL));
    const int number = rand() % 100 + 1;

    int guess;
    int i;

    printf("Отгадайте число от 1 до 100\n");

    for (i = 1; i + 1; i++) {
    scanf("%d", &guess);

    if (guess > number) {
        printf("Меньше\n");
    } else if (guess < number) {
        printf("Больше\n");
    } else if (guess == number) {
        printf("Поздравляю число %d отгадано.\n", number);
        printf("Число попыток %d\n", i);
        return 1;
    }


    }
}