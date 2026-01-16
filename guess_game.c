#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name[50];
    int secretNumber;
    int guess = 0;
    int turns = 0;

   
    srand(time(NULL));

    secretNumber = (rand() % 100) + 1;

    printf("Hello, what do you go by? ");
    scanf("%s", name);

    printf("Nice to meet you %s. Let's play a guessing game!\n", name);

    while (guess != secretNumber) {
        printf("Guess a number: ");
        scanf("%d", &guess);

        turns++;

        if (guess > secretNumber) {
            printf("Too high\n");
        }
        else if (guess < secretNumber) {
            printf("Too low\n");
        }
        else {
            printf("You got it!\n");
        }
    }

    printf("It took you %d turns.\n", turns);

    if (turns < 7) {
        printf("Very good performance!\n");
    }
    else if (turns == 7) {
        printf("Average performance.\n");
    }
    else {
        printf("Poor performance.\n");
    }

    printf("Great job!\n");

    return 0;
}
